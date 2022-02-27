#ifndef SIMULATION_H
#define SIMULATION_H

#include <string>

/*
* The Simulation class is the memory representation of the user's current simulation after it is read into memory.
*/ 
class Simulation
{
public:
	Simulation();
	~Simulation();

	void setApplication(const std::string application) { m_application = application; }
	std::string getApplication() const { return m_application; }

	void setProcess(int process) { m_process = process; }
	int getProcess() const { return m_process; }

	void setSubprocess(int subprocess) { m_subprocess = subprocess; }
	int getSubprocess() const { return m_subprocess; }

private:
	std::string m_application;
	int m_process;
	int m_subprocess;
};

#endif
