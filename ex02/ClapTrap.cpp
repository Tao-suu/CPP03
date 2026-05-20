/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 20:05:47 by tbez--du          #+#    #+#             */
/*   Updated: 2026/05/16 13:25:45 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
	: _name(""), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap( const std::string& name )
	: _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap name constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& o )
	: _name(o._name), _hitPoint(o._hitPoint),
	  _energyPoint(o._energyPoint), _attackDamage(o._energyPoint)
{
	std::cout << "ClapTrap copy constructor called for: " << o._name << std::endl;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& o )
{
	this->_name			= o._name;
	this->_hitPoint		= o._hitPoint;
	this->_energyPoint	= o._energyPoint;
	this->_attackDamage = o._attackDamage;
	std::cout << "Claptrap = operator called for: " << o._name << std::endl;

	return *this;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void	ClapTrap::attack( const std::string& target )
{
	if (this->_hitPoint == 0)
	{
		std::cout << this->_name << " can't attack... he's dead..." << std::endl;
		return ;
	}
	if (!this->_energyPoint)
	{
		std::cout << this->_name << " is exausted (" << this->_energyPoint << " energy point)" << std::endl;
		return ;
	}

	std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (!this->_hitPoint)
	{
		std::cout << this->_name << " is already dead :(" << std::endl;
		return ;
	}

	this->_hitPoint -= amount;
	if (this->_hitPoint < 0) this->_hitPoint = 0;

	std::cout << this->_name << " take " << amount << " damage point and fall to " << this->_hitPoint << " life point.";
	if ( !this->_hitPoint ) std::cout << "Aaaaaand...          he's dead :o" << std::endl;
	else std::cout << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if ( !this->_hitPoint )
	{
		std::cout << this->_name << " is dead, he couldn't be repaired :(" << std::endl;
		return ;
	}
	if (!this->_energyPoint)
	{
		std::cout << this->_name << " is exausted (" << this->_energyPoint << " energy point)" << std::endl;
		return ;
	}

	this->_hitPoint += amount;
	std::cout << this->_name << " just be repaired and have " << this->_hitPoint << " life point" << std::endl;
}
