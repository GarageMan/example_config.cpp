class CfgPatches
{
	class DC_Starter_Gear
	{
		units[]={};
		weapons[]={};
		requiredVersions=1.0;
		requiredAddons[]={"DZ_Data"};
	};
};

class CfgVehicles
{
	class Clothing;
	class TShirt_Black;
	class Hoodie_Grey;
	class BeanieHat_Black;
	class BeanieHat_Grey;
	class Jeans_Black;
	class Jeans_Grey;
	class Sneakers_Black;
	class Sneakers_White;
	class CourierBag;
	class SodaCan_ColorBase;
	class HuntingKnife;

	class DC_Bowieknife: HuntingKnife
	{
		scope=2;
		displayName="Dovecote Boonie Knife";
		descriptionShort="A starter equipted weapon";
		model="\DC_Starter_Gear\weapons\melee\bowieknife\DC_BowieKnife.p3d";
		debug_ItemCategory = 2;
		inventorySlot[] = {"Knife"};
		repairableWithKits[] = {4};
		repairCosts[] = {10.0};
		rotationFlags = 17;
		RestrainUnlockType = 1;
		canSkinBodies = 1;
		weight = 200;
		itemSize[] = {1,3};
		lootTag[] = {"Hunting","Camping"};
		lootCategory = "Tools";
		itemInfo[] = {"Knife"};
		openItemSpillRange[] = {10,20};
		isMeleeWeapon = 1;
		suicideAnim = "onehanded";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 130;
					healthLevels[] =
					{
						{1.00,{"DC_Starter_Gear\weapons\melee\bowieknife\DC_BowieKnife.rvmat"}},
						{0.70,{"DC_Starter_Gear\weapons\melee\bowieknife\DC_BowieKnife.rvmat"}},
						{0.50,{"DC_Starter_Gear\weapons\melee\bowieknife\DC_BowieKnife.rvmat"}},
						{0.30,{"DC_Starter_Gear\weapons\melee\bowieknife\DC_BowieKnife.rvmat"}},
						{0.00,{"DC_Starter_Gear\weapons\melee\bowieknife\DC_BowieKnife.rvmat"}}
					};
				};
			};
		};
	};

	class DC_SodaCan_Pilsner: SodaCan_ColorBase
	{
		displayName="Pigeon Head Brewery - Pilsner";
		descriptionShort="Pigeon Pilsner";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DC_Starter_Gear\gear\drinks\PigeonHeadBreweryPilsner.paa"
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class SodaCan_in_B
				{
					soundSet="SodaCan_in_B_SoundSet";
					id=202;
				};
				class WellPond_loop
				{
					soundSet="WellPond_loop_SoundSet";
					id=209;
				};
				class WellBottle_loop
				{
					soundSet="WellBottle_loop_SoundSet";
					id=210;
				};
				class pickup
				{
					soundSet="SodaCan_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="SodaCan_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	class DC_ImpCourierBag : CourierBag
	{
		displayName = "DC_ImpCourierBag";
		descriptionShort = "Dovecote – Starter Improvised Courier Bag";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DC_Starter_Gear\character\backpacks\DC_impcourierbag_co.paa",
			"DC_Starter_Gear\character\backpacks\DC_impcourierbag_co.paa",
			"DC_Starter_Gear\character\backpacks\DC_impcourierbag_co.paa"
		};
	};

	class DC_Starter_TShirt : TShirt_Black
	{
		displayName = "DC_Starter_TShirt";
		descriptionShort = "Dovecote - Starter T-Shirt";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DC_Starter_Gear\character\tops\DC_tshirt_black_co.paa",
			"DC_Starter_Gear\character\tops\DC_tshirt_black_co.paa",
			"DC_Starter_Gear\character\tops\DC_tshirt_black_co.paa"
		};
	};

	class DC_Starter_Winter_Hoodie : Hoodie_Grey
	{
		displayName = "DC_Starter_Winter-Hoodie";
		descriptionShort = "Dovecote - Starter Winter Hoodie";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DC_Starter_Gear\character\tops\DC_hoodie_grey_co.paa",
			"DC_Starter_Gear\character\tops\DC_hoodie_grey_co.paa",
			"DC_Starter_Gear\character\tops\DC_hoodie_grey_co.paa"
		};
	};

	class DC_Starter_Sneakers : Sneakers_Black
	{
		displayName = "DC_Starter_Sneaker";
		descriptionShort = "Dovecote - Starter Sneakers";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DC_Starter_Gear\character\shoes\DC_sneakers_black_co.paa",
			"DC_Starter_Gear\character\shoes\DC_sneakers_black_co.paa",
			"DC_Starter_Gear\character\shoes\DC_sneakers_black_co.paa"
		};
	};

	class DC_Starter_Winter_Sneakers : Sneakers_White
	{
		displayName = "DC_Starter_Winter-Sneaker";
		descriptionShort = "Dovecote - Starter Winter Sneakers";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DC_Starter_Gear\character\shoes\DC_sneakers_white_co.paa",
			"DC_Starter_Gear\character\shoes\DC_sneakers_white_co.paa",
			"DC_Starter_Gear\character\shoes\DC_sneakers_white_co.paa"
		};
	};

	class DC_Starter_BeanieHat : BeanieHat_Black
	{
		displayName = "DC_Starter_BeanieHat";
		descriptionShort = "Dovecote - Starter Beanie Hat";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DC_Starter_Gear\character\headgear\DC_beaniehat_black_co.paa",
			"DC_Starter_Gear\character\headgear\DC_beaniehat_black_co.paa",
			"DC_Starter_Gear\character\headgear\DC_beaniehat_black_co.paa"
		};
	};

	class DC_Starter_Winter_BeanieHat : BeanieHat_Grey
	{
		displayName = "DC_Starter_Winter-BeanieHat";
		descriptionShort = "Dovecote - Starter Winter-Beanie Hat";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DC_Starter_Gear\character\headgear\DC_beaniehat_grey_co.paa",
			"DC_Starter_Gear\character\headgear\DC_beaniehat_grey_co.paa",
			"DC_Starter_Gear\character\headgear\DC_beaniehat_grey_co.paa"
		};
	};

	class DC_Starter_Jeans : Jeans_Black
	{
		displayName = "DC_Starter_Jeans";
		descriptionShort = "Dovecote - Starter Jeans";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DC_Starter_Gear\character\pants\DC_jeans_black_co.paa",
			"DC_Starter_Gear\character\pants\DC_jeans_black_co.paa",
			"DC_Starter_Gear\character\pants\DC_jeans_black_co.paa"
		};
	};

	class DC_Starter_Winter_Jeans : Jeans_Grey
	{
		displayName = "DC_Starter_Winter-Jeans";
		descriptionShort = "Dovecote - Starter Winter Jeans";
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"DC_Starter_Gear\character\pants\DC_jeans_grey_co.paa",
			"DC_Starter_Gear\character\pants\DC_jeans_grey_co.paa",
			"DC_Starter_Gear\character\pants\DC_jeans_grey_co.paa"
		};
	};
};
