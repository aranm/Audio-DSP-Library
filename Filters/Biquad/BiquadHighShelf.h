/*
 *  BiquadHighShelf.h
 *  Library
 *
 *  Created by Helder Vasconcelos on 10/10/11.
 *  Copyright 2010 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef BIQUADHIGHSHELF_H
#define BIQUADHIGHSHELF_H

#include "BiquadFilter.h"


class BiquadHighShelf: public BiquadFilter{
	
	
public:
	
	BiquadHighShelf(UInt32 Nchan):BiquadFilter(Nchan){}
	BiquadHighShelf():BiquadFilter(2){}
	
	void Setup            ( Float32 normFreq, Float32 dB, Float32 shelfSlope=1.0);
	void SetupFast        ( Float32 normFreq, Float32 dB, Float32 shelfSlope=1.0 );


protected:
	void SetupCommon    ( Float32 cs, Float32 A, Float32 sa );
	
};


#endif

