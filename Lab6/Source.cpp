#include<stdio.h>
#include<stdlib.h>
#include<string.h>


// The First One

void enterNumbersUntilZero() {
	int* arr = NULL;
	int size = 0;
	int x;

	while (1) {
		printf("Enter Number %d:", size + 1);
		scanf("%d", &x);
		if (x != 0) {
			arr = (int*)realloc(arr, (size + 1) * sizeof(int));
			arr[size] = x;
			size++;
		}
		else {
			break;
		}

	}
}


// The Second One

void combineTwoString()
{
	char* str1;
	char* str2;
	char* combination;

	int str1Size = 0;
	int str2Size = 0;

	printf("Enter Str1 Size:");
	scanf("%d", &str1Size);
	str1 = (char*)calloc(str1Size + 1, sizeof(char));
	str1[str1Size] = '\0';

	printf("Enter Str1:");
	scanf("%s", str1);

	//--------------------------------------------------------------------

	printf("Enter Str2 Size:");
	scanf("%d", &str2Size);
	str2 = (char*)calloc(str2Size + 1, sizeof(char));
	str2[str2Size] = '\0';


	printf("Enter Str2:");
	scanf("%s", str2);

	//---------------------------------------------------------------------
	int totalSize = str1Size + str2Size;

	combination = (char*)calloc(totalSize + 1, sizeof(char));
	int counter = 0;

	for (int i = 0; i < str1Size; i++) {
		combination[counter] = str1[i];
		counter++;
	}
	for (int i = 0; i < str2Size; i++) {
		combination[counter] = str2[i];
		counter++;
	}

	printf("Str1 is:%s", str1);
	printf("Str2 is:%s", str2);
	printf("The Combined String is:%s", combination);
	

	free(str1);
	free(str2);
	free(combination);
}


// The Third One

// return the size of the odd array
int divideOddAndEvenNumbers(char* studentNumber,int** oddNumbers,char** evenNumbers) {
	int oddNumbersSize = 0;
	int evenNumbersSize = 0;

	int counter = 0;
	while (studentNumber[counter] != '\0') {
		int num = studentNumber[counter] - 48;

		if (num % 2 == 0) {
			(*evenNumbers) = (char*)realloc((*evenNumbers), (evenNumbersSize + 2) * sizeof(char));
			(*evenNumbers)[evenNumbersSize] = (num + 48);
			(*evenNumbers)[evenNumbersSize +1] = '\0';
			evenNumbersSize++;
		}
		else {
			(*oddNumbers) = (int*)realloc((*oddNumbers), (oddNumbersSize + 1) * sizeof(int));
			(*oddNumbers)[oddNumbersSize] = num;
			oddNumbersSize++;
		}

		counter++;
	}
	return oddNumbersSize;
}

int main() {

	
	return 0;
}