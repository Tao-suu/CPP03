/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 18:21:14 by tbez--du          #+#    #+#             */
/*   Updated: 2026/05/16 02:33:33 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int	main( void )
{
	{
		std::cout << "[ CONSTUCTOR TESTS ]" << std::endl;
		ScavTrap trap1;
		ScavTrap trap2( "Steve" );
		ScavTrap trap3( trap2 );
		trap1 = trap3;
	}
	{
		std::cout << std::endl << "[FUNCTIONS TESTS ]" << std::endl;
		ScavTrap trap1( "Steve" );
		trap1.attack( "George" );
		trap1.takeDamage( 50 );
		trap1.beRepaired( 100 );
		trap1.guardGate();
		trap1.takeDamage( 200 );
		trap1.guardGate();
	}
}
