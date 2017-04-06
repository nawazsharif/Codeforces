#include<bits/stdc++.h>

using namespace std;

#define PF           printf
#define SF(n)        scanf("%d", &n)
#define SFF(a,b)     scanf("%d %d", &a, &b)
#define SFFF(a,b,c)  scanf("%d %d %d", &a, &b, &c)
#define INF_I        2147483647    //max limit
#define INF          1999999999
#define PB           push_back
#define MEM(n, val)  memset((n), val, sizeof(n))
#define F            first
#define S            second
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define ROF(i, a, b) for(int i = a; i >= b; i--)
#define ALL(c)       c.begin(), c.end()
#define BOOST        std::ios_base::sync_with_stdio(false);
#define INP          freopen("in.txt", "r", stdin);
#define OUT          freopen("out.txt", "w", stdout);
#define MP           make_pair
#define INIT_RAND    srand(time(NULL))
#define MOD          1000000007
#define A_SZ         1000000
template <class T>
inline std::string to_string (const T& t)
{
    std::stringstream ss;
    ss << t;
    return ss.str();
}

typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;
typedef pair<long long, long long> PLL;
typedef priority_queue<int> P_Q;
typedef stringstream SS;
#define    sz 200005


int main(){
    int a,b=0,n,ans,arr[sz];
    cin >> n;
    FOR(i,0,n-1){
        //cout<< i << endl;
        cin >> arr[i];
    }
    sort(arr,arr+n);
    ans=abs(arr[0]-arr[1]);
    FOR(i,0,n-2){
        int min=abs(arr[i]-arr[i+1]);
        //cout << "i : "<< i<< endl;
        if(min==ans){
            b++;
        }
        if(min<ans){
            b=0;
            ans=min;
            b++;
        }
        //cout << min<< endl;
    }
    cout << ans << " "<< b<< endl;
    return 0;
}

