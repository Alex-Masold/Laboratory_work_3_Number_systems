#include <iostream>
#include <iomanip>
using namespace std;

string System = "0123456789abcdef";

double translate(int b, string x)
{
	double result = 0;
	//int S = 1; // счетчик степени
	x = x.substr(x.find('.') + 1);
	for (int i = 1; i <= x.length(); ++i)
	{
		if (x[i - 1] == '0')
			continue;
		//S /= b;
		result += System.find(x[i - 1]) * pow(b, -i);

	}
	return result;
}

int main()
{
	int b; // система счисления
	string x; // чилсо в системе счисления b
	double result;
	cin >> b;
	cin >> x;

	result = translate(b, x);
	cout << setiosflags(ios::left) << setw(7) << setprecision(5) << setfill('0') << result << endl;
}