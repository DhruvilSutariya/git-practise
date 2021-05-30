#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define FAST ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);srand(time(NULL));
#define MOD 1000000007
#define INF LONG_LONG_MAX
#define MINF LONG_LONG_MIN
  
ll po(ll x, ll y) { 
  // This is power function, which acceps 2 params
  ll res = 1;
  while (y > 0) { 
    if (y & 1) 
        res = (res*x)%MOD; 
    y = y>>1;  
    x = (x*x)%MOD;
  } 
  return res; 
}
  
void init(){
  
}
  
void solve(){
  ll n,t;
  cin>>n>>t;
  ll a[n];
  ll ans[n] = {0};
  for(ll i=0;i<n;i++) cin>>a[i];
  ll a1 = 0, a2 = 0;
  for(ll i=0;i<n;i++){
    if( 2*a[i] == t ){
      if( a1 < a2 ){
        a1++;
        ans[i] = 0;
      }
      else{
        a2++;
        ans[i] = 1;
      }
    }
    else if( 2*a[i] < t ){
      ans[i] = 0;
    }
    else{
      ans[i] = 1;
    }
  }
  for(ll i=0;i<n;i++) cout<<ans[i]<<" ";
  cout<<"\n";
  return;
}
  
  
int main(){
  FAST;
  init();
  int t = 1;
  cin>>t;
  while( t-- ) solve();
  return 0;
} 