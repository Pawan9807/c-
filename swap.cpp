#include<iostream>
using namespace std;

/*template<class T>
int swap_numbers(T& x, T& y)
{
	T t;
	t = x;
	x = y;
	y = t;
	return 0;
}

// Driver code
int main()
{
	int a, b;
	a = 10, b = 20;

	// Invoking the swap()
	swap_numbers(a, b);
	cout << a << " " << b << endl;
	return 0;
}
*/
template<class T>
int swap_t( T& a,T& b )
{
    T x;
    x=a;
    a=b;
    b=x;
   return 0;
   }
int main()
{   int x=3,y=4;
  
    swap_t(x,y);

    cout<<x<<" "<<y<<endl;
    return 0;
}


/*void swap3(int* a, int* b) {
    int* temp = a;
    a = b;
    b = temp;
    assert(*a == 17);
    assert(*b == 42);
    // they're swapped!
}
void swap4(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    assert(*a == 17);
    assert(*b == 42);
    // they're swapped!
}

int main()

{
   
 int x = 42;
int y = 17;
int* xp = &x;
int* yp = &y;
swap3(xp, yp);
assert(xp == &x);
assert(yp == &y);
assert(x == 42);
assert(y == 17);
// Didn't swap anything!
swap4(xp, yp);
assert(xp == &x);
assert(yp == &y);
assert(x == 17);
assert(y == 42);

return 0;
}
*/