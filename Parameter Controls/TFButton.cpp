/*
  ==============================================================================

	TFButton.cpp
	Created: 15 Oct 2019 5:12:10pm
	Author:  tonyh

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"

#include "TFButton.h"

TFButton::TFButton()
{
	// TODO: Move the images and button drawing to the TFLookAndFeel class

	const Image freezeOnImage = ImageCache::getFromMemory(BinaryData::freeze_on_png, BinaryData::freeze_on_pngSize);
	const Image freezeOffImage = ImageCache::getFromMemory(BinaryData::freeze_off_png, BinaryData::freeze_off_pngSize);

	setImages(true, true, true,
		freezeOffImage,
		1.f, Colour::fromFloatRGBA(0.f, 0.f, 0.f, 0.f),
		freezeOffImage,
		1.f, Colour::fromFloatRGBA(0.f, 0.f, 0.f, 0.f),
		freezeOnImage,
		1.f, Colour::fromFloatRGBA(0.f, 0.f, 0.f, 0.f));
	setClickingTogglesState(true);
}

TFButton::~TFButton()
{
}

