/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:09:46 by athirion          #+#    #+#             */
/*   Updated: 2022/10/17 14:09:47 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm: public Form {

    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &src);
        ~ShrubberyCreationForm(void);

        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

        void    execute(Bureaucrat const & executor) const;
		int		executeShrubbery(void) const;
	
	private:

		class	OpenError : public std::exception {

			const char* what() const throw() {

				return ("The file couldn't be opened\n");
			}
		};

		class	CreationError : public std::exception {

			const char* what() const throw() {

				return ("The file couldn't be created\n");
			}
		};
};

#endif
