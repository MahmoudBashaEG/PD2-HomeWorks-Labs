#include<stdio.h>
#include<random>
#include<time.h>
int isWin() {
	int counter = 0;
	int shotterPoint = 0;
	int isFirst = 1;


	while (counter < 7) {
		int random1 = ((rand() % 6) + 1);
		int random2 = ((rand() % 6) + 1);
		int sum = random1 + random2;

		if (isFirst) {

			switch (sum)
			{
			case 7:
			case 11: {
				return 1;
			}

			case 2:
			case 3:
			case 12: {
				return 0;
			}

			case 4:
			case 5:
			case 6:
			case 8:
			case 9:
			case 10: {
				shotterPoint = sum;
			}

				   isFirst = 0;

			}
		}
		else {
			if (sum == shotterPoint)
				return 1;
		}

		counter++;
	}
	return 0;
}



void main() {
    
	for (int i = 0; i < 10; i++) {
		printf("%d\n", isWin());
	}

}