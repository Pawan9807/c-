#include<iostream>
using namespace std;


template<class T,class U>

bool equal( T a,U b)
{
    return (a==b);
}
int main()
{
   equal(4,4.0)? cout<<"both are equal" : cout<<"both are different";
   cout<<'\n';
      equal(5,4.0)? cout<<"both are equal" : cout<<"both are different";
 /*
     if(equal(4,4.0))
     cout<<" both are equal";
     else
     cout<<"both are different";

   */ 
      return 0;
}
/*
template <class T> 

T Maximum(T x, T y)
{
    return(x>y)? x:y;
}
  
int main()
{
    cout<<Maximum<int>(34, 43)<<endl; 
    cout<<Maximum<double>(3.40,7.20)<< endl; 
    cout<<Maximum<char>('f', 'd');  
    return 0;
}
*//*
template<class T>
T sum(T a,T b)
 {  //int res;
    //res=a+b;
    return a+b;
 }
 int main()
 {
    int a=4,b=5;
    cout<<sum<int>(a,b);
    return 0;
 }*/