/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:31:05 by athirion          #+#    #+#             */
/*   Updated: 2022/08/17 13:38:11 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

class Contact {

	public:

		char	*name;
		char	*last_name;
		char	*nickname;
		char	*phone_number;
		char	*darkest_secret;

		Contact(void);
		~Contact(void);

};

#endif
