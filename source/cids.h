//------------------------------------------------------------------------
// Copyright(c) 2024 Oscarde.
//------------------------------------------------------------------------

#pragma once

#include "pluginterfaces/base/funknown.h"
#include "pluginterfaces/vst/vsttypes.h"

namespace MyCompanyName {
//------------------------------------------------------------------------
static const Steinberg::FUID kPDFProcessorUID (0x36A3C93E, 0xCA2651C0, 0x8C285B95, 0x0DE60886);
static const Steinberg::FUID kPDFControllerUID (0xE561A2A9, 0x3A27562F, 0xA241C049, 0xD6BED5F3);

#define PDFVST3Category "Fx"

//------------------------------------------------------------------------
} // namespace MyCompanyName
enum PDFParamIDs : Steinberg::Vst::ParamID {
    kHeightID = 102,
    kFrequencyID,
    kBandwidthID,
    kGainID,
};
