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
  ll n;
  cin>>n;
  ll a[3][n];
  for(ll i=0;i<3;i++)
    for(ll j=0;j<n;j++)
      cin>>a[i][j];
    
  ll ans[n] = {0};
  ll last = -1;
  for(ll i=0;i<n;i++){
    if( i == n-1 ){
      for(ll j=0;j<3;j++){
        if( a[j][i] != last && a[j][i] != ans[0] ){
          ans[i] = a[j][i];
          break;
        }
      }
    }
    else{
      for(ll j=0;j<3;j++){
        if( a[j][i] != last ){
          ans[i] = a[j][i];
          last = a[j][i];
          break;
        }
      }
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
