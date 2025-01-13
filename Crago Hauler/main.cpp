/*Timothy Hand
*Main.cpp- Creates a train and loads cargo, creates a bus and loads people based on height
 *and unloads them at destination
 *09/18/2024
 */

#include <iostream>
#include "Cargo.h"
#include "Person.h"
#include "Train.h"
#include "Bus.h"

using namespace std;

int main() {
    // Create a train and load it with cargo
    Train train;
    Cargo coal("Coal", 100);
    Cargo hay("Hay", 50);
    train.load(&coal);
    train.load(&hay);

    // Create a bus and let people get on
    Bus bus(5); // Setting an initial fare per person
    Person Timothy("Timothy", 180.34);
    Person Logan("Logan", 182.88);
    Person Bogey("Bogey the dog", 91.44);
    bus.load(&Timothy);
    bus.load(&Logan);
    bus.load(&Bogey);

    // Demonstrate various actions
    cout << "Train cargo weight: " << train.reportCargoWeight() << endl;
    cout << "Bus fare is $5 per person. Pay up!!" << endl;
    cout << "Bus total fare: " << bus.totalFare() << endl;
    train.move();
    bus.move();

    // Display passengers on the bus
    bus.displayPassengers();

    // Unload cargo from the train and people from the bus
    train.unload();
    bus.unload();

    train.empty();
    bus.empty();

    cout << "Train is empty: " << train.isEmpty() << std::endl;
    cout << "Bus is empty: " << bus.isEmpty() << std::endl;

    return 0;
}