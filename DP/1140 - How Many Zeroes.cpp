#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <utility>

using namespace std;

template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > T sq(T x) { return x * x; }
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }

//string monthName[]={"","January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
//string dayName[]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

//int xx[]={1,0,-1,0};              int yy[]={0,1,0,-1}; //4 Direction
//int xx[]={1,1,0,-1,-1,-1,0,1};    int yy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int xx[]={2,1,-1,-2,-2,-1,1,2};   int yy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

#define REP(i,n) for (i=0;i<n;i++)
#define FOR(i,p,k) for (i=p; i<k;i++)
#define FORE(i, p, k) for(i=p; i<=k; i++)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)
#define REP(i,n) for (i=0;i<n;i++)

#define popc(i) (__builtin_popcount(i))
#define MP(x, y) make_pair(x, y)
#define REV(s, e) reverse(s, e)
#define CLR(p) memset(p, 0, sizeof(p))
#define mset(p, v) memset(p, v, sizeof(p))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define ALL(c) c.begin(), c.end()
#define SZ(c) (int)c.size()
#define pb(x) push_back(x)
#define fs first
#define sc second
#define LL long long int
#define pii pair< int, int >
#define psi pair< string, int >
#define PQ priority_queue
#define VS vector<string>
#define VI vector<int>
#define vii vector<int, int>
#define LOG(x,BASE) (log10(x)/log10(BASE))
#define DEBUG(x) if(x)
#define CNVRT acos(-1.00)/180.0
#define PI acos(-1)
#define EPS 10E-5
#define MAX 52

#define bug(x) cout<<"->"<<#x<<": "<<x<<endl;
#define deb(args...)          {cout<<" #--> ";dbg,args; cerr<<endl;}
struct debugger
{
    // Taken from rudradevbasak
    template<typename T> debugger& operator , (const T& v)
    {
     //   deb(v);
        cerr<<v<<" ";
        return *this;
    }
} dbg;

const int INF = 0x7f7f7f7f;

//For debugging
template<class T> void debug(T e){cout<<e<<endl;}
template<class T1,class T2> void debug(T1 e1,T2 e2){cout<<e1<<"\t"<<e2<<endl;}
template<class T1,class T2,class T3> void debug(T1 e1,T2 e2,T3 e3){cout<<e1<<"\t"<<e2<<"\t"<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void debug(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<endl;}
template<class T1,class T2,class T3,class T4,class T5> void debug(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<"\t"<<e5<<endl;}
template<class T> void debug(vector<T> e){int i;REP(i,SZ(e)) cout<<e[i]<<" ";cout<<endl;}
template<class T> void debug(vector<T> e,int n){int i;REP(i,n) cout<<e[i]<<" ";cout<<endl;}
template<class T> void debug(vector< basic_string<T> > e){int i,j;REP(i,SZ(e)) {REP(j,SZ(e[i])) cout<<e[i][j];cout<<endl;} cout<<endl;}
template<class T> void debug(vector< basic_string<T> > e,int row,int col){int i,j;REP(i,row) {REP(j,col) cout<<e[i][j];cout<<endl;} cout<<endl;}
template<class T> void debug(vector< vector<T> > e,int row,int col){int i,j;REP(i,row) {REP(j,col) cout<<e[i][j]<<"\t";cout<<endl;} cout<<endl;}
//template<class T> void debug(T e[SIZE][SIZE],int row,int col){int i,j;REP(i,row) {REP(j,col) cout<<e[i][j]<<" ";cout<<endl;}}
template<class T> void debug(T e[],int row){int i;REP(i,row) cout<<e[i]<<" ";cout<<endl;}


//int,double is converted to string
template<class T> string toString(T n){ostringstream oss;oss<<n;oss.flush();return oss.str();}
//string is converted to int
int toInt(string s){int r=0;istringstream sin(s);sin>>r;return r;}
//string is converted to Long long
bool IsVowel(char ch){ch=tolower(ch);if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')return true;return false;}
//isUpperCase
bool isUpper(char c){return c>='A' && c<='Z';}
//isLowerCase
bool isLower(char c){return c>='a' && c<='z';}
//compute b^p
LL Pow(LL B,LL P){  LL R=1; while(P>0)  {if(P%2==1) R=(R*B);P/=2;B=(B*B);}return R;}
//compute b^p%m
int BigMod(LL B,LL P,LL M){ LL R=1; while(P>0)  {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} return (int)R;}
//print a number in binary format with n length
//void binprint(LL mask,LL n){LL i;string s="";do{s+=(mask%2+'0');mask/=2;}while(mask);Reverse(s);s=string(max(n-SZ(s),0LL),'0')+s;for(i=SZ(s)-n;i<SZ(s);i++) printf("%c",s[i]);printf("\n");}
//ASCII Chart
void ASCII_Chart(){int i,j,k;printf("ASCII Chart:(30-129)\n");FOR(i,30,50){REP(j,5){k=i+j*20;printf("%3d---> '%c'   ",k,k);}printf("\n");}}
//LL Pow (LL B, LL P){    LL result ; LL i;    for( i=0, result=1; i<P; i++) {result*=B;}    return result;}
//LL bigmod(LL B, LL P, LL M){LL R=1;while(P>0){if(P%2==1)R=((R*B)%M);P/=2;B= (B*B)%M;}return R;}
//void sieve(){int k=0;prime_series[k++]=2; for(int i=3; i<MAX; i+=2){   if(is_prime[i]==0)   {  prime_series[k++]=i;  if(i<=MAX/i) for(int j=i*i;j<MAX;j+=i*2)is_prime[j]=1; } } Limit= k;return;}
LL dp[15][15];

LL solution(int cur, int cnt)
{
    int i;
    if(cur==0)
    {
        return cnt;
    }
    LL &ret= dp[cur][cnt];
    if(ret!=-1) return ret;
    ret=0;
    for(i=0; i<10; i++)
    {
        if(i==0)
            ret+= (solution(cur-1, cnt+1));
        else
            ret+= solution(cur-1, cnt);
    }
    return ret;
}

LL rec(LL n)
{
    int i, j;
    LL ans;
    string str;
    str=toString(n);
    ans=0;
    for(i=1; i<SZ(str); i++)
    {
        for(j=1; j<10; j++)
        {
            ans+= solution(i-1, 0);
        }
    }
    //for Most Significant digit
    for(i=1; i<str[0]-'0'; i++)
    {
        ans+= solution(SZ(str)-1, 0);
    }
    //for corner numbers
    for(i=1; i<SZ(str); i++)
    {
        for(j=0; j<str[i]-'0'; j++)
        {
            ans+= solution(SZ(str)-i-1, 0);
            if(j==0)
            {
                ans+= Pow(10, SZ(str)-i-1);
            }
        }
        if(str[i]=='0')
        {
            ans+= toInt(str.substr(i+1));
        }
    }
    return ans;
}

int main()
{
    //READ("in.txt");
    //WRITE("out.txt");

    int i, j, k, tcase;
    LL a, b, res1, res2, t;
    mset(dp, -1);
    cin>>tcase;
    for(t=1; t<=tcase; t++)
    {
        scanf("%lld %lld", &a, &b);
        if(a==0)
        {
            res2= rec(b+1);
            printf("Case %lld: %lld\n", t, res2+1);
        }
        else
        {
            res1= rec(a);
            res2= rec(b+1);
            printf("Case %lld: %lld\n", t, (res2-res1));
        }
    }
}
