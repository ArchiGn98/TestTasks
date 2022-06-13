#include "../../pch.h"
#include "../include/Multithreading.h"

TEST(Multithreading, ConditionVariable)
{
	bool bIsDataReady{ false };
	std::vector<int> Data;
	std::vector<int> Expected{ 1, 2, 3 };

	std::thread T1(WaitAndDoWork, std::ref(Data), std::ref(bIsDataReady));
	std::thread T2(PrepareData, std::ref(Data), std::ref(bIsDataReady));

	T1.join();
	T2.join();

	EXPECT_EQ(Data, Expected);
}

TEST(Multithreading, AtomicBool)
{
	std::atomic<bool> dataReady{ false };
	std::vector<int> data;
	std::vector<int> expected{ 1, 2, 3 };

	std::thread t1(WaitAndDoWorkAtomic, std::ref(data), std::ref(dataReady));
	std::thread t2(PrepareDataAtomic, std::ref(data), std::ref(dataReady));

	t1.join();
	t2.join();

	EXPECT_EQ(data, expected);
}