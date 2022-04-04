#include <utils.h>
void blackRecord(FILE *ofPTR, FILE  *ofPTR_2 , FILE *blackrecord ,
Data_t client_data, Data_t transfer) {
while(fscanf(ofPTR, "%20d%11s%11s%11s%11s%11lf%11lf%11lf", &client_data.Number ,
client_data.Name, client_data.Surname, client_data.addres, client_data.TelNumber,
&client_data.indebtedness, &client_data.credit_limit, &client_data.cash_payments)   != EOF) {
while(fscanf(ofPTR_2, "%20d %11lf", &transfer.Number, &transfer.cash_payments) !=  EOF) {
if(client_data.Number == transfer.Number && transfer.cash_payments != 0) {
client_data.credit_limit += transfer.cash_payments;}
}
fprintf(blackrecord, "%-12d%-11s%-11s%-16s%20s%12.2f%12.2f%12.2f\n", client_data.Number,
client_data.Name, client_data.Surname, client_data.addres, client_data.TelNumber,
client_data.indebtedness, client_data.credit_limit, client_data.cash_payments);
rewind(ofPTR_2);
} }
