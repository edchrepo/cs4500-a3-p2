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
	DataFrame(Column* col, ...) {
	}

	// Destructor.
	~DataFrame() {
	}

	// Prints the DataFrame.
	void print() {
	}

	// Adds a new column to the DataFrame.
	void add(Column* col) {
	}

	// Adds a list of columns to the DataFrame.
	void add_all(Column** cols) {
	}

	// Adds a row (entry) to the end of each column of the DataFrame.
	// The parameters passed in must match the type of each column it's added to.
	void add_row(Object* o, ...) {
	}

	// Gets the object at the specified row and specified column.
	Object* get(size_t r, size_t c) {
	}

	// Gets the object at the specified row name and specified column name.
	Object* get(const char* rname, const char* cname) {
	}

	// Gets the name of the given row index.
	char* row_name(size_t r) {
	}
	
	// Gets the name of the given column index.
	char* col_name(size_t c) {
	}

	// Gets the data row count
	size_t nrow() {
	}

	// Gets the data column count
	size_t ncol() {
	}
}
