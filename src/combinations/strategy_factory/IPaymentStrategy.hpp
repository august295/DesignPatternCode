#pragma once

#include "PaymentRequest.h"

#include <string>

class IPaymentStrategy
{
public:
    virtual ~IPaymentStrategy() = default;

    virtual void Pay(const PaymentRequest & request) = 0;
    virtual std::string Name() const = 0;
};
