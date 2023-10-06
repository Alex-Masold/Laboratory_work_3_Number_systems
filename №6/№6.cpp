#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<math.h>
int main()
{
	long double b10 = 0;
	int tch = 0, col = 0, col2 = 0, n, n1, q, in = 0, arr[27], ar[27], a[27], w = 0, z = -1, p = 0, id = 0, er, no = 0, vb = 0, zxc = 0, qp = 0;
	char s[101], e[8], NM[10], k;


	scanf_s("%d %d %d", &n, &n1, &q);
	scanf("%s", s);
	for (k = 'a'; k <= 'f'; k++)
	{
		e[in] = k;
		in++;
	}
	in = 0;
	for (k = '0'; k <= '9'; k++)
	{
		NM[in] = k;
		in++;
	}
	in = 0;


	for (int i = 0; i < 27; i++)

	{
		arr[i] = 39;
		ar[i] = -1;
		a[i] = -1;
	}
	while (w < 27)
	{
		for (int i = 0; i < 6; i++)
		{
			if (s[w] == e[i])
			{
				arr[w] = 10 + i;
			}
		}
		for (int j = 0; j < 10; j++)
		{
			if (s[w] == NM[j])
			{
				arr[w] = j;

			}
		}
		w++;
		if (s[w] == '.')
		{
			tch++;
			arr[w] = 55;
		}

	}
	if (arr[0] == 0)
	{
		printf("0");
	}
	for (int i = 0; i < 20; i++)
	{

		if (arr[i] >= n && arr[i] != 39 && arr[i] != 55)
		{
			no = i;
		}
	}
	if (arr[no] >= n || tch > 1)
	{
		printf("NO");
	}
	else
	{
		for (int i = 0; i < 20; i++)
		{
			if (arr[i] == 55)
			{
				id = i;
			}

		}
		if (id == 0)
		{
			for (int i = 0; i < 20; i++)
			{
				if (arr[i] != 39)
				{
					id = i + 1;
				}
			}
		}
		for (int i = id - 1; i >= 0; i--)
		{

			if (arr[i] != 39)
			{
				p += arr[i] * pow(n, in);
				in++;
			}

		}



		for (int i = id + 1; i < 20; i++)
		{
			if (arr[i] != 39)
			{
				b10 += arr[i] * pow(n, z);
				z--;

			}
		}
		in = 0;

		double qwe = b10 + p, ewq;

		double y = modf(qwe, &ewq);
		while (p > 0)
		{
			er = p % n1;
			ar[qp] = er;

			qp++;
			p = p / n1;
		}

		for (int i = 20; i >= 0; i--)
		{
			vb = 0;
			if (ar[i] != -1)
			{
				if (ar[i] < 10)
					printf("%d", ar[i]);
				else
				{

					for (k = 'a'; k <= 'z'; k++)
					{

						if (ar[i] == vb + 10)
						{
							putchar(k);

						}
						vb++;
					}
				}
			}
		}
		if (b10 != 0)
		{
			printf(".");
			for (int i = 0; i < q; i++)
			{
				col2 = i;
				vb = 0;
				b10 = b10 * n1;

				a[i] = static_cast<int>(b10);

				if ((b10 - a[i]) >= 0.98999999999)

					a[i]++;


				b10 = b10 - a[i];
				if (b10 == 0)
				{
					break;
				}
			}
		}

		if (a[col2] == 0)
		{
			for (int i = 0; i < 20; i++)
			{
				if (a[col2] != 0)
				{
					break;
				}


				if (a[col2] == 0)
				{
					col2--;
					col++;
				}

			}
		}
		else
			col = 0;


		for (int i = 0; i < q - col; i++)
		{

			if (a[i] > 9)
			{
				vb = 0;
				for (k = 'a'; k <= 'z'; k++)
				{

					if (a[i] == vb + 10)
					{

						putchar(k);

					}
					vb++;
				}
			}
			else
			{
				if (a[i] != -1)
					printf("%d", a[i]);
			}

		}

	}

}