#include <iostream>
using namespace std;

#define DEBUG_A

#ifdef DEBUG_A
#define a 10
#elif DEBUG_B
#define a 100
#else
#define a 1000
#endif
int main()
{
    cout << "Hello World!\n";
    cout << a << endl;
}

