#include "../include/Multithreading.h"

void WaitAndDoWork(std::vector<int>& InputData, bool& bIsDataReady)
{
	// @todo wait for PrepareData method to be executed

	// do work
	InputData[1] = 2;
}

void PrepareData(std::vector<int>& InputData, bool& bIsDataReady)
{
	// Prepare data
	InputData = { 1 , 0, 3 };

	// @todo notify WaitAndDoWork that data is ready
}

void WaitAndDoWorkAtomic(std::vector<int>& InputData, std::atomic<bool>& bIsDataReady)
{
	// @todo wait for PrepareData method to be executed

	// do work
	InputData[1] = 2;
}

void PrepareDataAtomic(std::vector<int>& InputData, std::atomic<bool>& bIsDataReady)
{
	// Prepare data
	InputData = { 1 , 0, 3 };

	// @todo notify WaitAndDoWork that data is ready
}