#include<iostream>
#include<fstream>

using namespace std;

int main(){
ifstream f1("org.txt");
ofstream f2("modified.txt");
char prev1=0,prev2=0,curr=0;
int c=0;
if(f1==NULL){
cout<<"Error";
getchar();
return 0;
}
else{
while(!f1.eof()){
f1.get(curr);
if(prev1=='{' && curr=='\n')
c++;
if(prev1=='}' && curr=='\n')
c--;
if((prev2==';' && prev1=='\n')||(prev2=='{' && prev1=='\n')){
for(int i=0;i<c;i++)
f2.put('\t');}
if(prev2=='}' && prev1=='\n'){
for(int i=0;i<c;i++)
f2.put('\t');}
f2.put(curr);
char t=curr;
prev2=prev1;
prev1=t;
}
f1.close();
f2.close();
}
return 0;
}
