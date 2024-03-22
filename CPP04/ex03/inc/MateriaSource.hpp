/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipetruni <ipetruni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:22:32 by ipetruni          #+#    #+#             */
/*   Updated: 2024/03/22 15:32:25 by ipetruni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	//Private attribtes
	private:
		int _numLearnedMaterias;
		AMateria* _learnedMaterias[4];
	//Constructor
	public:
		MateriaSource();
		MateriaSource(const MateriaSource & other);
		MateriaSource &operator=(const MateriaSource & otherMateria);
	// Destructors
	public:
		virtual ~MateriaSource();
	// Public methods
	public:
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);
	
};


#endif