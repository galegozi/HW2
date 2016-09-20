#include <iostream>
using namespace std;

int main()
{
    int * a = new int;
    //int * c = new int;
    for(int x = 0; x < 20; x++)
    {
        a[x] = x;
        cout << "a[" << x<< "] = " << a[x] << endl;
    }
    int * b;
    b = a;
    for(int x = 0; x < 20; x++)
    {
        cout << "b["<< x << "] = " << b[x] << endl;
    }
    a = new int[20];
    for(int x = 0; x < 20; x++)
    {
        a[x] = 20+x;
        cout << "a["<< x << "] = " << a[x] << endl;
    }
    for(int x = 0; x < 20; x++)
    {
        cout << "b["<< x << "] = " << b[x] << endl;
    }
    delete a;
    delete b;
    return 0;
}
