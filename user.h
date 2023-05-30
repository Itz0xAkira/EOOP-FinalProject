#ifndef USER_DEF
#define USER_DEF

#include <string>
#include <vector>
#include "flower.h"

using namespace std;

class User
{
protected:
    string username;
    string password;
    string name;
    int phoneNum;
    double balance;
 
public:
    User(); // default constructor

    User(string username, string password, string name, int phoneNum, double balance);
    User(string name, int phoneNum, double balance);
    /**
     *
     * @brief
     * param constrcutor is the constructor for the class that
     * has parameters to assign user-wanted specific values
     * to the instance variables of different objects
     *
     * @param name is the name of the customer
     *
     * @param phoneNum is the phone number of the customer
     *
     * @param balance is the balance the user has to buy flowers
     *
     */

    double getBalance(); // a function to show the balance of a customer
    void setBalance(); // a function to show the balance of a customer

    ~User();
};

#endif