#ifndef CUSTOMER_DEF
#define CUSTOMER_DEF

#include <string>
#include <vector>
#include "flower.h"
#include "order.h"
#include "user.h"

using namespace std;

class Customer : public User
{
protected:
    vector<Order *> orders;

public:
    Customer(); // default constructor
    Customer(string username, string password, string name, int phoneNum, double balance);
    Customer(string name, int phoneNum, double balance);

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
     * @param balance is the Balance the user has to buy flowers
     *
     */

    void placeOrder(string FlowerName, int amount);

    /**
     *
     * @brief
     * placeOrder is a function that allowes the user to order
     * flowers from a spacific shop
     *
     * @param FlowerName is the name of the flower that the customer wants
     *
     * @param amount is the amount of the flower that this user wants to buy
     */

    bool checkOrder(int id);

    ~Customer();
};

#endif