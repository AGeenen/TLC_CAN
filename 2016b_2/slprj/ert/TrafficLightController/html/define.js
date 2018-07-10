function CodeDefine() { 
this.def = new Array();
this.def["TrafficLightController_Init"] = {file: "TrafficLightController_c.html",line:33,type:"fcn"};
this.def["TrafficLightController"] = {file: "TrafficLightController_c.html",line:47,type:"fcn"};
this.def["TrafficLightControll_initialize"] = {file: "TrafficLightController_c.html",line:385,type:"fcn"};
this.def["DW_TrafficLightController_f_T"] = {file: "TrafficLightController_h.html",line:41,type:"type"};
this.def["MdlrefDW_TrafficLightControll_T"] = {file: "TrafficLightController_h.html",line:51,type:"type"};
this.def["RT_MODEL_TrafficLightControll_T"] = {file: "TrafficLightController_types_h.html",line:20,type:"type"};
this.def["int8_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:42,type:"type"};
this.def["uint8_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:43,type:"type"};
this.def["int16_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:44,type:"type"};
this.def["uint16_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:45,type:"type"};
this.def["int32_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:46,type:"type"};
this.def["uint32_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:47,type:"type"};
this.def["real32_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:48,type:"type"};
this.def["real64_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:49,type:"type"};
this.def["real_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:55,type:"type"};
this.def["time_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:56,type:"type"};
this.def["boolean_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:57,type:"type"};
this.def["int_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:58,type:"type"};
this.def["uint_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:59,type:"type"};
this.def["ulong_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:60,type:"type"};
this.def["char_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:61,type:"type"};
this.def["uchar_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:62,type:"type"};
this.def["byte_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:63,type:"type"};
this.def["creal32_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:73,type:"type"};
this.def["creal64_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:78,type:"type"};
this.def["creal_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:83,type:"type"};
this.def["cint8_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:90,type:"type"};
this.def["cuint8_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:97,type:"type"};
this.def["cint16_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:104,type:"type"};
this.def["cuint16_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:111,type:"type"};
this.def["cint32_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:118,type:"type"};
this.def["cuint32_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:125,type:"type"};
this.def["pointer_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:143,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["TrafficLightController_c.html"] = "../TrafficLightController.c";
	this.html2Root["TrafficLightController_c.html"] = "TrafficLightController_c.html";
	this.html2SrcPath["TrafficLightController_h.html"] = "../TrafficLightController.h";
	this.html2Root["TrafficLightController_h.html"] = "TrafficLightController_h.html";
	this.html2SrcPath["TrafficLightController_private_h.html"] = "../TrafficLightController_private.h";
	this.html2Root["TrafficLightController_private_h.html"] = "TrafficLightController_private_h.html";
	this.html2SrcPath["TrafficLightController_types_h.html"] = "../TrafficLightController_types.h";
	this.html2Root["TrafficLightController_types_h.html"] = "TrafficLightController_types_h.html";
	this.html2SrcPath["TLC_def_h.html"] = "../TLC_def.h";
	this.html2Root["TLC_def_h.html"] = "../../_sharedutils/html/TLC_def_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "../../_sharedutils/html/rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"TrafficLightController_c.html","TrafficLightController_h.html","TrafficLightController_private_h.html","TrafficLightController_types_h.html","TLC_def_h.html","rtwtypes_h.html"];
