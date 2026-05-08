#include "PaymentService.h"

#include "IPaymentStrategy.hpp"

#include <stdexcept>

void PaymentService::SetStrategy(const std::shared_ptr<IPaymentStrategy> & strategy)
{
    strategy_ = strategy;
}

void PaymentService::Checkout(const PaymentRequest & request) const
{
    if (strategy_ == nullptr)
    {
        throw std::logic_error("payment strategy is not set");
    }

    strategy_->Pay(request);
}

std::string PaymentService::CurrentStrategyName() const
{
    if (strategy_ == nullptr)
    {
        return "None";
    }

    return strategy_->Name();
}
