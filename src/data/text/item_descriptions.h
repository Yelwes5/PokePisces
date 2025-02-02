static const u8 sDummyDesc[] = _(
    "?????");

// Poké Balls
static const u8 sPokeBallDesc[] = _(
    "A tool used for\n"
    "catching wild\n"
    "Pokémon.");

static const u8 sGreatBallDesc[] = _(
    "A good Ball with a\n"
    "higher catch rate\n"
    "than a Poké Ball.");

static const u8 sUltraBallDesc[] = _(
    "A better Ball with\n"
    "a higher catch rate\n"
    "than a Great Ball.");

static const u8 sMasterBallDesc[] = _(
    "The best Ball that\n"
    "catches a Pokémon\n"
    "without fail.");

static const u8 sPremierBallDesc[] = _(
    "A rare Ball with\n"
    "a higher catch rate\n"
    "than a Ultra Ball.");

static const u8 sHealBallDesc[] = _(
    "A Ball that works\n"
    "better the higher\n"
    "the user's HP.");

static const u8 sNetBallDesc[] = _(
    "A Ball that works\n"
    "better on smaller\n"
    "Pokémon.");

static const u8 sNestBallDesc[] = _(
    "A Ball that works\n"
    "better on flying or\n"
    "levitating Pokémon.");

static const u8 sCoolBallDesc[] = _(
    "A Ball that works\n"
    "better on Pokémon\n"
    "on the ocean floor.");

static const u8 sDuskBallDesc[] = _(
    "Works well if\n"
    "used in a\n"
    "dark place.");

static const u8 sTimerBallDesc[] = _(
    "A Ball that gains\n"
    "power in battles\n"
    "taking many turns.");

static const u8 sQuickBallDesc[] = _(
    "Works well if\n"
    "used on the\n"
    "first turn.");

static const u8 sRepeatBallDesc[] = _(
    "A Ball that works\n"
    "better on Pokémon\n"
    "caught before.");

static const u8 sLuxuryBallDesc[] = _(
    "A cozy Ball that\n"
    "makes Pokémon\n"
    "more friendly.");

static const u8 sLevelBallDesc[] = _(
    "A Ball that works\n"
    "well on lower\n"
    "level Pokémon.");

static const u8 sLureBallDesc[] = _(
    "A Ball that works\n"
    "well on fished\n"
    "up Pokémon.");

static const u8 sMoonBallDesc[] = _(
    "A Ball that works\n"
    "well on cosmic\n"
    "Pokémon.");

static const u8 sFriendBallDesc[] = _(
    "A Ball that makes\n"
    "a Pokémon friendly\n"
    "when caught.");

static const u8 sLoveBallDesc[] = _(
    "Works well on\n"
    "Pokémon who\n"
    "are infatuated.");

static const u8 sFastBallDesc[] = _(
    "Works well on\n"
    "very fast\n"
    "Pokémon.");

static const u8 sHeavyBallDesc[] = _(
    "Works well on\n"
    "very heavy\n"
    "Pokémon.");

static const u8 sDreamBallDesc[] = _(
#if B_DREAM_BALL_MODIFIER >= GEN_8
    "A Ball that works\n"
    "well on sleeping\n"
    "Pokémon.");
#else
    "A Poké Ball used in\n"
    "the Entree Forest.");
#endif

static const u8 sSafariBallDesc[] = _(
    "A special Ball that\n"
    "works better on\n"
    "rarer Pokémon.");

static const u8 sSportBallDesc[] = _(
    "A Ball that works\n"
    "better when playing\n"
    "water/mud sports.");

static const u8 sParkBallDesc[] = _(
    "A rare Ball with\n"
    "a higher catch rate\n"
    "than a Ultra Ball.");

static const u8 sBeastBallDesc[] = _(
    "A special Ball that\n"
    "works better on\n"
    "beasts.");

static const u8 sCherishBallDesc[] = _(
    "A rare Ball with\n"
    "a higher catch rate\n"
    "than a Gold Ball.");

// Medicine
static const u8 sPotionDesc[] = _(
    "Restores the HP of\n"
    "a Pokémon by\n"
    "60 points.");

static const u8 sSuperPotionDesc[] = _(
    "Restores the HP of\n"
    "a Pokémon by\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "100 points.");
#else
    "100 points.");
#endif

static const u8 sHyperPotionDesc[] = _(
    "Restores the HP of\n"
    "a Pokémon by\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "150 points.");
#else
    "150 points.");
#endif

static const u8 sMaxPotionDesc[] = _(
    "Fully restores the\n"
    "HP of a Pokémon.");

static const u8 sFullRestoreDesc[] = _(
    "Fully restores the\n"
    "HP and status of a\n"
    "Pokémon.");

static const u8 sReviveDesc[] = _(
    "Revives a fainted\n"
    "Pokémon with half\n"
    "its HP.");

static const u8 sMaxReviveDesc[] = _(
    "Revives a fainted\n"
    "Pokémon with all\n"
    "its HP.");

static const u8 sFreshWaterDesc[] = _(
    "A mineral water\n"
    "that restores HP\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "by 30 points.");
#else
    "by 50 points.");
#endif

static const u8 sSodaPopDesc[] = _(
    "A fizzy soda drink\n"
    "that restores HP\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "by 30 points.");
#else
    "by 30 points.");
#endif

static const u8 sLemonadeDesc[] = _(
    "A very sweet drink\n"
    "that restores HP\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "by 70 points.");
#else
    "by 80 points.");
#endif

static const u8 sMoomooMilkDesc[] = _(
    "A nutritious milk\n"
    "that restores HP\n"
    "by 100 points.");

static const u8 sEnergyPowderDesc[] = _(
    "A bitter powder\n"
    "that restores HP\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "by 60 points.");
#else
    "by 50 points.");
#endif

static const u8 sEnergyRootDesc[] = _(
    "A bitter root\n"
    "that decrases\n"
    "friendship.");

static const u8 sHealPowderDesc[] = _(
    "A bitter powder\n"
    "that heals all\n"
    "status problems.");

static const u8 sRevivalHerbDesc[] = _(
    "A very bitter herb\n"
    "that revives a\n"
    "fainted Pokémon.");

static const u8 sAntidoteDesc[] = _(
    "Heals a poisoned\n"
    "Pokémon.");

static const u8 sParalyzeHealDesc[] = _(
    "Heals a paralyzed\n"
    "Pokémon.");

static const u8 sBurnHealDesc[] = _(
    "Heals Pokémon\n"
    "of a burn.");

static const u8 sIceHealDesc[] = _(
    "Defrosts a frozen\n"
    "Pokémon.");

static const u8 sAwakeningDesc[] = _(
    "Awakens a sleeping\n"
    "Pokémon.");

static const u8 sFullHealDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sEtherDesc[] = _(
    "Restores the PP\n"
    "of a selected move\n"
    "by 5.");

static const u8 sMaxEtherDesc[] = _(
    "Restores the PP\n"
    "of a selected move\n"
    "by 10.");

static const u8 sElixirDesc[] = _(
    "Restores the PP\n"
    "of all moves by 5.");

static const u8 sMaxElixirDesc[] = _(
    "Restores the PP\n"
    "of all moves by 10.");

static const u8 sBerryJuiceDesc[] = _(
    "A 100% pure juice\n"
    "that restores HP\n"
    "by 20 points.");

static const u8 sSacredAshDesc[] = _(
    "Fully revives and\n"
    "restores all\n"
    "fainted Pokémon.");

static const u8 sSweetHeartDesc[] = _(
    "A sweet chocolate\n"
    "that restores HP\n"
    "by 20 points.");

static const u8 sMaxHoneyDesc[] = _(
    "Revives a fainted\n"
    "Pokémon with all\n"
    "its HP.");

static const u8 sPewterCrunchiesDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sRageCandyBarDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sLavaCookieDesc[] = _(
    "Restores 1/3 of a\n"
    "Pokémon's HP and\n"
    "raises Defense.");

static const u8 sOldGateauDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sCasteliaconeDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sLumioseGaletteDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sShalourSableDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sBigMalasadaDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

// Vitamins
static const u8 sHPUpDesc[] = _(
    "Raises the base HP\n"
    "of one Pokémon.");

static const u8 sProteinDesc[] = _(
    "Raises the base\n"
    "Attack stat of one\n"
    "Pokémon.");

static const u8 sIronDesc[] = _(
    "Raises the base\n"
    "Defense stat of\n"
    "one Pokémon.");

static const u8 sCalciumDesc[] = _(
    "Raises the base\n"
    "Sp. Atk stat of one\n"
    "Pokémon.");

static const u8 sZincDesc[] = _(
    "Raises the base\n"
    "Sp. Def stat of one\n"
    "Pokémon.");

static const u8 sCarbosDesc[] = _(
    "Raises the base\n"
    "Speed stat of one\n"
    "Pokémon.");

static const u8 sPPUpDesc[] = _(
    "Raises the maximum\n"
    "PP of a selected\n"
    "move.");

static const u8 sPPMaxDesc[] = _(
    "Raises the PP of a\n"
    "move to its maximum\n"
    "points.");

// EV Feathers
static const u8 sHealthFeatherDesc[] = _(
    "An item that raises\n"
    "the base HP of\n"
    "a Pokémon.");

static const u8 sMuscleFeatherDesc[] = _(
    "An item that raises\n"
    "the base Attack of\n"
    "a Pokémon.");

static const u8 sResistFeatherDesc[] = _(
    "An item that raises\n"
    "the base Defense\n"
    "of a Pokémon.");

static const u8 sGeniusFeatherDesc[] = _(
    "An item that raises\n"
    "the base Sp. Atk.\n"
    "of a Pokémon.");

static const u8 sCleverFeatherDesc[] = _(
    "An item that raises\n"
    "the base Sp. Def.\n"
    "of a Pokémon.");

static const u8 sSwiftFeatherDesc[] = _(
    "An item that raises\n"
    "the base Speed of\n"
    "a Pokémon.");

// Ability Modifiers
static const u8 sAbilityCapsuleDesc[] = _(
    "A cookie that\n"    
    "changes a\n"
    "Pokémon's ability.");

static const u8 sAbilityPatchDesc[] = _(
    "Turns the ability\n"
    "of a Pokémon into\n"
    "a rare ability.");

// Mints
static const u8 sLonelyMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Attack, but\n"
    "reduces Defense.");

static const u8 sAdamantMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Attack, but\n"
    "reduces Sp. Atk.");

static const u8 sNaughtyMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Attack, but\n"
    "reduces Sp. Def.");

static const u8 sBraveMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Attack, but\n"
    "reduces Speed.");

static const u8 sBoldMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Defense, but\n"
    "reduces Attack.");

static const u8 sImpishMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Defense, but\n"
    "reduces Sp. Atk.");

static const u8 sLaxMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Defense, but\n"
    "reduces Sp. Def.");

static const u8 sRelaxedMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Defense, but\n"
    "reduces Speed.");

static const u8 sModestMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Atk, but\n"
    "reduces Attack.");

static const u8 sMildMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Atk, but\n"
    "reduces Defense.");

static const u8 sRashMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Atk, but\n"
    "reduces Sp. Def.");

static const u8 sQuietMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Atk, but\n"
    "reduces Speed.");

static const u8 sCalmMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Def, but\n"
    "reduces Attack.");

static const u8 sGentleMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Def, but\n"
    "reduces Defense.");

static const u8 sCarefulMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Def, but\n"
    "reduces Sp. Atk.");

static const u8 sSassyMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Def, but\n"
    "reduces Speed.");

static const u8 sTimidMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Attack.");

static const u8 sHastyMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Defense.");

static const u8 sJollyMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Sp. Atk.");

static const u8 sNaiveMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Sp. Def.");

static const u8 sSeriousMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Attack.");

// Candy
static const u8 sRareCandyDesc[] = _(
    "Raises the level\n"
    "of a Pokémon by\n"
    "one.");

static const u8 sExpCandyXSDesc[] = _(
    "Gives a very small\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sExpCandySDesc[] = _(
    "Gives a small\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sExpCandyMDesc[] = _(
    "Gives a moderate\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sExpCandyLDesc[] = _(
    "Gives a large\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sExpCandyXLDesc[] = _(
    "Gives a very large\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sDynamaxCandyDesc[] = _(
    "Raises the Dynamax\n"
    "Level of a single\n"
    "Pokémon by one.");

// Medicinal Flutes
static const u8 sBlueFluteDesc[] = _(
    "A glass flute that\n"
    "awakens sleeping\n"
    "Pokémon.");

static const u8 sYellowFluteDesc[] = _(
    "A glass flute that\n"
    "snaps Pokémon\n"
    "out of confusion.");

static const u8 sRedFluteDesc[] = _(
    "A glass flute that\n"
    "snaps Pokémon\n"
    "out of attraction.");

// Encounter-modifying Flutes
static const u8 sBlackFluteDesc[] = _(
    "A glass flute that\n"
    "keeps away wild\n"
    "Pokémon.");

static const u8 sWhiteFluteDesc[] = _(
    "A glass flute that\n"
    "lures wild Pokémon.");

// Encounter Modifiers
static const u8 sRepelDesc[] = _(
    "Repels weak wild\n"
    "Pokémon for 100\n"
    "steps.");

static const u8 sSuperRepelDesc[] = _(
    "Repels weak wild\n"
    "Pokémon for 200\n"
    "steps.");

static const u8 sMaxRepelDesc[] = _(
    "Repels weak wild\n"
    "Pokémon for 250\n"
    "steps.");

static const u8 sLureDesc[] = _(
    "Makes Pokémon more\n"
    "likely to appear\n"
    "for 100 steps.");

static const u8 sSuperLureDesc[] = _(
    "Makes Pokémon more\n"
    "likely to appear\n"
    "for 200 steps.");

