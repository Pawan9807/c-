#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

int a[6];
int b[6];
    for(int i=0;i<2; i++)
      {
         cin>>a[i]>>b[i]; 
      }
  //  cout<<"addition"<<"\n";
       for(int i=0;i<2; i++)
       
         for(int j=0;j<2; j++)
{  
           cout<<"addition"<<a[i]+b[j]<<" "<<'\n';
           cout<<"substraction"<<a[i]-b[j]<<" "<<'\n';
           cout<<"Multiply"<<a[i]*b[j]<<" "<<'\n';
           cout<<"Divide"<<a[i]/b[j]<<" "<<"\n";
}

/*
cout<<"subtraction"<<"\n";
     for(int i=0;i<2; i++)
       for(int j=0;j<2; j++)
           cout<<a[i]-b[j]<<" ";

cout<<"multiplication"<<"\n";
    for(int i=0;i<2; i++)
       for(int j=0;j<2; j++)
        cout<<a[i]*b[j]<<" ";

cout<<"Division"<<"\n";
   for(int i=0;i<2; i++)
       for(int j=0;j<2; j++)
          cout<<a[i]/b[j]<<" ";
*/
return 0;
}