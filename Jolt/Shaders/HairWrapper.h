// Jolt Physics Library
// SPDX-FileCopyrightText: 2026 Jorrit Rouwe
// SPDX-License-Identifier: MIT

#pragma once

#ifdef JPH_USE_CPU_COMPUTE

JPH_NAMESPACE_BEGIN

class ComputeSystemCPU;

void JPH_EXPORT HairRegisterShaders(ComputeSystemCPU *inComputeSystem);

JPH_NAMESPACE_END

#endif // JPH_USE_CPU_COMPUTE
