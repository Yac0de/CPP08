#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>
#include <list>
#include <iostream>
#include <limits>

class Span
{
private:
    Span();

    std::list<int> _l;
    unsigned int _N;
public:
    Span(unsigned int N);
    Span(const Span& src);
    ~Span();

    Span& operator=(const Span &rhs);

    std::list<int> getList() const;

    void addNumber(int n);
    size_t shortestSpan() const;
    size_t longestSpan() const;
};

#endif
