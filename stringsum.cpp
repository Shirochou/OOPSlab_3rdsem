#include<bits/stdc++.h>
using namespace std;

string add(string a,string b){
int small=(a.length()>b.length())?b.length():a.length();
int big=(a.length()>b.length())?a.length():b.length();
int n1[big]={0},n2[big]={0};

for(int i=0;i<a.length();i++){
n1[i]=a[a.length()-i-1]-'0';
//cout<<n1[i];
}

for(int i=0;i<b.length();i++){
n2[i]=b[b.length()-i-1]-'0';
//cout<<n2[i];
}
int carry=0;

int sum[big+1];

for(int k=0;k<big;k++){
sum[k]=(n1[k]+n2[k]+carry)%10;
if (n1[k]+n2[k]+carry>=10)
carry=1;
else
carry=0;
//cout<<sum[k];

}
int j=0;
sum[big]=carry;
char result[big+carry+1];
for(j=0;j<=big;j++){
//cout<<sum[j];
result[big-j]=((sum[j])+'0');
//cout<<result;
}

result[j]='\0';

//cout<<result;
//result.push_back('\0');
return result;}

main(){
string a,b;
cout<<"Enter two numbers you want to add:";
cin>>a>>b;
cout<<"The addition is:"<<add(a,b)<<endl;}
