/** @file

  Copyright (c) 2008 - 2009, Apple Inc. All rights reserved.<BR>
  Portions Copyright (c) 2011 - 2013, ARM Ltd. All rights reserved.<BR>
  Copyright (c) 2020, NUVIA Inc. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef AARCH64_LIB_H_
#define AARCH64_LIB_H_

typedef VOID (*AARCH64_CACHE_OPERATION)(
  UINTN
  );

VOID
AArch64AllDataCachesOperation (
  IN  AARCH64_CACHE_OPERATION  DataCacheOperation
  );

VOID
EFIAPI
ArmInvalidateDataCacheEntryBySetWay (
  IN  UINTN  SetWayFormat
  );

VOID
EFIAPI
ArmCleanDataCacheEntryBySetWay (
  IN  UINTN  SetWayFormat
  );

VOID
EFIAPI
ArmCleanInvalidateDataCacheEntryBySetWay (
  IN  UINTN  SetWayFormat
  );

UINTN
EFIAPI
ArmReadIdAA64Dfr0 (
  VOID
  );

UINTN
EFIAPI
ArmReadIdAA64Dfr1 (
  VOID
  );

UINTN
EFIAPI
ArmReadIdAA64Fpfr0 (
  VOID
  );

UINTN
EFIAPI
ArmReadIdAA64Isar0 (
  VOID
  );

UINTN
EFIAPI
ArmReadIdAA64Isar1 (
  VOID
  );

UINTN
EFIAPI
ArmReadIdAA64Isar2 (
  VOID
  );

UINTN
EFIAPI
ArmReadIdAA64Isar3 (
  VOID
  );

UINTN
EFIAPI
ArmReadIdAA64Mmfr0 (
  VOID
  );

UINTN
EFIAPI
ArmReadIdAA64Mmfr1 (
  VOID
  );

UINTN
EFIAPI
ArmReadIdAA64Mmfr2 (
  VOID
  );

UINTN
EFIAPI
ArmReadIdAA64Mmfr3 (
  VOID
  );

UINTN
EFIAPI
ArmReadIdAA64Mmfr4 (
  VOID
  );

UINTN
EFIAPI
ArmReadIdAA64Pfr0 (
  VOID
  );

UINTN
EFIAPI
ArmReadIdAA64Pfr1 (
  VOID
  );

UINTN
EFIAPI
ArmReadIdAA64Pfr2 (
  VOID
  );

UINTN
EFIAPI
ArmReadIdAA64Smfr0 (
  VOID
  );

UINTN
EFIAPI
ArmReadIdAA64Zfr0 (
  VOID
  );

#endif // AARCH64_LIB_H_
