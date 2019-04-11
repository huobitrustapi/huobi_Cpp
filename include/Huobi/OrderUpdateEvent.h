#ifndef ORDERUPDATEEVENT_H
#define ORDERUPDATEEVENT_H

#include <string>
#include "Order.h"

namespace Huobi {

    /**
     * The order update received by subscription of order update.
     */
    struct OrderUpdateEvent {
        /**
         * The symbol you subscribed.
         */
        std::string symbol;
        
        /**
         * The UNIX formatted timestamp generated by server in UTC.
         */
        long timestamp;
        
        /**
         * The order detail.
         */
        Order data;
    };
}

#endif /* ORDERUPDATEEVENT_H */
