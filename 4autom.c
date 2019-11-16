#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char s[20],c;
	int state=0,i=0;
	printf("\n Enter a string:");
	gets(s);
	while(s[i]!='\0') {
		switch(state)
		{
			case 0: c=s[i++];
				printf("\n Entered case 0 : c = %c",c);
				if(c=='a')
					state=1;
				else
					state=5;

				printf("\n State  = %d",state);
				break;
			case 1:	c=s[i++];
				printf("\n Entered case 0 : c = %c",c);
				if(c=='a')
					state=1;
				else if(c=='b')
					state=2;
				else if(c=='c')
					state=3;
				else
					state=5;

				printf("\n State  = %d",state);
				break;
			case 2: c=s[i++];
				printf("\n Entered case 0 : c = %c",c);
				if(c=='b')
					state=2;
				else if(c=='c')
					state=3;
				else
					state=5;

				printf("\n State  = %d",state);
				break;
			case 3: c=s[i++];
				printf("\n Entered case 0 : c = %c",c);
				if(c=='c')
					state=3;
				else if(c=='d')
					state=4;
				else
					state=5;

				printf("\n State  = %d",state);
				break;

			case 4: c=s[i++];
				printf("\n Entered case 0 : c = %c",c);
				if(c=='d')
					state=4;
				else
					state=5;

				printf("\n State  = %d",state);
				break;

			case 5: printf("\n %s is not recognised.",s);
				exit(0);
		}
	}
	if(state!=5)
		printf("\n %s is accepted under rule 'a*b*c*d*'",s);
	else
		printf("\n Not accepeted by any of the rule");
}
