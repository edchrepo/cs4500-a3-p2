//lang::CwC
#pragma once
#include <cstdlib>
#include <cstring>
#include <cstdio>

#include "object.h"

class IntObject: public Object {
public:
	/** CONSTRUCTORS & DESTRUCTORS **/

  /* Default IntObject constructor */
  IntObject() {
  }

  /* Creates an IntObject copying int i */
  IntObject(const int i) {
  }

  /* Creates an IntObject copying the value from i */
  IntObject(IntObject* const i) {
  }

  /* Clears IntObject from memory */
  ~IntObject() {
  }

  // Returns this IntObject as a string.
	char* to_string() {}


	/** INHERITED METHODS **/

  /* Inherited from Object, generates a hash for an IntObject */
  size_t hash() {
  }

  /* Inherited from Object, checks equality between an IntObject and an Object */
  bool equals(Object* const obj) {
  }
}


class BoolObject: public Object {
public:
	/** CONSTRUCTORS & DESTRUCTORS **/

  /* Default BoolObject constructor */
  BoolObject() {
  }

  /* Creates a BoolObject copying bool b */
  BoolObject(const bool b) {
  }

  /* Creates a BoolObject copying the value from b */
  BoolObject(BoolObject* const b) {
  }

  /* Clears BoolObject from memory */
  ~BoolObject() {
  }

  // Returns this BoolObject as a string.
	char* to_string() {}


	/** INHERITED METHODS **/

  /* Inherited from Object, generates a hash for a BoolObject */
  size_t hash() {
  }

  /* Inherited from Object, checks equality between a BoolObject and an Object */
  bool equals(Object* const obj) {
  }
}