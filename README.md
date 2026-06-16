# What I learned in CPP


### `const std::string& getType() const;`
**frst const:** The return type, which returns a referense to the string and doesn't make a copy. The caller is also not allowed to modify it.

**second const:** A const member function. It promises the compiler that this function will not modify any private variables insise the class.

**All getter functions should have a `const` at the end.**

