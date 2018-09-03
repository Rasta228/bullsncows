#include "bullsncows.h"

int main()
{
	int choose;
	s:
	system("clear");
	printf("\tThe \"100 matches\" game\n");
	printf("1. The game\n");
	printf("2. Rules\n");
	printf("3. Quit\n");
	do
	{
		printf("Type the number from 1 to 3\n");
		scanf("%d", &choose);
	}
	while(choose < 1 || choose > 3);
	switch(choose)
	{
		case 1: game(); break;
		case 2: rules(); goto s;
		case 3: return 0;
		
	}
	return 0;
}
