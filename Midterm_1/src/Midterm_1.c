/*
 * Write a program to print a multiplication table for integers.
 * The program should input a single number from the user that corresponds to the row and column size.
 * Additionally, the table should show rows, columns and symbols as shown below.
 */

#include <stdio.h>
#include <stdlib.h>



int main(void) {

	int uInput;

	printf("To generate your multiplication table, enter your desired positive integer here:\n");
	scanf("%d", &uInput);
	//printf("You entered: %d\n", uInput);

	int multTable [uInput][uInput];


	for (int i = 1; i <= uInput; i++){
		printf("	%d", i);
	}
	printf("\n");

	printf(" +");
	for (int j = 1; j <= uInput*2; j++){
		printf("-----");
	}
	printf("\n");



	for (int row = 0; row < uInput; row++){
		printf("%d|	", row + 1);

			for (int col = 0; col < uInput; col++){
				int a = row + 1;
				int b = col + 1;

				multTable [row][col] = a * b;

				printf("%d	", multTable [row][col]);

			}
			printf ("\n");
		}

	return EXIT_SUCCESS;
}
