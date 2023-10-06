#include <iostream>

using namespace std;

string System = "0123456789abcdef";

int translate(int b, string x)
{
    int result = 0;
    int N;
    int S = 1;
    for (int i = x.length() - 1; i >= 0; --i)
    {
        result += System.find(x[i]) * S;
        S *= b;
    }

    return result;
}

int main()
{
    int b, result;
    string x;
    //cout << System;
    cin >> b;
    cin >> x;

    result = translate(b, x);
    cout << result;
}