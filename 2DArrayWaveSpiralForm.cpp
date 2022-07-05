#include <iostream>
#include "Header.h"

using namespace std;

void waveForm(int arr[][4], int rowsize, int colsize)
{
	cout << "\nMatrix In WAVE FORM :\n";
	for (int col = 0; col < colsize; col++)
	{
		if (col % 2 == 0)//even inddex
		{
			for (int row = 0; row < rowsize; row++)
			{
				cout << arr[row][col] << " ";
			}
		}
		else //odd inddex
		{
			for (int row = rowsize - 1; row >= 0 ; row--)
			{
				cout << arr[row][col] << " ";
			}
		}
	}
}
void spiralForm(int arr[][4], int rowsize, int colsize)
{
	cout << "\nMAtrix Is In Spiral Form :\n";

	int startRow = 0;
	int startCol = 0;
	while (startRow<rowsize && startCol<colsize)
	{
		for (int row = startCol; row < rowsize; row++)
		{
			cout << arr[startRow][row]<<" ";
		}
		startRow++;
		for (int row = startRow; row < rowsize; row++)
		{
			cout << arr[row][colsize - 1]<<" ";
		}
		colsize--;
		if (startRow < rowsize)
		{
			for (int row = colsize - 1; row >= 0; --row)
			{
				cout << arr[rowsize - 1][row] << " ";
			}
			rowsize--;
		}
		if (startCol < colsize)
		{
			for (int row = rowsize - 1; row >= startRow; row--)
			{
				cout << arr[row][startCol] << " ";
			}
			startCol++;
		}
	}
	cout << endl;
}