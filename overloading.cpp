#include<iostream>
using namespace std;
//function overloading when number of arguments
void check(int a)
{
    cout<<"integer:"<<a<<'\n';

}
void check(int a,double b)  //types of different of argument
{
    cout<<a<<" "<<b<<'\n';

}

void check(double c)
{
    cout<<"double:"<<c<<'\n';

}
void check(char d)
{
    cout<<"character:"<<d;

}



int main()
{
   check(4);
     check(4,5.32);
       check(43.432);
         check('a');
   
   
   return 0;
} /*
// causes of function overloading
// problem 1 : type conversion
#include <iostream>
using namespace std;
void fun(int);
void fun(float);
void fun(int i)
{
	cout << "Value of i is : " << i << endl;
}
void fun(float j)  
{
	cout << "Value of j is : " << j << endl;
}
int main()
{
	fun(12);
	fun(1.2);
	return 0;
}

//problem 2 :  function with default arguments


 void fun(int);
 void fun(int ,int);
 void fun(int i);

 void fun(int i)
 {
    cout<<"value of i is:"<<i;
 }
 void fun(int a=23,int b)
 {
    cout<<"value of a & b:"<<a<<'\t'<<b;

 }
 int main()
 {
    fun(22);
    
    return 0;
}

//problem 3: function with pass by reference


void fun(int i)
{
  cout<<i;
}
void fun(int& b)
{
    cout<<b;

}
int main()
{
  int a = 10;
    fun(a); //confusion
    return 0;

}*/