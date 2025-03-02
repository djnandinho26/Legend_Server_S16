#ifndef ITEMDEF_H
#define ITEMDEF_H

enum ItemState
{
	ITEM_UNCHANGED                               = 0,
    ITEM_CHANGED                                 = 1,
    ITEM_REMOVED                                 = 2
};

enum ItemSaveRules
{
	ITEM_SAVE_RULE_REMOVE		= 1,
	ITEM_SAVE_RULE_ADD			= 2,
};

enum ItemPriceType
{
	ITEM_PRICE_TYPE_NONE		= -1,
	ITEM_PRICE_TYPE_BUY,
	ITEM_PRICE_TYPE_SELL,
	ITEM_PRICE_TYPE_OLD,
	ITEM_PRICE_TYPE_MAX
};

enum ItemDBFlag
{
	ITEM_DB_FLAG_NONE				= 0,
	ITEM_DB_FLAG_EXCHANGE			= 1 << 0,
	ITEM_DB_FLAG_WAREHOUSE			= 1 << 1,
	ITEM_DB_FLAG_DROP				= 1 << 2,
	ITEM_DB_FLAG_SELL				= 1 << 3,
	ITEM_DB_FLAG_REWARD				= 1 << 4,
	ITEM_DB_FLAG_UPGRADE			= 1 << 5,
};

enum ItemInventoryType
{
	ITEM_INVENTORY_TYPE_NORMAL,
	ITEM_INVENTORY_TYPE_EVENT,
	ITEM_INVENTORY_TYPE_MUUN,

	ITEM_INVENTORY_TYPE_MAX
};

#define MAX_TYPE_ITEMS				16
#define MAX_ITEM_DURABILITY			255
#define MAX_ITEM_LEVEL				15
#define MAX_ITEM_DURABILITY_STATE	3
#define MAX_ITEM_NAME_LENGTH		64
#define MAX_ITEM_SET_OPTION_NAME_LENGTH		64

#define MAX_ITEM_ADD_OPTION_EFFECT	2

#define INVALID_ITEM				uint16(-1)

namespace JEWEL
{
	enum
	{
		CHAOS				= ITEMGET(12, 15),
		BLESS				= ITEMGET(14, 13),
		SOUL				= ITEMGET(14, 14),
		LIFE				= ITEMGET(14, 16),
		CREATION			= ITEMGET(14, 22),
		GUARDIAN			= ITEMGET(14, 31),
		GEMSTONE			= ITEMGET(14, 41),
		HARMONY				= ITEMGET(14, 42),
		LOW_REFINE_STONE	= ITEMGET(14, 43),
		HIGH_REFINE_STONE	= ITEMGET(14, 44),
		EXTENSION			= ITEMGET(14, 160),
		ELEVATION			= ITEMGET(14, 161),
		DEATH				= ITEMGET(14, 176),
	};
}

namespace SECROMICON
{
	enum
	{
		PART_1 = ITEMGET(14, 103),
		PART_2 = ITEMGET(14, 104),
		PART_3 = ITEMGET(14, 105),
		PART_4 = ITEMGET(14, 106),
		PART_5 = ITEMGET(14, 107),
		PART_6 = ITEMGET(14, 108),
	};
}

#define LUCKY_CHARM					ITEMGET(14, 53)
#define PET_GUARDIAN_ANGEL			ITEMGET(13, 0)
#define PET_SATAN					ITEMGET(13, 1)
#define PET_UNIRIA					ITEMGET(13, 2)
#define PET_DINORANT				ITEMGET(13, 3)
#define PET_DARK_HORSE				ITEMGET(13, 4)
#define PET_DARK_RAVEN				ITEMGET(13, 5)
#define PET_FENRIR					ITEMGET(13, 37)
#define PET_DEMON					ITEMGET(13, 64)
#define PET_SPIRIT_OF_GUARDIAN		ITEMGET(13, 65)
#define PET_RUDOLF					ITEMGET(13, 67)
#define PET_PANDA					ITEMGET(13, 80)
#define PET_UNICORN					ITEMGET(13, 106)
#define PET_SKELETON				ITEMGET(13, 123)

