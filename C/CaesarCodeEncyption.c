#include <stdio.h>
#include <string.h>
int main()
{
	int i, number;
	char str[1000],str1[1000];
	printf("Enter a sentence\n");
	gets(str);
	printf("Enter the number to change alphabetical order\n");
	scanf("%d",&number);
	i=0;
	printf("Encrypted Caesar code\n\n");
	while(str[i]!='\0')
	{
		if(!((str[i]>=0&&str[i]<65)||(str[i]>90&&str[i]<97)||(str[i]>122&&str[i]<=127)))
		{
			if((str[i]>'a'+number+1)&&(str[i]<='z')){
				printf("%c", str[i]-number-2 );
			}
			else if ((str[i]>'A'+number+1)&&(str[i]<='Z'))
			{
				printf("%c", str[i]+24-number);
			}
			else {
				printf("%c", str[i]+number);
			}
		}
		if (((str[i]>=0&&str[i]<65)||(str[i]>90&&str[i]<97)||(str[i]>122&&str[i]<=127)))
		{
			printf("%c", str[i]);
		}
		i++;
	}
	printf("\n");
	return 0;
}
