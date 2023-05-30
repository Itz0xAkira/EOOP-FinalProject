#ifndef LIB_DEF
#define LIB_DEF
#define SYSTEM_STATE_FILENAME "FLOWERS_SHOP_SYSTEM.state"

#include <string>
#include <vector>
#include "shop.h"
#include "customer.h"
#include "driver.h"
#include "flower.h"
#include "order.h"
using namespace std;


typedef struct _ordersList
{
    Order order;
} OrdersList;

typedef struct _shopEntry
{
    Shop *shop;
    struct _shopEntry *nextShop;
} ShopEntry;

typedef struct _shopsList
{
    ShopEntry shop;
} ShopsList;

OrdersList *ordersList;
ShopsList *shopsList;

bool initSystemState();

bool saveSystemState();

bool loadSystemState();

void processOrders();
/**
 *
 * @brief
 * It is a function that goes through the orders list and
 * it processes the order and sleeps for 1 second and
 * then it goes for the next order in the list
 *
 */

bool fullfilOrder();

#endif