#define CREDIT_COIN					ITEMGET(14, 120)
#define CREDIT_COIN_LEVEL_MIN		0
#define CREDIT_COIN_LEVEL_MAX		10

#define RUUD						ITEMGET(14, 285)

#define MAX_PET_LEVEL				70

namespace ItemKind1
{
	enum
	{
		WEAPON = 1,
		PENDANT = 2,
		ARMOR = 3,
		RING = 4,
		WINGS = 6,

		JEWEL = 9,
		SKILL = 10,
		EVENT_INVENTORY = 11,
		MUUN_INVENTORY = 12,
		MASTERY_WEAPON = 14,
		MASTERY_ARMOR_1 = 15,
		MASTERY_ARMOR_2 = 18,

		EARRING = 19,
		GUARDIAN_MOUNT = 20,
		SOUL_CONVERTER = 21,
	};
};

namespace ItemKind
{
	enum
	{
		NONE = 0,
		SWORD = 1,
		MAGIC_SWORD = 2,
		FIST = 3,
		AXE = 4,
		MACE = 5,
		SCEPTER = 6,
		LANCE = 7,
		BOW = 8,
		CROSSBOW = 9,
		ARROW = 10,
		BOLT = 11,
		STAFF = 12,
		STICK = 13,
		BOOK = 14,
		SHIELD = 15,
		HELM = 16,
		ARMOR = 17,
		PANTS = 18,
		GLOVES = 19,
		BOOTS = 20,

		MINI_WINGS = 22,
		WINGS_LVL_1 = 23,
		WINGS_LVL_2 = 24,
		WINGS_LVL_3 = 25,
		WINGS_LVL_4 = 76,
		LORD_CAPE = 26,
		CLOAK_LVL_2 = 27,
		MONSTER_WINGS = 28,
		WINGS_CONQUERORS = 60,
		WINGS_ANGEL_AND_DEVIL = 62,
		WINGS_POWER = 80,

		PHYSICAL_PENDANT = 29,
		WIZARD_PENDANT = 30,
		RING = 31,
		TRANSFORMATION_RING_1 = 32,
		TRANSFORMATION_RING_2 = 33,
		SHOP_PENDANT = 34,
		SHOP_RING = 35,

		SKILL_SCROLL_1 = 36,
		SKILL_PARCHMENT = 37,
		SKILL_ORB = 38,
		SKILL_SCROLL_2 = 39,
		SEED = 40,
		SPHERE = 41,
		SEED_SPHERE = 42,
		PENTAGRAM = 43,
		ERRTEL = 44,
		HELPER = 45,
		INVENTORY_ITEM = 47,

		BUFF_SCROLL = 48,
		BUFF_ELIXIR = 49,
		BUFF_POTION = 50,
		POTION = 51,

		EVENT_TICKET = 53,
		LUCKY_TICKET = 54,
		QUEST = 55,
		JEWEL = 56,

		GEMSTONE = 58,
		REFINING_STONE = 59,

		DECORATION_RING = 61,
		MUUN = 63,
		MUUN_MOUNT = 64,

		WIZARDRY_STONE = 67,
		SUMMON_ITEM = 68,
		EXPANSION_RADIANCE = 70,
		BOX_1 = 71,
		BOX_2 = 72,
		BUFF_TALISMAN = 73,
		BUFF_ITEM = 74,

		QUIVER = 75,
		EARRING = 77,
		RUNIC_MACE = 78,
		GUARDIAN_MOUNT = 79,

		SHORT_SWORD = 81,

		MAGIC_GUN = 84,
	};
};

