#include <bits/stdc++.h>
using namespace std;




#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
//getline(cin, str);
//#define yes cout<<"YES"<<endl;
//#define no cout<<"NO"<<endl;
//#define int long long int
// map<int,int> mpp;
//sort(v.begin(),v.end());
//to_string(n)
//  A= 65   Z= 90  a =97  z = 122
//Int to string                 ostringstream str1; str1 << num; string str = str1.str();  
 //  String to Integer int num = stoi(str);


// Unique for vector
// vector<int>::iterator ip;ip = std::unique(v.begin(), v.end ());v.resize(std::distance(v.begin(), ip));
// Unique for string
// auto ip = unique(s.begin(), s.end());string un = string(s.begin(), ip);


//std::vector<int>::iterator upper1, upper2;
//upper1 = std::upper_bound(v.begin(), v.end(), 35);
//upper2 = std::upper_bound(v.begin(), v.end(), 45);
 //std::cout  << (upper1 - v.begin());
//std::cout << (upper2 - v.begin());
// __builtin_popcount(n);
//binary_search(v.begin(), v.end(), x);


// a->3
// b =1
// c=1

void solve(){

    int n , k ; cin>>n>>k;
    string str ; cin>>str;
    int ans = 0;
    map<char,int> mpp;
    int count  = 0 ;
    for(int i = 0 ; i < n ; i++){
        mpp[str[i]]++;
    }
    for(auto it : mpp){
       if(it.second%2) count++;
    }

    if(k%2!=0){
        if((k-(count-1))>=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        if(count>1){
            if(k-(count-1)>=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        } 
        else cout<<"YES"<<endl;
    }

}

int32_t main() {
    int T;
    cin>>T;

    while(T--){
        solve();
    }
    return 0;
}