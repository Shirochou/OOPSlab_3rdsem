#include<bits/stdc++.h>
using namespace std;
main(){
/*
   This program gives the following pattern:

               1
              121
             12321
            1234321

            here n=4

            */
cout<<"Enter no of lines ";
int n;
cin>>n;
for(int i=0;i<n;i++){
cout<<setw(n-i);
for(int j=1;j<=i+1;j++)
cout<<j;
for(int k=i;k>0;k--)
cout<<k;
cout<<endl;
}
}
