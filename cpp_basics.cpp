#include <iostream>
using namespace std;
int main()
{
    // DataTypes
    // int  it stores integer numbers
    int x = 34;
    // long it also stores integers but in a wider range
    long y = 8;
    // for more bigger numbers we can use long long
    long long z = 100;
    cout << x << endl;

    // float and double are used to store floating point numbers
    float p = 98.6;
    double q = 67.909;
    cout << "value of q is: " << q << endl;
    cout << "value of p is: " << p << endl;

    // Strings and use of getLine
    string s;
    // cin >> s;
    // cout << s; // here it will take only the first word you write 
    // to take complete line user input we use getline 
    string str;
    getline(cin,str);
    cout<<str<<endl;

    // Char datatype
    char ch = 'r';
    cout << ch;
    return 0;
}