static const u8 sMaxLureDesc[] = _(
    "Makes Pokémon more\n"
    "likely to appear\n"
    "for 250 steps.");

static const u8 sEscapeRopeDesc[] = _(
    "Use to escape\n"
    "instantly from a\n"
    "cave or a dungeon.");

// Battle items
static const u8 sXAttackDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises stat\n"
    "Attack during\n"
    "one battle.");
#else
    "Raises the stat\n"
    "Attack during one\n"
    "battle.");
#endif

static const u8 sXDefenseDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises stat\n"
    "Defense during\n"
    "one battle.");
#else
    "Raises the stat\n"
    "Defense during one\n"
    "battle.");
#endif

static const u8 sXSpAtkDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises stat\n"
    "Sp. Atk during\n"
    "one battle.");
#else
    "Raises the stat\n"
    "Sp. Atk during one\n"
    "battle.");
#endif

static const u8 sXSpDefDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises stat\n"
    "Sp. Def during\n"
    "one battle.");
#else
    "Raises the stat\n"
    "Sp. Def during one\n"
    "battle.");
#endif

static const u8 sXSpeedDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises stat\n"
    "Speed during\n"
    "one battle.");
#else
    "Raises the stat\n"
    "Speed during one\n"
    "battle.");
#endif

static const u8 sXAccuracyDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises move\n"
    "accuracy during\n"
    "one battle.");
#else
    "Raises accuracy\n"
    "of attack moves\n"
    "during one battle.");
#endif

static const u8 sDireHitDesc[] = _(
    "Raises the\n"
    "critical-hit ratio\n"
    "during one battle.");

static const u8 sGuardSpecDesc[] = _(
    "Prevents stat\n"
    "reduction when\n"
    "used in battle.");

// Escape Items
static const u8 sPokeDollDesc[] = _(
    "Use to flee from\n"
    "any battle with\n"
    "a wild Pokémon.");

static const u8 sFluffyTailDesc[] = _(
    "Use to flee from\n"
    "any battle with\n"
    "a wild Pokémon.");

static const u8 sPokeToyDesc[] = _(
    "Use to flee from\n"
    "any battle with\n"
    "a wild Pokémon.");

static const u8 sMaxMushroomsDesc[] = _(
    "Raises every stat\n"
    "during one battle\n"
    "by one stage.");

// Treasures
static const u8 sBottleCapDesc[] = _(
    "A beautiful bottle\n"
    "cap that gives off\n"
    "a silver gleam.");

static const u8 sGoldBottleCapDesc[] = _(
    "A beautiful bottle\n"
    "cap that gives off\n"
    "a golden gleam.");

static const u8 sNuggetDesc[] = _(
    "A nugget of pure\n"
    "gold. Can be sold at\n"
    "a high price.");

static const u8 sBigNuggetDesc[] = _(
    "A big nugget made\n"
    "of gold, sellable\n"
    "at a high price.");

static const u8 sTinyMushroomDesc[] = _(
    "A plain mushroom\n"
    "that would sell\n"
    "at a cheap price.");

static const u8 sBigMushroomDesc[] = _(
    "A rare mushroom\n"
    "that would sell at a\n"
    "high price.");

static const u8 sBalmMushroomDesc[] = _(
    "A rare mushroom\n"
    "that would sell at a\n"
    "high price.");

static const u8 sPearlDesc[] = _(
    "A pretty pearl\n"
    "that would sell at a\n"
    "cheap price.");

static const u8 sBigPearlDesc[] = _(
    "A lovely large pearl\n"
    "that evolves an odd\n"
    "shell Pokémon.");

static const u8 sPearlStringDesc[] = _(
    "Very large pearls\n"
    "that would sell at a\n"
    "high price.");

static const u8 sStardustDesc[] = _(
    "Beautiful red sand.\n"
    "Can be sold at a\n"
    "high price.");

static const u8 sStarPieceDesc[] = _(
    "A red gem shard.\n"
    "It would sell for a\n"
    "very high price.");

static const u8 sCometShardDesc[] = _(
    "A comet's shard.\n"
    "It would sell for a\n"
    "high price.");

static const u8 sShoalSaltDesc[] = _(
    "Salt obtained from\n"
    "deep inside the\n"
    "Shoal Cave.");

static const u8 sShoalShellDesc[] = _(
    "A seashell found\n"
    "deep inside the\n"
    "Shoal Cave.");

static const u8 sRedShardDesc[] = _(
    "A shard from an\n"
    "ancient item. Can\n"
    "be sold cheaply.");

static const u8 sBlueShardDesc[] = _(
    "A shard from an\n"
    "ancient item. Can\n"
    "be sold cheaply.");

static const u8 sYellowShardDesc[] = _(
    "A shard from an\n"
    "ancient item. Can\n"
    "be sold cheaply.");

static const u8 sGreenShardDesc[] = _(
    "A shard from an\n"
    "ancient item. Can\n"
    "be sold cheaply.");

static const u8 sHeartScaleDesc[] = _(
    "A lovely scale.\n"
    "It is coveted by\n"
    "collectors.");

static const u8 sHoneyDesc[] = _(
    "Sweet honey that\n"
    "attracts wild\n"
    "Pokémon when used.");

static const u8 sRareBoneDesc[] = _(
    "A very rare bone.\n"
    "It can be sold at\n"
    "a high price.");

static const u8 sOddKeystoneDesc[] = _(
    "Voices can be heard\n"
    "from this odd stone\n"
    "occasionally.");

static const u8 sPrettyFeatherDesc[] = _(
    "A beautiful yet\n"
    "plain feather that\n"
    "does nothing.");

static const u8 sRelicCopperDesc[] = _(
    "A copper coin used\n"
    "long ago. It sells\n"
    "at a high price.");

static const u8 sRelicSilverDesc[] = _(
    "A silver coin used\n"
    "long ago. It sells\n"
    "at a high price.");

static const u8 sRelicGoldDesc[] = _(
    "A gold coin used\n"
    "long ago. It sells\n"
    "at a high price.");

static const u8 sRelicVaseDesc[] = _(
    "A vase made long\n"
    "ago. It sells at\n"
    "a high price.");

static const u8 sRelicBandDesc[] = _(
    "An old bracelet.\n"
    "It sells at a\n"
    "high price.");

static const u8 sRelicStatueDesc[] = _(
    "An old statue.\n"
    "It sells at a\n"
    "high price.");

static const u8 sRelicCrownDesc[] = _(
    "An old crown.\n"
    "It sells at a\n"
    "high price.");

static const u8 sStrangeSouvenirDesc[] = _(
    "An ornament that\n"
    "depicts a Pokémon\n"
    "from Alola.");

// Fossils
static const u8 sHelixFossilDesc[] = _(
    "A piece of an\n"
    "ancient marine\n"
    "Pokémon's seashell.");

static const u8 sDomeFossilDesc[] = _(
    "A piece of an\n"
    "ancient marine\n"
    "Pokémon's shell.");

static const u8 sOldAmberDesc[] = _(
    "A stone containing\n"
    "the genes of an\n"
    "ancient Pokémon.");

static const u8 sRootFossilDesc[] = _(
    "A fossil of an\n"
    "ancient, seafloor-\n"
    "dwelling Pokémon.");

static const u8 sClawFossilDesc[] = _(
    "A fossil of an\n"
    "ancient, seafloor-\n"
    "dwelling Pokémon.");

static const u8 sArmorFossilDesc[] = _(
    "A piece of a\n"
    "prehistoric Poké-\n"
    "mon's head.");

static const u8 sSkullFossilDesc[] = _(
    "A piece of a\n"
    "prehistoric Poké-\n"
    "mon's head.");

static const u8 sCoverFossilDesc[] = _(
    "A piece of a\n"
    "prehistoric Poké-\n"
    "mon's back.");

static const u8 sPlumeFossilDesc[] = _(
    "A piece of a\n"
    "prehistoric Poké-\n"
    "mon's wing.");

static const u8 sJawFossilDesc[] = _(
    "A piece of a prehis-\n"
    "toric Pokémon's\n"
    "large jaw.");

static const u8 sSailFossilDesc[] = _(
    "A piece of a prehis-\n"
    "toric Pokémon's\n"
    "skin sail.");

static const u8 sFossilizedBirdDesc[] = _(
    "A fossil of an\n"
    "ancient, sky-\n"
    "soaring Pokémon.");

static const u8 sFossilizedFishDesc[] = _(
    "A fossil of an\n"
    "ancient, sea-\n"
    "dwelling Pokémon.");

static const u8 sFossilizedDrakeDesc[] = _(
    "A fossil of an\n"
    "ancient, land-\n"
    "roaming Pokémon.");

static const u8 sFossilizedDinoDesc[] = _(
    "A fossil of an\n"
    "ancient, sea-\n"
    "dwelling Pokémon.");

// Mulch
static const u8 sGrowthMulchDesc[] = _(
    "A fertilizer that\n"
    "accelerates the\n"
    "growth of Berries.");

static const u8 sDampMulchDesc[] = _(
    "A fertilizer that\n"
    "decelerates the\n"
    "growth of Berries.");

static const u8 sStableMulchDesc[] = _(
    "A fertilizer that\n"
    "ups the life time\n"
    "of Berry trees.");

static const u8 sGooeyMulchDesc[] = _(
    "A fertilizer that\n"
    "makes more Berries\n"
    "regrow after fall.");

static const u8 sRichMulchDesc[] = _(
    "A fertilizer that\n"
    "ups the number of\n"
    "Berries harvested.");

static const u8 sSurpriseMulchDesc[] = _(
    "A fertilizer that\n"
    "ups the chance of\n"
    "Berry mutations.");

static const u8 sBoostMulchDesc[] = _(
    "A fertilizer that\n"
    "ups the dry speed\n"
    "of soft soil.");

static const u8 sAmazeMulchDesc[] = _(
    "A fertilizer Rich\n"
    "Surprising and\n"
    "Boosting as well.");

// Apricorns
static const u8 sRedApricornDesc[] = _(
    "A red apricorn.\n"
    "It assails your\n"
    "nostrils.");

static const u8 sBlueApricornDesc[] = _(
    "A blue apricorn.\n"
    "It smells a bit\n"
    "like grass.");

static const u8 sYellowApricornDesc[] = _(
    "A yellow apricorn.\n"
    "It has an invigor-\n"
    "ating scent.");

static const u8 sGreenApricornDesc[] = _(
    "A green apricorn.\n"
    "It has a strange,\n"
    "aromatic scent.");

static const u8 sPinkApricornDesc[] = _(
    "A pink apricorn.\n"
    "It has a nice,\n"
    "sweet scent.");

static const u8 sWhiteApricornDesc[] = _(
    "A white apricorn.\n"
    "It doesn't smell\n"
    "like anything.");

static const u8 sBlackApricornDesc[] = _(
    "A black apricorn.\n"
    "It has an inde-\n"
    "scribable scent.");

static const u8 sWishingPieceDesc[] = _(
    "Throw into a\n"
    "{PKMN} Den to attract\n"
    "Dynamax Pokémon.");

static const u8 sGalaricaTwigDesc[] = _(
    "A twig from a tree\n"
    "in Galar called\n"
    "Galarica.");

static const u8 sArmoriteOreDesc[] = _(
    "A rare ore. Can be\n"
    "found in the Isle\n"
    "of Armor at Galar.");

static const u8 sDyniteOreDesc[] = _(
    "A mysterious ore.\n"
    "It can be found in\n"
    "Galar's Max Lair.");

// Mail
static const u8 sOrangeMailDesc[] = _(
    "A Zigzagoon-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sHarborMailDesc[] = _(
    "A Wingull-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sGlitterMailDesc[] = _(
    "A Pikachu-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sMechMailDesc[] = _(
    "A Magnemite-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sWoodMailDesc[] = _(
    "A Slakoth-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sWaveMailDesc[] = _(
    "A Wailmer-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sBeadMailDesc[] = _(
    "Mail featuring a\n"
    "sketch of the\n"
    "holding Pokémon.");

static const u8 sShadowMailDesc[] = _(
    "A Duskull-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sTropicMailDesc[] = _(
    "A Bellossom-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sDreamMailDesc[] = _(
    "Mail featuring a\n"
    "sketch of the\n"
    "holding Pokémon.");

static const u8 sFabMailDesc[] = _(
    "A gorgeous-print\n"
    "Mail to be held\n"
    "by a Pokémon.");

static const u8 sRetroMailDesc[] = _(
    "Mail featuring the\n"
    "drawings of three\n"
    "Pokémon.");

// Evolution Items
static const u8 sFireStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sWaterStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sThunderStoneDesc[] = _(
    "Makes a certain\n"
    "ball of energy\n"
    "evolve.");

static const u8 sLeafStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sIceStoneDesc[] = _(
    "Makes a certain\n"
    "avian snowball\n"
    "evolve.");

static const u8 sSunStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sMoonStoneDesc[] = _(
    "Makes a certain\n"
    "cutie patootie\n"
    "evolve.");

static const u8 sShinyStoneDesc[] = _(
    "Makes a nearly\n"
    "legendary feline\n"
    "evolve.");

static const u8 sDuskStoneDesc[] = _(
    "Makes a spirit gain\n"
    "witch-like powers\n"
    "and evolve.");

static const u8 sDawnStoneDesc[] = _(
    "Makes an odd\n"
    "triangle evolve and\n"
    "become a spirit.");

static const u8 sSweetAppleDesc[] = _(
    "A very sweet apple\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sTartAppleDesc[] = _(
    "A very tart apple\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sCrackedPotDesc[] = _(
    "A cracked teapot\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sChippedPotDesc[] = _(
    "A chipped teapot\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sGalaricaCuffDesc[] = _(
    "A cuff from Galar\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sGalaricaWreathDesc[] = _(
    "A wreath made in\n"
    "Galar. Makes some\n"
    "Pokémon evolve.");

