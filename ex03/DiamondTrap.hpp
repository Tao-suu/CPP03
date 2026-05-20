/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 15:14:55 by tbez--du          #+#    #+#             */
/*   Updated: 2026/05/20 15:37:35 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
public:
	DiamondTrap( void );
	DiamondTrap( const std::string& name );
	DiamondTrap( const DiamondTrap& o );
	DiamondTrap& operator=( const DiamondTrap& o );
	~DiamondTrap();

	void	whoAmI();

private:
	std::string _name;
};
