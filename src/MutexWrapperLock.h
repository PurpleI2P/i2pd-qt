#ifndef MUTEXWRAPPERLOCK_H
#define MUTEXWRAPPERLOCK_H

#include <QRecursiveMutex>

class MutexWrapperLock
{
public:
    MutexWrapperLock(QRecursiveMutex* _mutex);
    ~MutexWrapperLock();
private:
    QRecursiveMutex* mutex;
};

#endif // MUTEXWRAPPERLOCK_H
