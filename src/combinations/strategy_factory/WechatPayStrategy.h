#pragma once

#include "IPaymentStrategy.hpp"

class WechatPayStrategy : public IPaymentStrategy
{
public:
    void Pay(const PaymentRequest & request) override;
    std::string Name() const override;
};
