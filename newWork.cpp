#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cin >> a >> b;

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(i==0)
            {
                cout<< "+";
            }            
            else if (j==0)
            {
                cout<< "+";
            }
            else if (i==(a-1))
            {
                cout<<"+";
            }            
            else if (j==(b-1))
            {
                cout << "+";
            }          
            else {
                cout << "*";
            }            
        }
        cout<<endl;
    }

    system("pause");
    return 0;
}