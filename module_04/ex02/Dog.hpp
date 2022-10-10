#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

    public:

        Dog(void);
        Dog(Dog const &src);
        virtual ~Dog(void);

        Dog & operator=(Dog const &rhs);

        void            setIdea(std::string idea, unsigned int index);
        std::string     getIdea(unsigned int index) const;
        virtual void    makeSound(void) const;

    private:

        Brain *_brain;
};

#endif
