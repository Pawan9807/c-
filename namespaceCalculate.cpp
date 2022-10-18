#include<iostream>
using namespace std;
/*
#define x 4
#define y 5
*/namespace Addition
{   int cal(int a,int b){ return a+b}
   /* int x,y,sum;
    sum=x+y;
    return sum;
*/
}
namespace Sub
{  int cal(int a,int b){ return a-b}
   /*  int x,y,subtract;
    sub=x+y;
    return sub;
*/}
namespace multiply
{     int cal(int a,int b){ return a*b}
      /*int x,y,mul;
      mul=x*y;
      return mul;
*/
}
namespace divide
{   int cal(int a,int b){ return a/b}
    /*int x,y,div;
    div=x/y;
    return dive;
    */
}
int main()

{ int a,b;
   cout<<"enter number:";
    cin>>b>>a;
    cout<<addition::cal()<<'\n';
    cout<<subtract::cal()<<'\n';
    cout<<multiply::cal()<<'\n';
    cout<<divide::cal()<<'\n';


}