namespace ItemKind3
{
	enum
	{
		NONE = 0,
		COMMON = 1,
		SOCKET = 2,
		PVP = 3,
		LUCKY = 4,
		BOUND = 5,
		ARCHANGEL_WEAPON = 6,
		CHAOS_WEAPON = 7,
		BLESSED_ARCHANGEL_WEAPON = 8,
	};
};

enum ItemFlags
{
	ITEM_FLAG_NONE						= 0,
	ITEM_FLAG_ALLOW_LUCK				= 1 << 0,
	ITEM_FLAG_ALLOW_OPTION				= 1 << 1,
	ITEM_FLAG_ALLOW_BLESS				= 1 << 2,
	ITEM_FLAG_ALLOW_SOUL				= 1 << 3,
	ITEM_FLAG_ALLOW_LIFE				= 1 << 4,
	ITEM_FLAG_ALLOW_HARMONY				= 1 << 5,
	ITEM_FLAG_DISABLE_OFFSTORE			= 1 << 6,
	ITEM_FLAG_ALLOW_EXCHANGE			= 1 << 7,
	ITEM_FLAG_ALLOW_DROP				= 1 << 8,
	ITEM_FLAG_ALLOW_SELL				= 1 << 9,
	ITEM_FLAG_ALLOW_PK_DROP				= 1 << 11,
	ITEM_FLAG_ALLOW_REPAIR				= 1 << 12,
	ITEM_FLAG_ALLOW_WAREHOUSE			= 1 << 13,
	ITEM_FLAG_MONSTER_DROP				= 1 << 14,
	ITEM_FLAG_INVENTORY_ITEM			= 1 << 17,
	ITEM_FLAG_DURABILITY_DAMAGE			= 1 << 19,
	ITEM_FLAG_DURABILITY_TIME			= 1 << 20,
	ITEM_FLAG_DURABILITY_TIME_SAFE		= 1 << 21,
	ITEM_FLAG_DURABILITY_DESTROY		= 1 << 22,
	ITEM_FLAG_TALISMAN_ITEM_PROTECTION	= 1 << 23,
	ITEM_FLAG_ALLOW_MYSTERIOUS_STONE	= 1 << 26,
	ITEM_FLAG_MONSTER_DROP_EXE			= 1 << 27,
};

enum ItemPriceFlags
{
	ITEM_PRICE_FLAG_NONE						= 0,
	ITEM_PRICE_FLAG_DURABILITY_MULTIPLIER		= 1 << 0,
	ITEM_PRICE_FLAG_LEVEL_MULTIPLIER			= 1 << 1,
	ITEM_PRICE_FLAG_LEVEL_PLUS_MULTIPLIER		= 1 << 2,
	ITEM_PRICE_FLAG_DURABILITY_DIFFERENCE		= 1 << 3,
};

enum Item_Info
{
	I_TYPE,
	I_OPTION,
	I_DUR,
	I_NOPTION,
	I_SOPTION,
	I_380OPTION,
	I_JOHOPTION,
	I_SOCKETOPT1,
	I_SOCKETOPT2,
	I_SOCKETOPT3,
	I_SOCKETOPT4,
	I_SOCKETOPT5,
	MAX_ITEM_INFO
};

enum DurabilityState
{
	DURABILITY_STATE_NONE,
	DURABILITY_STATE_CHANGED,
	DURABILITY_STATE_DOWN,
};

enum FenrirOption
{
	FENRIR_OPTION_INC_DMG		= 0x01,
	FENRIR_OPTION_DEC_DMG		= 0x02,
	FENRIR_OPTION_ILLUSION		= 0x04,
};

namespace ExeOption
{
	enum ExeOptionGroupDefense
	{
		INCREASE_ZEN_AFTER_KILL_MONSTER				= 0x01, // Increase Zen After Killing Monster 30%
		INCREASE_DEFENSE_SUCCESS_RATE				= 0x02, // Defense Success Rate 10% PVM
		DAMAGE_REFLECT								= 0x04, // Reflect Damage 5% PVM y PVP
		DAMAGE_DECREASE								= 0x08, // Damage Decrease 4% PVM Y PVP
		INCREASE_MAX_MANA							= 0x10, // Increase Max Mana 4%
		INCREASE_MAX_HP								= 0x20, // Increase Max HP 4%
	};

