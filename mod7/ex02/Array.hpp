/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 18:14:56 by mchatzip          #+#    #+#             */
/*   Updated: 2022/03/27 21:55:46 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <cctype>

template<typename T>
class Array
{
private:
	size_t length;
	T *array;
public:
	Array();
	Array(size_t n);
	Array(Array<T> const &other);
	virtual ~Array();

	class OutOfBoundsException: public std::exception {
		virtual const char* what() const throw();
	};

	Array &operator=(Array const &other);
	T &operator[](size_t index);
	T const &operator[](size_t index) const;

	size_t	getSize(){
		return this->length;
	}

	size_t size(void) const;
};

template<typename T>
Array<T>::Array():
	length(0), array(nullptr)
{}

template<typename T>
Array<T>::Array(size_t n):
	length(n), array(nullptr)
{
	this->array = new T[n]();
}

template<typename T>
Array<T>::Array(Array const &other):
	length(0), array(nullptr)
{
	if (other.length > 0)
	{
		this->array = new T[other.length]();
		for (size_t i = 0; i < other.length; i++)
			this->array[i] = other.array[i];
	}
	this->length = other.length;
}

template<typename T>
Array<T>::~Array()
{
	if (this->length > 0 || (!this->length && !this->array[0]))
		delete[] this->array;
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return "ArrayException: index out of bounds";
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &other)
{
	if (this->length > 0)
		delete[] this->array;
	this->array = nullptr;
	if (other.length > 0)
	{
		this->array = new T[other.length]();
		for (size_t i = 0; i < other.length; i++)
			this->array[i] = other.array[i];
	}
	this->length = other.length;
	return (*this);
}

template<typename T>
T &Array<T>::operator[](size_t index)
{
	if (index >= this->length)
		throw Array::OutOfBoundsException();
	return (this->array[index]);
}

template<typename T>
T const &Array<T>::operator[](size_t index) const
{
	return (operator[](index));
}

template<typename T>
size_t Array<T>::size(void) const
{
	return (this->length);
}

#endif