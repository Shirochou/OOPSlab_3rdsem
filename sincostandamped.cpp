#include <iostream>
#include<math.h>
#include<cmath>
#include<stdio.h>
#include<iomanip>

using namespace std;
int main()
{float a,b;char c='-';char h=' ';
int choice;
cout<<"Enter the choices\n1-sin\n2-cos\n3-tan\n4-damped oscillation";
cin>>choice;
if(choice==1){
cout<<"Enter theta1 and Theta2";
cin>>a>>b;
float val=0;
cout<<"-------------------------------------------------------------------------------"<<endl;
for(float i=a;i<=b;i=i+0.1)
{
val=sin(i);
if(val>=0)
{
cout<<setw(30)<<"||";

cout<<setw(val*20)<<setfill(c)<<"*";
cout<<setw(30)<<setfill(h)<<endl;

}

else{

cout<<setw(29+val*20)<<"*";
cout<<setw((1-(val)*20)+1)<<setfill(c)<<"||";
cout<<setw(29+val*20)<<setfill(h)<<endl;

}


}
}
else if(choice==2){cout<<"Enter theta1 and Theta2";
cin>>a>>b;
float val=0;
cout<<"------------------------------------------------------------------"<<endl;
for(float i=a;i<=b;i=i+0.1)
{
val=cos(i);
if(val>=0)
{
cout<<setw(30)<<"||";

cout<<setw(val*20)<<setfill(c)<<"*";
cout<<setw(30)<<setfill(h)<<endl;

}
else{

cout<<setw(29+val*20)<<"*";
cout<<setw((1-(val)*20)+1)<<setfill(c)<<"||";
cout<<setw(29+val*20)<<setfill(h)<<endl;

}


}

}
else if(choice==3){
cout<<"Enter theta1 and Theta2";
cin>>a>>b;
for(float i=a;i<=b;i=i+0.1)
{
float val=tan(i);
if(val>=0 && (val*20+30<54))
{
cout<<setw(30)<<"||";

cout<<setw(val*20)<<setfill(c)<<"*"<<endl;
cout<<setw(30)<<setfill(h);

}
else if(val*20+30>=54){
cout<<setw(30)<<"||";

cout<<setw(30)<<setfill(c)<<"*"<<endl;
cout<<setw(30)<<setfill(h);}
else if(29+val*20<0){
cout<<setw(1)<<"*";
cout<<setw(29)<<setfill(c)<<"||"<<endl;}
else{

cout<<setw(29+val*20)<<"*";
cout<<setw(1-(val*20)+1)<<setfill(c)<<"||"<<endl;
cout<<setw(29+val*20)<<setfill(h);

}


}
}
else{
cout<<"Enter theta1 and Theta2";
cin>>a>>b;
float val=0;
cout<<"------------------------------------------------------------------"<<endl;
for(float i=a;i<=b;i=i+0.1)
{
val=sin(i)*pow(1.1,(-i));
if(val>=0)
{
cout<<setw(30)<<"||";

cout<<setw(val*20)<<setfill(c)<<"*";
cout<<setw(30)<<setfill(h)<<endl;

}
else{

cout<<setw(29+val*20)<<"*";
cout<<setw((1-(val)*20)+1)<<setfill(c)<<"||";
cout<<setw(29+val*20)<<setfill(h)<<endl;

}


}
}


return 0;}
