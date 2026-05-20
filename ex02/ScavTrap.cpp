/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 18:29:12 by tbez--du          #+#    #+#             */
/*   Updated: 2026/05/16 02:38:25 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap( )
{	
	this->_name = "";
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap base constructor called" << std::endl;
}

ScavTrap::ScavTrap( const std::string& name ): ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap name constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &o ): ClapTrap(o)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap &o )
{
	std::cout << "ScavTrap = operator called" << std::endl;

	if (this != &o)
		ClapTrap::operator=(o);
	return *this;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void ScavTrap::attack( const std::string& name )
{
	std::cout << this->_name << " fracasse la gueule a " << name << std::endl;
}

void ScavTrap::takeDamage( unsigned int amount )
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

void	ScavTrap::guardGate( void )
{
	if (!this->_hitPoint)
	{
		std::cout << this->_name << " is dead can't be in gae keeper mode" << std::endl;
		return ;
	}
	if (!this->_energyPoint)
	{
		std::cout << this->_name << " is exausted (" << this->_energyPoint << " energy point)" << std::endl;
		return ;
	}

	std::cout << this->_name << " is in gate keeper mode" << std::endl;
}
