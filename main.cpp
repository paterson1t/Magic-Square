//Program using Magic Square Siamese Algorithim 
//Accepts positive odd integer as input and 
//outputs corresponding magic square to the screen
//Author: Peter Paterson
//Date: 9/6/2017
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int rowCount, colCount, x;														//create integers rowCount, colCount for size of matrix, x for the input
	cout << "enter an odd number greater than one please ";
	cin >> x;

	rowCount = x;
	colCount = x;

	int** array1 = new int*[rowCount];									//creates a matrix of x * x size 
	for (int i = 0; i < rowCount; ++i)
		array1[i] = new int[colCount];
	
	
	for (int i = 0; i < x; i++) {												//intializes values in matrix to be zero, used in loopp later
		for (int j = 0; j < x; j++) {
			array1[i][j] = 0;
		}
	}

	int i = 0;													//initalize variable used for row number
	int j = x / 2;												//initalize variable used for column number
	int R, C;													//temp variales used for row and column number in matrix
	for (int n = 1; n <= (x * x); n++)							//For loop to assign values in the matrix
	{
		array1[i][j] = n;										//assigns value n to matrix in row i and coloumn j

		R = (i + x - 1) % x;									
		C = (j + 1) % x;

		if (array1[R][C] == 0)
		{
			i = R;
			j = C;
		}

		else if (array1[R][C] != 0)
		{
			i = (i + 1 + x) % x;
		}
	}
	
	for (int n = 0; n < x; n++)
	{
		for (int y = 0; y < x; y++)
			cout << array1[n][y] << " ";
		cout << endl << endl;
	}
	delete[] array1;
	return 0;
	
}