static const u8 sDragonScaleDesc[] = _(
    "A strange scale\n"
    "held by Dragon-\n"
    "type Pokémon.");

static const u8 sUpgradeDesc[] = _(
    "A peculiar box made\n"
    "by Silph Co.");

static const u8 sProtectorDesc[] = _(
    "Loved by a certain\n"
    "Pokémon. It's stiff\n"
    "and heavy.");

static const u8 sElectirizerDesc[] = _(
    "Loved by a certain\n"
    "Pokémon. It's full\n"
    "of electric energy.");

static const u8 sMagmarizerDesc[] = _(
    "Loved by a certain\n"
    "Pokémon. It's full\n"
    "of magma energy.");

static const u8 sDubiousDiscDesc[] = _(
    "A transparent device\n"
    "overflowing with\n"
    "dubious data.");

static const u8 sReaperClothDesc[] = _(
    "Loved by a certain\n"
    "Pokémon. Imbued with\n"
    "spiritual energy.");

static const u8 sPrismScaleDesc[] = _(
    "A mysterious scale\n"
    "that evolves certain\n"
    "Pokémon. It shines.");

static const u8 sWhippedDreamDesc[] = _(
    "A soft and sweet\n"
    "treat loved by\n"
    "a certain Pokémon.");

static const u8 sSachetDesc[] = _(
    "A sachet filled with\n"
    "perfumes loved by\n"
    "a certain Pokémon.");

static const u8 sOvalStoneDesc[] = _(
    "Makes a certain\n"
    "Pokémon evolve. It's\n"
    "shaped like an egg.");

static const u8 sStrawberrySweetDesc[] = _(
    "Strawberry-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sLoveSweetDesc[] = _(
    "A heart-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sBerrySweetDesc[] = _(
    "A berry-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sCloverSweetDesc[] = _(
    "A clover-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sFlowerSweetDesc[] = _(
    "A flower-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sStarSweetDesc[] = _(
    "A star-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sRibbonSweetDesc[] = _(
    "A ribbon-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sEverstoneDesc[] = _(
    "A wondrous hold\n"
    "item that prevents\n"
    "evolution.");

static const u8 sBlackAuguriteDesc[] = _(
    "A black stone that\n"
    "makes some Pokémon\n"
    "evolve.");;

static const u8 sLinkingCordDesc[] = _(
    "A mysterious string\n"
    "that makes some\n"
    "Pokémon evolve.");

static const u8 sPeatBlockDesc[] = _(
    "A block of material\n"
    "that makes some\n"
    "Pokémon evolve.");

// Nectars
static const u8 sRedNectarDesc[] = _(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

static const u8 sYellowNectarDesc[] = _(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

static const u8 sPinkNectarDesc[] = _(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

static const u8 sPurpleNectarDesc[] = _(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

// Plates
static const u8 sFlamePlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Fire-type moves.");

static const u8 sSplashPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Water-type moves.");

static const u8 sZapPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of Elec-\n"
    "tric-type moves.");

static const u8 sMeadowPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Grass-type moves.");

static const u8 sIciclePlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Ice-type moves.");

static const u8 sFistPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of Fight-\n"
    "ing-type moves.");

static const u8 sToxicPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Poison-type moves.");

static const u8 sEarthPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Ground-type moves.");

static const u8 sSkyPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Flying-type moves.");

static const u8 sMindPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of Psy\n"
    "chic-type moves.");

static const u8 sInsectPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Bug-type moves.");

static const u8 sStonePlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Rock-type moves.");

static const u8 sSpookyPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Ghost-type moves.");

static const u8 sDracoPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Dragon-type moves.");

static const u8 sDreadPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Dark-type moves.");

static const u8 sIronPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Steel-type moves.");

static const u8 sPixiePlateDesc[] = _(
    "A stone tablet that\n"
    "boosts the power of\n"
    "Fairy-type moves.");

// Drives
static const u8 sDouseDriveDesc[] = _(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "Water-type.");

static const u8 sShockDriveDesc[] = _(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "Electric-type.");

static const u8 sBurnDriveDesc[] = _(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "Fire-type.");

static const u8 sChillDriveDesc[] = _(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "Ice-type.");

// Memories
static const u8 sFireMemoryDesc[] = _(
    "A disc with Fire\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sWaterMemoryDesc[] = _(
    "A disc with Water\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sElectricMemoryDesc[] = _(
    "A disc with Electric\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sGrassMemoryDesc[] = _(
    "A disc with Grass\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sIceMemoryDesc[] = _(
    "A disc with Ice\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sFightingMemoryDesc[] = _(
    "A disc with Fighting\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sPoisonMemoryDesc[] = _(
    "A disc with Poison\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sGroundMemoryDesc[] = _(
    "A disc with Ground\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sFlyingMemoryDesc[] = _(
    "A disc with Flying\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sPsychicMemoryDesc[] = _(
    "A disc with Psychic\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sBugMemoryDesc[] = _(
    "A disc with Bug\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sRockMemoryDesc[] = _(
    "A disc with Rock\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sGhostMemoryDesc[] = _(
    "A disc with Ghost\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sDragonMemoryDesc[] = _(
    "A disc with Dragon\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sDarkMemoryDesc[] = _(
    "A disc with Dark\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sSteelMemoryDesc[] = _(
    "A disc with Steel\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sFairyMemoryDesc[] = _(
    "A disc with Fairy\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sRustedSwordDesc[] = _(
    "A rusty sword. A\n"
    "hero used it to\n"
    "halt a disaster.");

static const u8 sRustedShieldDesc[] = _(
    "A rusty shield. A\n"
    "hero used it to\n"
    "halt a disaster.");

// Colored Orbs
static const u8 sRedOrbDesc[] = _(
    "A red, glowing orb\n"
    "said to contain an\n"
    "ancient power.");

static const u8 sBlueOrbDesc[] = _(
    "A blue, glowing orb\n"
    "said to contain an\n"
    "ancient power.");

// Mega Stones
static const u8 sVenusauriteDesc[] = _(
    "This stone enables\n"
    "Venusaur to Mega\n"
    "Evolve in battle.");

static const u8 sCharizarditeDesc[] = _(
    "This stone enables\n"
    "Charizard to Mega\n"
    "Evolve in battle.");

static const u8 sBlastoisiniteDesc[] = _(
    "This stone enables\n"
    "Blastoise to Mega\n"
    "Evolve in battle.");

static const u8 sBeedrilliteDesc[] = _(
    "This stone enables\n"
    "Beedrill to Mega\n"
    "Evolve in battle.");

static const u8 sPidgeotiteDesc[] = _(
    "This stone enables\n"
    "Pidgeot to Mega\n"
    "Evolve in battle.");

static const u8 sAlakaziteDesc[] = _(
    "This stone enables\n"
    "Alakazam to Mega\n"
    "Evolve in battle.");

static const u8 sSlowbroniteDesc[] = _(
    "This stone enables\n"
    "Slowbro to Mega\n"
    "Evolve in battle.");

static const u8 sGengariteDesc[] = _(
    "This stone enables\n"
    "Gengar to Mega\n"
    "Evolve in battle.");

static const u8 sKangaskhaniteDesc[] = _(
    "This stone enables\n"
    "Kangaskhan to Mega\n"
    "Evolve in battle.");

static const u8 sPinsiriteDesc[] = _(
    "This stone enables\n"
    "Pinsir to Mega\n"
    "Evolve in battle.");

static const u8 sGyaradositeDesc[] = _(
    "This stone enables\n"
    "Gyarados to Mega\n"
    "Evolve in battle.");

static const u8 sAerodactyliteDesc[] = _(
    "This stone enables\n"
    "Aerodactyl to Mega\n"
    "Evolve in battle.");

static const u8 sMewtwoniteDesc[] = _(
    "This stone enables\n"
    "Mewtwo to Mega\n"
    "Evolve in battle.");

static const u8 sAmpharositeDesc[] = _(
    "This stone enables\n"
    "Ampharos to Mega\n"
    "Evolve in battle.");

static const u8 sSteelixiteDesc[] = _(
    "This stone enables\n"
    "Steelix to Mega\n"
    "Evolve in battle.");

static const u8 sScizoriteDesc[] = _(
    "This stone enables\n"
    "Scizor to Mega\n"
    "Evolve in battle.");

static const u8 sHeracroniteDesc[] = _(
    "This stone enables\n"
    "Heracross to Mega\n"
    "Evolve in battle.");

static const u8 sHoundoominiteDesc[] = _(
    "This stone enables\n"
    "Houndoom to Mega\n"
    "Evolve in battle.");

static const u8 sTyranitariteDesc[] = _(
    "This stone enables\n"
    "Tyranitar to Mega\n"
    "Evolve in battle.");

static const u8 sSceptiliteDesc[] = _(
    "This stone enables\n"
    "Sceptile to Mega\n"
    "Evolve in battle.");

static const u8 sBlazikeniteDesc[] = _(
    "This stone enables\n"
    "Blaziken to Mega\n"
    "Evolve in battle.");

static const u8 sSwampertiteDesc[] = _(
    "This stone enables\n"
    "Swampert to Mega\n"
    "Evolve in battle.");

static const u8 sGardevoiriteDesc[] = _(
    "This stone enables\n"
    "Gardevoir to Mega\n"
    "Evolve in battle.");

static const u8 sSableniteDesc[] = _(
    "This stone enables\n"
    "Sableye to Mega\n"
    "Evolve in battle.");

static const u8 sMawiliteDesc[] = _(
    "This stone enables\n"
    "Mawile to Mega\n"
    "Evolve in battle.");

static const u8 sAggroniteDesc[] = _(
    "This stone enables\n"
    "Aggron to Mega\n"
    "Evolve in battle.");

static const u8 sMedichamiteDesc[] = _(
    "This stone enables\n"
    "Medicham to Mega\n"
    "Evolve in battle.");

static const u8 sManectiteDesc[] = _(
    "This stone enables\n"
    "Manectric to Mega\n"
    "Evolve in battle.");

static const u8 sSharpedoniteDesc[] = _(
    "This stone enables\n"
    "Sharpedo to Mega\n"
    "Evolve in battle.");

static const u8 sCameruptiteDesc[] = _(
    "This stone enables\n"
    "Camerupt to Mega\n"
    "Evolve in battle.");

static const u8 sAltarianiteDesc[] = _(
    "This stone enables\n"
    "Altaria to Mega\n"
    "Evolve in battle.");

static const u8 sBanettiteDesc[] = _(
    "This stone enables\n"
    "Banette to Mega\n"
    "Evolve in battle.");

static const u8 sAbsoliteDesc[] = _(
    "This stone enables\n"
    "Absol to Mega\n"
    "Evolve in battle.");

static const u8 sGlalititeDesc[] = _(
    "This stone enables\n"
    "Glalie to Mega\n"
    "Evolve in battle.");

static const u8 sSalamenciteDesc[] = _(
    "This stone enables\n"
    "Salamence to Mega\n"
    "Evolve in battle.");

static const u8 sMetagrossiteDesc[] = _(
    "This stone enables\n"
    "Metagross to Mega\n"
    "Evolve in battle.");

static const u8 sLatiasiteDesc[] = _(
    "This stone enables\n"
    "Latias to Mega\n"
    "Evolve in battle.");

static const u8 sLatiositeDesc[] = _(
    "This stone enables\n"
    "Latios to Mega\n"
    "Evolve in battle.");

static const u8 sLopunniteDesc[] = _(
    "This stone enables\n"
    "Lopunny to Mega\n"
    "Evolve in battle.");

static const u8 sGarchompiteDesc[] = _(
    "This stone enables\n"
    "Garchomp to Mega\n"
    "Evolve in battle.");

static const u8 sLucarioniteDesc[] = _(
    "This stone enables\n"
    "Lucario to Mega\n"
    "Evolve in battle.");

static const u8 sAbomasiteDesc[] = _(
    "This stone enables\n"
    "Abomasnow to Mega\n"
    "Evolve in battle.");

static const u8 sGalladiteDesc[] = _(
    "This stone enables\n"
    "Gallade to Mega\n"
    "Evolve in battle.");

static const u8 sAudiniteDesc[] = _(
    "This stone enables\n"
    "Audino to Mega\n"
    "Evolve in battle.");

static const u8 sDianciteDesc[] = _(
    "This stone enables\n"
    "Diancie to Mega\n"
    "Evolve in battle.");

// Gems
static const u8 sNormalGemDesc[] = _(
    "Increases the\n"
    "power of Normal\n"
    "Type moves.");

static const u8 sFireGemDesc[] = _(
    "Increases the\n"
    "power of Fire\n"
    "Type moves.");

static const u8 sWaterGemDesc[] = _(
    "Increases the\n"
    "power of Water\n"
    "Type moves.");

static const u8 sElectricGemDesc[] = _(
    "Increases the\n"
    "power of Electric\n"
    "Type moves.");

static const u8 sGrassGemDesc[] = _(
    "Increases the\n"
    "power of Grass\n"
    "Type moves.");

static const u8 sIceGemDesc[] = _(
    "Increases the\n"
    "power of Ice\n"
    "Type moves.");

static const u8 sFightingGemDesc[] = _(
    "Increases the\n"
    "power of Fighting\n"
    "Type moves.");

static const u8 sPoisonGemDesc[] = _(
    "Increases the\n"
    "power of Poison\n"
    "Type moves.");

static const u8 sGroundGemDesc[] = _(
    "Increases the\n"
    "power of Ground\n"
    "Type moves.");

static const u8 sFlyingGemDesc[] = _(
    "Increases the\n"
    "power of Flying\n"
    "Type moves.");

static const u8 sPsychicGemDesc[] = _(
    "Increases the\n"
    "power of Psychic\n"
    "Type moves.");

static const u8 sBugGemDesc[] = _(
    "Increases the\n"
    "power of Bug\n"
    "Type moves.");

static const u8 sRockGemDesc[] = _(
    "Increases the\n"
    "power of Rock\n"
    "Type moves.");

static const u8 sGhostGemDesc[] = _(
    "Increases the\n"
    "power of Ghost\n"
    "Type moves.");

static const u8 sDragonGemDesc[] = _(
    "Increases the\n"
    "power of Dragon\n"
    "Type moves.");

static const u8 sDarkGemDesc[] = _(
    "Increases the\n"
    "power of Dark\n"
    "Type moves.");

static const u8 sSteelGemDesc[] = _(
    "Increases the\n"
    "power of Steel\n"
    "Type moves.");

static const u8 sFairyGemDesc[] = _(
    "Increases the\n"
    "power of Fairy\n"
    "Type moves.");

// Z-Crystals
static const u8 sNormaliumZDesc[] = _(
    "Upgrade Normal-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sFiriumZDesc[] = _(
    "Upgrade Fire-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sWateriumZDesc[] = _(
    "Upgrade Water-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sElectriumZDesc[] = _(
    "Upgrade Electric-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sGrassiumZDesc[] = _(
    "Upgrade Grass-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sIciumZDesc[] = _(
    "Upgrade Ice-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sFightiniumZDesc[] = _(
    "Upgrade Fighting-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sPoisoniumZDesc[] = _(
    "Upgrade Poison-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sGroundiumZDesc[] = _(
    "Upgrade Ground-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sFlyiniumZDesc[] = _(
    "Upgrade Flying-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sPsychiumZDesc[] = _(
    "Upgrade Psychic-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sBuginiumZDesc[] = _(
    "Upgrade Bug-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sRockiumZDesc[] = _(
    "Upgrade Rock-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sGhostiumZDesc[] = _(
    "Upgrade Ghost-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sDragoniumZDesc[] = _(
    "Upgrade Dragon-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sDarkiniumZDesc[] = _(
    "Upgrade Dark-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sSteeliumZDesc[] = _(
    "Upgrade Steel-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sFairiumZDesc[] = _(
    "Upgrade Fairy-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sPikaniumZDesc[] = _(
    "Upgrade Pikachu's\n"
    "Volt Tackle\n"
    "into a Z-Move.");

static const u8 sEeviumZDesc[] = _(
    "Upgrade Eevee's\n"
    "Last Resort\n"
    "into a Z-Move.");

static const u8 sSnorliumZDesc[] = _(
    "Upgrade Snorlax's\n"
    "Giga Impact\n"
    "into a Z-Move.");

static const u8 sMewniumZDesc[] = _(
    "Upgrade Mew's\n"
    "Psychic into\n"
    "a Z-Move.");

static const u8 sDecidiumZDesc[] = _(
    "Upgrade Decidu-\n"
    "eye's Spirit Sha-\n"
    "ckle into a Z-Move.");

static const u8 sInciniumZDesc[] = _(
    "Upgrade Incine-\n"
    "roar's Darkest La-\n"
    "riat into a Z-Move.");

static const u8 sPrimariumZDesc[] = _(
    "Upgrade Primarina's\n"
    "Sparkling Aria\n"
    "into a Z-Move.");

static const u8 sLycaniumZDesc[] = _(
    "Upgrade Lycanroc's\n"
    "Stone Edge\n"
    "into a Z-Move.");

static const u8 sMimikiumZDesc[] = _(
    "Upgrade Mimikyu's\n"
    "Play Rough\n"
    "into a Z-Move.");

static const u8 sKommoniumZDesc[] = _(
    "Upgrade Kommo-o's\n"
    "Clanging Scales\n"
    "into a Z-Move.");

static const u8 sTapuniumZDesc[] = _(
    "Upgrade the tapu's\n"
    "Nature's Madness\n"
    "into a Z-Move.");

static const u8 sSolganiumZDesc[] = _(
    "Upgrade Solgaleo's\n"
    "Sunsteel Strike\n"
    "into a Z-Move.");

static const u8 sLunaliumZDesc[] = _(
    "Upgrade Lunala's\n"
    "Moongeist Beam\n"
    "into a Z-Move.");

static const u8 sMarshadiumZDesc[] = _(
    "Upgrade Marsha-\n"
    "dow's Spectral Thi-\n"
    "ef into a Z-Move.");

static const u8 sAloraichiumZDesc[] = _(
    "Upgrade Alolan\n"
    "Raichu's Thunder-\n"
    "bolt into a Z-Move.");

static const u8 sPikashuniumZDesc[] = _(
    "Upgrade Pikachu w/\n"
    "a cap's Thunderbolt\n"
    "into a Z-Move.");

static const u8 sUltranecroziumZDesc[] = _(
    "A crystal to turn\n"
    "fused Necrozma\n"
    "into a new form.");

// Species-specific Held Items
static const u8 sLightBallDesc[] = _(
    "A held item that\n"
    "boosts Peckachew's\n"
    "Attack and Special\n"
    "Attack stats.");

static const u8 sLeekDesc[] = _(
    "A held item that\n"
    "raises Farfetch'd's\n"
    "critical-hit ratio.");

static const u8 sThickClubDesc[] = _(
    "A held item that\n"
    "raises Cubone or\n"
    "Marowak's Attack.");

static const u8 sLuckyPunchDesc[] = _(
    "A held item that\n"
    "raises Chansey's\n"
    "critical-hit rate.");

static const u8 sMetalPowderDesc[] = _(
    "A held item that\n"
    "raises Ditto's\n"
    "Defense.");

static const u8 sQuickPowderDesc[] = _(
    "An item to be held\n"
    "by Ditto. This odd\n"
    "powder boosts Speed.");

static const u8 sDeepSeaScaleDesc[] = _(
    "A held item that\n"
    "raises the Sp. Def\n"
    "of Clamperl.");

static const u8 sDeepSeaToothDesc[] = _(
    "A held item that\n"
    "raises the Sp. Atk\n"
    "of Clamperl.");

static const u8 sSoulDewDesc[] = _(
#if B_SOUL_DEW_BOOST >= GEN_7
    "Powers up Latios' &\n"
    "Latias' Psychic and\n"
    "Dragon-type moves.");
#else
    "held item: raises\n"
    "Sp. Atk & Sp. Def of\n"
    "Latios & Latias.");
