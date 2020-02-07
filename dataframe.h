//lang: Cpp
#pragma once
#include <stdarg.h>
#include <stdio.h>

#include "column.h"

class DataFrame: public Object {
public:

	// Default constructor for DataFrame.
	DataFrame() {
	}

	// Constructor for passing in specified columns.
	DataFrame(Column* c, ...) {
	}

	// Destructor.
	~DataFrame() {
	}

	// Prints the DataFrame.
	void print() {
	}

	// Adds a new column to the DataFrame.
	void add(Column* c) {
	}

	// Adds a list of columns to the DataFrame.
	void addAll(Column** cc) {
	}

	// Adds a row (entry) to the end of each column of the DataFrame.
	// The parameters passed in must match the type of each column it's added to.
	void addRow(Object* o, ...) {
	}

	// Gets the object at the specified row and specified column.
	Object* get(size_t row, size_t column) {
	}

	// Gets the object at the specified row name and specified column name.
	Object* get(const char* row_name, const char* column_name) {
	}

	// Gets the data row count
	size_t nrow() {
	}

	// Gets the data column count
	size_t ncol() {
	}
}
