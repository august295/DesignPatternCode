#include <iostream>
#include <vector>

/**
 * 迭代器模式
 * STL 中大量使用迭代器模式。
 */
int main()
{
	std::vector<int> numVec({ 1,2,3,4,5 });
	for (auto num = numVec.begin(); num != numVec.end(); num++)
	{
		std::cout << *num << std::endl;
	}

    return 0;
}