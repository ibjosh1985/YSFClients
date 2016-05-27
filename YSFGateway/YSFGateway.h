/*
*   Copyright (C) 2016 by Jonathan Naylor G4KLX
*
*   This program is free software; you can redistribute it and/or modify
*   it under the terms of the GNU General Public License as published by
*   the Free Software Foundation; either version 2 of the License, or
*   (at your option) any later version.
*
*   This program is distributed in the hope that it will be useful,
*   but WITHOUT ANY WARRANTY; without even the implied warranty of
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*   GNU General Public License for more details.
*
*   You should have received a copy of the GNU General Public License
*   along with this program; if not, write to the Free Software
*   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#if !defined(YSFGateway_H)
#define	YSFGateway_H

#include "Network.h"
#include "WiresX.h"
#include "Hosts.h"
#include "Conf.h"
#include "GPS.h"

#include <string>

class CYSFGateway
{
public:
	CYSFGateway(const std::string& configFile);
	~CYSFGateway();

	int run();

private:
	CConf     m_conf;
	CGPS*     m_gps;
	CHosts*   m_hosts;
	CWiresX*  m_wiresX;
	CNetwork* m_netNetwork;
	bool      m_linked;

	void createGPS();
	bool connect(const unsigned char* source);
};

#endif
