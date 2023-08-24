SRP-1.cpp
It has a Journal (Could be struct or class. In our case it is struct) and a simple method add, that adds entries into journal.

Enhancement / New requirement:
Add a persistance to Journal such that it should be able to save journal entries to a file.

New function called "save" is added to SRP-1.cpp as per the above requirement and saved it as SRP-2.cpp

The problem with this approach is:
1) save function may change in the future when new requirement related to persistant mechanism is needed like storing to database.Then save function and all other places where it is called has to be changed. Not a good idea.
2) Morever, persistance is seperate concern. Journal is meant to have only one responsibility related to Journal activity and nothing else.
The SRP-2.cpp violates SRP.

SRP-3.cpp is more approriate and adheres to SRP. It seperates jounal and persistance into a different structs(or class).
