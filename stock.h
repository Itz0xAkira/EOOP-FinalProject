#ifndef STOCK_DEF
#define STOCK_DEF

#include <string>
#include <vector>
#include "flower.h"

using namespace std;

class StockInfo
{
private:
    Flower *flower;
    int quantity;
    double price;

public:
    StockInfo(Flower &flower, const int quantity, const double price);
    int getQuantity();
    void setQuantity();
    double getPrice();
    void setPrice();
    ~StockInfo();
};

class Stock
{
private:
    vector<StockInfo *> stockEntries;

public:
    bool isFlowerInStock(Flower &flower);
    StockInfo *getStockInfo(Flower &flower);
};

#endif