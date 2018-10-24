#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;

    cout << "A=";
    cin >> a;
    cout <<endl;

    cout << "B=";
    cin >> b;
    cout<<endl;

    cout << "C=";
    cin>> c;
    cout<<endl;


    if(a>b && a>c){
        cout<<a;
        if (b>c){
            cout <<" " << b << " " << c <<endl;
        }
        else {
            cout << " " << c << " " << b << endl;
        }
    }

    else if (b>a && b>c){
        cout<<b;
        if(a>c){
            cout<< " " << a << " " << c << endl;
        }
        else {
            cout << " " << c << " " << a << endl;
        }
    }

    else if (c>a & c>b){
        cout << c;
        if(a>b){
            cout << " " << a << " " << b << endl; 
        }
        else {
            cout << " " << b << " " << a << endl;
        }
    }

    else {
        cout << " Error in Equation!"<<endl;
    }

    system("pause");
    return 0;
}