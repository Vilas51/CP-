#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define upd upper_bound
#define lpd lower_bound
#define pb push_back
#define endl "\n"
#define f(i,a,b) for(ll i = a;i<=b;i++)
#define ff(i,a,b) for(ll i=a ;i>=b;i--)
#define mod 1000000007
void solve(){
   int n,m,k; cin>>n>>m>>k;
//    if(m==k && k==n){
//     cout<<"NO"<<endl;
// 
//    }
   int c=n/m;
   if(n%m!=0)c++;
   if(n-c<=k){
    cout<<"NO"<<endl;
   }
   else{
    cout<<"YES"<<endl;
   }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
