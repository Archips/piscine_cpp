#include "Span.hpp"

int main(void) {

    std::cout << ">>>> Subject Test <<<<" << std::endl;
    {
        Span sp = Span(-5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << std::endl << ">>>> Basic Test <<<<" << std::endl;
    {
        Span s(10);
        for (int i = 0; i < 10; i++) {
            if (i == 0)
                s.addNumber(0);
            else if (i == 1)
                s.addNumber(2);
            else
                s.addNumber(i * 5);
        }
        s.display();
        std::cout << "shortest span is: " << s.shortestSpan() << std::endl;
        std::cout << "longest span is: " << s.longestSpan() << std::endl;
    }
    std::cout << std::endl << ">>>> Fill test Span <<<<" << std::endl;
    {
        Span s(10000);
        srand(time(0));
        std::vector<int> v(10000, 0);
        std::generate(v.begin(), v.end(), rand);
        s.fill(v.begin(), v.end());
        std::cout << "Size -> [" << s.getSize() << "]" << std::endl;
        std::cout << "Shortest span -> [" << s.shortestSpan() << "]" << std::endl;
        std::cout << "Longest span -> [" << s.longestSpan() << "]" << std::endl;
    }
    std::cout << std::endl << ">>>> Impossible Span <<<<" << std::endl;
    {
        Span s(3);
        try {
            s.shortestSpan();
        } catch (const std::exception &e)
        {
            std::cout << "Error: " << e.what() << std::endl;
        }
        s.addNumber(1);
        try {
            s.longestSpan();
        } catch (const std::exception &e)
        {
            std::cout << "Error: " << e.what() << std::endl;
        }
    }
    std::cout << std::endl << ">>>> Full Span <<<<" << std::endl;
    {
        Span s(3);
        try {
            s.addNumber(2);
            s.addNumber(-45);
            s.addNumber(4);
            s.addNumber(34);
        }
        catch (const std::exception &e) {
            std::cout << "Error: " << e.what() << std::endl;
        }
        s.display();
    }

}