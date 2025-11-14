#include "Prerequisites.h"

std::mutex mtx;
int global_counter = 0;

void thread(int id) {
  for (unsigned int i = 0; i < 5; i++) {
    mtx.lock();
    std::cout << "Thread " << id << " is running." << std::endl;
    mtx.unlock();
  }
}

void threadCount(int id) {
  for (unsigned int i = 0; i < 1000; i++) {
    mtx.lock();
    global_counter++;
    mtx.unlock();
  }
}

void threadName(int id, std::string name) {
  for (unsigned int i = 0; i < 5; i++) {
    mtx.lock();
    std::cout << "Thread " << name << " is running." << std::endl;
    mtx.unlock();
  }
}

int
main() {
  std::thread t1(thread, 1);
  std::thread t2(threadName, 2, "Samuel");
  std::thread t3(threadCount, 3);

  t1.join();
  t2.join();
  t3.join();

  std::cout << "Global counter: " << global_counter << std::endl;

  return 0;
}