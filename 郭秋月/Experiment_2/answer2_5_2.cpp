#include <iostream>

using namespace std;

const double PI=3.14159;
int main()
{
    double r;
    cout<<"请输入圆半径:";
    cin>>r;
    cout<<"周长:"<<2*PI*r<<endl;
    cout<<"面积:"<<PI*r*r<<endl;
    return 0;
}
