#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector <pair<int,int>>events;
    for(int i=0;i<n;i++){
        int start,end;
        cin >>start >> end;
        events.push_back({start , 1});
        events.push_back({end , -1});
    }
    sort(events.begin(),events.end());
    int actuals=0;
    int maximun=0;

    for(int i =0; i < events.size() ;i++){
        actuals+= events[i].second;
        maximun=max(maximun,actuals);
    }
    cout<<maximun<<"\n";
}
