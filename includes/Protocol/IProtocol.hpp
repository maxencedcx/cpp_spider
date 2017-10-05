/*
** Protocol.hpp for cpp_spider in /home/god/TEK3/C++/cpp_spider/includes/Protocol.hpp
**
** Made by Maxime PILLON
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Mon Sep 25 13:31:02 2017 Maxime PILLON
** Last update Mon Sep 25 13:31:02 2017 Maxime PILLON
*/

#pragma once

namespace spider
{
# include "dataStructure.hpp"

  enum class	KEYTYPE
  {
    NONE = 0,
    RC,
    LC,
    SCROLLUP,
    SCROLLDOWN,
    MC
  };

  class IProtocol {
  public:
    typedef std::queue<t_unserialized> unserialized_queue;

    virtual ~IProtocol();

    virtual void		sendData() = 0;

    virtual void		sendPing() = 0;

    virtual void		run() = 0;

    virtual unserialized_queue& getInfo() = 0;

    virtual bool		hasCommand() = 0;

    virtual void		getCommand() = 0;
  };
}