#include "BankCardStrategy.h"

#include <iostream>

void BankCardStrategy::Pay(const PaymentRequest & request)
{
    std::cout << "[Bank Card] order=" << request.orderId
              << ", amount=" << request.amount << " " << request.currency
              << ", channel=card-gateway" << std::endl;
}

std::string BankCardStrategy::Name() const
{
    return "BankCardStrategy";
}
