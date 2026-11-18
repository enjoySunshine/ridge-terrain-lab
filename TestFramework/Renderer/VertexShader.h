// Jolt Physics Library
// SPDX-FileCopyrightText: 2024 Jorrit Rouwe
// SPDX-License-Identifier: MIT

#pragma once

#include <Jolt/Core/Reference.h>

/// Vertex shader handle
class VertexShader : public RefTarget<VertexShader>
{
public:
	/// Destructor
	virtual					~VertexShader() = default;
};
