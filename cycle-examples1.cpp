#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;

    cin >> a >> b >> c;

    for(int i=a;i<b;i++)
    {
        cout<< i << " xarisxad " << c << "=" << pow(i,c)<<endl;
    }

    system("pause");
    return 0;
}