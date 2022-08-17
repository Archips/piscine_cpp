/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:31:05 by athirion          #+#    #+#             */
/*   Updated: 2022/08/17 14:11:50 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact {

	public:

		char	*name;
		char	*lastName;
		char	*nickname;
		char	*phoneNumber;
		char	*darkestSecret;

		Contact(void);
		~Contact(void);

	private:

		int		_nbContact;
};

#endif
