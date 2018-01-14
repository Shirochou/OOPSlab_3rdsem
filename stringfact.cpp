#include<bits/stdc++.h>
using namespace std;

#define MAX 500

int result[MAX]={0};

int len;


void multiply(int x){
int carry=0;
for(int i=0;i<len;i++){
int prod=result[i]*x+carry;
result[i]=prod%10;
carry=prod/10;
}
while(carry){
result[len]=carry%10;
carry=carry/10;
len++;
}

}




string fact(int n){
result[0]=1;
len=1;


for(int x=2;x<=n;x++){
multiply(x);}

char resultst[len];
int k=0;
for( k=len-1;k>=0;k--){
resultst[len-k-1]=result[k]+'0';

}
resultst[len-k-1]='\0';
return resultst;


}

main(){

int n;
cout<<"Enter a number";
cin>>n;

cout<<"Factorial of the number is : "<<fact(n)<<endl;


}
