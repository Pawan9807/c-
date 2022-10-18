#include <iostream>
using namespace std;


namespace first
{
void call()
{
 cout<<"first"<< endl;
}

  namespace second
  {
       void call()
     {
        cout<<"second"<< endl;
     }
    namespace third
     {
         void call()
          {
             cout<<"third"<< endl;
          }
      }
  }
}
using namespace first::second:::third;
int main ()
{
  call();

 return 0;
}
