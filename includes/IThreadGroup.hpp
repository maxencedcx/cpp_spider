//
// Created by Grégoire on 26/09/2017.
//

#ifndef ITHREAD_HPP
#define ITHREAD_HPP


class IThreadGroup {
public:
    virtual void init(int nbThread) = 0;
    virtual void joinAll() = 0;
    virtual void interruptAll() = 0;
    virtual ~IThreadGroup() = 0;
};


#endif //ITHREAD_HPP
