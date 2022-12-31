// clang-format off
static const uint8_t sound_off[] = {0x08,0x00,0x09,0x00,0x0a,0x00,0x07,0x3f,0xff,0x00};
static const uint8_t sound_tractor[] = {0x07,0x38,0x08,0x08,0x09,0x08,0x0a,0x10,0x0c,0x0a,0x0d,0x0e,0x00,0x64,0x01,0x08,0x02,0x7d,0x03,0x08,0x80,0x89,0x81,0x05,0x04,0x8a};
static const uint8_t sound_nme_laser[] = {0x01,0x00,0x08,0x10,0x06,0x05,0x09,0x10,0x0c,0x19,0x0d,0x09,0x07,0x36,0x80,0x80,0x81,0x00,0x04,0x00,0xff,0x64};
static const uint8_t sound_jackpot[] = {0x08,0x0d,0x09,0x0d,0x0a,0x0e,0x00,0xaa,0x01,0x02,0x02,0xd0,0x03,0x01,0x04,0xe9,0x05,0x00,0x07,0x38,0xff,0x03,0x00,0x8c,0x02,0xb3,0x04,0xf5,0xff,0x04,0x00,0x6c,0x02,0x9e,0x04,0x03,0x05,0x01,0xff,0x04,0x00,0x22,0x02,0x71,0x04,0xb7,0x05,0x00,0xff,0x0a,0x07,0x3f};
static const uint8_t sound_menu_click[] = {0x00,0x64,0x01,0x00,0x08,0x10,0x07,0x3e,0x0b,0x00,0x0c,0x02,0x0d,0x09,0xff,0x02};
static const uint8_t sound_hit_shield[] = {0x08,0x10,0x0c,0x19,0x07,0x37,0x80,0x00,0x0d,0x09,0x81,0x06,0x07,0x46,0xff,0x32};
static const uint8_t sound_hit_hull[] = {0x00,0xc8,0x07,0x28,0x06,0x12,0x02,0x0a,0x03,0x02,0x05,0x05,0x09,0x10,0x0a,0x10,0x0c,0x19,0x08,0x0e,0x80,0xff,0x0d,0x09,0x81,0x01,0x01,0x0f,0x08,0x10,0x81,0x01,0xfd,0x00};
static const uint8_t sound_part_dies[] = {0x08,0x10,0x00,0x23,0x01,0x00,0x06,0x0f,0x0c,0x0a,0x07,0x36,0x0d,0x09,0xff,0x03,0x01,0x05,0x06,0x0d,0xff,0x03,0x01,0x06,0x06,0x0a,0xff,0x03};
static const uint8_t sound_laser[] = {0x01,0x00,0x08,0x10,0x06,0x1e,0x09,0x10,0x0c,0x1e,0x0d,0x09,0x07,0x36,0x80,0x32,0x81,0x00,0xf6,0x00,0x80,0x00,0x81,0x00,0x19,0xfa,0xff,0x64};
static const uint8_t sound_cannon[] = {0x00,0x64,0x07,0x3e,0x08,0x0e,0x80,0x00,0x81,0x01,0x01,0x0e};
static const uint8_t sound_fuel_here[] = {0x08,0x0d,0x09,0x0c,0x0a,0x0d,0x02,0xaa,0x03,0x02,0x04,0xb0,0x05,0x02,0x00,0x25,0x01,0x01,0x07,0x38,0xff,0x03,0x00,0xdb,0x01,0x00,0xff,0x03,0x00,0xc1,0xff,0x05,0x01,0x01,0x00,0x5a,0xff,0x03,0x00,0x03,0xff,0x0a};
static const uint8_t sound_stinger[] = {0x01,0x00,0x08,0x10,0x06,0x08,0x09,0x10,0x0c,0x19,0x0d,0x09,0x07,0x36,0x80,0x78,0x81,0x00,0x08,0xa0,0x80,0x14,0x81,0x00,0x08,0x3c,0xff,0x32};
static const uint8_t sound_ship_arivs[] = {0x07,0x3e,0x08,0x10,0x0c,0x07,0x01,0x01,0x00,0x82,0x0d,0x09,0xff,0x03,0x00,0xaa,0x0d,0x09,0xff,0x03,0x00,0x8c,0x0d,0x09,0xff,0x07};
static const uint8_t sound_pod[] = {0x07,0x38,0x08,0x06,0x09,0x06,0x0a,0x07,0x00,0x64,0x01,0x0a,0x02,0x6b,0x03,0x0a,0x05,0x0a,0x80,0x00,0x81,0x04,0x20,0x01};
static const uint8_t sound_hit_pirate[] = {0x08,0x10,0x09,0x10,0x0a,0x10,0x07,0x30,0x0c,0x0a,0x06,0x14,0x05,0x08,0x03,0x07,0x80,0x00,0x0d,0x09,0x81,0x01,0xff,0xc8,0xff,0x32};
static const uint8_t sound_disk_dead[] = {0x08,0x0e,0x09,0x0e,0x0a,0x0e,0x07,0x38,0x00,0xd0,0x01,0x01,0x02,0x71,0x03,0x01,0x04,0x14,0x05,0x01,0xff,0x0f,0x00,0x9a,0x01,0x03,0x02,0xd9,0x03,0x02,0x04,0x22,0x05,0x02,0x06,0x0a,0x0c,0x2d,0x07,0x30,0x09,0x10,0x08,0x10,0x0a,0x10,0x0d,0x09,0xff,0x2d};
static const uint8_t sound_atck_siren[] = {0x07,0x3e,0x08,0x0e,0x01,0x01,0x80,0xd2,0x81,0x00,0xfa,0x5a};
static const uint8_t sound_distress[] = {0x08,0x0a,0x09,0x0b,0x0a,0x0a,0x01,0x01,0x03,0x01,0x05,0x01,0x00,0xd0,0x04,0x5a,0x07,0x38,0x80,0xb3,0x81,0x02,0xfa,0x71,0x81,0x02,0x06,0xb3,0x81,0x02,0xfa,0x59,0x05,0x00,0x04,0xae,0xff,0x0a};
static const uint8_t sound_jettison[] = {0x07,0x36,0x00,0x1e,0x01,0x00,0x06,0x1f,0x08,0x10,0x0c,0x0f,0x0d,0x09,0xff,0x07,0x07,0x37,0x0c,0x1e,0x80,0x00,0x0d,0x09,0x81,0x06,0x02,0xc8};
static const uint8_t sound_rpair_bay[] = {0x00,0xc8,0x07,0x38,0x02,0x0a,0x03,0x02,0x05,0x0c,0x09,0x08,0x0a,0x08,0x08,0x08,0x80,0x00,0x81,0x01,0x02,0x01};
static const uint8_t sound_warp_fail[] = {0x07,0x3e,0x08,0x0c,0x01,0x02,0x80,0x00,0x81,0x00,0x05,0xff,0x01,0x03,0x80,0x00,0x81,0x00,0x05,0xff,0x01,0x04,0x80,0x00,0x81,0x00,0x05,0xff,0xff,0x0a};
static const uint8_t sound_tele_up[] = {0x01,0x00,0x07,0x3e,0x08,0x10,0x0c,0x05,0x80,0xff,0x0d,0x0d,0x81,0x00,0xfc,0xaf};
static const uint8_t sound_tele_down[] = {0x01,0x00,0x08,0x10,0x07,0x3e,0x0c,0x05,0x80,0xaf,0x0d,0x0d,0x81,0x00,0x04,0xff};
static const uint8_t sound_explosion[] = {0x08,0x10,0x07,0x37,0x0c,0x32,0x80,0x00,0x0d,0x09,0x81,0x06,0x01,0x07,0xff,0x14,0x07,0x07,0x09,0x10,0x0a,0x10,0x80,0x00,0x0d,0x09,0x81,0x06,0x01,0x1f,0x07,0x0f,0x81,0x06,0xff,0x0f,0x07,0x1f,0x81,0x06,0xff,0x00};
static const uint8_t sound_phase_done[] = {0x08,0x0e,0x09,0x0f,0x02,0x22,0x03,0x02,0x00,0x14,0x01,0x01,0x07,0x3c,0xff,0x02,0x00,0xe9,0x01,0x00,0xff,0x02,0x00,0xcd,0xff,0x02,0x00,0x89,0xff,0x03,0x00,0xcd,0xff,0x02,0x00,0xe9,0xff,0x02,0x00,0x14,0x01,0x01,0xff,0x0c,0x07,0x3f};
static const uint8_t sound_hail[] = {0x01,0x01,0x00,0x64,0x07,0x3c,0x08,0x0d,0x09,0x0c,0xff,0x07,0x00,0xc8,0x02,0xbe,0xff,0x0f};
static const uint8_t sound_pir_laser[] = {0x01,0x00,0x08,0x10,0x06,0x0a,0x09,0x10,0x0c,0x19,0x0d,0x09,0x07,0x36,0x80,0x80,0x81,0x00,0x20,0x00,0x80,0x00,0x01,0x01,0x81,0x00,0x20,0x00,0xff,0x32};
static const uint8_t sound_disk_warn[] = {0x07,0x3c,0x08,0x0d,0x09,0x0d,0x02,0x1f,0x03,0x01,0x00,0x1e,0x01,0x01,0xff,0x02,0x00,0xfa,0xff,0x03};

