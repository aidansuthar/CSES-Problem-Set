#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    long long int  sum=n*(n+1)/2;
    if(sum%2!=0)
       {
            cout << "NO" << endl;
            return 0;
       }
    cout << "YES" << endl;
    sum=sum/2LL;
    vector<long long int> v1,v2;
    for(long long int i=n;i>0;i--){
        if(i<=sum){
            v1.push_back(i);
            sum=sum-i;
        }
        else
            v2.push_back(i);
    }
    cout << v1.size() << endl;
    for(auto i:v1)
        cout << i <<" ";
    cout << endl << v2.size() << endl;
    for(auto i:v2)
        cout << i << " ";
    return 0;
}