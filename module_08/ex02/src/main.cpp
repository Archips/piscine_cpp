#include "MutantStack.hpp"
#include <iostream>
#include <list>


int main()
{
    {
        std::cout << ">>>> Subject Test <<<<" << std::endl;
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
//[...]
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
    }

    {
        std::cout << std::endl << ">>>> List Test <<<<" << std::endl;

        std::list<int> list;
        list.push_back(5);
        list.push_back(17);
        std::cout << list.back() << std::endl;
        list.pop_back();
        std::cout << list.size() << std::endl;
        list.push_back(3);
        list.push_back(5);
        list.push_back(737);
        //[...]
        list.push_back(0);
        std::list<int>::iterator it = list.begin();
        std::list<int>::iterator ite = list.end();
        ++it;
        --it;
        while (it != ite) {
            std::cout << *it << std::endl;
            ++it;
        }
    }

    {
        std::cout << std::endl << ">>>> Additional Tests <<<<" << std::endl;
        MutantStack<std::string> mstack;
        mstack.push("Salut");
        mstack.push("Ciao");
        mstack.push("Hello");
        mstack.push("Bonjour");
        std::cout << "Top : ";
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "Size : ";
        std::cout << mstack.size() << std::endl;
        mstack.push("Bye");
        mstack.push("Au revoir");
        MutantStack<std::string>::reverse_iterator itr = mstack.rbegin();
        MutantStack<std::string>::reverse_iterator iter = mstack.rend();
        std::cout << "Size : ";
        std::cout << mstack.size() << std::endl;
        std::cout << "Top : ";
        std::cout << mstack.top() << std::endl;
        while (itr != iter)
        {
            std::cout << *itr << std::endl;
            ++itr;
        }
        std::cout << "------" << std::endl;
        MutantStack<std::string>::iterator it = mstack.begin();
        MutantStack<std::string>::iterator ite = mstack.end();
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
    }

    std::cout << std::endl;
    return 0;
}
