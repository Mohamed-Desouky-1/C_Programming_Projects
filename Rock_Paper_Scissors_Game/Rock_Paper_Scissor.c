#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randomChoice(const char *choices);
int main()
{
	char choice;
	printf("                             Enter r for ROCK, p for PAPER and s for SCISSOR\n");
	printf("                                                      ");
	scanf("%c",&choice); 


	srand((unsigned int)time(NULL));
	const char *choices = "rps";
	char selectedChar = randomChoice(choices);
	
	
	if(selectedChar==choice)
	{
		printf("                             Game Draw!\n"); 
		printf("                             You choose : %c and Computer choose : %c",choice,selectedChar); 
		return 0;
	}
	
	if(choice=='r'&&selectedChar=='p')
	{
		printf("                             Oh! You have lost the game!\n"); 
		printf("                             You choose : %c and Computer choose : %c",choice,selectedChar);
		return 0;
	}
	
	if(choice=='p'&&selectedChar=='s')
	{
		printf("                             Oh! You have lost the game!\n"); 
		printf("                             You choose : %c and Computer choose : %c",choice,selectedChar);
		return 0;
	}
	
	if(choice=='r'&&selectedChar=='s')
	{
		printf("                             Wow! You have won the game!\n"); 
		printf("                             You choose : %c and Computer choose : %c",choice,selectedChar);
		return 0;
	}
	
	
	if(selectedChar=='r'&&choice=='p')
	{
		printf("                             Wow! You have won the game!\n"); 
		printf("                             You choose : %c and Computer choose : %c",choice,selectedChar);
		return 0;
	}
	
	if(selectedChar=='p'&&choice=='s')
	{
		printf("                             Wow! You have won the game!\n"); 
		printf("                             You choose : %c and Computer choose : %c",choice,selectedChar);
		return 0;
	}
	
	if(selectedChar=='r'&&choice=='s')
	{
		printf("                             Oh! You have lost the game!\n"); 
		printf("                             You choose : %c and Computer choose : %c",choice,selectedChar);
		return 0;
	}
	
	
} 
char randomChoice(const char *choices)
{
	size_t length = 0;
    while (choices[length] != '\0') {
        length++;
    }

    if (length == 0) {
        return '\0'; 
    }

    int randomIndex = rand() % length; 
    return choices[randomIndex];  
}