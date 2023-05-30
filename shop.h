#ifndef SHOP_DEF
#define SHOP_DEF

#include <string>
#include <vector>
#include "driver.h"
#include "flower.h"

using namespace std;


class Shop
{
private:
    string name;
    double vault;
    vector <Driver*> hiredDrivers;
    vector <Flower*> stock;

public:
    Shop(string name, double initialBalance); // Construtor

    Shop();

    void setBalance(double amount);

    /**
    
        @brief 
        This function is to set the starting balance of the shop
        in order for it to buy flowers and to hire drivers

        @param amount is the amount passed in the function for 
        the balance
    
    */
    
    bool hireDriver(Driver &Driver);

    /**
    
        @brief
        This function is to hire a driver and it will add it to the Vector
        in the Shop object

        @param Driver is the driver object passed in the function 
    
    */

    bool isFlowerAvailable(Flower &Flower, int amount);

    /**
    
        @brief
        This function is to search for the type of the flower that the customer
        wants to buy and it checks if it's in the stock which is repersented as 
        a vector and if the number of the flowers ordered is in the stock

        @param Flower is the Flower object passed in the funcion

        @param amount is the Flowers number the user requested 
        
        @return true if the flower exist in the stock and false if not

    */

    bool buyFlowers(string name, int quantity);

    /**
    
        @brief
        This function is to Buy the Type of the Flower that the shop wants after
        it checks if it exist in the wearhouse or not

        @see isFlowerAvailable()

        @param Flower is the Flower object passed in the funcion 

        @return True if the Flower is availabe to buy from the wearhouse and false if not

    */

    bool sellFlowers(string name, int quantity);

    /**
    
        @brief
        This function is to Sell for the type of the flower that the customer
        wants to buy and it checks if it's in the stock which is repersented as 
        a vector

        @param Flower is the Flower object passed in the funcion 
        
        @see isFlowerAvailable()

        @return True if the Flower is availabe to buy from the wearhouse and false if not


    */

    bool checkDriver(Driver &Driver);
    
    ~Shop(); // destructor 
};

#endif