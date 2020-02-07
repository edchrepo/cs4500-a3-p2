## DESIGN

This repository servess as an API for the DataFrame class. A DataFrame object can hold multiple columns that are of a single type (StringColumn -> String, IntColumn -> IntObject, BoolColumn -> BoolObject). The primitive types of "int" and "bool" are stored in wrapper classes within each column because of the "get" function in the DataFrame class. Since generics aren't available, it must return a single type (Object). Thus, the primitive data must be stored in wrapper classes that extend Object in order for "get" to function properly.


## USAGE

The DataFrame API is used when data needs to be stores effectively in a matrix-like format. While two dimensional arrays are a possibility, the utility of that data structure is rather limited. This API gives the user functionality that will provide ease-of-access to the stored data.


## EXAMPLE

The API could be used as follows:

```C++
frame = new DataFrame();
int_column = new IntColumn(5, 12, 20, 2);
str_column = new StringColumn("hi", "bye", "hello", "goodbye");

frame.addAll(int_column, str_column);
frame.addEntry(50, "hey");

frame.get(4, 1); -> 2
frame.get(5, 2); -> "hey"
```

