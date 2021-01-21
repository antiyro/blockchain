#include "blockchain.h"

int main(int argc, char **argv)
{
	system("cat ~/Documents/Projets/blockchain/banner.txt"); //Change the location if needed
    int		entry;
    int		error;

    error = 1;
    printf(BOLDWHITE);
	printf("Welcome to the blochain network !\n\n");
	printf("1. Add a new block\n");
	printf("2. Show all blocks\n");
	printf("3. Verify the chain\n");
	printf("4. Quit\n");
	printf(SPARK);
	printf("Enter value >_ ");
    printf(RESET);
	scanf("%d", &entry);
	printf("\n");
	printf(BOLDWHITE);
	while (error)
	{
		switch(entry)
		{
			case 1:
			{
				printf("You choosed the 1");
				error = 0;
			}
			break;
			case 2:
			{
				printf("You choosed the 2");
				error = 0;
			}
			break;
			case 3:
			{
				printf("You choosed the 3");
				error = 0;
			}
			case 4:
			{
				printf("See you soon !");
				error = 0;
			}
			break;
			default:
			printf("Please choose an existing number");
			break;
	}
		return (0);
	}
}
