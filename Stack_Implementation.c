#include <stdio.h>
int ele=0;
long int cho;
int count=0;

int main(int argc, char const *argv[])
{
	long int stack[5];
	
	printf("  =>Chose 1 to PUSH\n");
	printf("  =>Chose 2 to POP            \n");
	printf("  =>Chose 3 to Show The Stack \n");
	printf("  =>Chose 4 to EXIT           \n");
	
	while(1)
	{
		printf("Your Choise: ");
		scanf("%ld",&cho);
		if (cho==1){
			printf("Element to push: \n");
			scanf("%ld",&stack[ele]);
			ele++;
			count++;
		}
		else if (cho==2){
			ele--;
		}
		else if (cho==3)
		{	
			if (count%2==0)
			{
				for (int i=ele-1;i>=0;i--)	
				{
					
					printf("%ld\n",stack[i]);
				}
			}
			else
			{
				
				for (int i=ele-1;i>=0;i--)				
					printf("%ld\n",stack[i]);

					
			}
		}
		else if (cho==4){
			printf("Exits!!\n");
			return 0;}
		else
			printf("Invalid Input!!!!\nTry again\n");	
	}
}
