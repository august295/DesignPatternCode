#include <iostream>
#include <memory>
#include <string>
#include <vector>

#include "PaymentRequest.h"
#include "PaymentService.h"
#include "PaymentStrategyFactory.h"

/**
 * 1. 组合示例：策略 + 工厂
 *      使用工厂按配置创建具体策略，使用策略模式执行可替换算法。
 * 2. 典型场景
 *      支付方式选择、压缩算法切换、排序或校验算法动态选择。
 * 3. 职责划分
 *      PaymentStrategyFactory: 根据配置创建具体支付策略
 *      IPaymentStrategy: 定义支付算法接口
 *      ConcreteStrategy: 实现不同支付方式
 *      PaymentService: 持有策略并执行业务流程
 */
int main()
{
    PaymentService service;
    PaymentRequest request = {"ORDER-20260508", 199.0, "CNY"};
    std::vector<std::string> paymentMethods = {"alipay", "wechat", "bankcard"};

    for (std::size_t i = 0; i < paymentMethods.size(); ++i)
    {
        std::shared_ptr<IPaymentStrategy> strategy =
            PaymentStrategyFactory::Create(paymentMethods[i]);

        service.SetStrategy(strategy);

        std::cout << "Current strategy: " << service.CurrentStrategyName() << std::endl;
        service.Checkout(request);
        std::cout << std::endl;
    }

    return 0;
}
