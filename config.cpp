class CfgPatches {
	class tb_acc_optics {
		requiredaddons[] = {"A3_Weapons_F","A3_Weapons_F_Items"};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {"tb_acc_mk4CQT"};
		magazines[] = {};
	};
};

class CfgWeapons {
	class optic_MRCO;
	class InventoryOpticsItem_Base_F;
	class tb_acc_mk4CQT: optic_MRCO {
		scope = 2;
		displayName = "Mk4 CQ/T";
		descriptionShort ="Mk4 CQ/T<br/>Magnification: 1x-3x";
		picture = "\tb_acc_optics\data\w_mk4_ca.paa";
		model = "\tb_acc_optics\acc_mk4";
		weaponInfoType = "";
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 7;
			modelOptics = "\tb_acc_optics\MK4_Illum_optic_4x";
			class OpticsModes {
				class Mk4 { // 3x zoom
					opticsID = 1;
					useModelOptics = true;
					opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomMin = 0.0830;
					opticsZoomMax = 0.0830;
					opticsZoomInit = 0.0830;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					opticsFlare = true;
					opticsDisablePeripherialVision = true;
					distanceZoomMin=300;
					distanceZoomMax=300;
					cameraDir = "";
				};
				class Kolimator: Mk4 {
					opticsID = 2;
					useModelOptics = false;
					opticsFlare = false;
					opticsDisablePeripherialVision = false;
					opticsZoomMin=0.25;
					opticsZoomMax=1.1;
					opticsZoomInit=0.5;
					memoryPointCamera = "eye";
					visionMode[] = {};
				};
			};
		};
	};
};