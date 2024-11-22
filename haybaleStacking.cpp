#include "bits/stdc++.h"
using namespace std;

int main()
{
    freopen ("gifts.in", "r", stdin);
    freopen ("gifts.out", "w", stdout);
    int x, y;
    cin >> x >> y;

    vector<int> v(x);
    // number of stacks is x
    // number of inputs is y
    int stack1, stack2;

    for (int input = 0; input < y; input++)
    {
        cin >> stack1 >> stack2;
        for (int haystack = stack1; haystack <= stack2; haystack++){
            v[haystack] += 1; 
        }
    }
    sort(v.begin(), v.end());
    cout << v[v.size() /2];
}

// https://usaco.org/index.php?page=viewproblem2&cpid=104
// INPUT FORMAT:

// * Line 1: Two space-separated integers, N K.

// * Lines 2..1+K: Each line contains one of FJ's instructions in the
//         form of two space-separated integers A B (1 <= A <= B <= N).

// SAMPLE INPUT (file stacking.in):

// 7 4
// 5 5
// 2 4
// 4 6
// 3 5
