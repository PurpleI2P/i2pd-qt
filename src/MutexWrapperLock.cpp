#include "MutexWrapperLock.h"

MutexWrapperLock::MutexWrapperLock(QRecursiveMutex* _mutex) {
    mutex = _mutex;
    _mutex->lock();
}

MutexWrapperLock::~MutexWrapperLock() {
    mutex->unlock();
}
