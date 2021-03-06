/* 
 *  Copyright (c) 2010,
 *  Gavriloaie Eugen-Andrei (shiretu@gmail.com)
 *  
 *  This file is part of crtmpserver.
 *  crtmpserver is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  
 *  crtmpserver is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with crtmpserver.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef _DEFAULTPROTOCOLFACTORY_H
#define	_DEFAULTPROTOCOLFACTORY_H

#include "protocols/baseprotocolfactory.h"

class BaseProtocol;

class DLLEXP DefaultProtocolFactory
: public BaseProtocolFactory {
public:
	DefaultProtocolFactory();
	virtual ~DefaultProtocolFactory();

	virtual vector<uint64_t> HandledProtocols();
	virtual vector<string> HandledProtocolChains();
	virtual vector<uint64_t> ResolveProtocolChain(string name);
	virtual BaseProtocol *SpawnProtocol(uint64_t type, Variant &parameters);
};


#endif	/* _DEFAULTPROTOCOLFACTORY_H */


