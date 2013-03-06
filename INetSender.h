/*
 * Copyright (c) 2007-08, Vivek Rajagopalan, vivek at unleashnetworks com
 * All rights reserved
 *
 * This file is part of Trisul Network Metering and Forensics.
 * 
 * Trisul is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Trisul is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Trisul. If not, see <http://www.gnu.org/licenses/>.
 */

 /**/

#ifndef INETSENDER_DEFINED_H
#define INETSENDER_DEFINED_H


class INetSender
{

public:
	virtual ~INetSender();
	virtual bool			Open(const char *  lpszInterfaceName)=0;
	virtual const char *	GetLastError()=0;
	virtual void			Close()=0;
	virtual bool			SendPacket(const unsigned char * pBytes, unsigned long uLen)=0;
};

#endif
