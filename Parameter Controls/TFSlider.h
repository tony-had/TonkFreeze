/*
  ==============================================================================

	TFSlider.h
	Created: 22 Oct 2019 11:45:29am
	Author:  tonyh

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class TFSlider : public Component
{
public:
	TFSlider(Image minImage, Image maxImage);
	~TFSlider();

	void paint(Graphics&) override;
	void resized() override;

private:
	Slider slider;
	Image minLabelImage;
	Image maxLabelImage;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(TFSlider)
};
