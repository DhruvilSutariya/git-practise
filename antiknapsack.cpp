#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define FAST ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);srand(time(NULL));
#define INF LONG_LONG_MAX
#define MINF LONG_LONG_MIN
  
#define MOD 1000000007
  
ll po(ll x, ll y) { 
  // This is power function
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
  
bool srt( pair<ll,ll> &a, pair<ll,ll> &b){
  if( a.ff > b.ff ) return true;
  return a.ss < b.ss;
}
  
ll stree[400001];
  
void build(ll tl, ll tr, ll cr){
  // cout<<tl<<" "<<tr<<" "<<cr<<"\n";
  stree[cr] = 0;
  if( tl == tr ){
    return;
  }
  ll md = (tl+tr)>>1;
  build(tl, md, 2*cr);
  build(md+1, tr, 2*cr + 1);
}
  
void update(ll cr, ll tl, ll tr, ll in, ll val){
  if( tl == tr ){
    stree[cr] = val;
    return;
  }
  ll md = (tl+tr)>>1;
  if( md < in ){
    update(2*cr+1, md+1, tr, in, val);
  }
  else{
    update(2*cr, tl, md, in, val);
  }
  stree[cr] = max(stree[2*cr], stree[2*cr+1]);
  return;
}
  
void solve(){
  ll n,k;
  cin>>n>>k;
  
  
  cout<<(n-k) + (k/2)<<"\n";
  for(ll i=(k-1)/2+1;i<=k-1;i++) cout<<i<<" ";
  for(ll i=k+1;i<=n;i++) cout<<i<<" ";
  cout<<"\n"; 
  return;
}
  
  
int main(){
    FAST;
    init();
    int t = 1;
    cin>>t;
    for(int i=1;i<=t;i++){
      //cout<<"Case #"<<i<<": ";
      solve();
    }
    return 0;
} 
