#include "stdafx.h"
#include "MathLibrary.h"
#include<iostream>
#include<conio.h>


using namespace std;

namespace MathLibrary
{
	void mattranspose()
	{
		int arrInput[10][10]; //input array
		int arrTranspose[10][10]; // output array
		int r;
		int c;

		cout << ".................Transpose..............." << endl;
		//taking matrix size from user
		cout << "Enter no of rows of the matrix = ";
		cin >> r;

		cout << "Enter no of columns of the matrix = ";
		cin >> c;

		// taking input matrix from user
		cout << "Enter matrix values one by one for taking its transpose";
		cout << endl;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cin >> arrInput[i][j];
			}
		}

		// printing input matrix 
		cout << "Input matrix";
		cout << endl;
		for (int i = 0; i < r; i++)
		{
			for (int j = 0; j < c; j++)
			{
				cout << arrInput[i][j];
				cout << " ";
			}
			cout << endl;
		}


		//taking transpose of user matrix
		for (int a = 0; a < r; a++)
		{
			for (int b = 0; b < c; b++)
			{
				arrTranspose[b][a] = arrInput[a][b]; //e.g a10 should have value at a01
			}

		}

		// printing transposed matrix 
		cout << "Input matrix";
		cout << endl;
		for (int a = 0; a < c; a++)
		{
			for (int b = 0; b < r; b++)
			{
				cout << arrTranspose[a][b];
				cout << " ";
			}

			cout << endl;
		}
	}
}