class cfgPatches {
	class dda_Uniforms {
		requiredAddons[] = {};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgEditorCategories {
	class dda_UA_EdCat { // Category class, you point to it in editorCategory property
		displayName = "Union Army"; // Name visible in the list
	};
	
	class dda_CSA_EdCat { 
		displayName = "Confederate States Army";
	};
};

/*
class CfgEditorSubcategories {
	class dda_EdSubCat { // Category class, you point to it in editorSubcategory property
		displayName = "My Subcategory"; // Name visible in the list
	};
};
*/