#include "bullsncows.h"

int main()
{
	int choose;
    int n;
	s:
	system("clear");
	printf("\tThe \"100 matches\" game\n");
	printf("1. The game\n");
	printf("2. Rules\n");
	printf("3. Quit\n");
    f:
    do {
    choose = scanf("%d", &n);
    while (getchar() != '\n');
    if (choose == 1)
    {
        if(n < 1 || n > 3)
           { printf("Type the number from 1 to 3\n"); goto f;}
    }}
    while (choose != 1);
	switch(n)
	{
		case 1: game(); break;
		case 2: rules(); goto s;
		case 3: return 0;
	}
	return 0;
}

