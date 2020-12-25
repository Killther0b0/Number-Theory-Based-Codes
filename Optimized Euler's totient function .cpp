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
int phi[mx];

void euler_totient()
{
    for(int i=0; i<mx; i++) phi[i]=i;  // O(n)

    for(int i=2; i<mx; i++) // O(n)
    {
        if(phi[i]==i)  // O( ln(n) )
        {
            for(int j=i; j<mx; j+=i)
                phi[j]-=(phi[j]/i);
        }
    }
}

void _case_()
{
    cin >> n ;
    cout << phi[n] el;
}

int main( )
{
    optimize( );
    euler_totient();
    _test_
      _case_( ) ;
}

///////////* ________ *  N A Y E M  * ________ *///////////
