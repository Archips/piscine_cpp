#include "Brain.hpp"

/*
 ** CONSTRUCTORS
 */

Brain::Brain(void){

    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &src) {

    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i ++)
        this->_ideas[i] = src._ideas[i];
    *this = src;
}

/*
 ** DESTRUCTOR
 */

Brain::~Brain(void) {

    std::cout << "Brain destructor called" << std::endl;
}

/*
 ** COPY ASSIGNMENT OPERATOR
 */

Brain &Brain::operator=(const Brain &rhs) {

    std::cout << "Brain copy assignment operator called" << std::endl;
    for (int i = 0; i < 100; i ++)
        this->_ideas[i] = rhs._ideas[i];
    return (*this);
}

/*
 ** MEMBER FUNCTIONS
 */

void    Brain::cpyBrain(Brain *brain) {

    for (int i = 0; i < 100; i++)
        this->_ideas[i] = brain->getIdea(i);
}

void    Brain::setIdea(std::string idea, unsigned int index) {

    this->_ideas[index] = idea;
}

std::string Brain::getIdea(unsigned int index) const {

    return (this->_ideas[index]);
}