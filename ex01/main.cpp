#include "Span.hpp"
#include <ctime>

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        std::srand(std::time(0));
        Span largeSpan(10000);
        for (int i = 0; i < 10000; ++i)
            largeSpan.addNumber(rand());
        std::cout << std::endl << "Shortest Span: " << largeSpan.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << largeSpan.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


    try
    {
        Span rangeSpan(10);
        std::list<int> rangeList;
        rangeList.push_back(1);
        rangeList.push_back(2);
        rangeList.push_back(3);
        rangeList.push_back(4);
        rangeList.push_back(5);
        rangeSpan.addNumbers(rangeList.begin(), rangeList.end());
        std::cout << std::endl << "Shortest Span: " << rangeSpan.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << rangeSpan.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
