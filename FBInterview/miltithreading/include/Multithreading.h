#include <condition_variable>
#include <thread>
#include <vector>
#include <atomic>

/**
 * @todo Wait for "PrepareData(...)" to complete and then do some work. Use the condition variable for sync threads.
 *
 * @param InputData - input data to modify
 * @param bIsDataReady - bool value to check if data is ready
 *
 */
void WaitAndDoWork(std::vector<int>& InputData, bool& bIsDataReady);

/**
 * @todo Notify "WaitAndDoWork(...)" that data is ready for modification. Use the condition variable for sync threads.
 *
 * @param InputData - input data to modify
 * @param bIsDataReady - bool value to check if data is ready
 *
 */
void PrepareData(std::vector<int>& InputData, bool& bIsDataReady);

/**
 * @todo Wait for "PrepareDataAtomic(...)" to complete and then do some work. Use the std::atomic<bool> for sync threads.
 *
 * @param InputData - input data to modify
 * @param bIsDataReady - bool value to check if data is ready
 *
 */
void WaitAndDoWorkAtomic(std::vector<int>& InputData, std::atomic<bool>& bIsDataReady);

/**
 * @todo Notify "WaitAndDoWorkAtomic(...)" that data is ready for modification. Use the std::atomic<bool> for sync threads.
 *
 * @param InputData - input data to modify
 * @param bIsDataReady - bool value to check if data is ready
 *
 */
void PrepareDataAtomic(std::vector<int>& InputData, std::atomic<bool>& bIsDataReady);
