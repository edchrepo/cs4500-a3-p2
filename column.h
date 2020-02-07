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
	String* to_string() {}
}


class IntColumn : public Column {
public: 

	// Default constructor for IntColumn.
	IntColumn() {}

	// Default destructor.
	~IntColumn() {}

	// Puts the specified IntObject at the specified index.
	void set(IntObject* i, size_t idx) {}

	// Adds the specified IntObject at the end of the column.
	void push_back(IntObject* i, size_t idx) {}

	// Gets the IntObject at specified index.
	IntObject* get(size_t idx) {}

	// Removes and returns the IntObject at specified index.
	IntObject* remove(size_t idx) {}

	// Gets the sum of this column.
	int sum() {}

	// Gets the product of this column.
	int product() {}

	// Returns the column as a string.
	String* to_string() {}
}


class BoolColumn : public Column {
public: 

	// Default constructor for BoolColumn.
	BoolColumn() {}

	// Default destructor.
	~BoolColumn() {}

	// Puts the specified BoolObject at the specified index as a BoolObject.
	void set(BoolObject* b, size_t idx) {}

	// Adds the specified BoolObject at the end of the column as a BoolObject.
	void push_back(BoolObject* b, size_t idx) {}

	// Gets the BoolObject at specified index.
	BoolObject* get(size_t idx) {}

	// Removes and returns the BoolObject at specified index.
	BoolObject* remove(size_t idx) {}

	// Returns the column as a string.
	String* to_string() {}
}