	enum ExeOptionGroupAttack
	{
		INCREASE_MANA_RECOVERY_AFTER_KILL_MONSTER	= 0x01, // Recovery +Mana /8
		INCREASE_HP_RECOVERY_AFTER_KILL_MONSTER		= 0x02, // Recovery +Life /8
		INCREASE_ATTACK_SPEED						= 0x04, // Increase Attack Speed +7
		INCREASE_DAMAGE_PERCENT						= 0x08, // Increase Damage +2% ( para Staff y Stick es wizardy damage )
		INCREASE_DAMAGE_PER_LEVEL					= 0x10, // Increase Damage + Level/20 ( para Staff y Stick es wizardy damage )
		INCREASE_EXE_DAMAGE_RATE					= 0x20, // Increase Excellent Damage Rate +10%
	};

	enum WingLevel2ExeOption
	{
		WingIncreaseMaxHP							= 0x01, // +50 + (Wing Level * 5).
		WingIncreaseMaxMana							= 0x02, // +50 + (Wing Level * 5).
		WingIgnoreEnemyDefense						= 0x04, // 3%
	};

	enum WingLevel3ExeOption
	{
		WingThirdIgnoreEnemyDefense					= 0x01, // 5%
		WingThirdReflectTotalEnemyDamage			= 0x02, // 5% Probabilidad de devolver el da�o que te hacen
		WingThirdTotalyHPRecovery					= 0x04, // 5% Probabilidad de recuperar el hp al atacar
		WingThirdTotalyManaRecovery					= 0x08, // 5% Probabilidad de recuperar el mana al atacar
	};

	enum WingMonsterExeOption
	{
		WingMonsterIgnoreEnemyDefense				= 0x01,
		WingMonsterTotalyHPRecovery					= 0x02,
	};

	enum ExeOptionGroupBloodDarkAngel
	{
		BDA_INCREASE_ZEN_AFTER_KILL_MONSTER			= 0x01, // Increase Zen After Killing Monster 30%
		BDA_INCREASE_DEFENSE_SUCCESS_RATE			= 0x02, // Defense Success Rate 10% PVM
		BDA_DAMAGE_REFLECT							= 0x04, // Reflect Damage 5% PVM y PVP
		BDA_DAMAGE_DECREASE							= 0x08, // Damage Decrease -45
		BDA_INCREASE_MAX_MANA						= 0x10, // Increase Max Mana +165
		BDA_INCREASE_MAX_HP							= 0x20, // Increase Max HP +165
	};

	enum ExeOptionGroupBlessedArchangel
	{
		BA_INCREASE_MANA_RECOVERY_AFTER_KILL_MONSTER	= 0x01, // Recovery +Mana /8
		BA_INCREASE_HP_RECOVERY_AFTER_KILL_MONSTER		= 0x02, // Recovery +Life /8
		BA_INCREASE_ATTACK_SPEED						= 0x04, // Increase Attack Speed +7
		BA_INCREASE_DAMAGE								= 0x08, // Increase Damage +57
		BA_INCREASE_DAMAGE_PER_LEVEL					= 0x10, // Increase + (Level/20) * 2
		BA_INCREASE_EXE_DAMAGE_RATE						= 0x20, // Increase Excellent Damage Rate +10%
	};

	enum
	{
		All = 0x01 | 0x02 | 0x04 | 0x08 | 0x10 | 0x20 | 0x40
	};

#define MAX_OPTION				6

	inline uint8 Generate()
	{
		uint8 option = 1 << RANDOM(MAX_OPTION);

		if ( (option & 2) != 0 )
		{
			if ( RANDOM(2) != 0 )
			{
				option = 1 << RANDOM(MAX_OPTION);
			}
		}

		if ( RANDOM(4) == 0 )
		{
			option |= 1 << RANDOM(MAX_OPTION);
		}

		return option;
	}
}

