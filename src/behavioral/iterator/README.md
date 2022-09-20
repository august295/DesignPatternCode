# 迭代器模式



## 1 概念

让你能在不暴露复杂数据结构内部细节的情况下遍历其中所有的元素。 

该模式在 C++ 代码中很常见。 许多框架和程序库都使用它来提供遍历其集合的标准方式



## 2 模式结构

### 2.1 抽象迭代器

```c++
class iterator
{
public:
    iterator();
    virtual ~Iterator();
    
    virtual [type] First()       = 0; /* 集合第一个数据 */
    virtual [type] Next()        = 0; /* 集合下一个数据 */
    virtual bool   IsDone()      = 0; /* 迭代是否结束 */
    virtual [type] CurrentItem() = 0; /* 集合当前数据 */

protected:
    [Aggregate] * [m_Aggregate];
};
```



### 2.2 使用

```c++
for (it->First(); !it->IsDone(); it->Next()) 
{
    std::cout << it2->Current()->data() << std::endl;
}
```



## 3 总结

迭代器是一种思想，现在大部分模板都实现了迭代器，了解其原理即可。
