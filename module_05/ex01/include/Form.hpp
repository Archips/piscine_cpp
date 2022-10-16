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

class Form {

	public :
	
		Form(void);
		Form(std::string name, bool s, int signedGrade, int execGrade);
		Form(const Form &src);
		~Form(void);

		Form	&operator=(const Form &rhs);

		const std::string	getName(void) const;
		bool				getSigned(void) const;
		const int	    	getSignedGrade(void) const;
		const int   		getExecGrade(void) const;

		void				beSigned(Bureaucrat &bureaucrat);
		void				signForm(void);

	private :

		const std::string	_name;
		bool				_signed;
		const int			_signedGrade;
		const int			_execGrade;

		class GradeTooHighException : public std::exception {

			const char* what() const throw() {

				return ("The grade is too high\n");
			}
		};

		class GradeTooLowException : public std:exception {

			const char* what() const throw() {

				return ("The grade is too low\n");
			}
		};
};

std:ostream	& operator<<(std::ostream & o, Form const & rhs); 

# endif