enum AncientItemDef
{
	ANCIENT_TYPE_1		= 1,		// Ancient Type. EJ: Hyon
	ANCIENT_TYPE_2		= 2,		// Ancient Type. EJ: Vicius
	ANCIENT_TYPE_3		= 16,		// Ancient Type. EJ: New
	ANCIENT_OPTION_1	= 4,		// Opcion de Stat +5
	ANCIENT_OPTION_2	= 8,		// Opcion de Stat +10
	ANCIENT_OPTION_3	= ANCIENT_OPTION_1 | ANCIENT_OPTION_2		// Opcion de Stat +15
};

enum AncientEffect
{
	ANCIENT_EFFECT_STRENGTH						= 0,
	ANCIENT_EFFECT_AGILITY						= 1,
	ANCIENT_EFFECT_ENERGY						= 2,
	ANCIENT_EFFECT_VITALITY						= 3,
	ANCIENT_EFFECT_LEADERSHIP					= 4,
	ANCIENT_EFFECT_ATTACK_DAMAGE_MIN			= 5,
	ANCIENT_EFFECT_ATTACK_DAMAGE_MAX			= 6,
	ANCIENT_EFFECT_MAGIC_DAMAGE					= 7,
	ANCIENT_EFFECT_DAMAGE						= 8,
	ANCIENT_EFFECT_ATTACK_RATE					= 9,
	ANCIENT_EFFECT_DEFENSE						= 10,
	ANCIENT_EFFECT_MAX_LIFE						= 11,
	ANCIENT_EFFECT_MAX_MANA						= 12,
	ANCIENT_EFFECT_MAX_STAMINA					= 13,
	ANCIENT_EFFECT_STAMINA_VALUE				= 14,
	ANCIENT_EFFECT_CRITICAL_DAMAGE_RATE			= 15,
	ANCIENT_EFFECT_CRITICAL_DAMAGE				= 16,
	ANCIENT_EFFECT_EXCELLENT_DAMAGE_RATE		= 17,
	ANCIENT_EFFECT_EXCELLENT_DAMAGE				= 18,
	ANCIENT_EFFECT_SKILL_DAMAGE_ADD				= 19,
	ANCIENT_EFFECT_DOUBLE_DAMAGE_RATE			= 20,
	ANCIENT_EFFECT_IGNORE_DEFENSE_RATE			= 21,
	ANCIENT_EFFECT_SHIELD_DEFENSE				= 22,
	ANCIENT_EFFECT_TWO_HAND_SWORD_DAMAGE		= 23,
	ANCIENT_EFFECT_INCREASE_ALL_STATS			= 24,
	ANCIENT_EFFECT_INCREASE_DEFENSE_BASE		= 25,
	ANCIENT_EFFECT_DAMAGE_2						= 26,
	ANCIENT_EFFECT_MAGIC_DAMAGE_2				= 27,
	ANCIENT_EFFECT_ENHANCED_DEFENSE_BUFF		= 28,
	ANCIENT_EFFECT_ENHANCED_ATTACK_BUFF			= 29,
	ANCIENT_EFFECT_ENHANCED_BLESS_BUFF			= 30,
	ANCIENT_EFFECT_TRIPLE_DAMAGE				= 31,
	ANCIENT_EFFECT_ENHANCED_SUMMONER_BUFF		= 32,
	ANCIENT_EFFECT_WIZARDRY_CURSE				= 33,
	ANCIENT_EFFECT_SOLID_PROTECTION_PARTY_DAMAGE		= 34,
	ANCIENT_EFFECT_SOLID_PROTECTION_HP_TRANSFER			= 35,
	ANCIENT_EFFECT_SOLID_PROTECTION_SHIELD_DEFENSE		= 36,

