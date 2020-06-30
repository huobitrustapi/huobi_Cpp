//
// Created by 袁雪琪 on 2020/5/7.
//

#ifndef HUOBI_WEBSOCKETORDERSCLIENT_H
#define HUOBI_WEBSOCKETORDERSCLIENT_H

#include "include.h"

struct websocketOrdersClient {
    websocketOrdersClient(char *accessKey, char *secretKey) : signature{accessKey, secretKey} {
    }

    void subOrders(const char* symbol, const std::function<void(const OrdersUpdate &)> &handler);

    Signature signature;
};

#endif //HUOBI_WEBSOCKETORDERSCLIENT_H
