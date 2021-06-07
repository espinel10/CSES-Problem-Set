#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef vector<long long>vi;
typedef long long ll;
int main() {
ll N,X;cin>>N>>X;
vi childs(N);
for(int i=0;i<N;i++){cin>>childs[i];}
sort(childs.begin(),childs.end());
reverse(childs.begin(),childs.end());
ll cont=0;
ll j=N-1;
ll i=0;
while(i<=j){
if(i==j){cont++;break;}
if(childs[i]+childs[j]<=X){
j--;
}
cont++;    
i++;
}
cout<<cont<<"\n";
}
