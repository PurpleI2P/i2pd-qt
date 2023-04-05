#ifndef ConcurrentHolder_H
#define ConcurrentHolder_H

#include <QRecursiveMutex>
#include "MutexWrapperLock.h"
#include <assert.h>

template <class HeldDataType>
class ConcurrentHolder
{
public:
    ConcurrentHolder(HeldDataType _data) {
        data = _data;
        mutex = new QRecursiveMutex();
        assert(mutex!=nullptr);
    }
    ~ConcurrentHolder() {
        assert(mutex!=nullptr);
        delete mutex;
    }
    QRecursiveMutex* getMutex() {
        assert(mutex!=nullptr);
        return mutex;
    }
    HeldDataType& getData() {
        return data;
    }
private:
    HeldDataType data;
    QRecursiveMutex* mutex;
};

#endif // ConcurrentHolder_H
