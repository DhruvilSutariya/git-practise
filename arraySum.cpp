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
  ll n,k;
  cin>>n>>k;
  ll a[n];
  for(ll i=0;i<n;i++) cin>>a[i];
  ll inc = 0;
  for(ll i=1;i<n;i++){
    if( a[i] > a[i-1] ){
      inc++;
    }
  }
    
  ll le = 1;
  ll ri = n+1;
  while( le < ri ){
    //cout<<le<<" "<<ri<<"\n";
    ll md = (le+ri)>>1;
    if( md*k >= inc+md ){
      ri = md;
    }
    else{
      le = md+1;
    }
  }
  if( le  > n ) le = -1;
  cout<<le<<"\n";
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