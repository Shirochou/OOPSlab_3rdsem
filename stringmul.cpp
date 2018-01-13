#include<bits/stdc++.h>
using namespace std;

string multiply(string a,string b){
reverse(a.begin(),a.end());
//cout<<a;
reverse(b.begin(),b.end());
//cout<<b;
int sum=0;
int carry=0;
int len=a.length()+b.length();
int m[len]={0};
string big=(a.length()>=b.length())?a:b;
string small=(a.length()>=b.length())?b:a;
for(int i=0;i<small.length();i++){
for(int j=0;j<big.length();j++){
sum=carry+m[i+j]+(small[i]-'0')*(big[j]-'0');
m[i+j]=sum%10;
carry=sum/10;
//cout<<m[i+j];
}
carry=0;}
//for(int i=0;i<a.length()+b.length();i++){
//cout<<m[i];}
char result[len];
int k=0;
for(k=0;k<=len;k++){
result[len-k]=m[k]+'0'; }
result[k]='\0';
return result;
}
main(){
cout<<"Enter two numbers you want to multiply";
string a,b;
cin>>a>>b;
cout<<"The multiplication is:"<<multiply(a,b)<<endl;
}
