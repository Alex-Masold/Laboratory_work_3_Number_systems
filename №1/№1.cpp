#include <iostream>

using namespace std;

string System = "0123456789abcdef";

string translate(int b, int x)
{
    string result;
    int k;
    while (x != 0)
    {
        k = x % b;
        x /= b;
        result += System[k];
    }
    return result;
}

int main()
{
    int x, b;
    string result;
    cin >> b;
    cin >> x;

    result = translate(b, x);
    reverse(result.begin(), result.end());
    if (result.empty())
        cout << 0;
    cout << result;
}