// member methods of local class can only access static
// and enum variables of the enclosing function
#include <iostream>
using namespace std;
  
void fun()
{
    static int x;
    enum { i = 1, j = 2 };
  
    // Local class
    class Test {
    public:
        void method()
        {
            cout << "x = " << x
                 << endl; // fine as x is static
            cout << "i = " << i
                 << endl; // fine as i is enum
        }
    };
  
    Test t;
    t.method();
}
  
int main()
{
    fun();
    return 0;
}

//Output
//x = 0
//i = 1
//Program 2:


// C++ program with compilation error to demonstrate that
// member methods of local class can only access static
// and enum variables of the enclosing function
#include <iostream>
using namespace std;
  
void fun()
{
    int x;
  
    
    class Test {
    public:
        void method() 
        {
             cout << "x = " << x << endl;
             
         }
    };
  
    Test t;
    t.method();
}
  
int main()
{
    fun();
    return 0;
}