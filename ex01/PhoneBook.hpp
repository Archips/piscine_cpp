/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:42:05 by athirion          #+#    #+#             */
/*   Updated: 2022/08/17 14:08:19 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook {

	public:

		PhoneBook(void);
		~PhoneBook(void);

        void    fillPhoneBook(std::string name, std::string lastName,
                              std::string nickName, std::string phoneNumber,
                              std::string secret, int index);

        void    displayPhoneBook(int index, std::string name,
                                 std::string lastName, std::string nickName) const;

        void    displayContact(int index) const ;
        int     getNbContact(void) const ;

    private:

        Contact _book[8];
        int     _nbContact;
};

#endif
