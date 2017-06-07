#include <stdio.h>
#include <stdlib.h>
 
 using namespace std;
 
int main()
{
	FILE *f, *o;
	char c;
   	if ((f = fopen("in.txt", "r")) == 0)
	perror("in.txt");
	if ((o = fopen("out.txt", "w")) == 0)
	perror("out.txt");
   	while (!feof(f))
   	{
    	c = fgetc(f);
    	fputc(c,o);
    	fputc(c,o);
	}
	fclose (f);
	fclose (o);
    return 0;
}
