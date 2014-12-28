class CfgPatches {
	class tb_acc_optics {
		requiredaddons[] = {"A3_Weapons_F","A3_Weapons_F_Items","asdg_jointrails"};
		requiredversion = 0.1;
		units[] = {};
		weapons[] = {"tb_acc_mk4CQT","tb_acc_m145","tb_acc_ta31","tb_acc_compM4","tb_acc_c79","tb_acc_kobra"};
		magazines[] = {};
	};
};

class asdg_OpticRail;
class asdg_OpticSideMount: asdg_OpticRail {
	class compatibleItems{
		tb_acc_kobra = 1;
		//tb_acc_pso = 1;
		//tb_acc_goshawk = 1;
	};
};

class asdg_OpticRail1913: asdg_OpticRail {
	class compatibleItems {
		//tb_acc_mk4CQT = 1;
		tb_acc_ta31 = 1;
		tb_acc_c79 = 1;
		tb_acc_m145 = 1;
		tb_acc_compM4 = 1;
	};
};

class CfgWeapons {
	class ItemCore;
	class optic_MRCO;
	class optic_Arco;
	class optic_Holosight;
	class InventoryOpticsItem_Base_F;
	class tb_acc_mk4CQT: optic_MRCO {
		scope = 0;
		displayName = "Mk4 CQ/T";
		descriptionShort ="Mk4 CQ/T<br/>Magnification: 1x-3x";
		picture = "\tb_acc_optics\data\ico\w_mk4_ca.paa";
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
	class optic_Hamr;
	class tb_acc_ta31 : optic_Hamr {
		displayName = "Trijicon Ta31";
		descriptionshort = "Trijicon Ta31<br/>Magnification: 4x";
		weaponinfotype = "RscWeaponZeroing";
		picture = "\tb_acc_optics\data\ico\w_ta31_ca.paa";
		model = "\tb_acc_optics\acc_ta31";
		scope = 2;
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 7;
			modelOptics = "\tb_acc_optics\ACOG_TA31_optic_4x";
			class OpticsModes {
				class ACOG {
					cameradir = "";
					distancezoommax = 300;
					distancezoommin = 300;
					memorypointcamera = "opticView";
					opticsdisableperipherialvision = 1;
					opticsflare = 1;
					opticsid = 1;
					opticsppeffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
					opticszoominit = 0.0623;
					opticszoommax = 0.0623;
					opticszoommin = 0.0623;
					usemodeloptics = 1;
					visionmode[] = {"Normal"};
				};
				class Kolimator: ACOG {
					memorypointcamera = "eye";
					opticsdisableperipherialvision = 0;
					opticsflare = 0;
					opticsid = 2;
					opticszoominit = 0.8;
					opticszoommax = 1.5;
					opticszoommin = 0.25;
					usemodeloptics = 0;
					visionmode[] = {};
				};
			};
		};
	};
	class tb_acc_m145 : optic_Arco {
		descriptionshort = "Elcan M145<br/>Magnification: 3.4x";
		weaponinfotype = "RscWeaponZeroing";
		picture = "\tb_acc_optics\data\ico\w_m145_ca.paa";
		model = "\tb_acc_optics\acc_m145";
		displayname = "M145";
		scope =2;
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 7;
			modelOptics = "\tb_acc_optics\M145";

