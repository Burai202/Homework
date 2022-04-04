#ifndef PROJECT_INCLUDE_UTILS_H_
#define PROJECT_INCLUDE_UTILS_H_
#define filename "transaction.dat";
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// This comment is very useful
struct masterRecord{
int Number;
char Name[20];
char Surname[20];
char addres[30];
char TelNumber[15];
double  indebtedness;
double credit_limit;
double cash_payments;};
typedef  struct  masterRecord Data_t;
void masterWrite(FILE *ofPtr, Data_t Client);
void transactionWrite(FILE *ofPtr, Data_t transfer);
void blackRecord(FILE *ofPTR, FILE  *ofPTR_2 , FILE *blackrecord ,
Data_t client_data, Data_t transfer);
#endif  //  PROJECT_INCLUDE_UTILS_H_