#endif

static const u8 sAdamantOrbDesc[] = _(
    "Boosts the power of\n"
    "Dialga's Dragon and\n"
    "Steel-type moves.");

static const u8 sLustrousOrbDesc[] = _(
    "Boosts the power of\n"
    "Palkia's Dragon and\n"
    "Water-type moves.");

static const u8 sGriseousOrbDesc[] = _(
    "Powers up Giratina's\n"
    "Dragon and Ghost-\n"
    "type moves.");

// Incenses
static const u8 sSeaIncenseDesc[] = _(
    "A held item that\n"
    "slightly boosts\n"
    "Water-type moves.");

static const u8 sLaxIncenseDesc[] = _(
    "A held item that\n"
    "slightly lowers the\n"
    "foe's accuracy.");

static const u8 sOddIncenseDesc[] = _(
    "A held item that\n"
    "boosts Psychic-\n"
    "type moves.");

static const u8 sRockIncenseDesc[] = _(
    "A held item that\n"
    "raises the power of\n"
    "Rock-type moves.");

static const u8 sFullIncenseDesc[] = _(
    "A held item that\n"
    "makes the holder\n"
    "move slower.");

static const u8 sWaveIncenseDesc[] = _(
    "A held item that\n"
    "slightly boosts\n"
    "Water-type moves.");

static const u8 sRoseIncenseDesc[] = _(
    "A held item that\n"
    "raises the power of\n"
    "Grass-type moves.");

static const u8 sLuckIncenseDesc[] = _(
    "Doubles money in\n"
    "battle if the\n"
    "holder takes part.");

static const u8 sPureIncenseDesc[] = _(
    "A held item that\n"
    "helps repel wild\n"
    "Pokémon.");

// Contest Scarves
static const u8 sRedScarfDesc[] = _(
    "A held item that\n"
    "raises Cool in\n"
    "Contests.");

static const u8 sBlueScarfDesc[] = _(
    "A held item that\n"
    "raises Beauty in\n"
    "Contests.");

static const u8 sPinkScarfDesc[] = _(
    "A held item that\n"
    "raises Cute in\n"
    "Contests.");

static const u8 sGreenScarfDesc[] = _(
    "A held item that\n"
    "raises Smart in\n"
    "Contests.");

static const u8 sYellowScarfDesc[] = _(
    "A held item that\n"
    "raises Tough in\n"
    "Contests.");

// EV Gain Modifiers
static const u8 sMachoBraceDesc[] = _(
    "A held item that\n"
    "promotes growth,\n"
    "but reduces Speed.");

static const u8 sPowerWeightDesc[] = _(
    "A held item that\n"
    "promotes HP gain,\n"
    "but reduces Speed.");

static const u8 sPowerBracerDesc[] = _(
    "A held item that\n"
    "promotes Atk gain,\n"
    "but reduces Speed.");

static const u8 sPowerBeltDesc[] = _(
    "A held item that\n"
    "promotes Def gain,\n"
    "but reduces Speed.");

static const u8 sPowerLensDesc[] = _(
    "held item that pro-\n"
    "motes Sp. Atk gain,\n"
    "but reduces Speed.");

static const u8 sPowerBandDesc[] = _(
    "held item that pro-\n"
    "motes Sp. Def gain,\n"
    "but reduces Speed.");

static const u8 sPowerAnkletDesc[] = _(
    "A held item that\n"
    "promotes Spd gain,\n"
    "but reduces Speed.");

// Type-boosting Held Items
static const u8 sSilkScarfDesc[] = _(
    "A held item that\n"
    "boosts Normal-type\n"
    "moves, and all other\n"
    "moves a bit less.");

static const u8 sCharcoalDesc[] = _(
    "A held item that\n"
    "boosts Fire-type\n"
    "moves. Boosts more if\n"
    "the target is burned.");

static const u8 sMysticWaterDesc[] = _(
    "A held item that\n"
    "raises the power of\n"
    "Water-type moves.");

static const u8 sMagnetDesc[] = _(
    "A held item that\n"
    "boosts Electric-\n"
    "type moves.");

static const u8 sMiracleSeedDesc[] = _(
    "A held item that\n"
    "raises the power of\n"
    "Grass-type moves.");

static const u8 sNeverMeltIceDesc[] = _(
    "A held item that\n"
    "boosts Ice-type\n"
    "moves. Protects the\n"
    "holder from burns.");

static const u8 sBlackBeltDesc[] = _(
    "A held item that\n"
    "boosts Fighting-\n"
    "type moves.");

static const u8 sPoisonBarbDesc[] = _(
    "A held item that\n"
    "boosts Poison-type\n"
    "moves. Poisoned foes\n"
    "take bonus true damage.");

static const u8 sSoftSandDesc[] = _(
    "A held item that\n"
    "boosts Ground-type\n"
    "moves, and may make\n"
    "them lower accuracy.");

static const u8 sSharpBeakDesc[] = _(
    "A held item that\n"
    "boosts Flying-type\n"
    "moves. Boosts more if\n"
    "the foe is grounded.");

static const u8 sTwistedSpoonDesc[] = _(
    "A held item that\n"
    "boosts Psychic-\n"
    "type moves.");

static const u8 sSilverPowderDesc[] = _(
    "A held item that\n"
    "boosts Bug-type\n"
    "moves, and may cover\n"
    "the foe in powder.");

static const u8 sHardStoneDesc[] = _(
    "A held item that\n"
    "boosts Rock-type\n"
    "moves. Reduces damage\n"
    "after using one.");

static const u8 sSpellTagDesc[] = _(
    "A held item that\n"
    "boosts Ghost-type\n"
    "moves, and depletes\n"
    "the target's PP.");

static const u8 sDragonFangDesc[] = _(
    "A held item that\n"
    "boosts Dragon-type\n"
    "moves. Boosts more if\n"
    "it is resisted.");

static const u8 sBlackGlassesDesc[] = _(
    "A held item that\n"
    "raises the power of\n"
    "Dark-type moves.");

static const u8 sMetalCoatDesc[] = _(
    "A held item that\n"
    "raises the power of\n"
    "Steel-type moves.");

// Choice Items
static const u8 sChoiceBandDesc[] = _(
    "A held that boosts the\n"
    "holder's Attack stat\n"
    "but only allows the\n"
    "use of a single move.");

static const u8 sChoiceSpecsDesc[] = _(
    "A held that boosts the\n"
    "holder's Sp. Atk stat\n"
    "but only allows the\n"
    "use of a single move.");

static const u8 sChoiceScarfDesc[] = _(
    "A held that boosts the\n"
    "holder's Speed stat\n"
    "but only allows the\n"
    "use of a single move.");

// Status Orbs
static const u8 sFlameOrbDesc[] = _(
    "A held item that will\n"
    "afflict the holder\n"
    "with a burn during\n"
    "battle.");

static const u8 sToxicOrbDesc[] = _(
    "A held item that will\n"
    "badly poison the\n"
    "holder during battle.");

// Weather Rocks
static const u8 sDampRockDesc[] = _(
    "When the holder\n"
    "changes the weather\n"
    "to rain, it will\n"
    "persist longer.");

static const u8 sHeatRockDesc[] = _(
    "When the holder\n"
    "changes the weather\n"
    "to harsh sunlight, it\n"
    "will persist longer.");

static const u8 sSmoothRockDesc[] = _(
    "When the holder\n"
    "changes the weather\n"
    "to a sandstorm, it\n"
    "will persist longer.");

