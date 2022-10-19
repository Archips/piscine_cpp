/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:32:02 by athirion          #+#    #+#             */
/*   Updated: 2022/10/15 17:20:43 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

	public :
	
		Form(void);
		Form(std::string name, int signedGrade, int execGrade);
		Form(const Form &src);
		~Form(void);

		Form	&operator=(const Form &rhs);

		std::string	getName(void) const;
		bool		getSigned(void) const;
		int         getSignedGrade(void) const;
		int         getExecGrade(void) const;

		void        beSigned(const Bureaucrat &bureaucrat);

	private :

		const std::string	_name;
		bool				_signed;
		const int			_signedGrade;
		const int			_execGrade;

		class GradeTooHighException : public std::exception {

			const char* what() const throw() {

				return ("The grade is too high (form)");
			}
		};

		class GradeTooLowException : public std::exception {

			const char* what() const throw() {

				return ("The grade is too low (form)");
			}
		};
};

std::ostream	& operator<<(std::ostream & o, Form const & rhs);

# endif
