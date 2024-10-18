# 4)How memory is managed in Python?
#Python's memory management is handled automatically by a garbage collector. This means that programmers don't need to explicitly allocate or deallocate memory for variables. The garbage collector identifies objects that are no longer in use and reclaims their memory.
# Techniques: 
# Garbage collection :Garbage collection is an automatic process that detects memory the system isn’t using and frees up that space. 
# Reference counting : When you’re working with Python, the Python memory manager uses reference counting to track how frequently a program uses an object(object is a variable containing data, such as an integer or a string).
# Generators and iterators : Generators and iterators allow you to create data streams that load one at a time rather than the entire data sequence being stored automatically within the memory.
# GIL(Global Interpreter lock) : GIL allows you to prevent threads from interfering with the others' reference counts. 