#include "driver.h"

Driver::Driver(int id, string name, double paymentRate, int phoneNum, double balance){
    this->id = id;
    this->name = name;
    this->paymentRate = paymentRate;
    this->phoneNum = phoneNum;
    this->balance = balance;
}

Driver::~Driver(){

}