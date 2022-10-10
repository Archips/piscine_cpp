#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal {

    public:

        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &src);
        virtual ~WrongAnimal(void);

        WrongAnimal & operator=(WrongAnimal const &rhs);

        void                setType(std::string type);
        std::string getType(void) const;
        void        makeSound(void) const;

    protected:

        std::string _type;
};

#endif
