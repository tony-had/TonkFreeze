/*
  ==============================================================================

	TFCombobox.cpp
	Created: 16 Oct 2019 12:17:45pm
	Author:  tonyh

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "TFCombobox.h"

//==============================================================================
TFCombobox::TFCombobox()
{
	addAndMakeVisible(combobox);
}

TFCombobox::~TFCombobox()
{
}

void TFCombobox::paint(Graphics& g)
{
	g.drawRect(getLocalBounds(), 1);

	g.setColour(Colours::white);
	g.setFont(14.0f);
	g.drawText("TFCombobox", getLocalBounds(),
		Justification::centred, true);
}

void TFCombobox::resized()
{
}
