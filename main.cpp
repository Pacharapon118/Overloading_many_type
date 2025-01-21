#include <iostream>

using namespace std;
int mul(int,int);
float mul(float,int);

int mul(int a,int b){

    return a * b;

}

float mul(float a,int b){

    return a * b;

}

int main()
{
    int a,b,d;
    float c;

    cout << "Enter integer 2 number to multiply" << endl;
    cin >> a;
    cin >> b;

    cout << "Enter 1 float and 1 integer to multiply" << endl;
    cin >> c;
    cin >> d;

    cout << mul(a,b) << endl;
    cout << mul(c,d) << endl;

    return 0;
}
