/*
** Protocol.hpp for cpp_spider in /home/god/TEK3/C++/cpp_spider/includes/Protocol/Protocol.hpp
**
** Made by Maxime PILLON
** Login   <maxime.pillon@epitech.eu>
**
** Started on  Wed Sep 27 13:29:22 2017 Maxime PILLON
** Last update Wed Sep 27 13:29:22 2017 Maxime PILLON
*/

#pragma once

#include <queue>
#include "Network/ServerNetwork.hpp"
#include "IProtocol.hpp"
#include "Serializer.hpp"

# undef PORT
# define PORT 42000

namespace spider
{
  class Protocol : public IProtocol
  {
  protected:
    typedef std::queue<t_unserialized> unserialized_queue;

    ServerNetwork		net;
    Serializer			serializer;
    std::queue<t_command>	cmds;
    unserialized_queue		data;

  public:
    Protocol();
    ~Protocol();

    void		sendData(t_message message);
    void		sendData(t_command cmd);
    void		sendData(t_register _register);
    void		sendData(t_mouse mouse);

    void		run() override;
    unserialized_queue& getInfo() override;
    void		sendPing() override;
    bool		hasCommand() override;
    void		getCommand() override;
  };
}