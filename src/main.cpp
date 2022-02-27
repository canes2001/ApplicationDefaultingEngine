#include <iostream>

#include "SimulationBuilderFactory.h"
#include "SimulationFileReader.h"
#include "Simulation.h"

int main()
{
	// Client code. This is how this should be called.
	SimulationFileReader reader("C:/Test/Directory", SimulationBuilderFactory::getSimulationBuilder());
	std::unique_ptr<Simulation> simulation = reader.buildAndGetSimulation();

	std::cout << "Application area: " << simulation->getApplication() << std::endl;
	std::cout << "Process " << simulation->getProcess() << std::endl;
	std::cout << "Subprocess: " << simulation->getSubprocess() << std::endl;

	return 0;
}