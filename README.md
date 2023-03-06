# OOP_study
1) ducks - strategy design pattern - defines a family of algorithms,
encapsulates each one, and makes them interchangeable.
Strategy lets the algorithm vary independently from
clients that use it.
2) weather - observer pattern - defines a one-to-many
dependency between objects so that when one
object changes state, all of its dependents are
notified and updated automatically.
3) beverage - the decorator pattern - attaches additional
responsibilities to an object dynamically.
Decorators provide a flexible alternative to
subclassing for extending functionality.
4) Pizza(factory_method_and_abstract_factory(method createPizza in PizzaStore)) - factory method pattern - defines an interface for creating an object, but lets subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses.
5) Pizza(factory_method_and_abstract_factory(ingridient factories)) - abstract factory pattern - provides an interface for creating families of related or dependent objects without specifying their concrete classes.
!Main difference - factory method creates 1 object, while abstract factory can create a family of object using composition!
6) Randomizer - singleton pattern - ensures a class has only one
instance, and provides a global point of access to it.
7) remote_control - the command pattern - encapsulates a request as an
object, thereby letting you parameterize other objects
with different requests, queue or log requests, and
support undoable operations.
8) Adapter - The Adapter Pattern - converts the interface of a class
into another interface the clients expect. Adapter lets
classes work together that couldn’t otherwise because of
incompatible interfaces.
