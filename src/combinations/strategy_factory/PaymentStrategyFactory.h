#pragma once

#include <memory>
#include <string>

class IPaymentStrategy;

class PaymentStrategyFactory
{
public:
    static std::shared_ptr<IPaymentStrategy> Create(const std::string & paymentMethod);
};
