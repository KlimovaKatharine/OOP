#include <stdio.h>
#include <stdlib.h>
 
 using namespace std;
 
int main()
{
	FILE *f;
    int count = 0;
    char letter = ' ';
    char a;
    for (char c = 'a'; c <= 'z'; c++)
    {
    	if ((f = fopen("in.txt", "r")) == 0)
		perror("in.txt");
    	int tmp = 0;
    	while (!feof(f))
    	{
    		a = fgetc(f);
    		if (a == c)
    			tmp++;
		}
		if (tmp > count)
		{
			count = tmp;
			letter = c;
		}
	}
	printf ("Most frequent letter is %c, occurs %d times\n",letter,count);
	fclose (f);
    return 0;
}
