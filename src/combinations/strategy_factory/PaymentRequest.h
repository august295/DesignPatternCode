#pragma once

#include <string>

struct PaymentRequest
{
    std::string orderId;
    double amount;
    std::string currency;
};
