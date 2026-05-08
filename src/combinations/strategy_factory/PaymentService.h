#pragma once

#include "PaymentRequest.h"

#include <memory>
#include <string>

class IPaymentStrategy;

class PaymentService
{
public:
    void SetStrategy(const std::shared_ptr<IPaymentStrategy> & strategy);
    void Checkout(const PaymentRequest & request) const;
    std::string CurrentStrategyName() const;

private:
    std::shared_ptr<IPaymentStrategy> strategy_;
};
