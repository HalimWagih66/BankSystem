#ifndef CLIENT_H
#define CLIENT_H
#include<iostream>
#include"Person.h"
using namespace std;

class Client:public Person{
    double balance ;
    public:

        Client(int,string,string,double);
        ~Client() ;
        void setBalance(double) ;
        double getBalance() ;
        void deposit(double) ;
        void withdraw(double) ;
        void trasnferTo(double,Client&);
        void display() ;
};

#endif // CLIENT_H
