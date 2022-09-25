# 简单工厂模式



## 1 模式的定义

简单工厂模式(Simple Factory Pattern)：又称为静态工厂方法(Static Factory Method)模式，它属于类创建型模式。在简单工厂模式中，可以根据参数的不同返回不同类的实例。简单工厂模式专门定义一个类来负责创建其他类的实例，被创建的实例通常都具有共同的父类。



## 2 模式的结构

### 2.1 结构图

![SimpleFactory.jpg](factory_simple.assets/SimpleFactory.jpg)

### 2.2 参与者

1. **Factory：工厂角色**。工厂角色负责实现创建所有实例的内部逻辑
2. **Product：抽象产品角色**。抽象产品角色是所创建的所有对象的父类，负责描述所有实例所共有的公共接口

3. **ConcreteProduct：具体产品角色**。具体产品角色是创建目标，所有创建的对象都充当这个角色的某个具体类的实例。



## 3 模式分析

- 将对象的创建和对象本身业务处理分离可以降低系统的耦合度，使得两者修改起来都相对容易。
- 在调用工厂类的工厂方法时，由于工厂方法是静态方法，使用起来很方便，可通过类名直接调用，而且只需要传入一个简单的参数即可，在实际开发中，还可以在调用时将所传入的参数保存在XML等格式的配置文件中，修改参数时无须修改任何源代码。
- 简单工厂模式最大的问题在于工厂类的职责相对过重，增加新的产品需要修改工厂类的判断逻辑，这一点与开闭原则是相违背的。
- 简单工厂模式的要点在于：当你需要什么，只需要传入一个正确的参数，就可以获取你所需要的对象，而无须知道其创建细节。



## 4 适用环境

- 工厂类负责创建的对象比较少：由于创建的对象较少，不会造成工厂方法中的业务逻辑太过复杂。
- 客户端只知道传入工厂类的参数，对于如何创建对象不关心：客户端既不需要关心创建细节，甚至连类名都不需要记住，只需要知道类型所对应的参数。



## 5 代码实现

[https://github.com/august295/DesignPatternCode](https://github.com/august295/DesignPatternCode)



## 参考

[1] [https://design-patterns.readthedocs.io/zh_CN/latest/creational_patterns/simple_factory.html](https://design-patterns.readthedocs.io/zh_CN/latest/creational_patterns/simple_factory.html)
