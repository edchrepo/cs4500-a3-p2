//https://github.com/chasebish/cwc_object_string
//lang::CwC
#pragma once

#include "object.h"

#include <cstdlib>
#include <cstring>
#include <cstdio> 

/**
 * An immutable String class representing a char*
  Altered from chasebish's String interface.
 * author: chasebish */
class String : public CellObject {
public:
  char* c;

  /** CONSTRUCTORS & DESTRUCTORS **/

  /* Default String constructor */
  String() {
  }

  /* Creates a String copying s */
  String(const char* s) {
  }

  /* Copies a String copying the value from s */
  String(String* const s) {
  }

  /* Clears String from memory */
  ~String() {
  }


  /** INHERITED METHODS **/

  /* Inherited from Object, generates a hash for a String */
  size_t hash() {
  }

  /* Inherited from Object, checks equality between an String and an Object */
  bool equals(Object* const obj) {
  }


  /** STRING METHODS **/

  int cmp(String* const s) {
  }

  /* Creates a new String by combining two existing Strings */
  String* concat(String* const s) {
  }

  /* Returns the current length of the String */
  size_t size() {
  }
};