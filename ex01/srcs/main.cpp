/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sleon <sleon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:45:31 by sleon             #+#    #+#             */
/*   Updated: 2023/05/22 16:37:12 by sleon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "cmath"

template<typename T>
void	display( T &whatever )
{
	std::cout << "Variable's value is: " << whatever << std::endl;
}

void	setRandomValue( int &number )
{
	srand(time(0));
	number = rand() % 100;
}

int	main( void )
{
	std::string	strArray[3];
	int			*intArray = new int[5];

	strArray[0] = "oui";
	strArray[1] = "non";
	strArray[2] = "Ratio manu";
	::iter(strArray, 3, &display);
	for (int i = 0; i < 5; i ++)
		setRandomValue(intArray[i]);
	::iter(intArray, 5, &display);
}
