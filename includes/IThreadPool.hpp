//
// Created by Grégoire on 26/09/2017.
//

#ifndef ITHREADPOOL_HPP
#define ITHREADPOOL_HPP

#include <memory>
#include "IThreadGroup.hpp"

class IThreadPool {
public:
    virtual void init(std::unique_ptr<IThreadGroup> threads) = 0;
    virtual void run() = 0;
    virtual void stop() = 0;
    virtual ~IThreadPool() = 0;
};


#endif //ITHREADPOOL_HPP
