/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncatrien <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 10:01:43 by ncatrien          #+#    #+#             */
/*   Updated: 2021/12/01 10:45:44 by ncatrien         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain default constructor called" << std::endl;
	return;
}

Brain::Brain( Brain const& src ) {
	std::cout << "Brain copy constructor called" << std::endl;

	*this = src;
}

Brain::~Brain( ) {
	std::cout << "Brain destructor called" << std::endl;
	return;
}

Brain&	Brain::operator=( Brain const& rhs ) {
	std::cout << "Brain assignment operator called" << std::endl;

	if (this != &rhs) {
		for (int i = 0; i < NUM_IDEAS; ++i)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

void	Brain::addIdea( std::string idea ) {

	static int i = 0;

	this->_ideas[i++] = idea;
	if (i == NUM_IDEAS)
		i = 0;
}

void	Brain::showIdeas( void ) const {

	for (int i = 0; i < NUM_IDEAS; ++i) {
		if (this->_ideas[i].size() == 0) {
			if (i == 0)
				std::cout << "no idea in brain";
			break;
		}
		std::cout << this->_ideas[i] << " | ";
	}
	std::cout << std::endl;
}

