/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 13:26:37 by tbez--du          #+#    #+#             */
/*   Updated: 2026/05/16 15:01:44 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap( void );
	FragTrap( const std::string& name );
	FragTrap( const FragTrap& o );
	FragTrap& operator=( const FragTrap& o );
	~FragTrap( void );

	void	highFivesGuys( void );
};