static struct {
    const char *name;
    size_t len;
    const uint8_t *data;
} sundog_sound_fx[28] = {
/*  0 */ {"off", 10, sound_off},
/*  1 */ {"tractor", 26, sound_tractor},
/*  2 */ {"nme_laser", 22, sound_nme_laser},
/*  3 */ {"jackpot", 52, sound_jackpot},
/*  4 */ {"menu_click", 16, sound_menu_click},
/*  5 */ {"hit_shield", 16, sound_hit_shield},
/*  6 */ {"hit_hull", 34, sound_hit_hull},
/*  7 */ {"part_dies", 28, sound_part_dies},
/*  8 */ {"laser", 28, sound_laser},
/*  9 */ {"cannon", 12, sound_cannon},
/* 10 */ {"fuel_here", 42, sound_fuel_here},
/* 11 */ {"stinger", 28, sound_stinger},
/* 12 */ {"ship_arivs", 26, sound_ship_arivs},
/* 13 */ {"pod", 24, sound_pod},
/* 14 */ {"hit_pirate", 26, sound_hit_pirate},
/* 15 */ {"disk_dead", 50, sound_disk_dead},
/* 16 */ {"atck_siren", 12, sound_atck_siren},
/* 17 */ {"distress", 38, sound_distress},
/* 18 */ {"jettison", 28, sound_jettison},
/* 19 */ {"rpair_bay", 22, sound_rpair_bay},
/* 20 */ {"warp_fail", 30, sound_warp_fail},
/* 21 */ {"tele_up", 16, sound_tele_up},
/* 22 */ {"tele_down", 16, sound_tele_down},
/* 23 */ {"explosion", 42, sound_explosion},
/* 24 */ {"phase_done", 46, sound_phase_done},
/* 25 */ {"hail", 18, sound_hail},
/* 26 */ {"pir_laser", 30, sound_pir_laser},
/* 27 */ {"disk_warn", 20, sound_disk_warn},
};
static const size_t sundog_sound_fx_count = 28;
// clang-format on
