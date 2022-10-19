/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:09:38 by athirion          #+#    #+#             */
/*   Updated: 2022/10/17 14:09:39 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <cstdlib>

class RobotomyRequestForm: public Form {

    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &src);
        ~RobotomyRequestForm(void);

        RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

        int    execute(Bureaucrat const & executor) const;

	private:

        void	executeRobotomy(void) const;

		class RobotomyError : public std::exception {

			const char* what() const throw() {

				return ("The robotomy has failed");
			}
		};
};

#endif
