/*
  ==============================================================================

	TFCombobox.h
	Created: 16 Oct 2019 12:17:45pm
	Author:  tonyh

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

#include "../Helpers/TFInterfaceDefines.h"

//==============================================================================
/*
*/
class TFCombobox : public Component
{
public:
	TFCombobox();
	~TFCombobox();

	void paint(Graphics&) override;
	void resized() override;

private:
	ComboBox combobox;
	Image labelImage;
	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(TFCombobox)
};
