/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 13:26:37 by tbez--du          #+#    #+#             */
/*   Updated: 2026/05/20 15:37:57 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
	FragTrap( void );
	FragTrap( const std::string& name );
	FragTrap( const FragTrap& o );
	FragTrap& operator=( const FragTrap& o );
	~FragTrap( void );

	void	highFivesGuys( void );
};
