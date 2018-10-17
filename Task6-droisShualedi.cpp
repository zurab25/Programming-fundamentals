#include<iostream>

using namespace std;



int main(){
    int a1,b1,c1,a2,b2,c2,x,y;
                   
    cin>>a1>>b1>>c1;
    cin>>a2>>b2>>c2;

    x=a1*3600+b1*60+c1;
    y=a2*3600+b2*60+c2; 

    cout<<y-x;

    system("pause");
    return 0;
}
