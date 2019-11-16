num (0|1)*01
%%
{num} printf("accepted");
.+ printf(" not accepted");
%%
main()
{
yyin = stdin;
printf("Enter the string");
yylex();
}
