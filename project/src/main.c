#include <utils.h>
int main(void) {
bool twice = 1;
bool enter = 0;
char choice = 0;
FILE *Ptr, *Ptr_2 , *blackrecord;
Data_t client_data = {0, {'0'}, {'0'}, {'0'}, {'0'}, 0, 0, 0};
Data_t transfer = {0, {'0'}, {'0'}, {'0'}, {'0'}, 0, 0, 0};
printf("%s", "please enter action\n1 enter data client:\n2 enter data transaction:\n3 update base\n");
while (scanf("%c", &choice)!= -1) {
if (choice == '\n'&&twice) {
if(enter) {
break;
}
enter = 1;
continue;
} else {
enter = 0;}
if(twice) {
switch(choice)  {
case 49:
Ptr = fopen("record.dat", "r+");
if(Ptr == NULL) {
puts("Not acess");
} else {
masterWrite(Ptr, client_data);
fclose(Ptr);
}
break;
case 50:
Ptr = fopen("transaction.dat", "r+");
if(Ptr == NULL) {
puts("Not acess");
} else {
transactionWrite(Ptr, transfer);
fclose(Ptr);
}
break;
case 51:
Ptr = fopen("record.dat", "r");
Ptr_2 = fopen("transaction.dat", "r");
blackrecord = fopen("blackrecord.dat", "w");
if(Ptr == NULL || Ptr_2 == NULL) {
puts("exit");
} else {
blackRecord(Ptr, Ptr_2, blackrecord, client_data, transfer);
fclose(Ptr);
fclose(Ptr_2);
fclose(blackrecord);
}
break;
default:
puts("error");
break;
}}
twice =!twice;
}
printf("%s", "please enter action\n1 enter data client:\n2 enter data transaction:\n3 update base\n");
return 0;
}
