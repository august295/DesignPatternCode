#include "PaymentStrategyFactory.h"

#include "AlipayStrategy.h"
#include "BankCardStrategy.h"
#include "IPaymentStrategy.hpp"
#include "WechatPayStrategy.h"

#include <memory>
#include <stdexcept>

std::shared_ptr<IPaymentStrategy> PaymentStrategyFactory::Create(const std::string & paymentMethod)
{
    if (paymentMethod == "alipay")
    {
        return std::make_shared<AlipayStrategy>();
    }

    if (paymentMethod == "wechat")
    {
        return std::make_shared<WechatPayStrategy>();
    }

    if (paymentMethod == "bankcard")
    {
        return std::make_shared<BankCardStrategy>();
    }

    throw std::invalid_argument("unsupported payment method: " + paymentMethod);
}
