/**
 * @file textdat.h
 *
 * Interface of all dialog texts.
 */
#pragma once

#include <cstdint>

#include "effects.h"

namespace devilution {

enum _speech_id : int16_t {
	TEXT_KING1,
	TEXT_KING2,
	TEXT_KING3,
	TEXT_KING4,
	TEXT_KING5,
	TEXT_KING6,
	TEXT_KING7,
	TEXT_KING8,
	TEXT_KING9,
	TEXT_KING10,
	TEXT_KING11,
	TEXT_BANNER1,
	TEXT_BANNER2,
	TEXT_BANNER3,
	TEXT_BANNER4,
	TEXT_BANNER5,
	TEXT_BANNER6,
	TEXT_BANNER7,
	TEXT_BANNER8,
	TEXT_BANNER9,
	TEXT_BANNER10,
	TEXT_BANNER11,
	TEXT_BANNER12,
	TEXT_VILE1,
	TEXT_VILE2,
	TEXT_VILE3,
	TEXT_VILE4,
	TEXT_VILE5,
	TEXT_VILE6,
	TEXT_VILE7,
	TEXT_VILE8,
	TEXT_VILE9,
	TEXT_VILE10,
	TEXT_VILE11,
	TEXT_VILE12,
	TEXT_VILE13,
	TEXT_VILE14,
	TEXT_POISON1,
	TEXT_POISON2,
	TEXT_POISON3,
	TEXT_POISON4,
	TEXT_POISON5,
	TEXT_POISON6,
	TEXT_POISON7,
	TEXT_POISON8,
	TEXT_POISON9,
	TEXT_POISON10,
	TEXT_BONE1,
	TEXT_BONE2,
	TEXT_BONE3,
	TEXT_BONE4,
	TEXT_BONE5,
	TEXT_BONE6,
	TEXT_BONE7,
	TEXT_BONE8,
	TEXT_BUTCH1,
	TEXT_BUTCH2,
	TEXT_BUTCH3,
	TEXT_BUTCH4,
	TEXT_BUTCH5,
	TEXT_BUTCH6,
	TEXT_BUTCH7,
	TEXT_BUTCH8,
	TEXT_BUTCH9,
	TEXT_BUTCH10,
	TEXT_BLIND1,
	TEXT_BLIND2,
	TEXT_BLIND3,
	TEXT_BLIND4,
	TEXT_BLIND5,
	TEXT_BLIND6,
	TEXT_BLIND7,
	TEXT_BLIND8,
	TEXT_VEIL1,
	TEXT_VEIL2,
	TEXT_VEIL3,
	TEXT_VEIL4,
	TEXT_VEIL5,
	TEXT_VEIL6,
	TEXT_VEIL7,
	TEXT_VEIL8,
	TEXT_VEIL9,
	TEXT_VEIL10,
	TEXT_VEIL11,
	TEXT_ANVIL1,
	TEXT_ANVIL2,
	TEXT_ANVIL3,
	TEXT_ANVIL4,
	TEXT_ANVIL5,
	TEXT_ANVIL6,
	TEXT_ANVIL7,
	TEXT_ANVIL8,
	TEXT_ANVIL9,
	TEXT_ANVIL10,
	TEXT_BLOOD1,
	TEXT_BLOOD2,
	TEXT_BLOOD3,
	TEXT_BLOOD4,
	TEXT_BLOOD5,
	TEXT_BLOOD6,
	TEXT_BLOOD7,
	TEXT_BLOOD8,
	TEXT_WARLRD1,
	TEXT_WARLRD2,
	TEXT_WARLRD3,
	TEXT_WARLRD4,
	TEXT_WARLRD5,
	TEXT_WARLRD6,
	TEXT_WARLRD7,
	TEXT_WARLRD8,
	TEXT_WARLRD9,
	TEXT_INFRA1,
	TEXT_INFRA2,
	TEXT_INFRA3,
	TEXT_INFRA4,
	TEXT_INFRA5,
	TEXT_INFRA6,
	TEXT_INFRA7,
	TEXT_INFRA8,
	TEXT_INFRA9,
	TEXT_INFRA10,
	TEXT_MUSH1,
	TEXT_MUSH2,
	TEXT_MUSH3,
	TEXT_MUSH4,
	TEXT_MUSH5,
	TEXT_MUSH6,
	TEXT_MUSH7,
	TEXT_MUSH8,
	TEXT_MUSH9,
	TEXT_MUSH10,
	TEXT_MUSH11,
	TEXT_MUSH12,
	TEXT_MUSH13,
	TEXT_DOOM1,
	TEXT_DOOM2,
	TEXT_DOOM3,
	TEXT_DOOM4,
	TEXT_DOOM5,
	TEXT_DOOM6,
	TEXT_DOOM7,
	TEXT_DOOM8,
	TEXT_DOOM9,
	TEXT_DOOM10,
	TEXT_GARBUD1,
	TEXT_GARBUD2,
	TEXT_GARBUD3,
	TEXT_GARBUD4,
	TEXT_ZHAR1,
	TEXT_ZHAR2,
	TEXT_STORY1,
	TEXT_STORY2,
	TEXT_STORY3,
	TEXT_STORY4,
	TEXT_STORY5,
	TEXT_STORY6,
	TEXT_STORY7,
	TEXT_STORY9,
	TEXT_STORY10,
	TEXT_STORY11,
	TEXT_OGDEN1,
	TEXT_OGDEN2,
	TEXT_OGDEN3,
	TEXT_OGDEN4,
	TEXT_OGDEN5,
	TEXT_OGDEN6,
	TEXT_OGDEN8,
	TEXT_OGDEN9,
	TEXT_OGDEN10,
	TEXT_PEPIN1,
	TEXT_PEPIN2,
	TEXT_PEPIN3,
	TEXT_PEPIN4,
	TEXT_PEPIN5,
	TEXT_PEPIN6,
	TEXT_PEPIN7,
	TEXT_PEPIN9,
	TEXT_PEPIN10,
	TEXT_PEPIN11,
	TEXT_GILLIAN1,
	TEXT_GILLIAN2,
	TEXT_GILLIAN3,
	TEXT_GILLIAN4,
	TEXT_GILLIAN5,
	TEXT_GILLIAN6,
	TEXT_GILLIAN7,
	TEXT_GILLIAN9,
	TEXT_GILLIAN10,
	TEXT_GRISWOLD1,
	TEXT_GRISWOLD2,
	TEXT_GRISWOLD3,
	TEXT_GRISWOLD4,
	TEXT_GRISWOLD5,
	TEXT_GRISWOLD6,
	TEXT_GRISWOLD7,
	TEXT_GRISWOLD8,
	TEXT_GRISWOLD9,
	TEXT_GRISWOLD10,
	TEXT_GRISWOLD12,
	TEXT_GRISWOLD13,
	TEXT_FARNHAM1,
	TEXT_FARNHAM2,
	TEXT_FARNHAM3,
	TEXT_FARNHAM4,
	TEXT_FARNHAM5,
	TEXT_FARNHAM6,
	TEXT_FARNHAM8,
	TEXT_FARNHAM9,
	TEXT_FARNHAM10,
	TEXT_FARNHAM11,
	TEXT_FARNHAM12,
	TEXT_FARNHAM13,
	TEXT_ADRIA1,
	TEXT_ADRIA2,
	TEXT_ADRIA3,
	TEXT_ADRIA4,
	TEXT_ADRIA5,
	TEXT_ADRIA6,
	TEXT_ADRIA7,
	TEXT_ADRIA8,
	TEXT_ADRIA9,
	TEXT_ADRIA10,
	TEXT_ADRIA12,
	TEXT_ADRIA13,
	TEXT_WIRT1,
	TEXT_WIRT2,
	TEXT_WIRT3,
	TEXT_WIRT4,
	TEXT_WIRT5,
	TEXT_WIRT6,
	TEXT_WIRT7,
	TEXT_WIRT8,
	TEXT_WIRT9,
	TEXT_WIRT11,
	TEXT_WIRT12,
	TEXT_BONER,
	TEXT_BLOODY,
	TEXT_BLINDING,
	TEXT_BLOODWAR,
	TEXT_MBONER,
	TEXT_MBLOODY,
	TEXT_MBLINDING,
	TEXT_MBLOODWAR,
	TEXT_RBONER,
	TEXT_RBLOODY,
	TEXT_RBLINDING,
	TEXT_RBLOODWAR,
	TEXT_COW1,
	TEXT_COW2,
	TEXT_BOOK11,
	TEXT_BOOK12,
	TEXT_BOOK13,
	TEXT_BOOK21,
	TEXT_BOOK22,
	TEXT_BOOK23,
	TEXT_BOOK31,
	TEXT_BOOK32,
	TEXT_BOOK33,
	TEXT_INTRO,
	TEXT_HBONER,
	TEXT_HBLOODY,
	TEXT_HBLINDING,
	TEXT_HBLOODWAR,
	TEXT_BBONER,
	TEXT_BBLOODY,
	TEXT_BBLINDING,
	TEXT_BBLOODWAR,
	TEXT_GRAVE1,
	TEXT_GRAVE2,
	TEXT_GRAVE3,
	TEXT_GRAVE4,
	TEXT_GRAVE5,
	TEXT_GRAVE6,
	TEXT_GRAVE7,
	TEXT_GRAVE8,
	TEXT_GRAVE9,
	TEXT_GRAVE10,
	TEXT_FARMER1,
	TEXT_FARMER2,
	TEXT_FARMER3,
	TEXT_FARMER4,
	TEXT_FARMER5,
	TEXT_GIRL1,
	TEXT_GIRL2,
	TEXT_GIRL3,
	TEXT_GIRL4,
	TEXT_DEFILER1,
	TEXT_DEFILER2,
	TEXT_DEFILER3,
	TEXT_DEFILER4,
	TEXT_DEFILER5,
	TEXT_NAKRUL1,
	TEXT_NAKRUL2,
	TEXT_NAKRUL3,
	TEXT_NAKRUL4,
	TEXT_NAKRUL5,
	TEXT_CORNSTN,
	TEXT_JERSEY1,
	TEXT_JERSEY2,
	TEXT_JERSEY3,
	TEXT_JERSEY4,
	TEXT_JERSEY5,
	TEXT_JERSEY6,
	TEXT_JERSEY7,
	TEXT_JERSEY8,
	TEXT_JERSEY9,
	TEXT_TRADER,
	TEXT_FARMER6,
	TEXT_FARMER7,
	TEXT_FARMER8,
	TEXT_FARMER9,
	TEXT_FARMER10,
	TEXT_JERSEY10,
	TEXT_JERSEY11,
	TEXT_JERSEY12,
	TEXT_JERSEY13,
	TEXT_SKLJRN,
	TEXT_BOOK4,
	TEXT_BOOK5,
	TEXT_BOOK6,
	TEXT_BOOK7,
	TEXT_BOOK8,
	TEXT_BOOK9,
	TEXT_BOOKA,
	TEXT_BOOKB,
	TEXT_BOOKC,
	TEXT_OBOOKA,
	TEXT_OBOOKB,
	TEXT_OBOOKC,
	TEXT_MBOOKA,
	TEXT_MBOOKB,
	TEXT_MBOOKC,
	TEXT_RBOOKA,
	TEXT_RBOOKB,
	TEXT_RBOOKC,
	TEXT_BBOOKA,
	TEXT_BBOOKB,
	TEXT_BBOOKC,
	/*
	TEXT_DEADGUY,
	TEXT_FARNHAM14,
	TEXT_FARNHAM15,
	TEXT_FARNHAM16,
	TEXT_FARNHAM17,
	TEXT_FARNHAM18,
	TEXT_FARNHAM19,
	TEXT_FARNHAM20,
	TEXT_FARNHAM21,
	TEXT_FARNHAM22,
	TEXT_GILLIAN11,
	TEXT_GILLIAN12,
	TEXT_GILLIAN13,
	TEXT_GILLIAN14,
	TEXT_GILLIAN15,
	TEXT_GILLIAN16,
	TEXT_GILLIAN17,
	TEXT_GILLIAN18,
	TEXT_GILLIAN19,
	TEXT_GILLIAN20,
	TEXT_GILLIAN21,
	TEXT_GILLIAN22,
	TEXT_GILLIAN23,
	TEXT_GILLIAN24,
	TEXT_GILLIAN25,
	TEXT_GILLIAN26,
	TEXT_PEPIN12,
	TEXT_PEPIN13,
	TEXT_PEPIN14,
	TEXT_PEPIN15,
	TEXT_PEPIN16,
	TEXT_PEPIN17,
	TEXT_PEPIN18,
	TEXT_PEPIN19,
	TEXT_PEPIN20,
	TEXT_PEPIN21,
	TEXT_PEPIN22,
	TEXT_PEPIN23,
	TEXT_PEPIN24,
	TEXT_PEPIN25,
	TEXT_PEPIN26,
	TEXT_PEPIN27,
	TEXT_PEPIN28,
	TEXT_PEPIN29,
	TEXT_PEPIN30,
	TEXT_GRISWOLD14,
	TEXT_GRISWOLD15,
	TEXT_GRISWOLD16,
	TEXT_GRISWOLD17,
	TEXT_GRISWOLD18,
	TEXT_GRISWOLD19,
	TEXT_GRISWOLD20,
	TEXT_GRISWOLD21,
	TEXT_GRISWOLD22,
	TEXT_GRISWOLD23,
	TEXT_GRISWOLD24,
	TEXT_GRISWOLD25,
	TEXT_GRISWOLD26,
	TEXT_GRISWOLD27,
	TEXT_GRISWOLD28,
	TEXT_GRISWOLD29,
	TEXT_GRISWOLD30,
	TEXT_GRISWOLD31,
	TEXT_GRISWOLD32,
	TEXT_GRISWOLD33,
	TEXT_GRISWOLD34,
	TEXT_GRISWOLD35,
	TEXT_GRISWOLD36,
	TEXT_GRISWOLD37,
	*/
	TEXT_NONE = -1,
};

struct Speech {
	const char *txtstr;
	bool scrlltxt;
	_sfx_id sfxnr;
};

extern const Speech Speeches[];

} // namespace devilution
