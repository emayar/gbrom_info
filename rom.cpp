#include "rom.h"
#include <fstream>
#include <iostream>

using namespace std;

ROM::ROM(const char* filename)
{
    char* field_buffer  = new char[10];
    //char* title_buffer = new char[10];

    ifstream file (filename, ios::in|ios::binary|ios::ate);

    if (file.is_open())
    {
        file.seekg(0x134, ios::beg);
        file.read(field_buffer, 11);
        this->title = field_buffer;

        file.seekg(0x14A, ios::beg);
        file.read(field_buffer, 1);
        this->destination_code = field_buffer[0];

        file.seekg(0x14B, ios::beg);
        file.read(field_buffer, 1);
        this->old_licensee_code = field_buffer[0];

        file.seekg(0x143, ios::beg);
        file.read(field_buffer, 1);
        this->cgb_compatible = field_buffer[0];

        file.seekg(0x146, ios::beg);
        file.read(field_buffer, 1);
        this->sgb_compatible = field_buffer[0];

        file.seekg(0x147, ios::beg);
        file.read(field_buffer, 1);
        this->cartridge_type = field_buffer[0];

        file.seekg(0x14C, ios::beg);
        file.read(field_buffer, 1);
        this->rom_version_number = field_buffer[0];

        file.seekg(0x148, ios::beg);
        file.read(field_buffer, 1);
        this->rom_size = field_buffer[0];

        file.seekg(0x149, ios::beg);
        file.read(field_buffer, 1);
        this->ram_size = field_buffer[0];

        delete field_buffer;

    } else {
        cout << "Error: Could not open file." << endl;
    }

    file.close();
}

string ROM::get_title()
{
    return this->title;
}

uint8_t ROM::get_destination_code()
{
    return this->destination_code;
}

uint8_t ROM::get_old_licensee_code()
{
    return this->old_licensee_code;
}

uint8_t ROM::get_cgb_compatible()
{
    return this->cgb_compatible;
}

uint8_t ROM::get_sgb_compatible()
{
    return this->sgb_compatible;
}

uint8_t ROM::get_cartridge_type()
{
    return this->cartridge_type;
}

uint8_t ROM::get_rom_version_number()
{
    return this->rom_version_number;
}

uint8_t ROM::get_rom_size()
{
    return this->rom_size;
}

uint8_t ROM::get_ram_size()
{
    return this->ram_size;
}
