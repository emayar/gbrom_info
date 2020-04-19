#include <iostream>
#include <iomanip>
#include "rom.h"

using namespace std;

int main()
{
    ROM gb_rom("C:\\game.gb");

    cout << endl;
    cout << "TITLE: " << gb_rom.get_title() << endl;
    cout << "DESTINATION CODE: 0x" << setfill('0') << setw(2) << right << uppercase << hex << (int)gb_rom.get_destination_code() << endl;
    cout << "OLD LICENSEE CODE: 0x" << setfill('0') << setw(2) << right << uppercase << hex << (int)gb_rom.get_old_licensee_code() << endl;
    cout << "CGB COMPATIBILITY: 0x" << setfill('0') << setw(2) << right << uppercase << hex << (int)gb_rom.get_cgb_compatible() << endl;
    cout << "SGB COMPATIBILITY: 0x" << setfill('0') << setw(2) << right << uppercase << hex << (int)gb_rom.get_sgb_compatible() << endl;
    cout << "CARTRIDGE TYPE: 0x" << setfill('0') << setw(2) << right << uppercase << hex << (int)gb_rom.get_cartridge_type() << endl;
    cout << "ROM VERSION NUMBER: 0x" << setfill('0') << setw(2) << right << uppercase << hex << (int)gb_rom.get_rom_version_number() << endl;
    cout << "ROM SIZE: 0x" << setfill('0') << setw(2) << right << uppercase << hex << (int)gb_rom.get_rom_size() << endl;
    cout << "RAM SIZE: 0x" << setfill('0') << setw(2) << right << uppercase << hex << (int)gb_rom.get_ram_size() << endl;

    return 0;
}
