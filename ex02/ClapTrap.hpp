/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:59:04 by tbez--du          #+#    #+#             */
/*   Updated: 2026/05/15 21:24:26 by tbez--du         ###   ########.fr       */
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

	void	virtual attack( const std::string& name );
	void	virtual takeDamage( unsigned int amount );
	void	virtual beRepaired( unsigned int amount );

protected:
	std::string		_name;
	int				_hitPoint;
	int				_energyPoint;
	unsigned int	_attackDamage;
};
