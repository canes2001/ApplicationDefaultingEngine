#ifndef SimulationFileReader_h
#define SimulationFileReader_h

#include <memory>
#include <string>

class AbstractSimulationBuilder;
class Simulation;

/*
* The SimulationFileReader class is responsible for reading the user's simulation input file. It outputs a Simulation object
*/
class SimulationFileReader
{
public:
	SimulationFileReader(const std::string& filePath, std::unique_ptr<AbstractSimulationBuilder> builder);
	~SimulationFileReader();

	std::unique_ptr<Simulation> buildAndGetSimulation();

private:
	std::unique_ptr<AbstractSimulationBuilder> m_builder;
};

#endif
