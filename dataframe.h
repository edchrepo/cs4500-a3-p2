//lang: Cpp
#pragma once
#include <stdarg.h>
#include <stdio.h>

#include "column.h"

class DataFrame: public Object {
public:

	// Default constructor for DataFrame
	DataFrame() {
	}

	// Constructor for passed in specified columns
	DataFrame(Column c, ...) {
	}

	// Destructor
	~DataFrame() {
	}

	// Prints the DataFrame
	void print() {
	}

	// Gets the object at the specified row and specified column
	Object* get(size_t row, size_t column) {
	}

	// Gets the object at the specified row name and specified column name
	Object* get(const char* row_name, const char* column_name) {
	}

	// Gets the data row count
	size_t nrow() {
	}

	// Gets the data column count
	size_t ncol() {
	}
}