	ANCIENT_EFFECT_MASTERY_ATTACK_POWER			= 120,
	ANCIENT_EFFECT_MASTERY_WIZARDY				= 121,
	ANCIENT_EFFECT_MASTERY_BASIC_DEFENSE		= 122,
	ANCIENT_EFFECT_MASTERY_EXCELLENT_DAMAGE		= 123,
	ANCIENT_EFFECT_MASTERY_CRITICAL_DAMAGE		= 124,
	ANCIENT_EFFECT_MASTERY_MAXIMUM_HP			= 125,
	ANCIENT_EFFECT_MASTERY_SKILL_DAMAGE			= 126,
	ANCIENT_EFFECT_MASTERY_STRENGTH				= 127,
	ANCIENT_EFFECT_MASTERY_AGILITY				= 128,
	ANCIENT_EFFECT_MASTERY_ENERGY				= 129,
	ANCIENT_EFFECT_MASTERY_STATS				= 130,
	ANCIENT_EFFECT_MASTERY_WIZARDRY_CURSE		= 131,
	ANCIENT_EFFECT_MASTERY_DAMAGE_REDUCTION		= 132,
	ANCIENT_EFFECT_MASTERY_ELEMENTAL_DEFENSE	= 133,

	ANCIENT_EFFECT_MAX
};

#define IS_ANCIENT(ancient) ((ancient & 3) != 0 ? (ancient & 3): (ancient & 16) != 0 ? (ancient & 16): 0)
#define MAX_ITEM_ANCIENT_TYPE							3
#define MAX_ITEM_ANCIENT_OPTION							6
#define MAX_ITEM_ANCIENT_OPTION_FULL					9

#define MAX_ITEM_HARMONY_LEVEL							14

enum HarmonyItemType
{
	HARMONY_ITEM_NONE,
	HARMONY_ITEM_WEAPON,
	HARMONY_ITEM_STAFF,
	HARMONY_ITEM_DEFENSE,
	HARMONY_ITEM_MAX,
};

enum HarmonyEffect
{
	HARMONY_EFFECT_NONE									= 0,

	HARMONY_WEAPON_ATTACK_DAMAGE_MIN					= 1,
	HARMONY_WEAPON_ATTACK_DAMAGE_MAX					= 2,
	HARMONY_WEAPON_DECREASE_REQUIRED_STRENGTH			= 3,
	HARMONY_WEAPON_DECREASE_REQUIRED_AGILITY			= 4,
	HARMONY_WEAPON_ATTACK_DAMAGE						= 5,
	HARMONY_WEAPON_CRITICAL_DAMAGE						= 6,
	HARMONY_WEAPON_SKILL_DAMAGE							= 7,
	HARMONY_WEAPON_ATTACK_RATE_PVP						= 8,
	HARMONY_WEAPON_DECREASE_SHIELD_RATE					= 9,
	HARMONY_WEAPON_IGNORE_SHIELD_RATE					= 10,

	HARMONY_STAFF_MAGIC_DAMAGE							= 1,
	HARMONY_STAFF_DECREASE_REQUIRED_STRENGTH			= 2,
	HARMONY_STAFF_DECREASE_REQUIRED_AGILITY				= 3,
	HARMONY_STAFF_SKILL_DAMAGE							= 4,
	HARMONY_STAFF_CRITICAL_DAMAGE						= 5,
	HARMONY_STAFF_DECREASE_SHIELD_RATE					= 6,
	HARMONY_STAFF_ATTACK_RATE_PVP						= 7,
	HARMONY_STAFF_IGNORE_SHIELD_RATE					= 8,

	HARMONY_DEFENSE_DEFENSE								= 1,
	HARMONY_DEFENSE_MAX_STAMINA							= 2,
	HARMONY_DEFENSE_MAX_LIFE							= 3,
	HARMONY_DEFENSE_LIFE_RECOVERY						= 4,
	HARMONY_DEFENSE_MANA_RECOVERY						= 5,
	HARMONY_DEFENSE_DEFENSE_RATE_PVP					= 6,
	HARMONY_DEFENSE_DAMAGE_DECREASE						= 7,
	HARMONY_DEFENSE_INCREASE_SHIELD_RATE				= 8,
};