static const u8 sIcyRockDesc[] = _(
    "When the holder\n"
    "changes the weather\n"
    "to hail, it will\n"
    "persist longer.");

// Terrain Seeds
static const u8 sElectricSeedDesc[] = _(
    "A held item that\n"
    "boosts Defense on\n"
    "Electric Terrain. It\n"
    "can only be used once.");

static const u8 sPsychicSeedDesc[] = _(
    "A held item that\n"
    "boosts Sp. Def on\n"
    "Psychic Terrain. It\n"
    "can only be used once.");

static const u8 sMistySeedDesc[] = _(
    "A held item that\n"
    "boosts Sp. Def on\n"
    "Misty Terrain. It can\n"
    "only be used once.");

static const u8 sGrassySeedDesc[] = _(
    "A held item that\n"
    "boosts Defense on\n"
    "Grassy Terrain. It\n"
    "can only be used once.");

// Type-activated Stat Modifiers
static const u8 sAbsorbBulbDesc[] = _(
    "A held item that\n"
    "boosts the holder's\n"
    "Sp. Atk if hit with a\n"
    "Water-type attack.");

static const u8 sCellBatteryDesc[] = _(
    "A held item that\n"
    "boosts the holder's\n"
    "Attack if hit with a\n"
    "Electric-type attack.");

static const u8 sLuminousMossDesc[] = _(
    "A held item that\n"
    "boosts the holder's\n"
    "Sp. Def if hit with a\n"
    "Water-type attack.");

static const u8 sSnowballDesc[] = _(
    "A held item that\n"
    "boosts the holder's\n"
    "Attack if hit with a\n"
    "Ice-type attack.");

// Misc. Held Items
static const u8 sBrightPowderDesc[] = _(
    "A held item that\n"
    "lowers the opposing\n"
    "Pokémon's accuracy.");

static const u8 sWhiteHerbDesc[] = _(
    "A held item that\n"
    "restores any\n"
    "lowered stat.");

static const u8 sExpShareDesc[] = _(
#if I_EXP_SHARE_ITEM >= GEN_6
    "This device gives\n"
    "exp. to other\n"
    "party members.");
#else
    "A held item that\n"
    "gets Exp. points\n"
    "from battles.");
#endif

static const u8 sQuickClawDesc[] = _(
    "This held item lets\n"
    "the holder move first\n"
    "occasionally.");

static const u8 sSootheBellDesc[] = _(
    "A held item that\n"
    "calms spirits and\n"
    "fosters friendship.");

#if B_MENTAL_HERB >= GEN_5
static const u8 sMentalHerbDesc[] = _(
    "The holder shakes off\n"
    "move-binding effects\n"
    "to move freely. It can\n"
    "be used only once.");
#else
static const u8 sMentalHerbDesc[] = _(
    "A held item that\n"
    "snaps Pokémon out\n"
    "of infatuation.");
#endif

static const u8 sKingsRockDesc[] = _(
    "When the holder\n"
    "successfully inflicts\n"
    "damage, the target\n"
    "may also flinch.");

static const u8 sAmuletCoinDesc[] = _(
    "Doubles money in\n"
    "battle if the\n"
    "holder takes part.");

static const u8 sCleanseTagDesc[] = _(
    "Boosts moves of the\n"
    "holder for every stat\n"
    "drop on the target.\n"
    "Repels wild Pokémon.");

static const u8 sSmokeBallDesc[] = _(
    "A held item that\n"
    "assures fleeing\n"
    "from wild Pokémon.");

static const u8 sFocusBandDesc[] = _(
    "A held item that\n"
    "occasionally prevents\n"
    "fainting and resists\n"
    "damage.");

static const u8 sLuckyEggDesc[] = _(
    "A held item that\n"
    "boosts Exp. points\n"
    "earned in battle.");

static const u8 sScopeLensDesc[] = _(
    "A held item that\n"
    "boosts the holder's\n"
    "critical-hit ratio.");

static const u8 sLeftoversDesc[] = _(
    "The holder's HP is\n"
    "slowly but steadily\n"
    "restored throughout a\n"
    "battle.");

static const u8 sShellBellDesc[] = _(
    "The holder restores a\n"
    "little HP to itself\n"
    "every time it inflicts\n"
    "damage with an attack.");

static const u8 sWideLensDesc[] = _(
    "A held up that boosts\n"
    "the accuracy of moves\n"
    "and prevents accuracy\n"
    "drops.");

static const u8 sMuscleBandDesc[] = _(
    "A held up that boosts\n"
    "the power of physical\n"
    "moves and prevents\n"
    "Attack drops.");

static const u8 sWiseGlassesDesc[] = _(
    "A held up that boosts\n"
    "the power of special\n"
    "moves and prevents\n"
    "Sp. Atk drops.");

static const u8 sExpertBeltDesc[] = _(
    "A belt that boosts\n"
    "the power of super\n"
    "effective moves.");

static const u8 sLightClayDesc[] = _(
    "When the holder uses\n"
    "barrier moves like\n"
    "Reflect, they will\n"
    "last longer.");

static const u8 sLifeOrbDesc[] = _(
    "A held item that\n"
    "boosts the power of\n"
    "moves, but at the cost\n"
    "of some HP per hit.");

static const u8 sPowerHerbDesc[] = _(
    "A single-use held item\n"
    "that allows the\n"
    "immediate use of a\n"
    "move that charges.");

static const u8 sFocusSashDesc[] = _(
    "If the holder has full\n"
    "HP, it will endure a\n"
    "potential KO attack\n"
    "with 1 HP.");

static const u8 sZoomLensDesc[] = _(
    "If the holder moves\n"
    "after its target\n"
    "moves, its accuracy\n"
    "will be boosted.");

static const u8 sMetronomeDesc[] = _(
    "Boosts moves the\n"
    "holder uses\n"
    "consecutively until\n"
    "another move is used.");

static const u8 sIronBallDesc[] = _(
    "Cuts Speed and lets\n"
    "Flying-types be hit\n"
    "by Ground moves.");

static const u8 sLaggingTailDesc[] = _(
    "A held item that\n"
    "makes the holder\n"
    "move slower.");

static const u8 sDestinyKnotDesc[] = _(
    "If the holder's move\n"
    "choices become\n"
    "limited, the foe's\n"
    "does too.");

static const u8 sBlackSludgeDesc[] = _(
    "A held item that heals\n"
    "Poison-type Pokémon.\n"
    "It damages any other\n"
    "type.");

static const u8 sGripClawDesc[] = _(
    "Makes binding moves\n"
    "used by the holder\n"
    "go on for 7 turns.");

static const u8 sStickyBarbDesc[] = _(
    "A held item that\n"
    "damages the holder\n"
    "and drops Speed and\n"
    "evasion every turn.");

static const u8 sShedShellDesc[] = _(
    "Enables the holder\n"
    "to switch out of\n"
    "battle without fail.");

static const u8 sBigRootDesc[] = _(
    "A held item that\n"
    "boosts the healing\n"
    "the holder gets from\n"
    "HP-stealing moves.");

static const u8 sRazorClawDesc[] = _(
    "A hooked claw that\n"
    "ups the holder's\n"
    "critical-hit ratio.");

static const u8 sRazorFangDesc[] = _(
    "Buffs the Gligar's\n"
    "line's biting\n"
    "moves.");

static const u8 sEvioliteDesc[] = _(
    "Raises the Def and\n"
    "Sp. Def of Pokémon\n"
    "that can evolve.");

static const u8 sFloatStoneDesc[] = _(
    "A held up that boosts\n"
    "the holder's Speed\n"
    "stat and reduces\n"
    "their weight.");

static const u8 sRockyHelmetDesc[] = _(
    "If the holder takes\n"
    "damage, the attacker\n"
    "will also be damaged\n"
    "upon contact.");

static const u8 sAirBalloonDesc[] = _(
    "When held, the holder\n"
    "will float. When the\n"
    "holder is attacked,\n"
    "the item will burst.");

static const u8 sRedCardDesc[] = _(
    "When the holder is hit\n"
    "by an attack, the\n"
    "attacker is removed\n"
    "from battle. ");

static const u8 sRingTargetDesc[] = _(
    "The immunities of the\n"
    "holder are negated\n"
    "and they take more\n"
    "damage.");

static const u8 sBindingBandDesc[] = _(
    "A held item that\n"
    "boosts binding moves\n"
    "and makes them last\n"
    "longer.");

static const u8 sEjectButtonDesc[] = _(
    "If the holder is hit\n"
    "by an attack, it will\n"
    "be switched out of\n"
    "battle.");

static const u8 sWeaknessPolicyDesc[] = _(
    "If the holder is hit\n"
    "by a super effective\n"
    "move, sharply boosts\n"
    "its Atk and Sp. Atk.");

static const u8 sAssaultVestDesc[] = _(
    "This held item boosts\n"
    "the holder's Sp. Def\n"
    "stat but prevents the\n"
    "use of status moves.");

static const u8 sSafetyGogglesDesc[] = _(
    "Protect from\n"
    "weather damage and\n"
    "powder moves.");

static const u8 sAdrenalineOrbDesc[] = _(
    "Boosts Speed if the\n"
    "user is intimidated,\n"
    "but only one time.");

static const u8 sTerrainExtenderDesc[] = _(
    "Extends the length\n"
    "of the active\n"
    "battle terrain.");

static const u8 sProtectivePadsDesc[] = _(
    "Reduces recoil damage\n"
    "taken from moves and\n"
    "prevents direct\n"
    "contact with targets.");

static const u8 sThroatSprayDesc[] = _(
    "Raises Sp. Atk. if\n"
    "the holder uses a\n"
    "sound-based move.");

static const u8 sEjectPackDesc[] = _(
    "If the holder's stats\n"
    "are lowered, it will\n"
    "be switched out of\n"
    "battle.");

static const u8 sHeavyDutyBootsDesc[] = _(
    "Boots that prevent\n"
    "effects of traps\n"
    "set in the field.");

static const u8 sBlunderPolicyDesc[] = _(
    "If the holder misses\n"
    "with a move due to low\n"
    "accuracy, sharply\n"
    "boosts its Speed stat.");

static const u8 sRoomServiceDesc[] = _(
    "Lowers Speed if\n"
    "Trick Room is\n"
    "active.");

static const u8 sUtilityUmbrellaDesc[] = _(
    "An umbrella that\n"
    "decreases damage\n"
    "of weather types.");

// Berries
static const u8 sCheriBerryDesc[] = _(
    "A held item that\n"
    "heals paralysis\n"
    "in battle.");

static const u8 sChestoBerryDesc[] = _(
    "A held item that\n"
    "awakens Pokémon\n"
    "in battle.");

static const u8 sPechaBerryDesc[] = _(
    "A held item that\n"
    "heals poisoning\n"
    "in battle.");

static const u8 sRawstBerryDesc[] = _(
    "A held item that\n"
    "heals a burn in\n"
    "battle.");

static const u8 sAspearBerryDesc[] = _(
    "A held item that\n"
    "defrosts Pokémon\n"
    "in battle.");

static const u8 sLeppaBerryDesc[] = _(
    "A held item that\n"
    "restores 10 PP in\n"
    "battle.");

static const u8 sOranBerryDesc[] = _(
    "A held item that\n"
    "restores 10 HP in\n"
    "battle.");

static const u8 sPersimBerryDesc[] = _(
    "A held item that\n"
    "heals confusion\n"
    "in battle.");

static const u8 sLumBerryDesc[] = _(
    "It may be used or held\n"
    "by a Pokémon to cure\n"
    "itself of any status\n"
    "condition it may have.");

static const u8 sSitrusBerryDesc[] = _(
#if I_SITRUS_BERRY_HEAL >= GEN_4
    "It may be used or held\n"
    "by a Pokémon to heal\n"
    "the user's HP a\n"
    "little.");
#else
    "A held item that\n"
    "restores 30 HP in\n"
    "battle.");
#endif

static const u8 sFigyBerryDesc[] = _(
    "A held item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sWikiBerryDesc[] = _(
    "A held item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sMagoBerryDesc[] = _(
    "A held item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sAguavBerryDesc[] = _(
    "A held item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sIapapaBerryDesc[] = _(
    "A held item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sRazzBerryDesc[] = _(
    "Eaten at 1/2 HP\n"
    "to infatuate a foe\n"
    "of the opposite gender.");

static const u8 sBlukBerryDesc[] = _(
    "If the holder is hit,\n"
    "the attacker's last\n"
    "used move will have\n"
    "its PP reduced.");

static const u8 sNanabBerryDesc[] = _(
    "At half HP, the holder\n"
    "will stockpile some\n"
    "power.");

static const u8 sWepearBerryDesc[] = _(
    "Eaten at 1/2 HP\n"
    "To identify\n"
    "the opponent.");

static const u8 sPinapBerryDesc[] = _(
    "If the holder is hit\n"
    "with a move, the\n"
    "holder will be hurt\n"
    "even further.");

static const u8 sPomegBerryDesc[] = _(
    "The holder's stat\n"
    "drops will be flipped\n"
    "when at low HP.");

static const u8 sKelpsyBerryDesc[] = _(
    "When using a Pulse\n"
    "move, is consumed to\n"
    "up damage by 1.5x.");

static const u8 sQualotBerryDesc[] = _(
    "When using a Wind\n"
    "move, is consumed to\n"
    "up damage by 1.5x.");

static const u8 sHondewBerryDesc[] = _(
    "At half HP, the holder\n"
    "will be enveloped in\n"
    "in Aqua Ring and\n"
    "Hearthwarm.");

static const u8 sGrepaBerryDesc[] = _(
    "When using a Kick\n"
    "move, is consumed to\n"
    "up damage by 1.5x.");

