#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {  
    int N,M,K;cin>>N>>M>>K;
    vector<int> A(N);
    vector<int>B(M);
    for (int i=0; i<N; i++){cin>>A[i];}
    for (int i=0; i<M; i++){cin>>B[i];}
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int cont=0;
    int i=0;
    int j=0;
    while(i<N && j <M){
        if(A[i]<=B[j]+K && A[i]>=B[j]-K){
            cont++;
            i++;
            j++;
        }else if (A[i]>B[j]+K){
            j++;
        }else if(A[i]<B[j]-K){
            i++;
        }
        
    }
    cout<<cont<<"\n";
}

