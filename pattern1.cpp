#include<bits/stdc++.h>
using namespace std;
main(){
/*This program creates the following pattern

           *
          * *
         *   *
        *     *
       *       *
      * * * * * *

      here n=6
*/
cout<<"Enter no of lines";
int n;
cin>>n;
cout<<setw(n)<<"*"<<endl;
for(int i=1;i<n-1;i++){
cout<<setw(n-i)<<"*"<<setw(2*i)<<"*"<<endl;
}
for(int i=0;i<n;i++){
cout<<"* ";}
}