static const u8 sTamatoBerryDesc[] = _(
    "A unique berry\n"
    "that bears love\n"
    "a lot.");

static const u8 sCornnBerryDesc[] = _(
    "Eaten at 1/4 HP\n"
    "to inflict Salt Corn\n"
    "on the opponent.");

static const u8 sMagostBerryDesc[] = _(
    "If the holder is hit\n"
    "by any move, the power\n"
    "of that move will be\n"
    "slightly weakened.");

static const u8 sRabutaBerryDesc[] = _(
    "Eaten at 1/2 HP\n"
    "and will confuse\n"
    "the opponent.");

static const u8 sNomelBerryDesc[] = _(
    "When using a Pierce\n"
    "move, is consumed to\n"
    "up damage by 1.5x.");

static const u8 sSpelonBerryDesc[] = _(
    "If the holder is hit,\n"
    "spikes will be laid on\n"
    "the attacker's side\n"
    "of the field.");

static const u8 sPamtreBerryDesc[] = _(
    "A held item that\n"
    "heals panic\n"
    "in battle.");

static const u8 sWatmelBerryDesc[] = _(
    "Eaten if holder has\n"
    "Blooming. Will\n"
    "explode destructively.");

static const u8 sDurinBerryDesc[] = _(
    "If the holder is hit\n"
    "at half HP, all of the\n"
    "attacker's stats will\n"
    "be lowered.");

static const u8 sBelueBerryDesc[] = _(
    "If the holder is hit,\n"
    "the attacker will be\n"
    "covered in Tar.");

static const u8 sChilanBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "Normal-type attack.");

static const u8 sOccaBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Fire-type attack.");

static const u8 sPasshoBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Water-type attack.");

static const u8 sWacanBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Electric-type attack.");

static const u8 sRindoBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Grass-type attack.");

static const u8 sYacheBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Ice-type attack.");

static const u8 sChopleBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Fighting-type attack.");

static const u8 sKebiaBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Poison-type attack.");

static const u8 sShucaBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Ground-type attack.");

static const u8 sCobaBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Flying-type attack.");

static const u8 sPayapaBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Psychic-type attack.");

static const u8 sTangaBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Bug-type attack.");

static const u8 sChartiBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Rock-type attack.");

static const u8 sKasibBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Ghost-type attack.");

static const u8 sHabanBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Dragon-type attack.");

static const u8 sColburBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Dark-type attack.");

static const u8 sBabiriBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Steel-type attack.");

static const u8 sRoseliBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Grass-type attack.");

static const u8 sLiechiBerryDesc[] = _(
    "The holder's Attack\n"
    "stat will increase\n"
    "when it's at low HP.");

static const u8 sGanlonBerryDesc[] = _(
    "The holder's Defense\n"
    "stat will increase\n"
    "when it's at low HP.");

static const u8 sSalacBerryDesc[] = _(
    "The holder's Speed\n"
    "stat will increase\n"
    "when it's at low HP.");

static const u8 sPetayaBerryDesc[] = _(
    "The holder's Special\n"
    "Attack stat will\n"
    "increase when it's at\n"
    "low HP.");

static const u8 sApicotBerryDesc[] = _(
    "The holder's Special\n"
    "Defense stat will\n"
    "increase when it's at\n"
    "low HP.");

static const u8 sLansatBerryDesc[] = _(
    "The holder's\n"
    "critical-hit ratio\n"
    "will increase when\n"
    "it's at low HP.");

static const u8 sStarfBerryDesc[] = _(
    "A random stat of the\n"
    "holder's will sharply\n"
    "increase when it's at\n"
    "low HP.");

static const u8 sEnigmaBerryDesc[] = _(
    "If held by a Pokémon,\n"
    "it weakens a foe's\n"
    "super effective\n"
    "Relic-type attack.");

static const u8 sMicleBerryDesc[] = _(
    "The holder's accuracy\n"
    "will increase when\n"
    "it's at low HP.");

static const u8 sCustapBerryDesc[] = _(
    "The holder wil be able\n"
    "to move first just\n"
    "once when it's at low\n"
    "HP."); 

static const u8 sJabocaBerryDesc[] = _(
    "If the holder is hit\n"
    "with a physical move,\n"
    "the attacker will\n"
    "also take damage.");

static const u8 sRowapBerryDesc[] = _(
    "If the holder is hit\n"
    "with a special move,\n"
    "the attacker will\n"
    "also take damage.");

static const u8 sKeeBerryDesc[] = _(
    "If the holder is hit\n"
    "with a physical move,\n"
    "its Defense stat will\n"
    "be boosted.");

static const u8 sMarangaBerryDesc[] = _(
    "If the holder is hit\n"
    "with a special move,\n"
    "its Special Defense\n"
    "stat will be boosted.");

static const u8 sEnigmaBerryEReaderDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow a mystery.");

// TMs/HMs
static const u8 sTM01Desc[] = _(
    "The user sleeps for 2 turns,\n"
    "restoring HP and status.");

static const u8 sTM02Desc[] = _(
    "Inflicts a burn on the foe\n"
    "with intense fire.");

static const u8 sTM03Desc[] = _(
    "Poisons the foe with an\n"
    "intensifying toxin.");

static const u8 sTM04Desc[] = _(
    "Spooks the foe and lowers\n"
    "the next foe's accuracy.");

static const u8 sTM05Desc[] = _(
    "Inflicts frostbite on the\n"
    "foe with chilling smoke.");

static const u8 sTM06Desc[] = _(
    "A weak jolt of electricity\n"
    "that paralyzes the foe.");

static const u8 sTM07Desc[] = _(
    "Slower Pokémon get to move\n"
    "first for 5 turns.");

static const u8 sTM08Desc[] = _(
    "Evades attack, but may fail\n"
    "if used in succession.");

static const u8 sTM09Desc[] = _(
    "Uses an available move\n"
    "randomly while asleep.");

static const u8 sTM10Desc[] = _(
    "Chills the foe, to sharply\n"
    "cut evasion and Speed.");

static const u8 sTM11Desc[] = _(
    "Lowers the foe's Attack and\n"
    "Sp. Atk, then switches out.");

static const u8 sTM12Desc[] = _(
    "Evades damage, and raises\n"
    "own Accuracy if struck.");

static const u8 sTM13Desc[] = _(
    "Weaves a sticky net that\n"
    "slows foes switching in.");

static const u8 sTM14Desc[] = _(
    "Heals status and gives\n"
    "Blooming to user and ally.");

static const u8 sTM15Desc[] = _(
    "Creates a wall of light that\n"
    "lowers Sp. Atk damage.");

static const u8 sTM16Desc[] = _(
    "Gives Blooming and Ups Atk\n"
    "and Sp. Atk of Grass-types.");

static const u8 sTM17Desc[] = _(
    "Creates a wall of light that\n"
    "weakens physical attacks.");

static const u8 sTM18Desc[] = _(
    "A fear-inducing attack of\n"
    "random intensity.");

static const u8 sTM19Desc[] = _(
    "A high-speed spin that does\n"
    "more damage to faster foes.");

static const u8 sTM20Desc[] = _(
    "Rubs its cheeks against\n"
    "the foe, paralyzing it.");

static const u8 sTM21Desc[] = _(
    "Slower Pokémon get to move\n"
    "first for 5 turns.");

static const u8 sTM22Desc[] = _(
    "Whirls its fists to send\n"
    "a wave that strikes first.");

static const u8 sTM23Desc[] = _(
    "The user pounces on the\n"
    "foe, lowering its Speed.");

static const u8 sTM24Desc[] = _(
    "Fires a beam of electricity.\n"
    "May raise Sp. Atk.");

static const u8 sTM25Desc[] = _(
    "Yells and rants at the foe\n"
    "lowering its Sp. Atk.");

static const u8 sTM26Desc[] = _(
    "Does double damage if the\n"
    "user has no item.");

static const u8 sTM27Desc[] = _(
    "Hurls mud at the foe and\n"
    "reduces Speed.");

static const u8 sTM28Desc[] = _(
    "Stops the foe from moving\n"
    "with rocks and cuts Speed.");

static const u8 sTM29Desc[] = _(
    "Swings its tail to attack.\n"
    "Lowers the Atk of those hit.");

static const u8 sTM30Desc[] = _(
    "Leaves the foe with at\n"
    "least 1 HP. Hits neutrally\n"
    "always.");

static const u8 sTM31Desc[] = _(
    "Knocks the foe away to end\n"
    "the battle.");

static const u8 sTM32Desc[] = _(
    "Cutely begs to obtain an\n"
    "item held by the foe.");

static const u8 sTM33Desc[] = _(
    "Attacks with a strange leaf\n"
    "that cannot be evaded.");

static const u8 sTM34Desc[] = _(
    "Stomps down on the ground.\n"
    "Lowers Speed.");

static const u8 sTM35Desc[] = _(
    "While attacking, it may\n"
    "steal the foe's held item.");

static const u8 sTM36Desc[] = _(
    "Attacks with ultrasonic\n"
    "waves. May confuse the foe.");

static const u8 sTM37Desc[] = _(
    "The foe is infested and\n"
    "attacked for 4 or 5 turns.");

static const u8 sTM38Desc[] = _(
    "Takes the foe into the sky\n"
    "then drops it the next turn.");

static const u8 sTM39Desc[] = _(
    "Burns up Berries and Gems\n"
    "preventing their use.");

static const u8 sTM40Desc[] = _(
    "An attack that gains power\n"
    "if injured by the foe.");

static const u8 sTM41Desc[] = _(
    "Sprays star-shaped rays\n"
    "that never miss.");

static const u8 sTM42Desc[] = _(
    "Strikes the foe with an\n"
    "incredible blast of breath.");

static const u8 sTM43Desc[] = _(
    "Knocks down the foe's held\n"
    "item to prevent its use.");

static const u8 sTM44Desc[] = _(
    "Attacks the foe's legs\n"
    "lowering its Speed.");

static const u8 sTM45Desc[] = _(
    "Does double damage if the\n"
    "foe is poisoned.");

static const u8 sTM46Desc[] = _(
    "An intense kick from the\n"
    "tropics. Lowers Attack.");

static const u8 sTM47Desc[] = _(
    "An attack that does more\n"
    "damage if an ally fainted.");

static const u8 sTM48Desc[] = _(
    "Attacks with\n"
    "spirit-breaking force.\n"
    "Lowers Sp. Atk.");

static const u8 sTM49Desc[] = _(
    "Destroys barriers such as\n"
    "Reflect and causes damage.");

static const u8 sTM50Desc[] = _(
    "Large boulders are hurled.\n"
    "May cause flinching.");

static const u8 sTM51Desc[] = _(
    "An electrified impact that\n"
    "can cause flinching.");

static const u8 sTM52Desc[] = _( 
    "Releases a blast of light\n"
    "that may lower Sp. Def.");

static const u8 sTM53Desc[] = _(
    "Fires a rainbow-colored\n"
    "beam that may lower Attack.");

static const u8 sTM54Desc[] = _(
    "Slashes the foe with sharp\n"
    "claws.");

static const u8 sTM55Desc[] = _(
    "Attacks with a psychic wave\n"
    "that does physical damage.");

static const u8 sTM56Desc[] = _(
    "Sends a pulse of mineral\n"
    "energy. May raise defense.");

static const u8 sTM57Desc[] = _(
    "Damages foes by emitting\n"
    "a bright flash.");

static const u8 sTM58Desc[] = _(
    "Attacks with an aura blast\n"
    "that cannot be evaded.");

static const u8 sTM59Desc[] = _(
    "Attacks with a horrible\n"
    "aura. May cause flinching.");

static const u8 sTM60Desc[] = _(
    "Hurls a black blob that may\n"
    "lower the foe's Sp. Def.");

static const u8 sTM61Desc[] = _(
    "Does more damage the\n"
    "higher the user's Sp. Def.");

static const u8 sTM62Desc[] = _(
    "Slams the foe with a hard\n"
    "head. May cause flinching.");

static const u8 sTM63Desc[] = _(
    "High critical hit chance.\n"
    "May paralyze, poison or\n"
    "drowse.");

static const u8 sTM64Desc[] = _(
    "Chops the throat to disable\n"
    "sound moves for a while.");

static const u8 sTM65Desc[] = _(
    "Shoots chilling water at\n"
    "foe. May inflict frostbite.");

static const u8 sTM66Desc[] = _(
    "Strikes with a shadow claw.\n"
    "High critical-hit ratio.");

static const u8 sTM67Desc[] = _(
    "Hits with a strong headbutt\n"
    "May cause flinching.");

static const u8 sTM68Desc[] = _(
    "Lunges at the foe to lower\n"
    "its Attack stat.");

static const u8 sTM69Desc[] = _(
    "Whips the foe with fire\n"
    "lowering its Defense.");

static const u8 sTM70Desc[] = _(
    "Does more damage the\n"
    "higher the user's Def.");

static const u8 sTM71Desc[] = _(
    "Shoots boiling water at the\n"
    "foe. May inflict a burn.");

static const u8 sTM72Desc[] = _(
    "A barrage of hard seeds\n"
    "is fired at the foe.");

static const u8 sTM73Desc[] = _(
    "Generates a shock wave to\n"
    "damage the foe.");

static const u8 sTM74Desc[] = _(
    "Drops large icicles on the\n"
    "foe. May cause flinching.");

static const u8 sTM75Desc[] = _(
    "A full-body slam that may\n"
    "cause paralysis.");

static const u8 sTM76Desc[] = _(
    "A damaging sound wave that\n"
    "may lower Sp. Def.");

static const u8 sTM77Desc[] = _(
    "A strong electrical attack\n"
    "that may paralyze the foe.");

static const u8 sTM78Desc[] = _(
    "Plays rough with the foe.\n"
    "May lower Attack.");

