/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbez--du <tbez--du@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 17:35:20 by tbez--du          #+#    #+#             */
/*   Updated: 2026/05/15 18:13:11 by tbez--du         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int		main( void )
{
	{
		std::cout << "[ CONSTRUCTOR TESTS ]" << std::endl;
		ClapTrap	trap1;
		ClapTrap	trap2( "Steve" );
		ClapTrap	trap3(trap2);
		trap1 = trap2;
	}
	{
		std::cout << std::endl << "[ FUNCTIONS TESTS ]" << std::endl;
		ClapTrap trap1( "Jean-Pierre" );
		trap1.attack( "Jean-Daniel" );
		trap1.takeDamage( 5 );
		trap1.beRepaired( 3 );
		trap1.takeDamage( 26 );
		trap1.attack( "Jean-Daniel" );
		trap1.beRepaired( 12 );
		trap1.takeDamage( 12 );
	}
}
