#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span& src) : _l(src._l), _N(src._N) {}

Span::~Span() {}

Span& Span::operator=(const Span &rhs)
{
    if (this != &rhs)
    {
        _l = rhs._l;
        _N = rhs._N;
    }
    return *this;
}

std::list<int> Span::getList() const { return this->_l; }

void Span::addNumber(int n)
{
    if (_l.size() >= this->_N)
        throw std::overflow_error("Span is full, you cannot add more numbers");
    else
        _l.push_back(n);
}

size_t Span::shortestSpan() const
{
    if (_l.size() <= 1)
        throw std::logic_error("Not enough numbers to find a span");
    std::vector<int> sorted(_l.begin(), _l.end());
    std::sort(sorted.begin(), sorted.end());
    size_t shortest = std::numeric_limits<size_t>::max();
    for (size_t i = 1; i < sorted.size(); ++i)
    {
        size_t span = sorted[i] - sorted[i - 1];
        if (span < shortest)
            shortest = span;
        if(shortest == 1)
            return shortest;
    }
    return shortest;
}

size_t Span::longestSpan() const
{
    if (_l.size() <= 1)
        throw std::logic_error("Not enough numbers to find a span");
    int min = *std::min_element(_l.begin(), _l.end());
    int max = *std::max_element(_l.begin(), _l.end());
    return static_cast<size_t>(max - min);
}
