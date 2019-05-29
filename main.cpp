#include <iostream>

using namespace std;

void Swap(int &a,int &b)
{
    int tmp=a;
    a=b;
    b=tmp;
}

int main()
{
    int a=1,b=2;
    cout << "before: a " << a << " b " << b << endl;
    Swap(a,b);
    cout << "after: a " << a << " b " << b << endl;
    return 0;
}
