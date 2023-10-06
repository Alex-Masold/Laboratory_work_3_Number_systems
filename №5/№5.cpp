#include <iostream>
using namespace std;

string System = "0123456789abcdefghijklmnopqrstuvwxyz";

int translate_in_DEC(int p, string x)
{
    int result = 0;
    int S = 1;
    for (int i = x.length() - 1; i >= 0; --i)
    {
        result += System.find(x[i]) * S;
        S *= p;
    }

    return result;
}

string translate_in_b(int q, int x)
{
    string result;
    int k;
    while (x != 0)
    {
        k = x % q;
        x /= q;
        result += System[k];
    }
    return result;
}

int main()
{
    int p, q, result_in_DEC;
    string x, result;
    cin >> p >> q >> x;

    result_in_DEC = translate_in_DEC(p, x);
    result = translate_in_b(q, result_in_DEC);
    reverse(result.begin(), result.end());
    if (result.empty())
        cout << 0;
    cout << result;
}