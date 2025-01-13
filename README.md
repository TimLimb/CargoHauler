# CargoHauler

Transporter Simulation Program

This program simulates the operation of transporters—trains and buses—that carry cargo and people, respectively. Each transporter can perform the following actions:

    Load one item
    Unload one item
    Empty all items
    Move to the next destination/stop (with a display message)
    Report whether it is empty and the number of items being carried

Special Features

    Trains:
        Transport cargo with defined type (e.g., coal, hay) and weight.
        Report the total weight of all cargo.

    Buses:
        Transport people arranged by height (shortest to tallest).
        Allow fare adjustment and calculate total fare for all passengers.

Main Program

The main driver demonstrates the functionality of the program by:

    Creating a train, loading it with cargo, and showcasing its operations.
    Creating a bus, allowing people to board, and demonstrating its operations.

All console input/output occurs in the main function, except for movement messages displayed by transporters.
