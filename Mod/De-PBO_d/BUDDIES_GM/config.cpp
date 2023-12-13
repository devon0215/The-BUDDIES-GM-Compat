class CfgPatches
{
	class BUDDIES_GM
	{
		name="The BUDDIES GM Compat";
		author="Devon0215";
		units[]=
		{};
		weapons[]=
		{};
		requiredVersion=1;
		requiredAddons[]=
		{
			"BUDDIES_Pack",
			"gm_core",
			"gm_core_animations",
			"gm_core_characters",
			"gm_core_localization",
			"gm_core_objects",
			"gm_core_ui",
			"gm_core_vehicles",
			"gm_core_weapons",
			"gm_core_wheels"
		};
	};
};
class gm_VehicleInsignias_base;
class gm_VehicleInsignias_Recon: gm_VehicleInsignias_base
{
	class BUDDIES_GM_Insignia_Worn
	{
		name="BUDDIES Insignia (Worn)";
		texture="\BUDDIES_GM\Data\Insignia\insignia_buddies_gm_worn.paa";
		picture="\BUDDIES_GM\Data\Insignia\insignia_buddies_gm_worn.paa";
		value="BUDDIES_GM_Insignia_Worn";
	};
	class BUDDIES_GM_Insignia_Simple_Worn
	{
		name="BUDDIES Insignia (Simple, Worn)";
		texture="\BUDDIES_GM\Data\Insignia\insignia_buddies_gm_simple_worn.paa";
		picture="\BUDDIES_GM\Data\Insignia\insignia_buddies_gm_simple_worn.paa";
		value="BUDDIES_GM_Insignia_Simple_Worn";
	};
	class BUDDIES_GM_Insignia_Simple_Inverted_Worn
	{
		name="BUDDIES Insignia (Simple, Inverted, Worn)";
		texture="\BUDDIES_GM\Data\Insignia\insignia_buddies_gm_simple_inverted_worn.paa";
		picture="\BUDDIES_GM\Data\Insignia\insignia_buddies_gm_simple_inverted_worn.paa";
		value="BUDDIES_GM_Insignia_Simple_Inverted_Worn";
	};
};
class gm_VehicleInsignias_Nations: gm_VehicleInsignias_base
{
	class BUDDIES_GM_Insignia_National_Worn
	{
		name="BUDDIES National Insignia (Worn)";
		texture="\BUDDIES_GM\Data\Insignia\insignia_buddies_gm_national_worn.paa";
		picture="\BUDDIES_GM\Data\Insignia\insignia_buddies_gm_national_worn.paa";
		value="BUDDIES_GM_Insignia_National_Worn";
	};
	class BUDDIES_GM_Insignia_National_Simple_Worn
	{
		name="BUDDIES National Insignia (Simple, Worn)";
		texture="\BUDDIES_GM\Data\Insignia\insignia_buddies_gm_national_simple_worn.paa";
		picture="\BUDDIES_GM\Data\Insignia\insignia_buddies_gm_national_simple_worn.paa";
		value="BUDDIES_GM_Insignia_National_Simple_Worn";
	};
	class BUDDIES_GM_Insignia_National_Simple_Inverted_Worn
	{
		name="BUDDIES National Insignia (Simple, Inverted, Worn)";
		texture="\BUDDIES_GM\Data\Insignia\insignia_buddies_gm_national_simple_inverted_worn.paa";
		picture="\BUDDIES_GM\Data\Insignia\insignia_buddies_gm_national_simple_inverted_worn.paa";
		value="BUDDIES_GM_Insignia_National_Simple_Inverted_Worn";
	};
};