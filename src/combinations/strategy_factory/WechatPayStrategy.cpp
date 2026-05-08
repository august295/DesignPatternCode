#include "WechatPayStrategy.h"

#include <iostream>

void WechatPayStrategy::Pay(const PaymentRequest & request)
{
    std::cout << "[WeChat Pay] order=" << request.orderId
              << ", amount=" << request.amount << " " << request.currency
              << ", channel=mini-program" << std::endl;
}

std::string WechatPayStrategy::Name() const
{
    return "WechatPayStrategy";
}
