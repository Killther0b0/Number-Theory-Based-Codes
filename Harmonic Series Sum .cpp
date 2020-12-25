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
const int mx = 1e6+1;
long double y=0.5772156649,ans[mx];
int t;


void making ()
{
    ans[1]=1;
    for(auto i=2;i<mx;i++)
    {
        long double num=ans[i-1]*i;
        num++;
        num/=i;
        ans[i]=num;
    }
}

void _case_()
{
    int n;
    cin >> n ;
    if(n>=mx)
    {
        long double k=log(n+0.5)+y;
        cout << "Case " << ++t << ": " << setprecision(15) << k el;
    }
    else
        cout << "Case " << ++t << ": " << setprecision(15) << ans[n] el;
}

int main( )
{
    optimize();
    making();
    _test_
      _case_( ) ;
}

/////////* ________ *  N A Y E M  * ________ *///////////