static const u8 sTM79Desc[] = _(
    "A powerful fire attack that\n"
    "may inflict a burn.");

static const u8 sTM80Desc[] = _(
    "Vanishes on the first turn\n"
    "then strikes the next turn.");

static const u8 sTM81Desc[] = _(
    "Draws power from nature to\n"
    "attack. May lower Sp. Def.");

static const u8 sTM82Desc[] = _(
    "Makes the ground erupt with\n"
    "power. May lower Sp. Def.");

static const u8 sTM83Desc[] = _(
    "Blasts the foe with an icy\n"
    "beam that may freeze it.");

static const u8 sTM84Desc[] = _(
    "A loud attack that uses\n"
    "sound waves to injure.");

static const u8 sTM85Desc[] = _(
    "Sludge is hurled to inflict\n"
    "damage. May also poison.");

static const u8 sTM86Desc[] = _(
    "A powerful psychic attack\n"
    "that may lower Sp. Def.");

static const u8 sTM87Desc[] = _(
    "The user swings its tail\n"
    "like a wave to attack.");

static const u8 sTM88Desc[] = _(
    "The higher the foe's Attack\n"
    "the more damage caused.");

static const u8 sTM89Desc[] = _(
    "Attacks with the power of\n"
    "the moon. May lower\n"
    "Sp. Atk.");

static const u8 sTM90Desc[] = _(
    "The higher the foe's Speed\n"
    "the more damage caused.");

static const u8 sTM91Desc[] = _(
    "Slashes the target with\n"
    "wind and hits twice in a\n"
    "row.");

static const u8 sTM92Desc[] = _(
    "User slams the target with\n"
    "wings and hits twice in a\n"
    "row.");

static const u8 sTM93Desc[] = _(
    "A powerful quake, but has\n"
    "no effect on flying foes.");

static const u8 sTM94Desc[] = _(
    "Hits with brutal, cold\n"
    "winds. May frostbite the\n"
    "foe.");

static const u8 sTM95Desc[] = _(
    "Powerful and sure to cause\n"
    "paralysis, but inaccurate.");

static const u8 sTM96Desc[] = _(
    "Incinerates everything it\n"
    "strikes. May cause a burn.");

static const u8 sTM97Desc[] = _(
    "A rampage of 2 to 3 turns\n"
    "that confuses the user.");

static const u8 sTM98Desc[] = _(
    "Shoots filthy garbage at\n"
    "the foe. May also poison.");

static const u8 sTM99Desc[] = _(
    "Attacks with a rock-hard\n"
    "tail. May lower Defense.");

static const u8 sTM100Desc[] = _(
    "The higher the foe's\n"
    "Sp. Atk the more power.");

static const u8 sHM01Desc[] = _(
    "Attacks the foe\n"
    "with sharp blades\n"
    "or claws.");

static const u8 sHM02Desc[] = _(
    "Flies up on the\n"
    "first turn, then\n"
    "attacks next turn.");

static const u8 sHM03Desc[] = _(
    "Creates a huge\n"
    "wave, then crashes\n"
    "it down on the foe.");

static const u8 sHM04Desc[] = _(
    "Builds enormous\n"
    "power, then slams\n"
    "the foe.");

static const u8 sHM05Desc[] = _(
    "Looses a powerful\n"
    "blast of light that\n"
    "reduces accuracy.");

static const u8 sHM06Desc[] = _(
    "A rock-crushingly\n"
    "tough attack that\n"
    "may lower Defense.");

static const u8 sHM07Desc[] = _(
    "Attacks the foe\n"
    "with enough power\n"
    "to climb waterfalls.");

static const u8 sHM08Desc[] = _(
    "Dives underwater\n"
    "the 1st turn, then\n"
    "attacks next turn.");

// Charms
static const u8 sOvalCharmDesc[] = _(
    "Raises the chance\n"
    "of finding eggs\n"
    "at the daycare.");

static const u8 sShinyCharmDesc[] = _(
    "A charm that will\n"
    "raise the chance\n"
    "of Shiny Pokémon.");

static const u8 sCatchingCharmDesc[] = _(
    "A charm that raises\n"
    "the chance of\n"
    "Critical Captures.");

static const u8 sExpCharmDesc[] = _(
    "A charm that raises\n"
    "the amount of Exp.\n"
    "earned in battle.");

// Form-changing Key Items
static const u8 sRotomCatalogDesc[] = _(
    "A catalog full of\n"
    "deviced liked by\n"
    "Rotom.");

static const u8 sGracideaDesc[] = _(
    "Bouquets made with\n"
    "it are offered as a\n"
    "token of gratitude.");

static const u8 sRevealGlassDesc[] = _(
    "This glass returns\n"
    "a Pokémon back to\n"
    "its original form.");

static const u8 sDNASplicersDesc[] = _(
    "Splicer that fuses\n"
    "Kyurem and a\n"
    "certain Pokémon.");

static const u8 sZygardeCubeDesc[] = _(
    "An item to store\n"
    "Zygarde Cores and\n"
    "Cells.");

static const u8 sPrisonBottleDesc[] = _(
    "A bottle used to\n"
    "seal a certain\n"
    "Pokémon long ago.");

static const u8 sNSolarizerDesc[] = _(
    "A device to fuse\n"
    "and split Necrozma\n"
    "using a Solgaleo.");

static const u8 sNLunarizerDesc[] = _(
    "A device to fuse\n"
    "and split Necrozma\n"
    "using a Lunala.");

static const u8 sReinsOfUnityDesc[] = _(
    "Reins that unite\n"
    "Calyrex with its\n"
    "beloved steed.");

// Battle Mechanic Key Items
static const u8 sMegaRingDesc[] = _(
    "Enables {PKMN} holding\n"
    "their Mega Stone to\n"
    "Mega Evolve.");

static const u8 sZPowerRingDesc[] = _(
    "A strange ring\n"
    "that enables\n"
    "Z-Move usage.");

static const u8 sDynamaxBandDesc[] = _(
    "A band carrying a\n"
    "Wishing Star that\n"
    "allows Dynamaxing.");

// Misc. Key Items
static const u8 sBicycleDesc[] = _(
    "A folding bicycle\n"
    "that is faster than\n"
    "the Running Shoes.");

static const u8 sMachBikeDesc[] = _(
    "A folding bicycle\n"
    "that doubles your\n"
    "speed or better.");

static const u8 sAcroBikeDesc[] = _(
    "A folding bicycle\n"
    "capable of jumps\n"
    "and wheelies.");

static const u8 sOldRodDesc[] = _(
    "Use by any body of\n"
    "water to fish for\n"
    "wild Pokémon.");

static const u8 sGoodRodDesc[] = _(
    "A decent fishing\n"
    "rod for catching\n"
    "wild Pokémon.");

static const u8 sSuperRodDesc[] = _(
    "The best fishing\n"
    "rod for catching\n"
    "wild Pokémon.");

static const u8 sDowsingMachineDesc[] = _(
    "A device that\n"
    "signals an invisible\n"
    "item by sound.");

static const u8 sTownMapDesc[] = _(
    "Can be viewed\n"
    "anytime. Shows your\n"
    "present location.");

static const u8 sVsSeekerDesc[] = _(
    "A rechargeable unit\n"
    "that flags battle-\n"
    "ready Trainers.");

static const u8 sTMCaseDesc[] = _(
    "A convenient case \n"
    "that holds TMs and\n"
    "HMs.");

static const u8 sBerryPouchDesc[] = _(
    "A convenient\n"
    "container that\n"
    "holds Berries.");

static const u8 sPokemonBoxLinkDesc[] = _(
    "This device grants\n"
    "access to the {PKMN}\n"
    "Storage System.");

static const u8 sCoinCaseDesc[] = _(
    "A case that holds\n"
    "up to 9,999 Coins.");

static const u8 sPowderJarDesc[] = _(
    "Stores Berry\n"
    "Powder made using\n"
    "a Berry Crusher.");

static const u8 sWailmerPailDesc[] = _(
    "A tool used for\n"
    "watering Berries\n"
    "and plants.");

static const u8 sPokeRadarDesc[] = _(
    "A tool used to\n"
    "search out Pokémon\n"
    "hiding in grass.");

static const u8 sPokeblockCaseDesc[] = _(
    "A case for holding\n"
    "{POKEBLOCK}s made with\n"
    "a Berry Blender.");

static const u8 sSootSackDesc[] = _(
    "A sack used to\n"
    "gather and hold\n"
    "volcanic ash.");

static const u8 sPokeFluteDesc[] = _(
    "A sweet-sounding\n"
    "flute that awakens\n"
    "Pokémon.");

static const u8 sFameCheckerDesc[] = _(
    "Stores information\n"
    "on famous people\n"
    "for instant recall.");

static const u8 sTeachyTVDesc[] = _(
    "A TV set tuned to\n"
    "an advice program\n"
    "for Trainers.");

// Story Key Items
static const u8 sSSTicketDesc[] = _(
    "The ticket required\n"
    "for sailing on a\n"
    "ferry.");

static const u8 sEonTicketDesc[] = _(
    "The ticket for a\n"
    "ferry to a distant\n"
    "southern island.");

static const u8 sMysticTicketDesc[] = _(
    "A ticket required\n"
    "to board the ship\n"
    "to Navel Rock.");

static const u8 sAuroraTicketDesc[] = _(
    "A ticket required\n"
    "to board the ship\n"
    "to Birth Island.");

static const u8 sOldSeaMapDesc[] = _(
    "A faded sea chart\n"
    "that shows the way\n"
    "to a certain island.");

static const u8 sLetterDesc[] = _(
    "A letter to Steven\n"
    "from the President\n"
    "of the Devon Corp.");

static const u8 sDevonPartsDesc[] = _(
    "A package that\n"
    "contains Devon's\n"
    "machine parts.");

static const u8 sGoGogglesDesc[] = _(
    "Nifty goggles that\n"
    "protect eyes from\n"
    "desert sandstorms.");

static const u8 sDevonScopeDesc[] = _(
    "A device by Devon\n"
    "that signals any\n"
    "unseeable Pokémon.");

static const u8 sBasementKeyDesc[] = _(
    "The key for New\n"
    "Mauville beneath\n"
    "Mauville City.");

static const u8 sScannerDesc[] = _(
    "A device found\n"
    "inside the\n"
    "Abandoned Ship.");

static const u8 sStorageKeyDesc[] = _(
    "The key to the\n"
    "storage inside the\n"
    "Abandoned Ship.");

static const u8 sKeyToRoom1Desc[] = _(
    "A key that opens a\n"
    "door inside the\n"
    "Abandoned Ship.");

static const u8 sKeyToRoom2Desc[] = _(
    "A key that opens a\n"
    "door inside the\n"
    "Abandoned Ship.");

static const u8 sKeyToRoom4Desc[] = _(
    "A key that opens a\n"
    "door inside the\n"
    "Abandoned Ship.");

static const u8 sKeyToRoom6Desc[] = _(
    "A key that opens a\n"
    "door inside the\n"
    "Abandoned Ship.");

static const u8 sMeteoriteDesc[] = _(
    "A meteorite found\n"
    "at Meteor Falls.");

static const u8 sMagmaEmblemDesc[] = _(
    "A medal-like item in\n"
    "the same shape as\n"
    "Team Magma's mark.");

static const u8 sContestPassDesc[] = _(
    "The pass required\n"
    "for entering\n"
    "Pokémon Contests.");

static const u8 sOaksParcelDesc[] = _(
    "A parcel for Prof.\n"
    "Oak from a Pokémon\n"
    "Mart's clerk.");

static const u8 sSecretKeyDesc[] = _(
    "The key to the\n"
    "Cinnabar Island\n"
    "Gym's entrance.");

static const u8 sBikeVoucherDesc[] = _(
    "A voucher for\n"
    "obtaining a bicycle\n"
    "from the Bike Shop.");

static const u8 sGoldTeethDesc[] = _(
    "Gold dentures lost\n"
    "by the Safari\n"
    "Zone's Warden.");

static const u8 sCardKeyDesc[] = _(
    "A card-type door\n"
    "key used in Silph\n"
    "Co's office.");

static const u8 sLiftKeyDesc[] = _(
    "An elevator key\n"
    "used in Team\n"
    "Rocket's Hideout.");

static const u8 sSilphScopeDesc[] = _(
    "Silph Co's scope\n"
    "makes unseeable\n"
    "POKéMON visible.");

static const u8 sTriPassDesc[] = _(
    "A pass for ferries\n"
    "between One, Two,\n"
    "and Three Island.");

static const u8 sRainbowPassDesc[] = _(
    "For ferries serving\n"
    "Vermilion and the\n"
    "Sevii Islands.");

static const u8 sTeaDesc[] = _(
    "A thirst-quenching\n"
    "tea prepared by an\n"
    "old lady.");

static const u8 sRubyDesc[] = _(
    "An exquisite, red-\n"
    "glowing gem that\n"
    "symbolizes passion.");

static const u8 sSapphireDesc[] = _(
    "A brilliant blue gem\n"
    "that symbolizes\n"
    "honesty.");

static const u8 sAbilityShieldDesc[] = _(
    "The holder's Ability\n"
    "can't be changed and\n"
    "it is protected from\n"
    "some other Abilities.");

static const u8 sClearAmuletDesc[] = _(
    "A held item that\n"
    "protects the holder\n"
    "from having its stats\n"
    "lowered.");

static const u8 sPunchingGloveDesc[] = _(
    "Boosts the holder's\n"
    "punching moves and\n"
    "prevents direct\n"
    "contact with targets.");

static const u8 sCovertCloakDesc[] = _(
    "A held item that\n"
    "protects the holder\n"
    "from the additional\n"
    "effects of moves.");

