#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct BigInteger
{
    struct node *l;
    int sign;
    int length;
};

void sign_rev(struct node *head);
struct BigInteger initialize(char *s);


struct BigInteger add(struct BigInteger a,struct BigInteger b);
struct BigInteger add_plus_plus(struct BigInteger a,struct BigInteger b,int sign);
struct BigInteger add_minus_plus(struct BigInteger a,struct BigInteger b,int sign);



struct BigInteger sub(struct BigInteger a,struct BigInteger b);

struct BigInteger mul(struct BigInteger a,struct BigInteger b);
struct BigInteger multiply(struct BigInteger a , struct BigInteger b ,int sign);

struct BigInteger div1(struct BigInteger a , struct BigInteger b );
struct BigInteger division(struct BigInteger a , struct BigInteger b , int sign , int choice);
void div_add(struct node *t1 ,struct node *t2 ,struct node *t3 ,int *l );
void div_sub(struct node *t1 ,struct node *t2 ,struct node *t3 );
int compare(struct BigInteger j1 , struct BigInteger j2);
int compare_sub(struct node *j1 , struct node *j2);


void display(struct BigInteger c);
void print_ll(struct node *head);

void turnicate(struct BigInteger dev);

void dump(struct BigInteger c);

struct BigInteger mod(struct BigInteger a , struct BigInteger b);
//struct BigInteger mod_sub(struct BigInteger a , struct BigInteger b);