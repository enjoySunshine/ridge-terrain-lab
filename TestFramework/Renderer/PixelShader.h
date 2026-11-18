// Jolt Physics Library
// SPDX-FileCopyrightText: 2024 Jorrit Rouwe
// SPDX-License-Identifier: MIT

#pragma once

#include <Jolt/Core/Reference.h>

/// Pixel shader handle
class PixelShader : public RefTarget<PixelShader>
{
public:
	/// Destructor
	virtual					~PixelShader() = default;
};
