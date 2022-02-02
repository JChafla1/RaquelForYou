#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#endif /* FUNCTIONS_H_ */

struct info{
    char author[100];
    char editorial[50];
    char state[20];
    int units;
};

struct date{
	int day;
	int month;
	int year;
};

struct book{
    int id;
    char name[50];
    char cln[50];
    int lend;
    struct info infor;
    struct date data;
};

int validate();
void modifyData(struct book *, int);
void printData(struct book *, int);
