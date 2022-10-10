#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {

    public:

        Animal(void);
        Animal(std::string type);
        Animal(Animal const &src);
        virtual ~Animal(void);

        Animal & operator=(Animal const &rhs);

        void                setType(std::string type);
        std::string getType(void) const;
        virtual void        makeSound(void) const;

    protected:

        std::string _type;
};

#endif