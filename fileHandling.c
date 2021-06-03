#include<stdio.h>

void main()
{
	FILE *fp;
	char word[100];
	fp = fopen("data.txt", "r");
	while(fscanf(fp,"%s", word) != EOF)
		printf("%s ",word);
	printf("\n");
	fclose(fp);
}
