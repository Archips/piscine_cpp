#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

class AMateria {

    public:

        AMateria(std::string const & type);
        AMateria(AMateria const &src);
        virtual ~AMateria(void);

        AMateria & operator=(Amateria const &rhs);

        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

    protected:

        const   std::string _type;
};

#endif