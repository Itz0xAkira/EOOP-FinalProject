#ifndef ORDER_DEF
#define ORDER_DEF

#include <string>
#include <vector>
#include "shop.h"
#include "customer.h"
#include "driver.h"
#include "flower.h"
using namespace std;

enum OrderType
{
    SEPERATED = 0,
    BOUQUET = 1
};

typedef struct _orderDetail
{
    vector<Flower *> flowers;
    vector<int> quantities;
    OrderType type;
    double subtotalPrice;
} OrderDetail;

typedef struct _order
{
    int orderID;
    Shop *shop;
    Driver *driver;
    Customer *customer;
    vector<OrderDetail*> details;
    double totalPrice;
    struct _order *nextOrder;
} Order;

string getOrderTypeAsString(OrderType orderType);

#endif