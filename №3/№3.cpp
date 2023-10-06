#include <iostream>
#include <cmath>

using namespace std;

string System = "0123456789abcdef";

string tranlate(int b, int k, float N)
{
	string result = "";
	float fractionalpart, wholepart;
	int count = 0;

	fractionalpart = modf(N, &wholepart);
	result += System[wholepart];
	result += '.';
	for (int i = 0; i < k; ++i)
	{
		while (fractionalpart < 1 & fractionalpart != 0)
		{
			fractionalpart *= b;
			if (k != 15)
				fractionalpart = round(fractionalpart * pow(10, k)) / pow(10, k);
			else
				fractionalpart = round(fractionalpart * pow(10, 3)) / pow(10, 3);
			if (fractionalpart < 1)
				result += '0';
			count++;
			if (count == k)
				break;
		}
		//count = 0;
		//fractionalpart = round(fractionalpart * 1000) / 1000;
		fractionalpart = modf(fractionalpart, &wholepart);
		result += System[wholepart];
		if (fractionalpart == 0 || count == k)
			break;
	}
	return result;
}


int main()
{
	int b; // основание системы
	int k; // допустимое количество знаков после точки
	float N; // само число
	string result;
	cin >> b >> k;
	cin >> N;

	result = tranlate(b, k, N);
	cout << result;

}