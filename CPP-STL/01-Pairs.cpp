#include<bits/stdc++.h>
using namespace std;

// Pairs
int main(){
pair<int,int> p={1,2};
cout<<p.first<<" "<<p.second<<endl;
    
pair<string,string> s = {"abc","xyz"};
cout<<s.first<<" "<<s.second<<endl;

pair<int,pair<int,int>> num = {1,{2,3}};
cout<<num.second.first;
return 0;
}