			class OpticsModes {
				class M145 {
					cameradir = "";
					distancezoommax = 300;
					distancezoommin = 300;
					memorypointcamera = "opticView";
					opticsdisableperipherialvision = 1;
					opticsflare = 1;
					opticsid = 1;
					opticsppeffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
					opticszoominit = 0.0732;
					opticszoommax = 0.0732;
					opticszoommin = 0.0732;
					usemodeloptics = 1;
					visionmode[] = {"Normal"};
				};
				class CQB: M145 {
					memorypointcamera = "eye";
					opticsdisableperipherialvision = 0;
					opticsflare = 0;
					opticsid = 2;
					opticszoominit = 0.8;
					opticszoommax = 1.5;
					opticszoommin = 0.25;
					usemodeloptics = 0;
					visionmode[] = {};
				};
			};
		};
	};
	class tb_acc_c79 : tb_acc_m145 {
		descriptionshort = "Elcan C79<br/>Magnification: 3.4x";
		picture = "\tb_acc_optics\data\ico\w_c79_ca.paa";
		model = "\tb_acc_optics\acc_c79";
		displayname = "C79";
		class ItemInfo: ItemInfo {
			modelOptics = "\tb_acc_optics\C79";
			
			class OpticsModes : OpticsModes {
				class C79 : M145 {
					discreteDistance[] = {200,300,400,500,600,700,800};
					discreteDistanceInitIndex = 0;
				};
				class CQB : CQB {};
			};
		};
	};
	class tb_acc_compM4 : optic_Holosight {
		descriptionshort = "Aimpoint CompM4<br/>Magnification: 1x";
		displayname = "Aimpoint CompM4";
		model = "\tb_acc_optics\acc_compM4";
		picture = "\tb_acc_optics\data\ico\w_compM4_ca.paa";
		scope = 2;
		weaponinfotype = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 3;
			modeloptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes {
				class compM4 {
					cameradir = "";
					distancezoommax = 200;
					distancezoommin = 200;
					memorypointcamera = "eye";
					opticsdisableperipherialvision = 0;
					opticsflare = 0;
					opticsid = 1;
					opticsppeffects[] = {"OpticsBlur1"};
					opticszoominit = 0.75;
					opticszoommax = 1.1;
					opticszoommin = 0.375;
					usemodeloptics = 0;
					visionmode[] = {};
				};
			};
		};
	};
	class tb_acc_kobra : optic_Holosight {	
		descriptionshort = "Kobra Red Dot Sight<br/>Magnification: 1x";
		displayname = "Kobra";
		model = "\tb_acc_optics\acc_kobra";
		picture = "\tb_acc_optics\data\ico\w_kobra_ca.paa";
		scope = 2;
		weaponinfotype = "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 3;
			modeloptics = "\A3\Weapons_F\empty";
			optics = 1;
			class OpticsModes {
				class kobra {
					cameradir = "";
					distancezoommax = 200;
					distancezoommin = 200;
					memorypointcamera = "eye";
					opticsdisableperipherialvision = 0;
					opticsflare = 0;
					opticsid = 1;
					opticsppeffects[] = {"OpticsBlur1"};
					opticszoominit = 0.75;
					opticszoommax = 1.1;
					opticszoommin = 0.375;
					usemodeloptics = 0;
					visionmode[] = {};
				};
			};
		};
	};
	
	class tb_acc_pso : optic_Hamr {
		scope = 0;
		displayName = "PSO-1M2";
		descriptionshort = "PSO-1M2<br/>Magnification: 4x24";
		weaponinfotype = "RscWeaponZeroing";
		picture = "\tb_acc_optics\data\ico\w_pso_ca.paa";
		model = "\tb_acc_optics\acc_pso";
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 6;
			modelOptics = "\tb_acc_optics\pso_optics";
			class OpticsModes {
				class PSO {
					cameradir = "";
					distancezoommax = 200;
					distancezoommin = 200;
					memorypointcamera = "opticView";
					opticsdisableperipherialvision = 1;
					opticsflare = 1;
					opticsid = 1;
					opticsppeffects[] = {};
					opticszoominit = 0.0623;
					opticszoommax = 0.0623;
					opticszoommin = 0.0623;
					usemodeloptics = 1;
					visionmode[] = {"Normal"};
				};
				class Kolimator: PSO {
					discretedistance[] = {};
					discretedistanceinitindex = 0;
					distancezoommax = 300;
					distancezoommin = 300;
					memorypointcamera = "eye";
					opticsdisableperipherialvision = 0;
					opticsflare = 0;
					opticsid = 2;
					opticsppeffects[] = {};
					opticszoominit = 0.5;
					opticszoommax = 1.1;
					opticszoommin = 0.25;
					usemodeloptics = 0;
					visionmode[] = {};
					weaponinfotype = "RscWeaponEmpty";
				};
			};
		};
	};
	class optic_tws;
	class tb_acc_goshawk : optic_tws {
		scope = 0;
		descriptionshort = "Goshawk Thermal Weapon Sight<br />Magnification: 3.4x";
		displayname = "Goshawk TWS";
		model = "\tb_acc_optics\acc_goshawk";
		picture = "\tb_acc_optics\data\ico\w_goshawk_ca.paa";
		weaponinfotype = "";
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 8;
			modeloptics = "\tb_acc_optics\TI_goshawk_optic";
			optics = 1;
			weaponinfotype = "";
		};
	
	};	
};