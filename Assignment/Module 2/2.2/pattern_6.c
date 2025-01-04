/* pattern
A
A B
A B C
A B C D
A B C D E
*/
#include<stdio.h>
int main()
{
	int row=5,i;
	char j;
	
	for(i=1;i<=row;i++)
	{
		for(j='A';j<'A'+i;j++)
		{
			printf(" %c",j);
		}
		printf("\n");
	}
	return 0;
}
