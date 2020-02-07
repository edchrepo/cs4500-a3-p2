//lang::CwC
#pragma once

#include <cstdlib>

/**
 * A class that represents the top of the object hierarchy.
 * author: chasebish */
class CellObject {
public:

  CellObject() {
  }

  /* Default Object destructor, to be overriden by subclasses */
  virtual ~CellObject() { }


  /** VIRTUAL METHODS **/

  /* Returns whether two objects are equal, to be overriden by subclasses */
  virtual bool equals(Object* const obj) {
  }

  /* Returns an object's hash value. Identical objects should have identical hashes */
  virtual size_t hash() {
  }

};