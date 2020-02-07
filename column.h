//lang: Cpp
#pragma once
#include <stdio.h>

#include "object.h"
#include "string.h"
#include "primitives.h"

class Column : public Object {
public: 

	// Default constructor for column.
	Column() {}

	// Constructor for passing in specified objects.
	Column(Object* o, ...) {
	}

	// Default destructor.
	virtual ~Column() {}

	// Returns the amount of objects in the column.
	size_t count() {}

	// Puts the specified object at the specified index.
	void set(Object* o, size_t idx) {}

	// Adds the specified object at the end of the column.
	void push_back(Object* o, size_t idx) {}

	// Gets the object at specified index.
	Object* get(size_t idx) {}

	// Removes and returns object at specified index.
	Object* remove(size_t idx) {}

	// Returns true if two columns are equal.
  bool equals(Object* const obj) {}

  // Returns this column's hash value.
  size_t hash() {}
}


class StringColumn : public Column {
public: 

	// Default constructor for StringColumn.
	StringColumn() {}

	// Constructor for passing in specified strings.
	StringColumn(String* s, ...) {
	}

	// Default destructor.
	~StringColumn() {}

	// Puts the specified string at the specified index.
	void set(String* s, size_t idx) {}

	// Adds the specified string at the end of the column.
	void push_back(String* s, size_t idx) {}

	// Gets the string at specified index.
	String* get(size_t idx) {}

	// Removes and returns string at specified index.
	String* remove(size_t idx) {}

	// Returns the column as a string.
	char* to_string() {}
}


class IntColumn : public Column {
public: 

	// Default constructor for IntColumn.
	IntColumn() {}

	// Constructor for passing in specified ints.
	// This will convert the ints into IntObjects and store them accordingly
	IntColumn(int i, ...) {
	}

	// Default destructor.
	~IntColumn() {}

	// Puts the specified int at the specified index as an IntObject.
	void set(int i, size_t idx) {}

	// Adds the specified int at the end of the column as an IntObject.
	void push_back(int i, size_t idx) {}

	// Gets the IntObject at specified index as an int.
	int get(size_t idx) {}

	// Removes the IntObject at specified index and returns it as an int.
	int remove(size_t idx) {}

	// Gets the sum of this column.
	int sum() {}

	// Gets the product of this column.
	int product() {}

	// Returns the column as a string.
	char* to_string() {}
}


class BoolColumn : public Column {
public: 

	// Default constructor for BoolColumn.
	BoolColumn() {}

	// Constructor for passing in specified booleans.
	// This will convert the bools into BoolObjects and store them accordingly
	BoolColumn(bool b, ...) {
	}

	// Default destructor.
	~BoolColumn() {}

	// Puts the specified bool at the specified index as a BoolObject.
	void set(bool b, size_t idx) {}

	// Adds the specified bool at the end of the column as a BoolObject.
	void push_back(bool b, size_t idx) {}

	// Gets the BoolObject at specified index as a bool.
	bool get(size_t idx) {}

	// Removes the BoolObject at specified index and returns it as a bool.
	bool remove(size_t idx) {}

	// Returns the column as a string.
	char* to_string() {}
}
