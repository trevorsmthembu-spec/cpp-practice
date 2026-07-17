# Replace and Delete Substrings

## Description

This C++ program demonstrates how to modify strings using the `find()`, `replace()`, and `erase()` member functions.

The program:
- Replaces all occurrences of one substring with another substring.
- Deletes all occurrences of a specified substring.
- Updates the original string by passing it by reference.

## Concepts Practised

- `std::string`
- `find()`
- `replace()`
- `erase()`
- Pass-by-reference
- Function parameters
- `while` loops
- String manipulation

## Example

### Input
```
A big dog and a big cat ran down a street
```

### Parameters
```cpp
findP = " a "
replaceP = "the"
deleteP = "big"
```

### Output
```
A dog andthe cat ran downthestreet
```

## Learning Outcome

This project demonstrates how to repeatedly search, replace, and delete substrings while correctly updating string positions after each modification.