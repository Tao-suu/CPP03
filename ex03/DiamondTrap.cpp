/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 15:18:36 by tbez--du          #+#    #+#             */
/*   Updated: 2026/05/20 15:56:50 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ):
	ClapTrap("_clap_name"), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "";
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap( const std::string& name ):
	ClapTrap(name + "_clap_trap"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap( const DiamondTrap& o ):
	ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->_name = o._name;
	this->ClapTrap::_name = o.ClapTrap::_name;
	this->_hitPoint = o._hitPoint;
	this->_energyPoint = o._energyPoint;
	this->_attackDamage = o._attackDamage;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap& o )
{
	std::cout << "DiamondTrap = operator called" << std::endl;
	this->_name = o._name;
	this->ClapTrap::_name = o.ClapTrap::_name;
	this->_hitPoint = o._hitPoint;
	this->_energyPoint = o._energyPoint;
	this->_attackDamage = o._attackDamage;
	return *this;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap: " << this->_name << "\tfrom " << this->ClapTrap::_name << std::endl;
}
