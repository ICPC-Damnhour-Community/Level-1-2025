#include <bits/stdc++.h>
#include <iostream>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main() {

    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    priority_queue<ll> maxHeap;
   
    for (int i = 0; i < N; i++) {
        long long sum = 0;
        for (int j = i; j < N; j++) {
            sum += A[j];  
            maxHeap.push(sum);
        }
    }
    
    for (int i = 0; i < K; i++) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }

    return 0;
}