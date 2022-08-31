/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:42:05 by athirion          #+#    #+#             */
/*   Updated: 2022/08/29 14:25:29 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook {

	public:

		PhoneBook(void);
		~PhoneBook(void);
		
        int		addName(std::string *name);
		int		addLastName(std::string *lastName);
		int		addNickName(std::string *nickName);
		int		addPhoneNumber(std::string *phoneNumber);
		int		addSecret(std::string *secret);
		int		addContact(void);

        void    fillPhoneBook(std::string name, std::string lastName,
                              std::string nickName, std::string phoneNumber,
                              std::string secret, int index);
		
		int		searchContact(void) const;
		void    displayPhoneBook(int index) const;
        void    displayContact(int index) const ;
        int     getNbContact(void) const ;
		int		checkNb(std::string number) const;

    private:

        Contact _book[8];
        int     _nbContact;
};

#endif
