/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 18:23:28 by tbez--du          #+#    #+#             */
/*   Updated: 2026/05/20 15:30:17 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap( const std::string& name );
	ScavTrap( const ScavTrap &o );
	ScavTrap& operator=( const ScavTrap &o );
	~ScavTrap( void );
	
	void	attack( const std::string& name );
	void	takeDamage( unsigned int amount );
	void	guardGate( void );
private:

};
