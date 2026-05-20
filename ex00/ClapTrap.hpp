/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:59:04 by tbez--du          #+#    #+#             */
/*   Updated: 2026/05/05 20:04:54 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ClapTrap {
public:
	ClapTrap( void );
	ClapTrap( const std::string& name );
	ClapTrap( const ClapTrap& o );
	ClapTrap& operator=( const ClapTrap& o );
	~ClapTrap( void );

	void	attack( const std::string& name );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

private:
	std::string		_name;
	int				_hitPoint;
	int				_energyPoint;
	unsigned int	_attackDamage;
};
