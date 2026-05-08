#include "AlipayStrategy.h"

#include <iostream>

void AlipayStrategy::Pay(const PaymentRequest & request)
{
    std::cout << "[Alipay] order=" << request.orderId
              << ", amount=" << request.amount << " " << request.currency
              << ", channel=mobile-qr" << std::endl;
}

std::string AlipayStrategy::Name() const
{
    return "AlipayStrategy";
}
