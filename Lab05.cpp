// Chad Huntebrinker
// crh92d@umsystem.edu
// 9/24/20
// CS201L Lab 05

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int row1, row2, column1, column2, i, j;
	int multiplicationTotal = 0;
	int x = 0;
	char userInput;
	int matrix1[20][20];
	int matrix2[20][20];
	int matrixAfterAddition[20][20];
	int matrixAfterMultiplication[20][20];
	do {
		cout << "Enter the number of rows in this matrix (up to 20) >>> ";
		cin >> row1;
		cout << endl;
		cout << "Enter the number of columns in this matrix (up to 20) >>> ";
		cin >> column1;
		cout << endl;
		cout << "Please enter the values in this matrix, you can enter each row at once, with spaces" << endl;
		cout << " OR " << endl;
		cout << "You can type one number at a time followed by the enter button" << endl;
		for (i = 0; i < row1; ++i) {
			for (j = 0; j < column1; ++j) {
				cin >> matrix1[i][j];

			}
		}
		cout << "You have entered matrix1 as:" << endl;
		for (i = 0; i < row1; ++i) {
			for (j = 0; j < column1; ++j) {
				cout << matrix1[i][j] << " ";
				if (j == column1 - 1) {
					cout << endl;
				}
			}
		}

		cout << "Enter the number of rows in this matrix (up to 20) >>> ";
		cin >> row2;
		cout << endl;
		cout << "Enter the number of columns in this matrix (up to 20) >>> ";
		cin >> column2;
		cout << endl;
		cout << "Please enter the values in this matrix, you can enter each row at once, with spaces" << endl;
		cout << " OR " << endl;
		cout << "You can type one number at a time followed by the enter button" << endl;
		for (i = 0; i < row2; ++i) {
			for (j = 0; j < column2; ++j) {
				cin >> matrix2[i][j];

			}
		}
		cout << "You have entered matrix2 as:" << endl;
		for (i = 0; i < row2; ++i) {
			for (j = 0; j < column2; ++j) {
				cout << matrix2[i][j] << " ";
				if (j == column2 - 1) {
					cout << endl;
				}
			}
		}

		if (row1 == row2 && column1 == column2) {
			cout << "matrix1 + matrix2 is " << endl;
			for (i = 0; i < row1; ++i) {
				for (j = 0; j < column1; ++j) {
					matrixAfterAddition[i][j] = matrix1[i][j] + matrix2[i][j];
				}
			}
			for (i = 0; i < row1; ++i) {
				for (j = 0; j < column1; ++j) {
					cout << matrixAfterAddition[i][j] << " ";
					if (j == column1 - 1) {
						cout << endl;
					}
				}
			}
		}
		else if (row1 != row2 || column1 != column2) {
			cout << "Cannot add the two matrixes together, the # of columns and rows must be the same in both matrixes" << endl;
		}
		if (column1 == row2) {
			cout << "matrix1 * matrix2 is " << endl;
			for (i = 0; i < row1; ++i) {
				for (x = 0; x < row1; ++x) {
					for (j = 0; j < column1; ++j) {
						multiplicationTotal = multiplicationTotal + (matrix1[i][j] * matrix2[j][x]);
					}
					matrixAfterMultiplication[i][x] = multiplicationTotal;
					multiplicationTotal = 0;
					if (x == row1) {
						x = 0;
					}
				}
			}
			for (i = 0; i < row1; ++i) {
				for (j = 0; j < column2; ++j) {
					cout << matrixAfterMultiplication[i][j] << " ";
					if (j == column2 - 1) {
						cout << endl;
					}
				}
			}
		}
		else if (column1 != row2) {
			cout << "Cannot multiply the two matrixes together, the # of columns in matrix1 "
				<< "and the # of rows in matrix2 must be the same in both matrixes" << endl;
		}
		cout << "Press Q to quit, any other key to do another matirx" << endl;
		cin >> userInput;
		userInput = toupper(userInput);
		cout << setfill('=') << setw(80) << "" << endl;
	} while (userInput !='Q');

	
	return 0;
}