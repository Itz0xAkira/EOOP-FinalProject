#ifndef DRIVER_DEF
#define DRIVER_DEF
#include <string>
#include <vector>
#include "shop.h"
#include "customer.h"
#include "user.h"

using namespace std;

class Driver : public User{
private:
    int id; // uniqe ID for the driver
    bool isBusy; // a Bool var to know if the driver is available 
    double paymentRate; // the payment rate for the driver
    Shop employer; // the Shop which the Driver works at

public:
    Driver(); // default constructor
    Driver(int id, string username, string password, string name, int phoneNum, double balance);
    Driver(int id, string name, double paymentRate, int phoneNum, double balance); // Construtor

    double getRate();
    
    bool setRate(double rate);
    /**
     * 
     * @brief
     * Set the Rate which the driver is paid apon
     * 
     * @param rate 
     * 
    */

    void getJob(Customer &OrderOwner);

    /**
     * 
     * @brief
     * getJob is a function that takes the Object Customer and it switches the IsBusy 
     * var into true
     * 
     * @param OrderOwner is the Object of the Customer
     * 
    */

    ~Driver(); // destuctor
};

#endif