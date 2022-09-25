# 生成器模式



## 1 模式的定义

生成器模式(Builder Pattern)：将一个复杂对象的构建与它的表示分离，使得同样的构建过程可以创建不同的表示。

生成器模式是一步一步创建一个复杂的对象，它允许用户只通过指定复杂对象的类型和内容就可以构建它们，用户不需要知道内部的具体构建细节。生成器模式属于对象创建型模式。根据中文翻译的不同，生成器模式又可以称为建造者模式。



## 2 模式的结构

### 2.1 结构图

![Builder.jpg](builder.assets/Builder.jpg)

### 2.2 参与者

1. 生成器（Builder）接口声明在所有类型生成器中通用的产品构造步骤。
2. 具体生成器（Concrete Builders）提供构造过程的不同实现。具体生成器也可以构造不遵循通用接口的产品。
3. 产品（Products）是最终生成的对象。由不同生成器构造的产品无需属于同一类层次结构或接口。
4. 主管（Director）类定义调用构造步骤的顺序，这样你就可以创建和复用特定的产品配置。



## 3 模式分析

抽象建造者类中定义了产品的创建方法和返回方法;

建造者模式的结构中还引入了一个指挥者类Director，该类的作用主要有两个：一方面它隔离了客户与生产过程；另一方面它负责控制产品的生成过程。指挥者针对抽象建造者编程，客户端只需要知道具体建造者的类型，即可通过指挥者类调用建造者的相关方法，返回一个完整的产品对象

在客户端代码中，无须关心产品对象的具体组装过程，只需确定具体建造者的类型即可，建造者模式将复杂对象的构建与对象的表现分离开来，这样使得同样的构建过程可以创建出不同的表现。



## 4 适用环境

- 需要生成的产品对象有复杂的内部结构，这些产品对象通常包含多个成员属性。
- 需要生成的产品对象的属性相互依赖，需要指定其生成顺序。
- 对象的创建过程独立于创建该对象的类。在建造者模式中引入了指挥者类，将创建过程封装在指挥者类中，而不在建造者类中。
- 隔离复杂对象的创建和使用，并使得相同的创建过程可以创建不同的产品。



## 5 代码实现

[https://github.com/august295/DesignPatternCode](https://github.com/august295/DesignPatternCode)



## 参考

[1] [https://refactoringguru.cn/design-patterns/builder](https://refactoringguru.cn/design-patterns/builder)

[2] [https://design-patterns.readthedocs.io/zh_CN/latest/creational_patterns/builder.htmll](https://design-patterns.readthedocs.io/zh_CN/latest/creational_patterns/builder.html)
