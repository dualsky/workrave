// NetworkAddress.hh
//
// Copyright (C) 2012 Rob Caelers <robc@krandor.nl>
// All rights reserved.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef WORKRAVE_NETWORK_NETWORKADDRESS_HH
#define WORKRAVE_NETWORK_NETWORKADDRESS_HH

#include <string>
#include <boost/shared_ptr.hpp>

namespace workrave
{
  namespace network
  {
    class NetworkAddress
    {
    public:
      typedef boost::shared_ptr<NetworkAddress> Ptr;
  
    public:
      static Ptr create(const std::string &host, int port = 0);

      virtual ~NetworkAddress() {}

      virtual bool operator==(const NetworkAddress &other) = 0;
      virtual const std::string str() = 0;
      virtual const std::string addr_str() = 0;
    };
  }
}

#endif
