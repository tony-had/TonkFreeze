/*
  ==============================================================================

    TFButton.cpp
    Created: 15 Oct 2019 5:12:10pm
    Author:  tonyh

  ==============================================================================
*/

#include "TFButton.h"

TFButton::TFButton()
{
	setImages(true, true, true, ImageCache::getFromMemory(BinaryData::freeze_off_png, BinaryData::freeze_off_pngSize),
		1.f, Colour::fromFloatRGBA(0.f, 0.f, 0.f, 0.f),
		ImageCache::getFromMemory(BinaryData::freeze_off_png, BinaryData::freeze_off_pngSize),
		1.f, Colour::fromFloatRGBA(0.f, 0.f, 0.f, 0.f),
		ImageCache::getFromMemory(BinaryData::freeze_on_png, BinaryData::freeze_on_pngSize),
		1.f, Colour::fromFloatRGBA(0.f, 0.f, 0.f, 0.f));
	setClickingTogglesState(true);
}

TFButton::~TFButton()
{
}

