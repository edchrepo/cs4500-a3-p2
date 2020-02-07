//lang: Cpp
#pragma once
#include <stdio.h>

#include "object.h"
#include "string.h"

class Column : public CellObject {
public: 

	// Default constructor for column.
	Column() {}

	// Default destructor.
	virtual ~Column() {}

	// Returns the size of column.
	size_t count() {}

	// Gets the object at specified index.
	CellObject* get(size_t idx) {}

	// Removes and returns object at specified index.
	CellObject* remove(size_t idx) {}
}


class IntColumn : public Column {
public: 

	// Default constructor for IntColumn.
	IntColumn() {}

	// Default destructor.
	~IntColumn() {}

	// Returns the size of column.
	size_t count() {}

	// Gets the int at specified index.
	int get(size_t idx) {}

	// Removes and returns int at specified index.
	int remove(size_t idx) {}
}


class StringColumn : public Column {
public: 

	// Default constructor for StringColumn.
	StringColumn() {}

	// Default destructor.
    ~StringColumn() {}

	// Returns the size of column.
	size_t count() {}

	// Gets the string at specified index.
	String get(size_t idx) {}

	// Removes and returns string at specified index.
	String remove(size_t idx) {}
}


class BoolColumn : public Column {
public: 

	// Default constructor for BoolColumn.
	BoolColumn() {}

	// Default destructor.
	~BoolColumn() {}

	// Returns the size of column.
	size_t count() {}

	// Gets the bool at specified index.
	bool get(size_t idx) {}

	// Removes and returns bool at specified index.
	bool remove(size_t idx) {}
}
