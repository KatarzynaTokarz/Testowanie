#include <iostream>
#include <queue>

int main()
{
    std::queue<int> testedQueue;

    std::cout << "Initially, container.size(): " << testedQueue.size() << '\n';

    for (int i = 0; i < 5; ++i)
        testedQueue.push(i);

    std::cout << "After adding elements, container.size(): " << testedQueue.size() << '\n';
}