#ifndef ROM_H
#define ROM_H

#include <stdint.h>
#include <string>

class ROM
{
    public:

        ROM(const char* filename);
        std::string get_title();

        uint8_t get_destination_code();
        uint8_t get_old_licensee_code();
        uint8_t get_cgb_compatible();
        uint8_t get_sgb_compatible();
        uint8_t get_cartridge_type();
        uint8_t get_rom_version_number();
        uint8_t get_rom_size();
        uint8_t get_ram_size();

    private:

        const char* filename;
        uint8_t destination_code;
        uint8_t old_licensee_code;
        uint8_t cgb_compatible;
        uint8_t sgb_compatible;
        uint8_t cartridge_type;
        uint8_t rom_version_number;
        uint8_t rom_size;
        uint8_t ram_size;

        std::string title;
};

#endif // ROM_H
