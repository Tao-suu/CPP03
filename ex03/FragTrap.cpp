/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 13:29:31 by tbez--du          #+#    #+#             */
/*   Updated: 2026/05/16 15:09:56 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap()
{
	std::cout << "FragTrap base constructor called" << std::endl;
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( const std::string& name ): ClapTrap( name )
{
	std::cout << "FragTrap name constructor called" << std::endl;
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap( const FragTrap& o ): ClapTrap( o )
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=( const FragTrap& o )
{
	std::cout << "FragTrap = operator called" << std::endl;
	if (this != &o)
		ClapTrap::operator=(o); 
	return *this;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	if (!this->_hitPoint)
	{
		std::cout << this->_name << " is dead..." << std::endl;
		return ;
	}
	if (!this->_energyPoint)
	{
		std::cout << this->_name << " is exausted" << std::endl;
		return ;
	}

	std::cout << this->_name << " say \'High Five Guys ?!\'" << std::endl;
}
