/*
  ==============================================================================

	TFLookAndFeel.h
	Created: 22 Oct 2019 11:42:02am
	Author:  tonyh

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

class TFLookAndFeel : public LookAndFeel_V4
{
public:
	TFLookAndFeel()
	{
		setColour(ComboBox::backgroundColourId, Colours::transparentWhite);
		setColour(PopupMenu::backgroundColourId, Colour(4, 88, 125));
	}

	~TFLookAndFeel()
	{
	};

};
