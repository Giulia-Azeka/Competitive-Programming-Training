/*
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. Calculate how many participants will advance to the next round.

Input
The first line of the input contains two integers n and k (1 ≤ k ≤ n ≤ 50) separated by a single space.

The second line contains n space-separated integers a1, a2, ..., an (0 ≤ ai ≤ 100), where ai is the score earned by the participant who got the i-th place. The given sequence is non-increasing (that is, for all i from 1 to n - 1 the following condition is fulfilled: ai ≥ ai + 1).

Output
Output the number of participants who advance to the next round.

https://codeforces.com/problemset/problem/282/A

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n, k, sum = 0;
    vector<int> v(50);

    cin >> n >> k;

    for (int i = 0 ; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < n; i++){
        if(v[i] >= v[k-1] && v[i] > 0){
            sum++;
        }
    }

    cout << sum << endl;


    return 0;
}
