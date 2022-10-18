#include <iostream>
#include <string>
using namespace std;
 
class Poingable {
public:
virtual void poing() = 0;
};
 
void callPoing(Poingable& p) 
{ 
p.poing();
}
 
class Bingable 
{
public:
virtual void bing() = 0;
};
 
void callBing(Bingable& b) 
{
b.bing();
}
 
class Outer {

string name;

public:      
class Inner1;
friend class Outer::Inner1;

class Inner1 : public Poingable {
  
Outer* parent;

public:      
Inner1(Outer* p) : parent(p) {}

     void poing() {
        cout << "poing called for "<< parent->name << endl;

                 }
} inner1;

class Inner2;
friend class Outer::Inner2;

class Inner2 : public Bingable {
public:
Outer* parent;


Inner2(Outer* p) : parent(p) {}
        void bing() { 
                    cout << "bing called for "<< parent->name << endl;
                     }
} inner2;

public:

Outer(const string& nm): name(nm), inner1(this), inner2(this) {}

operator Poingable&() //automatic type conversion(implicit conversion)
{   //it gives return reference to implement 
 return inner1;
 }
operator Bingable&()
 {
  return inner2;
 }

};
 
int main()
 {
Outer x("Ping Pong");

callPoing(x);
callBing(x);

} 