static const u8 sLoadedDiceDesc[] = _(
    "A held item that\n"
    "ensures that the\n"
    "holder's multistrike\n"
    "moves hit more times.");

static const u8 sAuspiciousArmorDesc[] = _(
    "Armor inhabited by\n"
    "auspicious wishes.\n"
    "Causes evolution.");

static const u8 sBoosterEnergyDesc[] = _(
    "Encapsuled energy\n"
    "ups Pokémon with\n"
    "certain Abilities.");

static const u8 sBigBambooShootDesc[] = _(
    "A large and rare\n"
    "bamboo shoot. Best\n"
    "sold to gourmands.");

static const u8 sGimmighoulCoinDesc[] = _(
    "Gimmighoul hoard\n"
    "and treasure these\n"
    "curious coins.");

static const u8 sLeadersCrestDesc[] = _(
    "Buffs the Pawniard\n"
    "line's slicing\n"
    "moves.");

static const u8 sMaliciousArmorDesc[] = _(
    "Armor inhabited by\n"
    "malicious will.\n"
    "Causes evolution.");

static const u8 sMirrorHerbDesc[] = _(
    "The holder mirrors the\n"
    "foe's stat boosts to\n"
    "boost its own stats,\n"
    "but only once.");

static const u8 sScrollOfDarknessDesc[] = _(
    "A peculiar scroll\n"
    "with secrets of\n"
    "the dark path.");

static const u8 sScrollOfWatersDesc[] = _(
    "A peculiar scroll\n"
    "with secrets of\n"
    "the water path.");

static const u8 sTeraOrbDesc[] = _(
    "Energy charges can\n"
    "be used to cause\n"
    "Terastallization.");

static const u8 sTinyBambooShootDesc[] = _(
    "A small and rare\n"
    "bamboo shoot. Best\n"
    "sold to gourmands.");

static const u8 sTeraShardDesc[] = _(
    "These shards may\n"
    "form when a Tera\n"
    "Pokémon faints.");

static const u8 sAdamantCrystalDesc[] = _(
    "A large, glowing gem\n"
    "that lets Dialga\n"
    "change form.");

static const u8 sGriseousCoreDesc[] = _(
    "A large, glowing gem\n"
    "that lets Giratina\n"
    "change form.");

static const u8 sLustrousGlobeDesc[] = _(
    "A large, glowing gem\n"
    "that lets Palkia\n"
    "change form.");

static const u8 sBerserkGene[] = _(
    "Sharply boosts\n"
    "Attack, but causes\n"
    "lasting confusion.");

// New items
static const u8 sBerryMic[] = _(
    "A berry with a\n"
    "stick poked in it.\n"
    "Evolves Spitfax.");

static const u8 sBurntBranch[] = _(
    "When the holder deals\n"
    "damage with a\n"
    "Grass-type move, the\n"
    "target may be burned.");

static const u8 sCursedAmulet[] = _(
    "A held item that may\n"
    "disable a move that\n"
    "has made contact to\n"
    "the holder.");

static const u8 sEerieMask[] = _(
    "A held item for the\n"
    "Seedot line. Guards\n"
    "them in Tailwind.");

static const u8 sNeoBattery[] = _(
    "An unusual battery\n"
    "with unknown power.\n"
    "Evolves Retroroach.");

static const u8 sSandbag[] = _(
    "A sack made of \n"
    "pulverized sand.\n"
    "Evolves Pebbler.");

static const u8 sSandstone[] = _(
    "A stone made of\n"
    "sandstorms.\n"
    "Evolves Pebbler.");

static const u8 sComedyMaskDesc[] = _(
    "A mask filled\n"
    "with glee.\n"
    "Evolves Zorua.");

static const u8 sTragedyMaskDesc[] = _(
    "A mask filled\n"
    "with sorrow.\n"
    "Evolves Zorua.");

static const u8 sPebbleriteDesc[] = _(
    "A stone that has\n"
    "pebblericium.\n"
    "Evolves Pebbler.");

static const u8 sCheeseDesc[] = _(
    "Heals some HP and\n"
    "raises a random\n"
    "stat at half HP.");

static const u8 sFrothyCheeseDesc[] = _(
    "Heals a little HP.\n"
    "Sharply raises a\n"
    "random stat.");

static const u8 sKeychainDesc[] = _(
    "Guards user from\n"
    "super effective\n"
    "moves. For Spitfax.");

static const u8 sFlipCoinDesc[] = _(
    "The holder inverts the\n"
    "foe's stat changes,\n"
    "but only once.");

static const u8 sWarpRibbonDesc[] = _(
    "Resets foe's Speed\n"
    "boosts, but user's\n"
    "Speed is ignored.");

static const u8 sGravityCoreDesc[] = _(
    "A held item that\n"
    "raises the user's\n"
    "speed in Gravity.");

static const u8 sFavorScarfDesc[] = _(
    "A beautiful scarf that\n"
    "represents true\n"
    "friendship. Give it to\n"
    "your favorite!");

static const u8 sWideArmorDesc[] = _(
    "Drops the damage\n"
    "of multi-target\n"
    "moves.");

static const u8 sLostMantleDesc[] = _(
    "If the holder takes\n"
    "damage, the\n"
    "attacker's defenses\n"
    "may be lowered.");

static const u8 sBattleHelmDesc[] = _(
    "This held item boosts\n"
    "the holder's Defense\n"
    "stat but prevents the\n"
    "use of status moves.");

static const u8 sSpectralIdolDesc[] = _(
    "A held item that\n"
    "increases the\n"
    "opponent's PP usage.");

static const u8 sGlueTubeDesc[] = _(
    "A held item that\n"
    "prevents the holder\n"
    "from switching out or\n"
    "fleeing from battle.");

static const u8 sFrostOrbDesc[] = _(
    "A held item that will\n"
    "afflict the holder\n"
    "with frostbite during\n"
    "battle.");

static const u8 sPoisonOrbDesc[] = _(
    "A held item that will\n"
    "poison the holder\n"
    "during battle.");

static const u8 sDilatantModDesc[] = _(
    "Reduces power of\n"
    "strong moves if\n"
    "user is Relic-type.");

static const u8 sOddStoneDesc[] = _(
    "Ups Snotloud line's\n"
    "sound moves if\n"
    "used repeatedly.");

static const u8 sShellPolishDesc[] = _(
    "Ups Snelfrend's\n"
    "defenses. Drops\n"
    "damage for allies.");

static const u8 sVibrantScaleDesc[] = _(
    "A held item that\n"
    "raises Bivague's\n"
    "Sp. Atk and Speed.");

static const u8 sTriumphStarDesc[] = _(
    "A held item that\n"
    "raises the Ledyba\n"
    "line's Attack.");

static const u8 sZigSashDesc[] = _(
    "A held item that\n"
    "raises Zigzagoon's\n"
    "Atk/Sp. Atk/Spd.");

static const u8 sDoughStickDesc[] = _(
    "A held item that\n"
    "ups Kodough's Sp.\n"
    "Atk and defenses.");

static const u8 sYellowSodaDesc[] = _(
    "Heals HP, ups Speed,\n"
    "and critical-hit\n"
    "ratio. For Voreon.");

static const u8 sDripShoesDesc[] = _(
    "Boosts Pantney's\n"
    "Speed and evasion\n"
    "in rain.");

static const u8 sCoarseSandDesc[] = _(
    "Sand moves lower\n"
    "foe's defense. For\n"
    "the Pebbler line.");

static const u8 sObjectDarcDesc[] = _(
    "Boosts Dark, Ghost\n"
    "and Psychic-type\n"
    "moves. For Nyarly.");

static const u8 sFamilyMossDesc[] = _(
    "A held item for\n"
    "Papypus. Reduces\n"
    "damage for ally.");

static const u8 sAThingDesc[] = _(
    "Claims to make\n"
    "the Capybara line\n"
    "super powerful.");

static const u8 sSaltyTearDesc[] = _(
    "Halves all of\n"
    "Sadsod's stats.\n"
    "Drops Friendship.");

static const u8 sBloomOrbDesc[] = _(
    "A held item that will\n"
    "make the holder bloom\n"
    "holder during battle.");

static const u8 sPanicOrbDesc[] = _(
    "A held item that will\n"
    "afflict the holder\n"
    "with panic during\n"
    "battle.");

static const u8 sSolarSwordDesc[] = _(
    "In sun, Solrock\n"
    "always crits and\n"
    "they're boosted.");

static const u8 sMoonMirrorDesc[] = _(
    "A held item that\n"
    "makes Lunatone\n"
    "reflect stat drops.");

static const u8 sFriendRibbonDesc[] = _(
    "Boosts user's Def\n"
    "and ally's moves.\n"
    "Only for Colfin.");

static const u8 sRoomExtenderDesc[] = _(
    "Extends the length\n"
    "of all activated\n"
    "rooms.");

static const u8 sTradingCardDesc[] = _(
    "Deals bonus true\n"
    "damage dependent on\n"
    "user's and foe's\n"
    "stats.");

static const u8 sFairyRingDesc[] = _(
    "Boosts Fairy-type\n"
    "moves if the user\n"
    "is Blooming.");

static const u8 sWeirdStickDesc[] = _(
    "A cool, yet odd\n"
    "stick, that seems\n"
    "indescribable.");

static const u8 sFairyFeatherDesc[] = _(
    "A held item that\n"
    "raises the power of\n"
    "Fairy-type moves.");

static const u8 sIcePopDesc[] = _(
    "Restores 1/3 of a\n"
    "Pokémon's HP and\n"
    "raises Sp. Def.");

static const u8 sCreditCardDesc[] = _(
    "An Umbrat credit\n"
    "card.");

static const u8 sRizzBerryDesc[] = _(
    "If the holder is hit\n"
    "by a super effective\n"
    "move, the attacker\n"
    "will be infatuated.");

static const u8 sPeskyPlushDesc[] = _(
    "When the holder deals\n"
    "damage with a\n"
    "Bug-type move, the\n"
    "foe will be taunted.");

static const u8 sBlackSaladDesc[] = _(
    "Attacks may cause\n"
    "Blooming. Boosts\n"
    "against Blooming.");

static const u8 sDistillModDesc[] = _(
    "Ups SE moves. Drops\n"
    "resisted moves.\n"
    "For Relic-types.");

static const u8 sCorrodeModDesc[] = _(
    "Physical moves drop\n"
    "Def and Special moves\n"
    "drop Sp. Def. It is\n"
    "only for Relic-types.");

static const u8 sStilettoDesc[] = _(
    "Boosts kicking\n"
    "moves and makes\n"
    "them lower Speed.");

static const u8 sSilverCrownDesc[] = _(
    "Boosts HP by 200.\n"
    "Infests the foe\n"
    "if hit. For Flague.");

static const u8 sLongNoseDesc[] = _(
    "Bug/Dark moves\n"
    "hit first and drop\n"
    "stats. For Moskopo.");

static const u8 sKamenScarfDesc[] = _(
    "Drops SE moves. Ups\n"
    "Sp. Atk. Charges if\n"
    "hit. For Shockore.");

static const u8 sGemstoneDesc[] = _(
    "Maxes Eva, drops\n"
    "each turn. Ups Sp.\n"
    "Atk. For Harace.");

static const u8 sTeruCharmDesc[] = _(
    "Ups defenses. Gets\n"
    "no indirect damage.\n"
    "For Chiroberra.");

static const u8 sMaxEggplantDesc[] = _(
    "Fully revives and\n"
    "restores all\n"
    "fainted Pokémon.");

static const u8 sGoldToothDesc[] = _(
    "A tooth from a\n"
    "Blinguin. They're\n"
    "very valuable.");

static const u8 sCarrotHornDesc[] = _(
    "A horn from the\n"
    "Welproot line. They\n"
    "are like trophies.");

static const u8 sCoralCrownDesc[] = _(
    "A crown made from\n"
    "Corisp's line. They\n"
    "are quite lovely.");

static const u8 sExtrapolatorDesc[] = _(
    "Secures an exposed\n"
    "Pokémon.");

static const u8 sRelaxantDesc[] = _(
    "Calms down a\n"
    "panicked Pokémon.");

static const u8 sShellyBrewDesc[] = _(
    "A mysterious mix\n"
    "that makes a\n"
    "Pokémon Level 50.");

static const u8 sSurpriseGiftDesc[] = _(
    "After 2 turns it\n"
    "deals damage and\n"
    "infests the holder.");

static const u8 sBuddyCardDesc[] = _(
    "A futuristic card\n"
    "for your buddies\n"
    "to fight with.");

static const u8 sUnoCardDesc[] = _(
    "A card with the\n"
    "magical properties\n"
    "of reversing.");

static const u8 sMagicCardDesc[] = _(
    "A card containing\n"
    "the hatred of\n"
    "flashy magic.");

static const u8 sLegendCardDesc[] = _(
    "A card with the\n"
    "story of something\n"
    "nearly forgotten.");

static const u8 sBusinessCardDesc[] = _(
    "A nice looking\n"
    "card. Oddly you\n"
    "want to trade it.");

static const u8 sPokemonCardDesc[] = _(
    "A card made with\n"
    "love. You now know\n"
    "what it all meant.");

static const u8 sPokerCardDesc[] = _(
    "A card containing\n"
    "the love of real\n"
    "magic.");

static const u8 sCrypticPlateDesc[] = _(
    "Sets Gravity and\n"
    "Safeguard, and ups\n"
    "SPATK. For Uhefoe.");

static const u8 sChupacabraDesc[] = _(
    "A held item that makes\n"
    "the holder's attacks\n"
    "do bonus true damage,\n"
    "but also move last.");

static const u8 sHeartGiftDesc[] = _(
    "Explodes after 2\n"
    "turns, infesting\n"
    "the holder.");
