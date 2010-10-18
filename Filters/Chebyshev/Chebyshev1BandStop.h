/************************************************************************
 
 Product: Portable Audio Dsp Library 
 Version: V0.0.1
 File: Chebyshev1BandStop.cpp
 Creation date: 2010/08/10
 Author: Hélder Vasconcelos helder.vasc@e-2points.com 
 Description: Class Tester
 
 
 Copyright (c) 2010 Hélder Vasconcelos
 
 This library is free software; you can redistribute it and/or modify 
 it under the terms of the GNU Lesser General Public License as published by 
 the Free Software Foundation; either version 2.1 of the License, or 
 (at your option) any later version.
 
 This library is distributed in the hope that it will be useful, 
 but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License 
 for more details.
 
 You should have received a copy of the GNU Lesser General Public License 
 along with this library; if not, write to the Free Software Foundation, Inc., 
 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA 
 
 ****************************************************************************/

#ifndef CHEBYSHEVBANDSTOP_H
#define CHEBYSHEVBANDSTOP_H

#include "Chebyshev1Filter.h"

class Chebyshev1BandStop : public Chebyshev1Filter
{

	
public:
	
	Chebyshev1BandStop(UInt32 Order,UInt32 NChannels):Chebyshev1Filter(2*Order,NChannels){ 
		
		ttype=BANDSTOPTRANSF;
	}
	
	void    SetupAs( Float32 centerFreq, Float32 normWidth, Float32 rippleDb );




};


#endif
