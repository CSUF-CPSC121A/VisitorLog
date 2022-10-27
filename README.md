# Visitor Logging and Reporting
## VisitorLog
Create a class called `VisitorLog` that logs food pantry visitors. It stores the CWID of each visitor logged. No need to create a constructor; we will use the default constructor provided for us.

Create a `Log` member function that accepts a CWID and adds it to the list of visitors.

Create a `TotalVisitors` member function that returns the total number of visitors.

Create a `Remove` member function that accepts a position in the list of visitors and removes the corresponding CWID.

Create a `DisplayLog` member function that displays all the CWIDs logged. The CWIDs should be numbered from 1 onwards. Let's practice by using iterators to display each element of the vector. Here is an example of the output.

```
1. 1121
2. 2221
3. 3220
```

Create a `Remove` member function that accepts a position in the list of visitors and removes the corresponding CWID. Use the `std::vector::erase` member function.

Create a `Visited` member function that accepts a CWID and returns `true` if a person with that CWID already visited and `false` otherwise. Use the `std::find` function to make it easier to find values in a `std::vector`. 

## Volunteer
Create a `Volunteer` class that stores a name and a `std::shared_ptr` to a `VisitorLog`. Pointers will allow us to create a `Volunteer` that may or may not have access to a log.

Create a default constructor that sets the name of the `Volunteer` to "Anonymous". Create a constructor overload that accepts a name and assigns it to the corresponding member variable.

Create an `AssignLogger` member function that accepts a `std::shared_ptr` to a `VisitorLog` and assigns it to the corresponding member variable.

Create a `Log` member function that accepts a visitor's CWID and returns `true` or `false`. If a `VisitorLog` was already assigned to the volunteer, call its `Log` member function and pass the CWID as its argument then return `true`. Otherwise, return `false`. *Take note that `std::shared_ptr`s are assigned to `nullptr` by default. It indicates pointing to "nothing".*

## PantryReporter
Create a `PantryReporter` class that stores the branch name and a `std::shared_ptr` to a `VisitorLog`. Pointers will allow us to create a `PantryReporter` that may or may not have access to a log.

Create a default constructor that sets the branch name of the `PantryReporter` to "Fullerton". Create a constructor overload that accepts a branch name and assigns it to the corresponding member variable.

Create an `AssignLogger` member function that accepts a `std::shared_ptr` to a `VisitorLog` and assigns it to the corresponding member variable.

Create a `Report` member function that displays the branch name. If a logger was assigned, also display the branch's total number of visitors. Here is an example of the output.

```
Branch name: Fullerton
Visitors: 3
```

## main()
Instantiate a `Volunteer` object, `PantryReporter` object, and a `std::shared_ptr` object that points to a `VisitorLog` created in the heap.

Assign the visitor log pointer to both the `Volunteer` and `PantryReporter` objects.

Log three CWIDs through the `Volunteer` object.

Report information about the pantry branch using the `PantryReporter` object. We expect the report to indicate three volunteers as the `Volunteer` and `PantryReporter` use the same visitor log. 