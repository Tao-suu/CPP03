/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 18:21:14 by tbez--du          #+#    #+#             */
/*   Updated: 2026/05/16 15:10:48 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

int	main( void )
{
	{
		std::cout << "[ CONSTUCTOR TESTS ]" << std::endl;
		FragTrap trap1;
		FragTrap trap2( "Steve" );
		FragTrap trap3( trap2 );
		trap1 = trap3;
	}
	{
		std::cout << std::endl << "[ ClapTrap FUNCTIONS TESTS ]" << std::endl;
		ClapTrap	trap1( "Steve" );
		trap1.attack( "George" );
		trap1.takeDamage( 5 );
		trap1.beRepaired( 10 );
		trap1.takeDamage( 20 );
		trap1.attack( "Michel" );
	}
	{
		std::cout << std::endl << "[ ScavTrap FUNCTIONS TESTS ]" << std::endl;
		ScavTrap trap1( "Steve" );
		trap1.attack( "George" );
		trap1.takeDamage( 50 );
		trap1.beRepaired( 100 );
		trap1.guardGate();
		trap1.takeDamage( 200 );
		trap1.guardGate();
	}
	{
		std::cout << std::endl << "[ FragTrap FUNCTIONS TESTS ]" << std::endl;
		FragTrap trap1( "Steve" );
		trap1.attack( "George" );
		trap1.takeDamage( 50 );
		trap1.beRepaired( 100 );
		trap1.highFivesGuys();
		trap1.takeDamage( 200 );
		trap1.highFivesGuys();
	}
}
