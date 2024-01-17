#include<bits/stdc++.h>
using namespace std;
//Author => Ashutosh Mohanta
//Email  => mohantaashutosh@yahoo.com
//Template Variables
//START
#define rep(i,n) for(int i=0;i<(n);++i)
#define per(i,n) for(int i=(n-1);i>=0;--i)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define vei(y,x) vvi((y),vi(x))
#define vel(y,x) vvl((y),vl(x))
typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vll;
typedef long double ld;
typedef unsigned long long ull;
//END
//

//Template Functions
//START
template<class T>
istream& operator>>(istream& is,vector<T>&v)
{
    for(auto &i:v)is>>i;
    return is;
}
template<class T1,class T2>
ostream& operator<<(ostream &os,pair<T1,T2> p){
    os<<'{'<<p.first<<' '<<p.second<<'}';
    return os;
}
template<class T>
ostream& operator<<(ostream& os,const vector<T>&v)
{
	int len=v.size()-1;
    if(len<0)return os;
    for(int i=0;i<len;i++)os<<v[i]<<" ";
    os<<v.back();
    return os;
}
template<class T>
ostream& operator<<(ostream& os,const vector<vector<T>>&v)
{
    for(auto &i:v)os<<i<<"\n";
    return os;
}
string operator*(string s,int a){
    string ans;
    while(a--)ans+=s;
    return ans;
    //REMEMBER: cout<<"a"*2 wont work because "a" is of const char[] type
}
//END
//
//Data Structures

//

void solve(){
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	while(t--)solve();
}