enum Effect380
{
	EFFECT_380_ATTACK_RATE_PVP							= 1,
	EFFECT_380_ATTACK_PVP								= 2,
	EFFECT_380_DEFENSE_RATE_PVP							= 3,
	EFFECT_380_DEFENSE_PVP								= 4,
	EFFECT_380_INCREASE_MAX_LIFE						= 5,
	EFFECT_380_INCREASE_MAX_SHIELD						= 6,
	EFFECT_380_SHIELD_REFILL_ON							= 7,
	EFFECT_380_SHIELD_REFILL_ADD						= 8,
};

#define MAX_SOCKET_SLOT									5
#define MAX_SOCKET_LEVEL								20
typedef uint16 SocketDataType;
#define SOCKET_SLOT_NONE								0xFFFF
#define SOCKET_SLOT_EMPTY								0xFFFE
#define MAX_SOCKET_TYPE									6
#define	MAX_SOCKET_OPTION								50

#define INIT_SOCKET_DATA(name) SocketDataType name[MAX_SOCKET_SLOT] = { SOCKET_SLOT_NONE, SOCKET_SLOT_NONE, SOCKET_SLOT_NONE, SOCKET_SLOT_NONE, SOCKET_SLOT_NONE };

#define SOCKET_SLOT_LOOP(var) for ( int32 var = 0; var < MAX_SOCKET_SLOT; ++var )

enum MossItemType
{
	MOSS_ITEM_TYPE_SWORD,
	MOSS_ITEM_TYPE_STAFF,
	MOSS_ITEM_TYPE_BOW,
	MOSS_ITEM_TYPE_SCEPTER,
	MOSS_ITEM_TYPE_STICK,
	MOSS_ITEM_TYPE_MAX
};

#define MAX_WING_GRADED_OPTION_LEVEL		10
#define MAX_WING_GRADED_OPTION_STEP			4

#define MAX_WING_SOCKET_OPTION_LEVEL		16

#define MAX_WING_SOCKET_OPTION_UPGRADE_ITEM	3
#define MAX_WING_SOCKET_OPTION_UPGRADE_LEVEL	11

static const int32 WingSocketOptionCreateRate[MAX_WING_SOCKET_OPTION_UPGRADE_LEVEL] = { 1, 2, 3, 5, 15, 25, 40, 50, 60, 75, 90 };

#define MAX_EARRING_OPTION					5
#define MAX_EARRING_OPTION_LEVEL			9
#define MAX_EARRING_BONUS					3
#define MAX_EARRING_UPGRADE_MATERIAL		3
#define MAX_EARRING_UPGRADE_SLOTS			29

#define MAX_PET_TRAINER_MIX_SLOTS			75
#define MAX_GUARDIAN_ELITE_OPTIONS			2

namespace ItemOption
{
	enum
	{
		PHYSICAL_DAMAGE = 0,
		WIZARDRY_DAMAGE = 1,
		CURSE_DAMAGE = 2,
		DEFENSE_SUCCESS_RATE = 3,
		DEFENSE = 4,
		LUCK = 5,
		HP_RECOVERY = 6,
		PHYSICAL_DAMAGE_MUL = 7,
		WIZARDRY_DAMAGE_MUL = 8,
		ATTACK_SPEED = 9,
		DINORANT_STAMINA = 10,
		DINORANT_DEFENSE = 11,
		UNK12 = 12,
		MAX_MANA = 13,
		MAX_STAMINA = 14,
		DARK_HORSE_DEFENSE = 15,
	};
};

typedef std::map<uint16, uint16> OptionDataMap;

#define MAX_HARMONY_ENHANCEMENT_LEVEL			4

#endif