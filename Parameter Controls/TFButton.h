/*
  ==============================================================================

    TFButton.h
    Created: 15 Oct 2019 5:12:10pm
    Author:  tonyh

  ==============================================================================
*/

#pragma once

#include "JuceHeader.h"

class TFButton : public ImageButton
{
public:
	TFButton();
	~TFButton();

private:
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(TFButton);
};