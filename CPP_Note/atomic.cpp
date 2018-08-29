#include <iostream>
#include <thread>
#include <atomic>
#include <vector>

/*
原子类型允许原子访问，这意味着不需要额外的同步机制就可以执行并发的读写操作。
没有原子操作，递增一个变量就是线程不安全的。
应试着最小化同步次数，包括原子操作和显式同步，因为这会降低性能。
对于本例，让func()在一个本地变量中计算结果，然后添加到counter中。
g++ atomic.cpp -pthread -std=c++11
*/ 

void func(std::atomic <int> & counter) {
	int result = 0;
	for (int i = 0; i < 100; ++i) {
		++result;
		std::this_thread::sleep_for(std::chrono::milliseconds(1));
	}
	counter += result;
} 

int main() {
	std::vector <std::thread> threads;
	std::atomic <int> counter (0);
	for (int i = 0; i < 10; ++i) {
		//线程函数的参数总是复制到线程的某个内部存储中，通过std::ref()传引用 
		threads.push_back(std::thread {func, std::ref(counter)});
	}
	for (auto & t : threads) {
		t.join();
	}
	std::cout << "Result = " << counter << std::endl;
	return 0;
}
