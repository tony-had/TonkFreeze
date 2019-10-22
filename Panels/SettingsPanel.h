/*
  ==============================================================================

	SettingsPanel.h
	Created: 15 Oct 2019 7:15:39pm
	Author:  tonyh

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

#include "../Helpers/TFInterfaceDefines.h"
#include "../Parameter Controls/TFCombobox.h"
#include "../Parameter Controls/TFSlider.h"

//==============================================================================
/*
*/
class SettingsPanel : public Component
{
public:
	SettingsPanel();
	~SettingsPanel();

	void paint(Graphics&) override;
	void resized() override;

private:
	std::unique_ptr<TFCombobox> windowSizeCombobox;
	std::unique_ptr<TFCombobox> hopSizeCombobox;
	std::unique_ptr<ComboBox> windowTypeCombobox;
	std::unique_ptr<TFSlider> mixSlider;

	JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(SettingsPanel)
};
