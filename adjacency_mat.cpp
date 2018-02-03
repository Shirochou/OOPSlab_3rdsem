#include<bits/stdc++.h>
using namespace std;
main(){
cout<<"Enter no of vertices:";
int n;
cin>>n;
int **mat=(int**)malloc(sizeof(int)*n*n);
for(int i=0;i<n;i++){
mat[i]=(int*)malloc(sizeof(int)*n);
}

for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
mat[i][j]=0;

char ch='y';
while(ch=='y'){
cout<<"Enter starting and ending vertex ";
int start,fin;
cin>>start>>fin;
mat[start][fin]=1;
mat[fin][start]=1;
/*we use both the cells mat[i][j] and mat[j][i] as we assume here that the graph is an undirected one
*/
cout<<"Wanna add more edges(press y to continue)";
cin>>ch;
}

cout<<endl;

for(int i=0;i<n;i++){
for(int j=0;j<n;j++){

cout<<mat[i][j]<<" ";
}
cout<<endl;
}
}
