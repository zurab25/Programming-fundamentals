#include <iostream>

using namespace std;

int main()
{
    int a=0, b =0;

    cin >> a >> b;
    if(a<b ){
        for(int i=a;i<b;i++)
        {
            cout << i << " ";

        }
    }

    else {
        for(int i=a;i>b;i--)
        {
            cout << i << " ";

        }
    }

    system("pause");

    return 0;

}