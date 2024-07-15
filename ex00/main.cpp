#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <set>

template <typename T>
void testEasyFind(T& container, int value)
{
    try
    {
        typename T::iterator it = easyfind(container, value);
        std::cout << "Value " << value << " found at position: " << std::distance(container.begin(), it) << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

int main(void)
{
    std::vector<int> vec;
    for(int i = 0; i < 10; i++)
        vec.push_back(i);

    std::list<int> lst(vec.begin(), vec.end());
    std::deque<int> deq(vec.begin(), vec.end());
    std::set<int> st(vec.begin(), vec.end());

    int v1 = 5;
    int v2 = 15;

    std::cout << "Testing with std::vector:" << std::endl;
    testEasyFind(vec, v1);
    testEasyFind(vec, v2);

    std::cout << "\nTesting with std::list:" << std::endl;
    testEasyFind(lst, v1);
    testEasyFind(lst, v2);

    std::cout << "\nTesting with std::deque:" << std::endl;
    testEasyFind(deq, v1);
    testEasyFind(deq, v2);

    std::cout << "\nTesting with std::set:" << std::endl;
    testEasyFind(st, v1);
    testEasyFind(st, v2);

    return 0;
}
