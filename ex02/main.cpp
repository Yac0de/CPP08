#include <iostream>
#include "MutantStack.hpp"

int main()
{
    try
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        MutantStack<int> mstack;
        for (int i = 0; i < 10; ++i)
            mstack.push(i);

        std::cout << "Stack elements: ";
        for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;

        std::cout << "Stack elements in reverse: ";
        for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit)
            std::cout << *rit << " ";
        std::cout << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        MutantStack<int> mstack1;
        for (int i = 0; i < 5; ++i)
            mstack1.push(i * 10);

        MutantStack<int> mstack2(mstack1);
        std::cout << "Copied stack elements: ";
        for (MutantStack<int>::iterator it = mstack2.begin(); it != mstack2.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
