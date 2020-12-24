//بسم الله الرحمن الرحيم


#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
//using u128 = __uint128_t;
#define el << '\n'
#define PI 3.141592653589793238
#define _test_ int _ ; cin >> _ ; while(_--)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define file() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
ll gcd ( ll  a, ll b ) { return __gcd ( a, b ) ; }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ) ; }
int dx[]={0,0,+1,-1,+1,-1,-1,+1} ;
int dy[]={+1,-1,0,0,+1,-1,+1,-1} ;
///   ***   ---   |||__________LET'S BEGIN (-_^)________|||   ---   ***   ///

const ll infLL = 1e15 ;
const int inf = 1e9 ;
const ll mod = 1e6+3 ;
const int mx = 1e6+123;
ll n , m , k ;
bitset<mx>vis;
vi prime,prime_fact;

void seive()
{
    vis[1]=1;
    prime.push_back(2);
    for(int i=3;i*i<mx;i+=2)
        if(!vis[i])
            for(int j=i*i;j<mx;j+=(2*i))
                vis[j]=1;
    for(int i=3;i<mx;i+=2)
        if(!vis[i]) prime.push_back(i);
}

void prime_factorization()
{
    prime_fact.clear();
    for(auto i:prime)
    {
        if(i*i>n) break;
        if(n%i==0)
        {
            while (n%i==0)
                n/=i;
            prime_fact.push_back(i);
        }
    }
    if(n!=1) prime_fact.push_back(n);
}

void _case_()
{
    cin >> n ;
    ll ans = n ;
    prime_factorization();
    for(auto  i: prime_fact)
    {
        int num=i-1;
        ans*=num;
        ans/=i;
    }
    cout << ans el;

}

int main( )
{
    optimize( );
    seive();
    _test_
      _case_( ) ;
}

///////////* ________ *  N A Y E M  * ________ *///////////
