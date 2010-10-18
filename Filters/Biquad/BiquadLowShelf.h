/************************************************************************
 
 Product: Portable Audio Dsp Library 
 Version: V0.0.1
 File: HanningWindow.cpp
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

#ifndef BIQUADLOWSHELF_H
#define BIQUADLOWSHELF_H

#include "BiquadFilter.h"



class BiquadLowShelf: public BiquadFilter{
	
	
public:
	
	
	BiquadLowShelf(UInt32 Nchan):BiquadFilter(Nchan){}
	BiquadLowShelf():BiquadFilter(2){}
	
	void Setup            ( Float32 normFreq, Float32 dB, Float32 shelfSlope=1.0  );
	void SetupFast        ( Float32 normFreq, Float32 dB, Float32 shelfSlope=1.0 );
protected:
	void SetupCommon    ( Float32 cs, Float32 A, Float32 sa);
	
	
	
	
	
};


#endif
