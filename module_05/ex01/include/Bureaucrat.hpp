/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 13:11:52 by athirion          #+#    #+#             */
/*   Updated: 2022/10/15 14:13:52 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <string>

class Bureaucrat {

    public:

        Bureaucrat(void);
        Bureaucrat(const std::string name, int _grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat(void);

		Bureaucrat	&operator=(const Bureaucrat &rhs);

		std::string	getName(void) const;
		int			getGrade(void) const;

		void		incrementGrade(void);
		void		decrementGrade(void);

    private:

        const std::string   _name;
        int                 _grade;
		
		class GradeTooLowException: public std::exception {
			
			const char* what() const throw() {
		
				return ("The grade is too low\n");
			}
		};

		class GradeTooHighException: public std::exception {

			const char* what() const throw() {
			
				return ("The grade is too high\n");
			}
		};
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
