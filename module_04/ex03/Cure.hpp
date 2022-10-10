#ifndef CURE_HPP
# define CURE_HPP

# include "ICharacter.hpp"

class Cure : virtual public AMateria {

public:

    Cure(void);
    Cure(Cure const  &src);
    virtual ~Cure(void);

    Cure & operator=(Cure const &rhs);

    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);


};

#endif