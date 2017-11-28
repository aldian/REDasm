#include "msvbvm50.h"

namespace REDasm {

MSVBVM50::MSVBVM50()
{

}

void MSVBVM50::compile(OrdinalMap &m)
{
    ORDINAL_NAME(411, "BASIC_CLASS_AddRef");
    ORDINAL_NAME(413, "BASIC_CLASS_GetIDsOfNames");
    ORDINAL_NAME(414, "BASIC_CLASS_Invoke");
    ORDINAL_NAME(410, "BASIC_CLASS_QueryInterface");
    ORDINAL_NAME(412, "BASIC_CLASS_Release");
    ORDINAL_NAME(420, "BASIC_DISPINTERFACE_GetTICount");
    ORDINAL_NAME(421, "BASIC_DISPINTERFACE_GetTypeInfo");
    ORDINAL_NAME(190, "CopyRecord");
    ORDINAL_NAME(2000, "CreateIExprSrvObj");
    ORDINAL_NAME(146, "DLLGetDocumentation");
    ORDINAL_NAME(187, "DllFunctionCall");
    ORDINAL_NAME(106, "DllRegisterServer");
    ORDINAL_NAME(107, "DllUnregisterServer");
    ORDINAL_NAME(440, "EVENT_SINK2_AddRef");
    ORDINAL_NAME(441, "EVENT_SINK2_Release");
    ORDINAL_NAME(401, "EVENT_SINK_AddRef");
    ORDINAL_NAME(403, "EVENT_SINK_GetIDsOfNames");
    ORDINAL_NAME(404, "EVENT_SINK_Invoke");
    ORDINAL_NAME(400, "EVENT_SINK_QueryInterface");
    ORDINAL_NAME(402, "EVENT_SINK_Release");
    ORDINAL_NAME(274, "EbCreateContext");
    ORDINAL_NAME(275, "EbDestroyContext");
    ORDINAL_NAME(232, "EbGetHandleOfExecutingProject");
    ORDINAL_NAME(1025, "EbGetObjConnectionCounts");
    ORDINAL_NAME(2010, "EbGetVBAObject");
    ORDINAL_NAME(298, "EbIsProjectOnStack");
    ORDINAL_NAME(268, "EbLibraryLoad");
    ORDINAL_NAME(269, "EbLibraryUnload");
    ORDINAL_NAME(271, "EbLoadRunTime");
    ORDINAL_NAME(231, "EbResetProject");
    ORDINAL_NAME(265, "EbResetProjectNormal");
    ORDINAL_NAME(276, "EbSetContextWorkerThread");
    ORDINAL_NAME(317, "GetMem1");
    ORDINAL_NAME(300, "GetMem2");
    ORDINAL_NAME(301, "GetMem4");
    ORDINAL_NAME(302, "GetMem8");
    ORDINAL_NAME(319, "GetMemEvent");
    ORDINAL_NAME(314, "GetMemNewObj");
    ORDINAL_NAME(305, "GetMemObj");
    ORDINAL_NAME(303, "GetMemStr");
    ORDINAL_NAME(304, "GetMemVar");
    ORDINAL_NAME(1024, "IID_IVbaHost");
    ORDINAL_NAME(199, "MethCallEngine");
    ORDINAL_NAME(186, "ProcCallEngine");
    ORDINAL_NAME(318, "PutMem1");
    ORDINAL_NAME(306, "PutMem2");
    ORDINAL_NAME(307, "PutMem4");
    ORDINAL_NAME(308, "PutMem8");
    ORDINAL_NAME(320, "PutMemEvent");
    ORDINAL_NAME(315, "PutMemNewObj");
    ORDINAL_NAME(311, "PutMemObj");
    ORDINAL_NAME(309, "PutMemStr");
    ORDINAL_NAME(310, "PutMemVar");
    ORDINAL_NAME(321, "SetMemEvent");
    ORDINAL_NAME(316, "SetMemNewObj");
    ORDINAL_NAME(313, "SetMemObj");
    ORDINAL_NAME(312, "SetMemVar");
    ORDINAL_NAME(100, "ThunRTMain");
    ORDINAL_NAME(299, "TipCreateInstanceEx");
    ORDINAL_NAME(230, "TipCreateInstanceProject");
    ORDINAL_NAME(195, "TipGetAddressOfPredeclaredInstance");
    ORDINAL_NAME(1016, "TipInvokeMethod");
    ORDINAL_NAME(999, "TipInvokeMethod2");
    ORDINAL_NAME(220, "TipSetOption");
    ORDINAL_NAME(266, "TipUnloadInstance");
    ORDINAL_NAME(227, "TipUnloadProject");
    ORDINAL_NAME(105, "UserDllMain");
    ORDINAL_NAME(102, "VBDllCanUnloadNow");
    ORDINAL_NAME(104, "VBDllGetClassObject");
    ORDINAL_NAME(103, "VBDllRegisterServer");
    ORDINAL_NAME(101, "VBDllUnRegisterServer");
    ORDINAL_NAME(644, "VarPtr");
    ORDINAL_NAME(431, "Zombie_AddRef");
    ORDINAL_NAME(435, "Zombie_GetIDsOfNames");
    ORDINAL_NAME(434, "Zombie_GetTypeInfo");
    ORDINAL_NAME(433, "Zombie_GetTypeInfoCount");
    ORDINAL_NAME(436, "Zombie_Invoke");
    ORDINAL_NAME(430, "Zombie_QueryInterface");
    ORDINAL_NAME(432, "Zombie_Release");
    ORDINAL_NAME(147, "_CIatan");
    ORDINAL_NAME(148, "_CIcos");
    ORDINAL_NAME(149, "_CIexp");
    ORDINAL_NAME(150, "_CIlog");
    ORDINAL_NAME(151, "_CIsin");
    ORDINAL_NAME(152, "_CIsqrt");
    ORDINAL_NAME(153, "_CItan");
    ORDINAL_NAME(154, "__vbaAptOffset");
    ORDINAL_NAME(155, "__vbaAryConstruct");
    ORDINAL_NAME(156, "__vbaAryCopy");
    ORDINAL_NAME(157, "__vbaAryDestruct");
    ORDINAL_NAME(108, "__vbaAryLock");
    ORDINAL_NAME(158, "__vbaAryMove");
    ORDINAL_NAME(159, "__vbaAryRebase1Var");
    ORDINAL_NAME(160, "__vbaAryUnlock");
    ORDINAL_NAME(111, "__vbaAryVarVarg");
    ORDINAL_NAME(109, "__vbaBoolErrVar");
    ORDINAL_NAME(161, "__vbaBoolStr");
    ORDINAL_NAME(162, "__vbaBoolVar");
    ORDINAL_NAME(163, "__vbaBoolVarNull");
    ORDINAL_NAME(164, "__vbaCastObj");
    ORDINAL_NAME(165, "__vbaCastObjVar");
    ORDINAL_NAME(166, "__vbaCheckType");
    ORDINAL_NAME(167, "__vbaCheckTypeVar");
    ORDINAL_NAME(168, "__vbaChkstk");
    ORDINAL_NAME(169, "__vbaCopyBytes");
    ORDINAL_NAME(170, "__vbaCyAbs");
    ORDINAL_NAME(171, "__vbaCyAdd");
    ORDINAL_NAME(172, "__vbaCyErrVar");
    ORDINAL_NAME(173, "__vbaCyFix");
    ORDINAL_NAME(174, "__vbaCyForInit");
    ORDINAL_NAME(175, "__vbaCyForNext");
    ORDINAL_NAME(176, "__vbaCyI2");
    ORDINAL_NAME(177, "__vbaCyI4");
    ORDINAL_NAME(178, "__vbaCyInt");
    ORDINAL_NAME(179, "__vbaCyMul");
    ORDINAL_NAME(180, "__vbaCyMulI2");
    ORDINAL_NAME(181, "__vbaCySgn");
    ORDINAL_NAME(182, "__vbaCyStr");
    ORDINAL_NAME(183, "__vbaCySub");
    ORDINAL_NAME(184, "__vbaCyUI1");
    ORDINAL_NAME(185, "__vbaCyVar");
    ORDINAL_NAME(191, "__vbaDateR4");
    ORDINAL_NAME(192, "__vbaDateR8");
    ORDINAL_NAME(193, "__vbaDateStr");
    ORDINAL_NAME(194, "__vbaDateVar");
    ORDINAL_NAME(196, "__vbaDerefAry");
    ORDINAL_NAME(197, "__vbaDerefAry1");
    ORDINAL_NAME(198, "__vbaEnd");
    ORDINAL_NAME(200, "__vbaErase");
    ORDINAL_NAME(201, "__vbaEraseKeepData");
    ORDINAL_NAME(202, "__vbaEraseNoPop");
    ORDINAL_NAME(203, "__vbaError");
    ORDINAL_NAME(204, "__vbaErrorOverflow");
    ORDINAL_NAME(205, "__vbaExceptHandler");
    ORDINAL_NAME(206, "__vbaExitEachAry");
    ORDINAL_NAME(207, "__vbaExitEachColl");
    ORDINAL_NAME(208, "__vbaExitEachVar");
    ORDINAL_NAME(209, "__vbaExitProc");
    ORDINAL_NAME(210, "__vbaFPException");
    ORDINAL_NAME(211, "__vbaFPFix");
    ORDINAL_NAME(212, "__vbaFPInt");
    ORDINAL_NAME(213, "__vbaFailedFriend");
    ORDINAL_NAME(214, "__vbaFileClose");
    ORDINAL_NAME(215, "__vbaFileCloseAll");
    ORDINAL_NAME(216, "__vbaFileLock");
    ORDINAL_NAME(217, "__vbaFileOpen");
    ORDINAL_NAME(218, "__vbaFileSeek");
    ORDINAL_NAME(219, "__vbaFixstrConstruct");
    ORDINAL_NAME(221, "__vbaForEachAry");
    ORDINAL_NAME(222, "__vbaForEachCollAd");
    ORDINAL_NAME(223, "__vbaForEachCollObj");
    ORDINAL_NAME(224, "__vbaForEachCollVar");
    ORDINAL_NAME(225, "__vbaForEachVar");
    ORDINAL_NAME(112, "__vbaFpCDblR4");
    ORDINAL_NAME(113, "__vbaFpCDblR8");
    ORDINAL_NAME(114, "__vbaFpCSngR4");
    ORDINAL_NAME(115, "__vbaFpCSngR8");
    ORDINAL_NAME(116, "__vbaFpCmpCy");
    ORDINAL_NAME(117, "__vbaFpCy");
    ORDINAL_NAME(118, "__vbaFpI2");
    ORDINAL_NAME(119, "__vbaFpI4");
    ORDINAL_NAME(120, "__vbaFpR4");
    ORDINAL_NAME(121, "__vbaFpR8");
    ORDINAL_NAME(122, "__vbaFpUI1");
    ORDINAL_NAME(123, "__vbaFreeObj");
    ORDINAL_NAME(226, "__vbaFreeObjList");
    ORDINAL_NAME(124, "__vbaFreeStr");
    ORDINAL_NAME(228, "__vbaFreeStrList");
    ORDINAL_NAME(125, "__vbaFreeVar");
    ORDINAL_NAME(229, "__vbaFreeVarList");
    ORDINAL_NAME(126, "__vbaFreeVarg");
    ORDINAL_NAME(233, "__vbaGenerateBoundsError");
    ORDINAL_NAME(234, "__vbaGet3");
    ORDINAL_NAME(235, "__vbaGet4");
    ORDINAL_NAME(236, "__vbaGetFxStr3");
    ORDINAL_NAME(237, "__vbaGetFxStr4");
    ORDINAL_NAME(238, "__vbaGetOwner3");
    ORDINAL_NAME(239, "__vbaGetOwner4");
    ORDINAL_NAME(240, "__vbaGosub");
    ORDINAL_NAME(241, "__vbaGosubFree");
    ORDINAL_NAME(242, "__vbaGosubReturn");
    ORDINAL_NAME(243, "__vbaHresultCheck");
    ORDINAL_NAME(244, "__vbaHresultCheckNonvirt");
    ORDINAL_NAME(245, "__vbaHresultCheckObj");
    ORDINAL_NAME(127, "__vbaI2Abs");
    ORDINAL_NAME(246, "__vbaI2Cy");
    ORDINAL_NAME(247, "__vbaI2ErrVar");
    ORDINAL_NAME(248, "__vbaI2ForNextCheck");
    ORDINAL_NAME(128, "__vbaI2I4");
    ORDINAL_NAME(129, "__vbaI2Sgn");
    ORDINAL_NAME(249, "__vbaI2Str");
    ORDINAL_NAME(250, "__vbaI2Var");
    ORDINAL_NAME(130, "__vbaI4Abs");
    ORDINAL_NAME(251, "__vbaI4Cy");
    ORDINAL_NAME(252, "__vbaI4ErrVar");
    ORDINAL_NAME(253, "__vbaI4ForNextCheck");
    ORDINAL_NAME(131, "__vbaI4Sgn");
    ORDINAL_NAME(254, "__vbaI4Str");
    ORDINAL_NAME(255, "__vbaI4Var");
    ORDINAL_NAME(256, "__vbaInStr");
    ORDINAL_NAME(257, "__vbaInStrB");
    ORDINAL_NAME(258, "__vbaInStrVar");
    ORDINAL_NAME(259, "__vbaInStrVarB");
    ORDINAL_NAME(260, "__vbaInputFile");
    ORDINAL_NAME(261, "__vbaLateIdCall");
    ORDINAL_NAME(262, "__vbaLateIdCallLd");
    ORDINAL_NAME(263, "__vbaLateIdCallSt");
    ORDINAL_NAME(264, "__vbaLateIdNamedCall");
    ORDINAL_NAME(267, "__vbaLateIdNamedCallLd");
    ORDINAL_NAME(270, "__vbaLateIdNamedCallSt");
    ORDINAL_NAME(272, "__vbaLateIdNamedStAd");
    ORDINAL_NAME(273, "__vbaLateIdSt");
    ORDINAL_NAME(277, "__vbaLateIdStAd");
    ORDINAL_NAME(278, "__vbaLateMemCall");
    ORDINAL_NAME(279, "__vbaLateMemCallLd");
    ORDINAL_NAME(280, "__vbaLateMemCallSt");
    ORDINAL_NAME(281, "__vbaLateMemNamedCall");
    ORDINAL_NAME(282, "__vbaLateMemNamedCallLd");
    ORDINAL_NAME(283, "__vbaLateMemNamedCallSt");
    ORDINAL_NAME(284, "__vbaLateMemNamedStAd");
    ORDINAL_NAME(285, "__vbaLateMemSt");
    ORDINAL_NAME(286, "__vbaLateMemStAd");
    ORDINAL_NAME(287, "__vbaLbound");
    ORDINAL_NAME(288, "__vbaLenBstr");
    ORDINAL_NAME(289, "__vbaLenBstrB");
    ORDINAL_NAME(290, "__vbaLenVar");
    ORDINAL_NAME(291, "__vbaLenVarB");
    ORDINAL_NAME(292, "__vbaLineInputStr");
    ORDINAL_NAME(293, "__vbaLineInputVar");
    ORDINAL_NAME(294, "__vbaLsetFixstr");
    ORDINAL_NAME(295, "__vbaLsetFixstrFree");
    ORDINAL_NAME(296, "__vbaMidStmtBstr");
    ORDINAL_NAME(297, "__vbaMidStmtBstrB");
    ORDINAL_NAME(322, "__vbaMidStmtVar");
    ORDINAL_NAME(323, "__vbaMidStmtVarB");
    ORDINAL_NAME(324, "__vbaNameFile");
    ORDINAL_NAME(326, "__vbaNew");
    ORDINAL_NAME(325, "__vbaNew2");
    ORDINAL_NAME(327, "__vbaNextEachAry");
    ORDINAL_NAME(328, "__vbaNextEachCollAd");
    ORDINAL_NAME(329, "__vbaNextEachCollObj");
    ORDINAL_NAME(330, "__vbaNextEachCollVar");
    ORDINAL_NAME(331, "__vbaNextEachVar");
    ORDINAL_NAME(332, "__vbaObjAddref");
    ORDINAL_NAME(333, "__vbaObjIs");
    ORDINAL_NAME(334, "__vbaObjSet");
    ORDINAL_NAME(335, "__vbaObjSetAddref");
    ORDINAL_NAME(336, "__vbaObjVar");
    ORDINAL_NAME(337, "__vbaOnError");
    ORDINAL_NAME(338, "__vbaOnGoCheck");
    ORDINAL_NAME(339, "__vbaPowerR8");
    ORDINAL_NAME(340, "__vbaPrintFile");
    ORDINAL_NAME(341, "__vbaPrintObj");
    ORDINAL_NAME(342, "__vbaPut3");
    ORDINAL_NAME(343, "__vbaPut4");
    ORDINAL_NAME(344, "__vbaPutFxStr3");
    ORDINAL_NAME(345, "__vbaPutFxStr4");
    ORDINAL_NAME(346, "__vbaPutOwner3");
    ORDINAL_NAME(347, "__vbaPutOwner4");
    ORDINAL_NAME(348, "__vbaR4Cy");
    ORDINAL_NAME(349, "__vbaR4ErrVar");
    ORDINAL_NAME(350, "__vbaR4ForNextCheck");
    ORDINAL_NAME(351, "__vbaR4Sgn");
    ORDINAL_NAME(352, "__vbaR4Str");
    ORDINAL_NAME(353, "__vbaR4Var");
    ORDINAL_NAME(354, "__vbaR8Cy");
    ORDINAL_NAME(355, "__vbaR8ErrVar");
    ORDINAL_NAME(356, "__vbaR8FixI2");
    ORDINAL_NAME(357, "__vbaR8FixI4");
    ORDINAL_NAME(358, "__vbaR8ForNextCheck");
    ORDINAL_NAME(359, "__vbaR8IntI2");
    ORDINAL_NAME(360, "__vbaR8IntI4");
    ORDINAL_NAME(361, "__vbaR8Sgn");
    ORDINAL_NAME(362, "__vbaR8Str");
    ORDINAL_NAME(363, "__vbaR8Var");
    ORDINAL_NAME(364, "__vbaRaiseEvent");
    ORDINAL_NAME(365, "__vbaRecAnsiToUni");
    ORDINAL_NAME(188, "__vbaRecAssign");
    ORDINAL_NAME(189, "__vbaRecDestruct");
    ORDINAL_NAME(366, "__vbaRecDestructAnsi");
    ORDINAL_NAME(367, "__vbaRecUniToAnsi");
    ORDINAL_NAME(368, "__vbaRedim");
    ORDINAL_NAME(369, "__vbaRedimPreserve");
    ORDINAL_NAME(370, "__vbaRedimPreserveVar");
    ORDINAL_NAME(371, "__vbaRedimVar");
    ORDINAL_NAME(372, "__vbaRefVarAry");
    ORDINAL_NAME(373, "__vbaResume");
    ORDINAL_NAME(374, "__vbaRsetFixstr");
    ORDINAL_NAME(375, "__vbaRsetFixstrFree");
    ORDINAL_NAME(376, "__vbaSetSystemError");
    ORDINAL_NAME(377, "__vbaStopExe");
    ORDINAL_NAME(378, "__vbaStr2Vec");
    ORDINAL_NAME(379, "__vbaStrAryToAnsi");
    ORDINAL_NAME(380, "__vbaStrAryToUnicode");
    ORDINAL_NAME(381, "__vbaStrBool");
    ORDINAL_NAME(382, "__vbaStrCat");
    ORDINAL_NAME(383, "__vbaStrCmp");
    ORDINAL_NAME(384, "__vbaStrComp");
    ORDINAL_NAME(385, "__vbaStrCompVar");
    ORDINAL_NAME(132, "__vbaStrCopy");
    ORDINAL_NAME(386, "__vbaStrCy");
    ORDINAL_NAME(387, "__vbaStrDate");
    ORDINAL_NAME(110, "__vbaStrErrVarCopy");
    ORDINAL_NAME(388, "__vbaStrFixstr");
    ORDINAL_NAME(389, "__vbaStrI2");
    ORDINAL_NAME(390, "__vbaStrI4");
    ORDINAL_NAME(391, "__vbaStrLike");
    ORDINAL_NAME(133, "__vbaStrMove");
    ORDINAL_NAME(392, "__vbaStrR4");
    ORDINAL_NAME(393, "__vbaStrR8");
    ORDINAL_NAME(394, "__vbaStrTextCmp");
    ORDINAL_NAME(395, "__vbaStrTextLike");
    ORDINAL_NAME(396, "__vbaStrToAnsi");
    ORDINAL_NAME(397, "__vbaStrToUnicode");
    ORDINAL_NAME(398, "__vbaStrUI1");
    ORDINAL_NAME(399, "__vbaStrVarCopy");
    ORDINAL_NAME(405, "__vbaStrVarMove");
    ORDINAL_NAME(406, "__vbaStrVarVal");
    ORDINAL_NAME(407, "__vbaUI1Cy");
    ORDINAL_NAME(408, "__vbaUI1ErrVar");
    ORDINAL_NAME(134, "__vbaUI1I2");
    ORDINAL_NAME(135, "__vbaUI1I4");
    ORDINAL_NAME(136, "__vbaUI1Sgn");
    ORDINAL_NAME(409, "__vbaUI1Str");
    ORDINAL_NAME(415, "__vbaUI1Var");
    ORDINAL_NAME(416, "__vbaUbound");
    ORDINAL_NAME(417, "__vbaUnkVar");
    ORDINAL_NAME(418, "__vbaVar2Vec");
    ORDINAL_NAME(419, "__vbaVarAbs");
    ORDINAL_NAME(422, "__vbaVarAdd");
    ORDINAL_NAME(423, "__vbaVarAnd");
    ORDINAL_NAME(424, "__vbaVarCat");
    ORDINAL_NAME(425, "__vbaVarCmpEq");
    ORDINAL_NAME(426, "__vbaVarCmpGe");
    ORDINAL_NAME(427, "__vbaVarCmpGt");
    ORDINAL_NAME(428, "__vbaVarCmpLe");
    ORDINAL_NAME(429, "__vbaVarCmpLt");
    ORDINAL_NAME(437, "__vbaVarCmpNe");
    ORDINAL_NAME(137, "__vbaVarCopy");
    ORDINAL_NAME(438, "__vbaVarDateVar");
    ORDINAL_NAME(439, "__vbaVarDiv");
    ORDINAL_NAME(138, "__vbaVarDup");
    ORDINAL_NAME(442, "__vbaVarEqv");
    ORDINAL_NAME(443, "__vbaVarErrI4");
    ORDINAL_NAME(444, "__vbaVarFix");
    ORDINAL_NAME(445, "__vbaVarForInit");
    ORDINAL_NAME(446, "__vbaVarForNext");
    ORDINAL_NAME(447, "__vbaVarIdiv");
    ORDINAL_NAME(448, "__vbaVarImp");
    ORDINAL_NAME(449, "__vbaVarIndexLoad");
    ORDINAL_NAME(450, "__vbaVarIndexLoadRef");
    ORDINAL_NAME(451, "__vbaVarIndexLoadRefLock");
    ORDINAL_NAME(452, "__vbaVarIndexStore");
    ORDINAL_NAME(453, "__vbaVarIndexStoreObj");
    ORDINAL_NAME(454, "__vbaVarInt");
    ORDINAL_NAME(455, "__vbaVarLike");
    ORDINAL_NAME(456, "__vbaVarLikeVar");
    ORDINAL_NAME(457, "__vbaVarMod");
    ORDINAL_NAME(139, "__vbaVarMove");
    ORDINAL_NAME(458, "__vbaVarMul");
    ORDINAL_NAME(459, "__vbaVarNeg");
    ORDINAL_NAME(460, "__vbaVarNot");
    ORDINAL_NAME(461, "__vbaVarOr");
    ORDINAL_NAME(462, "__vbaVarPow");
    ORDINAL_NAME(463, "__vbaVarSetObj");
    ORDINAL_NAME(464, "__vbaVarSetObjAddref");
    ORDINAL_NAME(465, "__vbaVarSetUnk");
    ORDINAL_NAME(466, "__vbaVarSetUnkAddref");
    ORDINAL_NAME(467, "__vbaVarSetVar");
    ORDINAL_NAME(468, "__vbaVarSetVarAddref");
    ORDINAL_NAME(469, "__vbaVarSub");
    ORDINAL_NAME(470, "__vbaVarTextCmpEq");
    ORDINAL_NAME(471, "__vbaVarTextCmpGe");
    ORDINAL_NAME(472, "__vbaVarTextCmpGt");
    ORDINAL_NAME(473, "__vbaVarTextCmpLe");
    ORDINAL_NAME(474, "__vbaVarTextCmpLt");
    ORDINAL_NAME(475, "__vbaVarTextCmpNe");
    ORDINAL_NAME(476, "__vbaVarTextLike");
    ORDINAL_NAME(477, "__vbaVarTextLikeVar");
    ORDINAL_NAME(478, "__vbaVarTextTstEq");
    ORDINAL_NAME(479, "__vbaVarTextTstGe");
    ORDINAL_NAME(480, "__vbaVarTextTstGt");
    ORDINAL_NAME(481, "__vbaVarTextTstLe");
    ORDINAL_NAME(482, "__vbaVarTextTstLt");
    ORDINAL_NAME(483, "__vbaVarTextTstNe");
    ORDINAL_NAME(484, "__vbaVarTstEq");
    ORDINAL_NAME(485, "__vbaVarTstGe");
    ORDINAL_NAME(486, "__vbaVarTstGt");
    ORDINAL_NAME(487, "__vbaVarTstLe");
    ORDINAL_NAME(488, "__vbaVarTstLt");
    ORDINAL_NAME(489, "__vbaVarTstNe");
    ORDINAL_NAME(140, "__vbaVarVargNofree");
    ORDINAL_NAME(490, "__vbaVarXor");
    ORDINAL_NAME(491, "__vbaVargObj");
    ORDINAL_NAME(492, "__vbaVargObjAddref");
    ORDINAL_NAME(141, "__vbaVargParmRef");
    ORDINAL_NAME(493, "__vbaVargUnk");
    ORDINAL_NAME(494, "__vbaVargUnkAddref");
    ORDINAL_NAME(142, "__vbaVargVar");
    ORDINAL_NAME(143, "__vbaVargVarCopy");
    ORDINAL_NAME(144, "__vbaVargVarMove");
    ORDINAL_NAME(145, "__vbaVargVarRef");
    ORDINAL_NAME(495, "__vbaVerifyVarObj");
    ORDINAL_NAME(496, "__vbaWriteFile");
    ORDINAL_NAME(497, "_adj_fdiv_m16i");
    ORDINAL_NAME(498, "_adj_fdiv_m32");
    ORDINAL_NAME(499, "_adj_fdiv_m32i");
    ORDINAL_NAME(500, "_adj_fdiv_m64");
    ORDINAL_NAME(501, "_adj_fdiv_r");
    ORDINAL_NAME(502, "_adj_fdivr_m16i");
    ORDINAL_NAME(503, "_adj_fdivr_m32");
    ORDINAL_NAME(504, "_adj_fdivr_m32i");
    ORDINAL_NAME(505, "_adj_fdivr_m64");
    ORDINAL_NAME(506, "_adj_fpatan");
    ORDINAL_NAME(507, "_adj_fprem");
    ORDINAL_NAME(508, "_adj_fprem1");
    ORDINAL_NAME(509, "_adj_fptan");
    ORDINAL_NAME(510, "_allmul");
    ORDINAL_NAME(635, "rtBoolFromErrVar");
    ORDINAL_NAME(634, "rtBstrFromErrVar");
    ORDINAL_NAME(636, "rtCyFromErrVar");
    ORDINAL_NAME(564, "rtDecFromVar");
    ORDINAL_NAME(637, "rtI2FromErrVar");
    ORDINAL_NAME(638, "rtI4FromErrVar");
    ORDINAL_NAME(639, "rtR4FromErrVar");
    ORDINAL_NAME(640, "rtR8FromErrVar");
    ORDINAL_NAME(686, "rtUI1FromErrVar");
    ORDINAL_NAME(656, "rtcAbsVar");
    ORDINAL_NAME(516, "rtcAnsiValueBstr");
    ORDINAL_NAME(597, "rtcAppActivate");
    ORDINAL_NAME(627, "rtcAppleScript");
    ORDINAL_NAME(601, "rtcArray");
    ORDINAL_NAME(585, "rtcAtn");
    ORDINAL_NAME(534, "rtcBeep");
    ORDINAL_NAME(537, "rtcBstrFromAnsi");
    ORDINAL_NAME(694, "rtcBstrFromByte");
    ORDINAL_NAME(697, "rtcBstrFromChar");
    ORDINAL_NAME(651, "rtcBstrFromError");
    ORDINAL_NAME(650, "rtcBstrFromFormatVar");
    ORDINAL_NAME(693, "rtcByteValueBstr");
    ORDINAL_NAME(643, "rtcCVErrFromVar");
    ORDINAL_NAME(530, "rtcChangeDir");
    ORDINAL_NAME(533, "rtcChangeDrive");
    ORDINAL_NAME(696, "rtcCharValueBstr");
    ORDINAL_NAME(665, "rtcChoose");
    ORDINAL_NAME(669, "rtcCommandBstr");
    ORDINAL_NAME(670, "rtcCommandVar");
    ORDINAL_NAME(649, "rtcCompareBstr");
    ORDINAL_NAME(583, "rtcCos");
    ORDINAL_NAME(625, "rtcCreateObject");
    ORDINAL_NAME(647, "rtcCurrentDir");
    ORDINAL_NAME(646, "rtcCurrentDirBstr");
    ORDINAL_NAME(673, "rtcDDB");
    ORDINAL_NAME(661, "rtcDateAdd");
    ORDINAL_NAME(662, "rtcDateDiff");
    ORDINAL_NAME(641, "rtcDateFromVar");
    ORDINAL_NAME(663, "rtcDatePart");
    ORDINAL_NAME(691, "rtcDeleteSetting");
    ORDINAL_NAME(645, "rtcDir");
    ORDINAL_NAME(598, "rtcDoEvents");
    ORDINAL_NAME(571, "rtcEndOfFile");
    ORDINAL_NAME(667, "rtcEnvironBstr");
    ORDINAL_NAME(666, "rtcEnvironVar");
    ORDINAL_NAME(685, "rtcErrObj");
    ORDINAL_NAME(586, "rtcExp");
    ORDINAL_NAME(678, "rtcFV");
    ORDINAL_NAME(555, "rtcFileAttributes");
    ORDINAL_NAME(576, "rtcFileCopy");
    ORDINAL_NAME(577, "rtcFileDateTime");
    ORDINAL_NAME(578, "rtcFileLen");
    ORDINAL_NAME(570, "rtcFileLength");
    ORDINAL_NAME(569, "rtcFileLocation");
    ORDINAL_NAME(554, "rtcFileReset");
    ORDINAL_NAME(568, "rtcFileSeek");
    ORDINAL_NAME(565, "rtcFileWidth");
    ORDINAL_NAME(655, "rtcFixVar");
    ORDINAL_NAME(648, "rtcFreeFile");
    ORDINAL_NAME(692, "rtcGetAllSettings");
    ORDINAL_NAME(700, "rtcGetCurrentCalendar");
    ORDINAL_NAME(609, "rtcGetDateBstr");
    ORDINAL_NAME(540, "rtcGetDateValue");
    ORDINAL_NAME(610, "rtcGetDateVar");
    ORDINAL_NAME(542, "rtcGetDayOfMonth");
    ORDINAL_NAME(552, "rtcGetDayOfWeek");
    ORDINAL_NAME(605, "rtcGetErl");
    ORDINAL_NAME(579, "rtcGetFileAttr");
    ORDINAL_NAME(624, "rtcGetHostLCID");
    ORDINAL_NAME(543, "rtcGetHourOfDay");
    ORDINAL_NAME(544, "rtcGetMinuteOfHour");
    ORDINAL_NAME(545, "rtcGetMonthOfYear");
    ORDINAL_NAME(626, "rtcGetObject");
    ORDINAL_NAME(546, "rtcGetPresentDate");
    ORDINAL_NAME(547, "rtcGetSecondOfMinute");
    ORDINAL_NAME(689, "rtcGetSetting");
    ORDINAL_NAME(611, "rtcGetTimeBstr");
    ORDINAL_NAME(541, "rtcGetTimeValue");
    ORDINAL_NAME(612, "rtcGetTimeVar");
    ORDINAL_NAME(535, "rtcGetTimer");
    ORDINAL_NAME(553, "rtcGetYear");
    ORDINAL_NAME(572, "rtcHexBstrFromVar");
    ORDINAL_NAME(573, "rtcHexVarFromVar");
    ORDINAL_NAME(615, "rtcIMEStatus");
    ORDINAL_NAME(674, "rtcIPMT");
    ORDINAL_NAME(682, "rtcIRR");
    ORDINAL_NAME(681, "rtcImmediateIf");
    ORDINAL_NAME(630, "rtcInStr");
    ORDINAL_NAME(633, "rtcInStrChar");
    ORDINAL_NAME(596, "rtcInputBox");
    ORDINAL_NAME(620, "rtcInputCharCount");
    ORDINAL_NAME(621, "rtcInputCharCountVar");
    ORDINAL_NAME(566, "rtcInputCount");
    ORDINAL_NAME(567, "rtcInputCountVar");
    ORDINAL_NAME(657, "rtcIntVar");
    ORDINAL_NAME(556, "rtcIsArray");
    ORDINAL_NAME(557, "rtcIsDate");
    ORDINAL_NAME(558, "rtcIsEmpty");
    ORDINAL_NAME(559, "rtcIsError");
    ORDINAL_NAME(592, "rtcIsMissing");
    ORDINAL_NAME(560, "rtcIsNull");
    ORDINAL_NAME(561, "rtcIsNumeric");
    ORDINAL_NAME(562, "rtcIsObject");
    ORDINAL_NAME(529, "rtcKillFiles");
    ORDINAL_NAME(512, "rtcLeftBstr");
    ORDINAL_NAME(616, "rtcLeftCharBstr");
    ORDINAL_NAME(617, "rtcLeftCharVar");
    ORDINAL_NAME(521, "rtcLeftTrimBstr");
    ORDINAL_NAME(522, "rtcLeftTrimVar");
    ORDINAL_NAME(513, "rtcLeftVar");
    ORDINAL_NAME(653, "rtcLenCharVar");
    ORDINAL_NAME(654, "rtcLenVar");
    ORDINAL_NAME(587, "rtcLog");
    ORDINAL_NAME(517, "rtcLowerCaseBstr");
    ORDINAL_NAME(518, "rtcLowerCaseVar");
    ORDINAL_NAME(683, "rtcMIRR");
    ORDINAL_NAME(590, "rtcMacId");
    ORDINAL_NAME(531, "rtcMakeDir");
    ORDINAL_NAME(628, "rtcMidBstr");
    ORDINAL_NAME(631, "rtcMidCharBstr");
    ORDINAL_NAME(632, "rtcMidCharVar");
    ORDINAL_NAME(629, "rtcMidVar");
    ORDINAL_NAME(595, "rtcMsgBox");
    ORDINAL_NAME(684, "rtcNPV");
    ORDINAL_NAME(679, "rtcNPer");
    ORDINAL_NAME(574, "rtcOctBstrFromVar");
    ORDINAL_NAME(575, "rtcOctVarFromVar");
    ORDINAL_NAME(676, "rtcPMT");
    ORDINAL_NAME(675, "rtcPPMT");
    ORDINAL_NAME(677, "rtcPV");
    ORDINAL_NAME(538, "rtcPackDate");
    ORDINAL_NAME(539, "rtcPackTime");
    ORDINAL_NAME(664, "rtcPartition");
    ORDINAL_NAME(589, "rtcQBColor");
    ORDINAL_NAME(581, "rtcR8ValFromBstr");
    ORDINAL_NAME(593, "rtcRandomNext");
    ORDINAL_NAME(594, "rtcRandomize");
    ORDINAL_NAME(680, "rtcRate");
    ORDINAL_NAME(532, "rtcRemoveDir");
    ORDINAL_NAME(588, "rtcRgb");
    ORDINAL_NAME(514, "rtcRightBstr");
    ORDINAL_NAME(618, "rtcRightCharBstr");
    ORDINAL_NAME(619, "rtcRightCharVar");
    ORDINAL_NAME(523, "rtcRightTrimBstr");
    ORDINAL_NAME(524, "rtcRightTrimVar");
    ORDINAL_NAME(515, "rtcRightVar");
    ORDINAL_NAME(671, "rtcSLN");
    ORDINAL_NAME(672, "rtcSYD");
    ORDINAL_NAME(690, "rtcSaveSetting");
    ORDINAL_NAME(599, "rtcSendKeys");
    ORDINAL_NAME(699, "rtcSetCurrentCalendar");
    ORDINAL_NAME(549, "rtcSetDateBstr");
    ORDINAL_NAME(548, "rtcSetDateVar");
    ORDINAL_NAME(580, "rtcSetFileAttr");
    ORDINAL_NAME(551, "rtcSetTimeBstr");
    ORDINAL_NAME(550, "rtcSetTimeVar");
    ORDINAL_NAME(658, "rtcSgnVar");
    ORDINAL_NAME(600, "rtcShell");
    ORDINAL_NAME(582, "rtcSin");
    ORDINAL_NAME(525, "rtcSpaceBstr");
    ORDINAL_NAME(526, "rtcSpaceVar");
    ORDINAL_NAME(614, "rtcSqr");
    ORDINAL_NAME(622, "rtcStrConvVar");
    ORDINAL_NAME(536, "rtcStrFromVar");
    ORDINAL_NAME(606, "rtcStringBstr");
    ORDINAL_NAME(607, "rtcStringVar");
    ORDINAL_NAME(668, "rtcSwitch");
    ORDINAL_NAME(584, "rtcTan");
    ORDINAL_NAME(519, "rtcTrimBstr");
    ORDINAL_NAME(520, "rtcTrimVar");
    ORDINAL_NAME(591, "rtcTypeName");
    ORDINAL_NAME(527, "rtcUpperCaseBstr");
    ORDINAL_NAME(528, "rtcUpperCaseVar");
    ORDINAL_NAME(608, "rtcVarBstrFromAnsi");
    ORDINAL_NAME(695, "rtcVarBstrFromByte");
    ORDINAL_NAME(698, "rtcVarBstrFromChar");
    ORDINAL_NAME(687, "rtcVarDateFromVar");
    ORDINAL_NAME(652, "rtcVarFromError");
    ORDINAL_NAME(660, "rtcVarFromFormatVar");
    ORDINAL_NAME(642, "rtcVarFromVar");
    ORDINAL_NAME(613, "rtcVarStrFromVar");
    ORDINAL_NAME(563, "rtcVarType");
}

} // namespace REDasm
