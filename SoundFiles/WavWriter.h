/************************************************************************
 
 Product: Portable Audio Dsp Library 
 Version: V0.0.1
 File: WaveWriter.h
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

#ifndef WAVEWRITER_H
#define WAVEWRITER_H

#include "WavReader.h"


/// Class for writing WAV audio files.
class WavWriter
{
private:
    /// Pointer to the WAV file
    FILE *fptr;
	
    /// WAV file header data.
    WavHeader header;
	
    /// Counter of how many bytes have been written to the file so far.
    int BytesWritten;
	
    /// Fills in WAV file header information.
    void FillInHeader(const UInt32 sampleRate, const UInt32 bits, const UInt32 channels);
	
    /// Finishes the WAV file header by supplementing information of amount of
    /// data written to file etc
    void FinishHeader();
	
    /// Writes the WAV file header.
    void WriteHeader();
	
public:
    /// Constructor: Creates a new WAV file. Throws a 'runtime_error' exception 
    /// if file creation fails.
    WavWriter(const char *fileName,    ///< Filename
               int sampleRate,          ///< Sample rate (e.g. 44100 etc)
               int bits,                ///< Bits per sample (8 or 16 bits)
               int channels             ///< Number of channels (1=mono, 2=stereo)
               );
	
    WavWriter(FILE *file, int sampleRate, int bits, int channels);
	
    /// Destructor: Finalizes & closes the WAV file.
    ~WavWriter();
	
    /// Write data to WAV file. This function works only with 8bit samples. 
    /// Throws a 'runtime_error' exception if writing to file fails.
    void Write(const char *buffer,     ///< Pointer to sample data buffer.
               int numElems             ///< How many array items are to be written to file.
               );
	
    /// Write data to WAV file. Throws a 'runtime_error' exception if writing to
    /// file fails.
    void Write(const short *buffer,     ///< Pointer to sample data buffer.
               int numElems             ///< How many array items are to be written to file.
               );
	
    /// Write data to WAV file in floating point format, saturating sample values to range
    /// [-1..+1[. Throws a 'runtime_error' exception if writing to file fails.
    void Write(const float *buffer,     ///< Pointer to sample data buffer.
               int numElems             ///< How many array items are to be written to file.
               );
};



#endif
