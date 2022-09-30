#include <bits/stdc++.h>
using namespace std;
#define ar array
#define ll long long
#define ld long double
#define mod 1000000007
void solve(){
	string s,s2;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y')
			continue;
		else{
			s2+='.';
			s2+=towlower(s[i]);
		}
	}
	cout<<s2;
}
 
int main(){
	//ll t;cin>>t;
	//while(t--){
		solve();
    //}
 
	return 0;
}
