#include"stdio.h"
#include"string.h"
main()
{
	char st[]={"i'am in pp1, lab"};
	int n=strlen(st);
	char st2[n],*s;
	strcpy(st2,st);
	s=strtok(st,"'");
	printf("%s\n",s);
	while(s!=NULL)
	{
		printf("%s\n",s);
		s=strtok(NULL,",");
		
	}
}
