#include <iostream>

using namespace std;

int main()
{
    int N=0;

    cin >>N;

    cout << N/3600 << ":" << (N%3600)/60 << ":" << N%60;


    system("pause");
    return 0;
}