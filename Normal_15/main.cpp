#include <iostream>
#include <time.h>
#include <string>

using namespace std;
//---------------------Функции и Прототипы---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------САМА ПРОГА-------------------------------------

	int row, column;

	cout << "Enter the number of rows: ";
	cin >> row;

	cout << "\nEnter the number of columns: ";
    cin >> column;

	int** arr = new int*[row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[column];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			arr[i][j] = rand() % 50;
			cout << arr[i][j] << "  ";
		}
		cout << endl;
	}

	int* arr_one = new int[row * column];

	int k = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			arr_one[k] = arr[i][j];
			cout << arr_one[k] << "  ";
			k++;
		}
	}
	cout << endl;

	system("pause");
	return 0;
}
