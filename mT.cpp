#include<bits/stdc++.h>
using namespace std;
//Author => Ashutosh Mohanta
//Email  => mohantaashutosh@yahoo.com
//Template Variables
//START
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef long double ld;
typedef unsigned long long ull;
#define INF 2147483647
#define rep(i,n) for(int i=0;i<n;++i)
#define per(i,n) for(int i=n-1;i>=0;--i)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

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
template<class T>
ostream& operator<<(ostream& os,const vector<T>&v)
{
	int len=v.size()-1;
    for(int i=0;i<len;i++)os<<i<<" ";
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


void solve(){
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t=1;
	while(t--)solve();
}
