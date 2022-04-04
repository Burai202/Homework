#include <utils.h>
void transactionWrite(FILE *ofPtr, Data_t transfer) {
printf("%s\n%s\n",
"1 Number account: ",
"2 Client cash payments: ");
while(scanf("%20d %11lf", &transfer.Number, &transfer.cash_payments)  != EOF) {
fprintf(ofPtr, "%-3d%-6.2f\n", transfer.Number, transfer.cash_payments);
printf("%s\n%s\n",
"1 Number account:",
"2 Client cash payments: ");
} }

