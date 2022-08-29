/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:31:05 by athirion          #+#    #+#             */
/*   Updated: 2022/08/29 11:43:07 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact {

	public:

		Contact(void);
		~Contact(void);

		std::string getName(void) const;
        std::string getLastName(void) const;
        std::string getNickname(void) const;
        std::string getPhoneNumber(void) const;
        std::string getSecret(void) const;
		void        setName(std::string name);
        void        setLastName(std::string lastName);
        void        setNickname(std::string nickname);
        void        setPhoneNumber(std::string phoneNumber);
        void        setSecret(std::string secret);

	private:

        std::string _name;
        std::string _lastName;
        std::string _nickname;
        std::string _phoneNumber;
        std::string	_darkestSecret;
};

#endif
