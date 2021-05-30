#include <iostream>
#include <bits/stdc++.h>
#define REP(i, a, b) for (int i=a; i<=b; i++)
typedef long long ll;
 
using namespace std;
 
int main() {
    int n;
    set<ll>bags;
    cin>>n;
    REP(i, 1, n){ 
    ll aux;
    cin>>aux;    
    bags.insert(aux);
    }
    cout<<bags.size()<<"\n";

}
