# TechTest

### Question 1

###### What is the difference in how structs and classes are passed into methods? What is safer to use, and why? Explain with an example in your own words

###### Ans: 
`Structs` default access specifier is `public` but default access specifier of `class` is `private` so attributes of the class should be made public so that they can be modified or accessed from methods of other classes (line 6 in our *example.cpp*).

Passing by Value is safer than passing by Reference because in the Parallelized application when using *Passing by Reference* we need a locking mechanism but there is no such limitation in *Passing by Value* .


### Question 2

###### In Java, how are callbacks implemented? Demonstrate with an Object that prints the reverse of a String in a callback, upon receiving a String.

###### Ans: 
`Callback` function is used in functional programming, a function is passed to a `higher order function` like an argument and the higher order function executes it when required (When the criteria are met).

We can implement it by passing an implementation of an `Interface` to our system which is responsible for triggering an `Event`. A Callback function is called when this event is triggered.(Code is in the *example.java*)


### Question 3

##### What is the difference between Array#filter and Array#map methods?

###### Ans: 
`Filter` lets you provide a callback for every element and returns a filtered array. `Filter` executes the callback and check its return value. If the value is true element remains in the resulting array else removed for the resulting array. `Filter` never changes the value of the element and filter may result in reducing the size of the array.

`Map` takes a callback and runs it against all the elements on the array and creates a new array with the desired output. `Map` never reduces the size of the array as no element gets removed.It updates all the elements according to the callback specified.

##### What does the follow piece of code do, and how?
      if (arr.map(str => str.length > 0).filter(x => x).length > 0) {
      …
      }

###### Ans: 
Let's solve by breaking it.
`arr.map(str => str.length > 0)` will return a boolean array where all elements having a length greater than zero will be true and rest will be false.

This boolean array output will be the input for `.filter(x => x)` and it will return another boolean array with only the elements whos value is `true`.  `filter(x => x).length > 0` will return true if the newly created array has length more than `0` else it will return false.

###### Example :
    arr = ["aa","","bbb","aqws","aaa"]
    arr.map(str => str.length > 0)
> OUTPUT: (5) [true, false, true, true, true]

    arr.map(str => str.length > 0).filter(x => x)
> OUTPUT: (4) [true, true, true, true]

    arr.map(str => str.length > 0).filter(x => x).length > 0
> OUTPUT: true
