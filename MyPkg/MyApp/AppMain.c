/** @file
  Brief Description of UEFI MyHelloWorld
  Detailed Description of UEFI MyHelloWorld
  Copyright for UEFI MyHelloWorld
  License for UEFI MyHelloWorld
**/

#include <Uefi.h>
#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiLib.h>

#include <Library/Tpm2DeviceLib.h>
#include <Library/Tcg2PhysicalPresenceLib.h>

/**
  as the real entry point for the application.

  @param[in] ImageHandle    The firmware allocated handle for the EFI image.
  @param[in] SystemTable    A pointer to the EFI System Table.

  @retval EFI_SUCCESS       The entry point is executed successfully.
  @retval other             Some error occurs when executing this entry point.

**/
EFI_STATUS
EFIAPI
UefiMain (
    IN EFI_HANDLE        ImageHandle,
    IN EFI_SYSTEM_TABLE  *SystemTable
)
{
//  Tpm2SubmitCommand(0, 0, NULL, NULL);
//  Print(L"Hello World %u \n", Tcg2PhysicalPresenceLibGetManagementFlags());
  return EFI_SUCCESS;
}
