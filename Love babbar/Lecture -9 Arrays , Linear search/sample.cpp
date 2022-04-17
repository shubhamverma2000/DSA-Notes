#include"stdio.h"
void main()
{
	char c;
	FILE *fp;
	fp=fopen("myfile.txt","w+");
	fprintf(fp,"you know");
	fclose(fp);
	fp=fopen("myfile.txt","r");
	clrscr();
	while((c=fgetc(fp))!=EOF)
	printf("%c",c);
	fclose(fp);
	getch();
}
