#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	int Matr[4][4];

	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "Matr[" << i << "][" << j << "] = ";
			cin >> Matr[i][j];
			if (Matr[i][j] <= 0)
			{
				count++;
			}
		}
	}

	cout << "\nВы ввели матрицу\n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << setw(3) << Matr[i][j] << " ";
		}
		cout << "\n";
	}

	cout << "\nВ матрице " << count << " отрицательных элементов\n";

	system("pause");

	return 0;
}
