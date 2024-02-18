#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <cstdlib>
#include <stdint.h>
#include "Data.hpp"

#define DEFAULT_CONSTRUCTOR_SERIALIZE "Default Constructor Serialize Called"
#define CONSTRUCTOR_SERIALIZE "Constructor Serialize Called"
#define COPY_CONSTRUCTOR_SERIALIZE "Copy Constructor Serialize Called"
#define DESTRUCTOR_SERIALIZE "Destructor Serialize Called"
#define OPERATOR_EQUAL_SERIALIZE "Operator equal Serialize Called"

class Data;

class Serialize
{
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
