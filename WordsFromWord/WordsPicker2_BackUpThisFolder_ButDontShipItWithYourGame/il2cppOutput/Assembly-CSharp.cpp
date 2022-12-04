#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<TargetWord>
struct List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TargetWord[]
struct TargetWordU5BU5D_tFF593DDF69EF491988696DEC64C5FCDD5DCDBD31;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BannerAd
struct BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF;
// UnityEngine.Advertisements.BannerLoadOptions
struct BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E;
// UnityEngine.Advertisements.BannerOptions
struct BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Advertisements.IUnityAdsInitializationListener
struct IUnityAdsInitializationListener_tC95CB4FACFE0C6E5EC03DD31F5FAEB6721917DB7;
// UnityEngine.Advertisements.IUnityAdsLoadListener
struct IUnityAdsLoadListener_t2C0A51917CF7C9EF639C0C0A1904C1E7930F0039;
// UnityEngine.Advertisements.IUnityAdsShowListener
struct IUnityAdsShowListener_t872C1787E46C780BC8D06D0DEA3BDCE5CB52AEFD;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Letter
struct Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71;
// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF;
// MainWord
struct MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// ShowAdsScript
struct ShowAdsScript_tF28E300E8FCAD76C7B4C2BF0305869FCBCB529A2;
// SkipAdScript
struct SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616;
// SoundButton
struct SoundButton_t89D99898FDCFA80B6F365E76AAE14594905F58EC;
// Sounds
struct Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TargetWord
struct TargetWord_t8CD796E5195AD3989A87B2A10B4FCEBCE331DE22;
// TargetWordsContainer
struct TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback
struct ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029;
// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback
struct LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B;
// UnityEngine.Advertisements.BannerOptions/BannerCallback
struct BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// MainMenu/<StartGame>d__9
struct U3CStartGameU3Ed__9_t5943B27B547E1A8BAC6E9C4440021A69644F4E81;
// MainWord/<CloseWatchAd>d__26
struct U3CCloseWatchAdU3Ed__26_t354965111CF47935B1DB62EB09810726AC667DB2;
// MainWord/<EndLevel>d__25
struct U3CEndLevelU3Ed__25_t58EB982CBFE59898728A9D19E228AD0C226E5A7B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// SkipAdScript/<ShowAdsCor>d__10
struct U3CShowAdsCorU3Ed__10_t506EA7A7E251FDD0348024942C49F6BB2BE382F6;

IL2CPP_EXTERN_C RuntimeClass* Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCloseWatchAdU3Ed__26_t354965111CF47935B1DB62EB09810726AC667DB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEndLevelU3Ed__25_t58EB982CBFE59898728A9D19E228AD0C226E5A7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowAdsCorU3Ed__10_t506EA7A7E251FDD0348024942C49F6BB2BE382F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartGameU3Ed__9_t5943B27B547E1A8BAC6E9C4440021A69644F4E81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6;
IL2CPP_EXTERN_C String_t* _stringLiteral0A13B07D967D648B4AF6E6AEF1DCA59E7DA0F635;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral1F19D5EAF35981A74AAB5B751D085BA004F8B857;
IL2CPP_EXTERN_C String_t* _stringLiteral30ADF4D36B6CCB9EFC4F08C7D12FCB95829AD91A;
IL2CPP_EXTERN_C String_t* _stringLiteral342295F94D9C6893BA06433A2E6B1014710F1E8B;
IL2CPP_EXTERN_C String_t* _stringLiteral37DF2CCBF0C23E6CBBBED76FE900F12FCCDE36EC;
IL2CPP_EXTERN_C String_t* _stringLiteral39D29036CA1A8D3D77F721192C0E6B6151BDF3A8;
IL2CPP_EXTERN_C String_t* _stringLiteral5A928BF8198595142496A3CD14FE5DCAE3CB1C50;
IL2CPP_EXTERN_C String_t* _stringLiteral6AC83B16A16E7A6F6CCAD22E41FB93F9AE1BC676;
IL2CPP_EXTERN_C String_t* _stringLiteral6E651D43A8CF7AA546CAE5214C19769E2368D899;
IL2CPP_EXTERN_C String_t* _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF;
IL2CPP_EXTERN_C String_t* _stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83;
IL2CPP_EXTERN_C String_t* _stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1;
IL2CPP_EXTERN_C String_t* _stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6;
IL2CPP_EXTERN_C String_t* _stringLiteral82D6C704462D19E6C8BA27FB1323CC689B77832D;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteralB44BC31634C5B75101CE782DB41BE7F3AB64C430;
IL2CPP_EXTERN_C String_t* _stringLiteralBDEE58F38D1467E8A58FC6BC32DD271D2B8164A7;
IL2CPP_EXTERN_C String_t* _stringLiteralC15C2D6947DEDE9FABF17FE521B3593922B4FEA0;
IL2CPP_EXTERN_C String_t* _stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D;
IL2CPP_EXTERN_C String_t* _stringLiteralD8FC9459B04D1762B9CD72161B97A02D1D24F952;
IL2CPP_EXTERN_C String_t* _stringLiteralDB9697C2FB8495AF7FCFEF8B970DBB5FF59D461C;
IL2CPP_EXTERN_C String_t* _stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642;
IL2CPP_EXTERN_C String_t* _stringLiteralF43910194CBF6385B436A2DC8128DCB970F78C15;
IL2CPP_EXTERN_C String_t* _stringLiteralF98106D655FE006622287D39C1E55DD9F0B0D259;
IL2CPP_EXTERN_C String_t* _stringLiteralFA3AF0A4C3265C884943923F0BE18C57C4FC07C5;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAd_OnBannerClicked_mE31AE5937E629844EAC72A11947D2777FBD6E949_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAd_OnBannerError_m177E4E5E3EDDA86B1A7B3A703DBA38F3B63CFD2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAd_OnBannerHidden_m362DFEB16EAF2F5747EEBD9C9247DF9FB4EB9442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAd_OnBannerLoaded_m4A0AAAD3D2BAEF7597D379A98966D79517568CAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BannerAd_OnBannerShown_mB24331E99A68566C8561DD329CA3261E415E532B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLetter_t83D09CA3E6072C9F786F1B3E362B451913633B71_mBA50BDA57728E58B6E41FB3CBE364FCC7DDD1219_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m10E74475523F1CC79186F9CFB7C590AAFB35C52E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m55E0F26E7EB2ABA0D11CA450FD0035154E7B3BC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCloseWatchAdU3Ed__26_System_Collections_IEnumerator_Reset_m1BF406E848C22346A56D679B0470D4F7C4244D79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEndLevelU3Ed__25_System_Collections_IEnumerator_Reset_mF9C94E0CD80AC7875BC58DD4FABD7E16B7C3E462_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowAdsCorU3Ed__10_System_Collections_IEnumerator_Reset_mEE0F041103BEC30669BEB4052CFBB08459DC7053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartGameU3Ed__9_System_Collections_IEnumerator_Reset_m2A6C9843BB5B0CE1763395BAE16ABFA3360AE66C_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TargetWord>
struct List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TargetWordU5BU5D_tFF593DDF69EF491988696DEC64C5FCDD5DCDBD31* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TargetWordU5BU5D_tFF593DDF69EF491988696DEC64C5FCDD5DCDBD31* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.Advertisements.BannerLoadOptions
struct BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E  : public RuntimeObject
{
	// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback UnityEngine.Advertisements.BannerLoadOptions::<loadCallback>k__BackingField
	LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* ___U3CloadCallbackU3Ek__BackingField_0;
	// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback UnityEngine.Advertisements.BannerLoadOptions::<errorCallback>k__BackingField
	ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* ___U3CerrorCallbackU3Ek__BackingField_1;
};

// UnityEngine.Advertisements.BannerOptions
struct BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A  : public RuntimeObject
{
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<showCallback>k__BackingField
	BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___U3CshowCallbackU3Ek__BackingField_0;
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<hideCallback>k__BackingField
	BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___U3ChideCallbackU3Ek__BackingField_1;
	// UnityEngine.Advertisements.BannerOptions/BannerCallback UnityEngine.Advertisements.BannerOptions::<clickCallback>k__BackingField
	BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___U3CclickCallbackU3Ek__BackingField_2;
};

// GameData
struct GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6  : public RuntimeObject
{
};

struct GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields
{
	// System.Int32 GameData::hintsAmount
	int32_t ___hintsAmount_0;
	// System.Int32 GameData::scene
	int32_t ___scene_1;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// MainMenu/<StartGame>d__9
struct U3CStartGameU3Ed__9_t5943B27B547E1A8BAC6E9C4440021A69644F4E81  : public RuntimeObject
{
	// System.Int32 MainMenu/<StartGame>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MainMenu/<StartGame>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MainMenu MainMenu/<StartGame>d__9::<>4__this
	MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* ___U3CU3E4__this_2;
};

// MainWord/<CloseWatchAd>d__26
struct U3CCloseWatchAdU3Ed__26_t354965111CF47935B1DB62EB09810726AC667DB2  : public RuntimeObject
{
	// System.Int32 MainWord/<CloseWatchAd>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MainWord/<CloseWatchAd>d__26::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MainWord MainWord/<CloseWatchAd>d__26::<>4__this
	MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* ___U3CU3E4__this_2;
};

// MainWord/<EndLevel>d__25
struct U3CEndLevelU3Ed__25_t58EB982CBFE59898728A9D19E228AD0C226E5A7B  : public RuntimeObject
{
	// System.Int32 MainWord/<EndLevel>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MainWord/<EndLevel>d__25::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MainWord MainWord/<EndLevel>d__25::<>4__this
	MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* ___U3CU3E4__this_2;
	// System.Int32 MainWord/<EndLevel>d__25::scene
	int32_t ___scene_3;
};

// SkipAdScript/<ShowAdsCor>d__10
struct U3CShowAdsCorU3Ed__10_t506EA7A7E251FDD0348024942C49F6BB2BE382F6  : public RuntimeObject
{
	// System.Int32 SkipAdScript/<ShowAdsCor>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SkipAdScript/<ShowAdsCor>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SkipAdScript SkipAdScript/<ShowAdsCor>d__10::<>4__this
	SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* ___U3CU3E4__this_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback
struct ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.BannerLoadOptions/LoadCallback
struct LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B  : public MulticastDelegate_t
{
};

// UnityEngine.Advertisements.BannerOptions/BannerCallback
struct BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BannerAd
struct BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Advertisements.BannerPosition BannerAd::_bannerPosition
	int32_t ____bannerPosition_4;
	// System.String BannerAd::_androidAdUnitId
	String_t* ____androidAdUnitId_5;
};

// Letter
struct Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Letter::buttonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___buttonText_4;
	// UnityEngine.UI.Button Letter::letterButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___letterButton_5;
	// MainWord Letter::mainWord
	MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* ___mainWord_6;
	// System.String Letter::letterValue
	String_t* ___letterValue_7;
	// UnityEngine.Animator Letter::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_8;
};

// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator MainMenu::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
	// Sounds MainMenu::sounds
	Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* ___sounds_5;
	// System.String MainMenu::_gameId
	String_t* ____gameId_6;
	// UnityEngine.RectTransform MainMenu::title
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___title_7;
};

// MainWord
struct MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Sounds MainWord::sounds
	Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* ___sounds_5;
	// TargetWordsContainer MainWord::targetWordsContainer
	TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* ___targetWordsContainer_6;
	// UnityEngine.UI.Text MainWord::currentWordText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___currentWordText_7;
	// UnityEngine.UI.Button[] MainWord::letters
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___letters_8;
	// System.String MainWord::mainWord
	String_t* ___mainWord_9;
	// UnityEngine.RectTransform MainWord::panel
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___panel_10;
	// UnityEngine.Animator MainWord::uiAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___uiAnim_11;
	// UnityEngine.GameObject MainWord::winPopUp
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___winPopUp_12;
	// UnityEngine.GameObject MainWord::watchAdPopUp
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___watchAdPopUp_13;
	// UnityEngine.Animator MainWord::watchAdAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___watchAdAnimator_14;
	// UnityEngine.RectTransform MainWord::watchadPanel
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___watchadPanel_15;
	// System.String MainWord::currentWord
	String_t* ___currentWord_16;
	// System.Random MainWord::random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___random_17;
	// System.Int32 MainWord::currentSceneIndex
	int32_t ___currentSceneIndex_18;
};

struct MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E_StaticFields
{
	// MainWord MainWord::instance
	MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* ___instance_4;
};

// ShowAdsScript
struct ShowAdsScript_tF28E300E8FCAD76C7B4C2BF0305869FCBCB529A2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ShowAdsScript::_androidAdUnitId
	String_t* ____androidAdUnitId_4;
	// UnityEngine.UI.Text ShowAdsScript::noadsText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___noadsText_5;
	// UnityEngine.Animator ShowAdsScript::noadsAnim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___noadsAnim_6;
	// TargetWordsContainer ShowAdsScript::_targetWordsContainer
	TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* ____targetWordsContainer_7;
};

// SkipAdScript
struct SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String SkipAdScript::_adUnitId
	String_t* ____adUnitId_4;
};

// SoundButton
struct SoundButton_t89D99898FDCFA80B6F365E76AAE14594905F58EC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite SoundButton::onSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___onSprite_4;
	// UnityEngine.Sprite SoundButton::offSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___offSprite_5;
	// Sounds SoundButton::sounds
	Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* ___sounds_6;
	// UnityEngine.UI.Image SoundButton::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_7;
};

// Sounds
struct Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Sounds::click
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___click_5;
	// UnityEngine.AudioSource Sounds::error
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___error_6;
	// UnityEngine.AudioSource Sounds::correct
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___correct_7;
	// UnityEngine.AudioSource Sounds::shuffle
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___shuffle_8;
};

struct Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_StaticFields
{
	// Sounds Sounds::instance
	Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* ___instance_4;
};

// TargetWord
struct TargetWord_t8CD796E5195AD3989A87B2A10B4FCEBCE331DE22  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String TargetWord::targetWord
	String_t* ___targetWord_4;
	// UnityEngine.UI.Text TargetWord::targetWordText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___targetWordText_5;
	// UnityEngine.Animator TargetWord::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_6;
};

// TargetWordsContainer
struct TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MainWord TargetWordsContainer::mainWord
	MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* ___mainWord_5;
	// System.Collections.Generic.List`1<TargetWord> TargetWordsContainer::targetWords
	List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* ___targetWords_6;
	// UnityEngine.UI.Text TargetWordsContainer::progressText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___progressText_7;
	// UnityEngine.UI.Text TargetWordsContainer::hintsAmountText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___hintsAmountText_8;
	// UnityEngine.UI.Text TargetWordsContainer::wordsSolvedText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___wordsSolvedText_9;
	// System.Collections.Generic.List`1<System.String> TargetWordsContainer::words
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___words_10;
	// System.Int32 TargetWordsContainer::startWordsCount
	int32_t ___startWordsCount_11;
	// System.Int32 TargetWordsContainer::wordsCount
	int32_t ___wordsCount_12;
};

struct TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84_StaticFields
{
	// TargetWordsContainer TargetWordsContainer::instance
	TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* ___instance_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF  : public RuntimeArray
{
	ALIGN_FIELD (8) Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* m_Items[1];

	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;

// System.Void BannerAd::LoadBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_LoadBanner_m994818C93A6FE135219CB321F9B0856DA46265CD (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement/Banner::SetPosition(UnityEngine.Advertisements.BannerPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_SetPosition_m69680FE1B23F22DC2212F1C37B0890C6833645E8 (int32_t ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerLoadOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerLoadOptions__ctor_m866C2FA6DEA20A35F7FBE25536D96BD563D1CFE7 (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerLoadOptions/LoadCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCallback__ctor_m82C20B862B58A068187B9E090BA53E0F12C2E3F1 (LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerLoadOptions::set_loadCallback(UnityEngine.Advertisements.BannerLoadOptions/LoadCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerLoadOptions_set_loadCallback_m219703CC2E16DAFA77481374046BD19298B27BF0_inline (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ErrorCallback__ctor_m6C3D9F85150EFC4700A624E3946C061BA25849A9 (ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerLoadOptions::set_errorCallback(UnityEngine.Advertisements.BannerLoadOptions/ErrorCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerLoadOptions_set_errorCallback_m73A7C9AEA0F79A4963538CE38D3AAE5AB69AF6E2_inline (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Load(System.String,UnityEngine.Advertisements.BannerLoadOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Load_mC55582B1B0C8277EDCCBCCF14627435D8354DB0E (String_t* ___placementId0, BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void BannerAd::ShowBannerAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_ShowBannerAd_mBE85F2609E7B9DECAF7599243D964990794045D0 (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerOptions__ctor_m5D0194C2660940617F25552DB827D41D10878A60 (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerOptions/BannerCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerCallback__ctor_m54F3DA4DFF8463122BC222D9B3F49A6A2EF26A46 (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerOptions::set_clickCallback(UnityEngine.Advertisements.BannerOptions/BannerCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerOptions_set_clickCallback_mE9C4A4716FC257B551A4334985D494453509B0A9_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerOptions::set_hideCallback(UnityEngine.Advertisements.BannerOptions/BannerCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerOptions_set_hideCallback_m9877994E49979C868E5331BA9708D52DE2F18424_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.BannerOptions::set_showCallback(UnityEngine.Advertisements.BannerOptions/BannerCallback)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerOptions_set_showCallback_m14C693B20F26D364ECB7B9B90F3C455D0B361357_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Show(System.String,UnityEngine.Advertisements.BannerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Show_m89B35F72104AF5747936DD1FC58E5C13704075D3 (String_t* ___placementId0, BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* ___options1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement/Banner::Hide(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Banner_Hide_mE40A4CE81B2F66D874A0995CEB0BF595D9BE09DC (bool ___destroy0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Int32 GameData::SetHintsAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameData_SetHintsAmount_m1C075465E6410EF81423EC61A79F0D9EF8E68436 (const RuntimeMethod* method) ;
// System.Int32 GameData::SetScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameData_SetScene_mE10F1889945BD3399B82F31BF52736B60D47CD47 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void MainWord::UpdateCurrentWord(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_UpdateCurrentWord_m5656AE52DC623A175068994A8D4CAC7FFBDCD38E (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, String_t* ___letter0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void MainMenu::InitializeAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_InitializeAds_mBD629A3C437214D7F8FAFA59CD6B27D6F1447A0C (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MainMenu::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainMenu_StartGame_m7A8EC89BE15A970A0611FB396EF1A037D3B6380A (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Void MainMenu/<StartGame>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameU3Ed__9__ctor_m3FBD18F770B83FD969598F9B2D78CBE7FC8CFFDB (U3CStartGameU3Ed__9_t5943B27B547E1A8BAC6E9C4440021A69644F4E81* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean,UnityEngine.Advertisements.IUnityAdsInitializationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_mA83C553537C87F2C2B12FCBAE4B9EB75EC9DA343 (String_t* ___gameId0, bool ___testMode1, RuntimeObject* ___initializationListener2, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void MainWord::SetLettersPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_SetLettersPositions_m9C9A2F91F9EBF250B34F7B705C110F2CE28823D0 (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Letter>()
inline Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* Component_GetComponent_TisLetter_t83D09CA3E6072C9F786F1B3E362B451913633B71_mBA50BDA57728E58B6E41FB3CBE364FCC7DDD1219 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Void Letter::SetLetter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter_SetLetter_m873DAECD197199A4D3A6F5469802B33D28E7E6C2 (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, String_t* ___letter0, const RuntimeMethod* method) ;
// System.Void Letter::SetShuffledLetter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter_SetShuffledLetter_mC527AE2B8C8899D48041EAED4CA17FA585AD8A90 (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, String_t* ___letter0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void TargetWordsContainer::CheckTargetWord(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetWordsContainer_CheckTargetWord_m52BC432387951ECB422FC8AD0DEB2EA38598A3D6 (TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* __this, String_t* ___currentWord0, const RuntimeMethod* method) ;
// System.Void MainWord::ShuffleLettersPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_ShuffleLettersPositions_mE681A5C12B4406B797B744496326F6EC3D1F63E9 (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) ;
// System.Void Letter::WrongWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter_WrongWord_mEF57CF2DEC4F186909B1957305BE4F8533E895B4 (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MainWord::EndLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainWord_EndLevel_m6CA634FC5D53E0061F70F95EC70C54888526B9C9 (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, int32_t ___scene0, const RuntimeMethod* method) ;
// System.Void MainWord/<EndLevel>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndLevelU3Ed__25__ctor_m2BCE84F55FC7D820647D06B5025670C715BAD769 (U3CEndLevelU3Ed__25_t58EB982CBFE59898728A9D19E228AD0C226E5A7B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void MainWord/<CloseWatchAd>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseWatchAdU3Ed__26__ctor_mFC3EE35C39350FDD1D0B98C96F84F49B86E17756 (U3CCloseWatchAdU3Ed__26_t354965111CF47935B1DB62EB09810726AC667DB2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MainWord::CloseWatchAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainWord_CloseWatchAd_mC791285C0B4E9C74340D6E87071813C3BB689B6B (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void ShowAdsScript::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdsScript_LoadAd_mD9ADE9AE3043EB8FA8E04441C00885F438685086 (ShowAdsScript_tF28E300E8FCAD76C7B4C2BF0305869FCBCB529A2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Load(System.String,UnityEngine.Advertisements.IUnityAdsLoadListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5 (String_t* ___placementId0, RuntimeObject* ___loadListener1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String,UnityEngine.Advertisements.IUnityAdsShowListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B (String_t* ___placementId0, RuntimeObject* ___showListener1, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Enum::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void MainWord::DeactivateWatchAdPopUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_DeactivateWatchAdPopUp_m51BDFBBE367FD60F1B8483C2D90B961B53B8BFB3 (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) ;
// System.Void TargetWordsContainer::UpdateHintsAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetWordsContainer_UpdateHintsAmount_m569EB621E52E2AE97F3177CB68481EC29CE011A2 (TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void SkipAdScript::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipAdScript_LoadAd_mC359A7C8BCC424034F4B12CF2FD0B97F255BF354 (SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SkipAdScript::ShowAdsCor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkipAdScript_ShowAdsCor_m4344AA257237D03BC9285CCBB1046D3257A777FC (SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* __this, const RuntimeMethod* method) ;
// System.Void SkipAdScript/<ShowAdsCor>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowAdsCorU3Ed__10__ctor_m0DDF05DE10739FB41E513AEEEF1F7D6705274130 (U3CShowAdsCorU3Ed__10_t506EA7A7E251FDD0348024942C49F6BB2BE382F6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void SkipAdScript::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipAdScript_ShowAd_mAC27F080EC2FD658E077CB85996DA68D2339CF6F (SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.AudioListener::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioListener_get_volume_m8EAB8FBA127A53E689C1D8C1857781070381974A (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721 (float ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TargetWord>::get_Count()
inline int32_t List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_inline (List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<TargetWord>::get_Item(System.Int32)
inline TargetWord_t8CD796E5195AD3989A87B2A10B4FCEBCE331DE22* List_1_get_Item_m55E0F26E7EB2ABA0D11CA450FD0035154E7B3BC9 (List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TargetWord_t8CD796E5195AD3989A87B2A10B4FCEBCE331DE22* (*) (List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
inline bool List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void MainWord::WrongWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_WrongWord_m831B3891EE3C4A6B095E7AA652984806440FCC4A (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void TargetWord::RevealWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetWord_RevealWord_m4D7B467F35DCFBC16CFFE38DFF9500D109ED976A (TargetWord_t8CD796E5195AD3989A87B2A10B4FCEBCE331DE22* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TargetWord>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m10E74475523F1CC79186F9CFB7C590AAFB35C52E (List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
inline bool List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Boolean TargetWordsContainer::AllWordsSolved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TargetWordsContainer_AllWordsSolved_mC387077161F1711A586DC1E6936A5F72670FE01B (TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* __this, const RuntimeMethod* method) ;
// System.Void MainWord::LevelComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_LevelComplete_m546748DBB122B99341E1953FF178E7171DDEE7DA (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void MainWord::ActivateWatchAdPopUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_ActivateWatchAdPopUp_m305E4AB8FC00973897CA5A32BDFCB3C2D8BA7C32 (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BannerAd::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_Start_m408AAD1F0D3F7EC107EE37E12A402FA378327A24 (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	{
		// LoadBanner();
		BannerAd_LoadBanner_m994818C93A6FE135219CB321F9B0856DA46265CD(__this, NULL);
		// Advertisement.Banner.SetPosition(_bannerPosition);
		int32_t L_0 = __this->____bannerPosition_4;
		Banner_SetPosition_m69680FE1B23F22DC2212F1C37B0890C6833645E8(L_0, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::LoadBanner()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_LoadBanner_m994818C93A6FE135219CB321F9B0856DA46265CD (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAd_OnBannerError_m177E4E5E3EDDA86B1A7B3A703DBA38F3B63CFD2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAd_OnBannerLoaded_m4A0AAAD3D2BAEF7597D379A98966D79517568CAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* V_0 = NULL;
	{
		// BannerLoadOptions options = new BannerLoadOptions
		// {
		//     loadCallback = OnBannerLoaded,
		//     errorCallback = OnBannerError
		// };
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_0 = (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E*)il2cpp_codegen_object_new(BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BannerLoadOptions__ctor_m866C2FA6DEA20A35F7FBE25536D96BD563D1CFE7(L_0, NULL);
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_1 = L_0;
		LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* L_2 = (LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B*)il2cpp_codegen_object_new(LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		LoadCallback__ctor_m82C20B862B58A068187B9E090BA53E0F12C2E3F1(L_2, __this, (intptr_t)((void*)BannerAd_OnBannerLoaded_m4A0AAAD3D2BAEF7597D379A98966D79517568CAF_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		BannerLoadOptions_set_loadCallback_m219703CC2E16DAFA77481374046BD19298B27BF0_inline(L_1, L_2, NULL);
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_3 = L_1;
		ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* L_4 = (ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029*)il2cpp_codegen_object_new(ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ErrorCallback__ctor_m6C3D9F85150EFC4700A624E3946C061BA25849A9(L_4, __this, (intptr_t)((void*)BannerAd_OnBannerError_m177E4E5E3EDDA86B1A7B3A703DBA38F3B63CFD2B_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		BannerLoadOptions_set_errorCallback_m73A7C9AEA0F79A4963538CE38D3AAE5AB69AF6E2_inline(L_3, L_4, NULL);
		V_0 = L_3;
		// Advertisement.Banner.Load(_androidAdUnitId, options);
		String_t* L_5 = __this->____androidAdUnitId_5;
		BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* L_6 = V_0;
		Banner_Load_mC55582B1B0C8277EDCCBCCF14627435D8354DB0E(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::OnBannerLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnBannerLoaded_m4A0AAAD3D2BAEF7597D379A98966D79517568CAF (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral342295F94D9C6893BA06433A2E6B1014710F1E8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Banner loaded");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral342295F94D9C6893BA06433A2E6B1014710F1E8B, NULL);
		// ShowBannerAd();
		BannerAd_ShowBannerAd_mBE85F2609E7B9DECAF7599243D964990794045D0(__this, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::OnBannerError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnBannerError_m177E4E5E3EDDA86B1A7B3A703DBA38F3B63CFD2B (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF43910194CBF6385B436A2DC8128DCB970F78C15);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Banner Error: {message}");
		String_t* L_0 = ___message0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF43910194CBF6385B436A2DC8128DCB970F78C15, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::ShowBannerAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_ShowBannerAd_mBE85F2609E7B9DECAF7599243D964990794045D0 (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAd_OnBannerClicked_mE31AE5937E629844EAC72A11947D2777FBD6E949_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAd_OnBannerHidden_m362DFEB16EAF2F5747EEBD9C9247DF9FB4EB9442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerAd_OnBannerShown_mB24331E99A68566C8561DD329CA3261E415E532B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* V_0 = NULL;
	{
		// BannerOptions options = new BannerOptions
		// {
		//     clickCallback = OnBannerClicked,
		//     hideCallback = OnBannerHidden,
		//     showCallback = OnBannerShown
		// };
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_0 = (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A*)il2cpp_codegen_object_new(BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BannerOptions__ctor_m5D0194C2660940617F25552DB827D41D10878A60(L_0, NULL);
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_1 = L_0;
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_2 = (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88*)il2cpp_codegen_object_new(BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BannerCallback__ctor_m54F3DA4DFF8463122BC222D9B3F49A6A2EF26A46(L_2, __this, (intptr_t)((void*)BannerAd_OnBannerClicked_mE31AE5937E629844EAC72A11947D2777FBD6E949_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		BannerOptions_set_clickCallback_mE9C4A4716FC257B551A4334985D494453509B0A9_inline(L_1, L_2, NULL);
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_3 = L_1;
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_4 = (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88*)il2cpp_codegen_object_new(BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		BannerCallback__ctor_m54F3DA4DFF8463122BC222D9B3F49A6A2EF26A46(L_4, __this, (intptr_t)((void*)BannerAd_OnBannerHidden_m362DFEB16EAF2F5747EEBD9C9247DF9FB4EB9442_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		BannerOptions_set_hideCallback_m9877994E49979C868E5331BA9708D52DE2F18424_inline(L_3, L_4, NULL);
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_5 = L_3;
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_6 = (BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88*)il2cpp_codegen_object_new(BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		BannerCallback__ctor_m54F3DA4DFF8463122BC222D9B3F49A6A2EF26A46(L_6, __this, (intptr_t)((void*)BannerAd_OnBannerShown_mB24331E99A68566C8561DD329CA3261E415E532B_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		BannerOptions_set_showCallback_m14C693B20F26D364ECB7B9B90F3C455D0B361357_inline(L_5, L_6, NULL);
		V_0 = L_5;
		// Advertisement.Banner.Show(_androidAdUnitId, options);
		String_t* L_7 = __this->____androidAdUnitId_5;
		BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* L_8 = V_0;
		Banner_Show_m89B35F72104AF5747936DD1FC58E5C13704075D3(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::HideBannerAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_HideBannerAd_mAC820CF2DDF344FDC4EB52D9BA4A20BC238C4F8F (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	{
		// Advertisement.Banner.Hide();
		Banner_Hide_mE40A4CE81B2F66D874A0995CEB0BF595D9BE09DC((bool)0, NULL);
		// }
		return;
	}
}
// System.Void BannerAd::OnBannerClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnBannerClicked_mE31AE5937E629844EAC72A11947D2777FBD6E949 (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	{
		// void OnBannerClicked() { }
		return;
	}
}
// System.Void BannerAd::OnBannerShown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnBannerShown_mB24331E99A68566C8561DD329CA3261E415E532B (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	{
		// void OnBannerShown() { }
		return;
	}
}
// System.Void BannerAd::OnBannerHidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnBannerHidden_m362DFEB16EAF2F5747EEBD9C9247DF9FB4EB9442 (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	{
		// void OnBannerHidden() { }
		return;
	}
}
// System.Void BannerAd::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd_OnDestroy_m71420C9E4AA5CE0525596BF193E0E36132D07081 (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BannerAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BannerAd__ctor_m155A92495C9C9CEA0A5B7C867F53916021EA3C09 (BannerAd_t6BF1333DAC204201785704368C1B3FE7F3DCBEDF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82D6C704462D19E6C8BA27FB1323CC689B77832D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] BannerPosition _bannerPosition = BannerPosition.BOTTOM_CENTER;
		__this->____bannerPosition_4 = 4;
		// [SerializeField] string _androidAdUnitId = "Banner_Android";
		__this->____androidAdUnitId_5 = _stringLiteral82D6C704462D19E6C8BA27FB1323CC689B77832D;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____androidAdUnitId_5), (void*)_stringLiteral82D6C704462D19E6C8BA27FB1323CC689B77832D);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 GameData::SetScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameData_SetScene_mE10F1889945BD3399B82F31BF52736B60D47CD47 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E651D43A8CF7AA546CAE5214C19769E2368D899);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayerPrefs.GetInt("scene") == 0)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral6E651D43A8CF7AA546CAE5214C19769E2368D899, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_000e:
	{
		// if(PlayerPrefs.GetInt("scene") > 20)
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral6E651D43A8CF7AA546CAE5214C19769E2368D899, NULL);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)20))))
		{
			goto IL_001e;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_001e:
	{
		// return PlayerPrefs.GetInt("scene");
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteral6E651D43A8CF7AA546CAE5214C19769E2368D899, NULL);
		return L_2;
	}
}
// System.Int32 GameData::SetHintsAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameData_SetHintsAmount_m1C075465E6410EF81423EC61A79F0D9EF8E68436 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB9697C2FB8495AF7FCFEF8B970DBB5FF59D461C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("hintsAmount") == 0)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralDB9697C2FB8495AF7FCFEF8B970DBB5FF59D461C, NULL);
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return 5;
		return 5;
	}

IL_000e:
	{
		// return PlayerPrefs.GetInt("hintsAmount");
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m4D859DBEABAD3FB406C94485A0B2638A0C7F2987(_stringLiteralDB9697C2FB8495AF7FCFEF8B970DBB5FF59D461C, NULL);
		return L_1;
	}
}
// System.Void GameData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData__cctor_m7A059AF6ED70ECA3DB4FD3065C83B24FE9E83D45 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int hintsAmount = SetHintsAmount();
		int32_t L_0;
		L_0 = GameData_SetHintsAmount_m1C075465E6410EF81423EC61A79F0D9EF8E68436(NULL);
		((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___hintsAmount_0 = L_0;
		// public static int scene = SetScene();
		int32_t L_1;
		L_1 = GameData_SetScene_mE10F1889945BD3399B82F31BF52736B60D47CD47(NULL);
		((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___scene_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Letter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter_Start_mFDB59B2FFB074B01472E041591F34A4301D2F7AB (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mainWord = MainWord.instance;
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_0 = ((MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E_StaticFields*)il2cpp_codegen_static_fields_for(MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E_il2cpp_TypeInfo_var))->___instance_4;
		__this->___mainWord_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainWord_6), (void*)L_0);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_8), (void*)L_1);
		// letterButton = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2;
		L_2 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		__this->___letterButton_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___letterButton_5), (void*)L_2);
		// }
		return;
	}
}
// System.Void Letter::PressButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter_PressButton_mCE0D44AF6545CF010B15E93B31E9B21340CB35E7 (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, const RuntimeMethod* method) 
{
	{
		// mainWord.sounds.click.Play();
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_0 = __this->___mainWord_6;
		NullCheck(L_0);
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_1 = L_0->___sounds_5;
		NullCheck(L_1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = L_1->___click_5;
		NullCheck(L_2);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// mainWord.UpdateCurrentWord(letterValue);
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_3 = __this->___mainWord_6;
		String_t* L_4 = __this->___letterValue_7;
		NullCheck(L_3);
		MainWord_UpdateCurrentWord_m5656AE52DC623A175068994A8D4CAC7FFBDCD38E(L_3, L_4, NULL);
		// letterButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___letterButton_5;
		NullCheck(L_5);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Letter::SetLetter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter_SetLetter_m873DAECD197199A4D3A6F5469802B33D28E7E6C2 (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, String_t* ___letter0, const RuntimeMethod* method) 
{
	{
		// letterValue = letter;
		String_t* L_0 = ___letter0;
		__this->___letterValue_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___letterValue_7), (void*)L_0);
		// buttonText.text = letterValue;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___buttonText_4;
		String_t* L_2 = __this->___letterValue_7;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void Letter::SetShuffledLetter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter_SetShuffledLetter_mC527AE2B8C8899D48041EAED4CA17FA585AD8A90 (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, String_t* ___letter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A13B07D967D648B4AF6E6AEF1DCA59E7DA0F635);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetTrigger("shuffle");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_8;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral0A13B07D967D648B4AF6E6AEF1DCA59E7DA0F635, NULL);
		// letterValue = letter;
		String_t* L_1 = ___letter0;
		__this->___letterValue_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___letterValue_7), (void*)L_1);
		// buttonText.text = letterValue;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___buttonText_4;
		String_t* L_3 = __this->___letterValue_7;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void Letter::WrongWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter_WrongWord_mEF57CF2DEC4F186909B1957305BE4F8533E895B4 (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30ADF4D36B6CCB9EFC4F08C7D12FCB95829AD91A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetTrigger("wrong");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_8;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral30ADF4D36B6CCB9EFC4F08C7D12FCB95829AD91A, NULL);
		// }
		return;
	}
}
// System.Void Letter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Letter__ctor_m9DC949C5BBDFCD68699909CCBF9C038DAA22CA50 (Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Awake_mC7FAEAE58DDCA71A0261D025508EE9D5C54932A1 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// InitializeAds();
		MainMenu_InitializeAds_mBD629A3C437214D7F8FAFA59CD6B27D6F1447A0C(__this, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Start_m1729BDE6D096D9F4C92DBE72B392BA89E9A9ECAD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sounds = Sounds.instance;
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_0 = ((Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_StaticFields*)il2cpp_codegen_static_fields_for(Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_il2cpp_TypeInfo_var))->___instance_4;
		__this->___sounds_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sounds_5), (void*)L_0);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void MainMenu::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Play_m83A060624413533808E63A4420ECEFA5A9FB07E6 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DF2CCBF0C23E6CBBBED76FE900F12FCCDE36EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sounds.click.Play();
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_0 = __this->___sounds_5;
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___click_5;
		NullCheck(L_1);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// animator.SetTrigger("fade");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_4;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, _stringLiteral37DF2CCBF0C23E6CBBBED76FE900F12FCCDE36EC, NULL);
		// StartCoroutine(StartGame());
		RuntimeObject* L_3;
		L_3 = MainMenu_StartGame_m7A8EC89BE15A970A0611FB396EF1A037D3B6380A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Exit_m6F5450D0B3DAA7105D4D000F93C37AA6328F9B78 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// sounds.click.Play();
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_0 = __this->___sounds_5;
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___click_5;
		NullCheck(L_1);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void MainMenu::RateButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_RateButton_mDA66F8061E0FC07DA9B176B846CD009123B96531 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F19D5EAF35981A74AAB5B751D085BA004F8B857);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sounds.click.Play();
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_0 = __this->___sounds_5;
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___click_5;
		NullCheck(L_1);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// Application.OpenURL("https://play.google.com/store/apps/details?id=com.CockStar.WordsPicker");
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(_stringLiteral1F19D5EAF35981A74AAB5B751D085BA004F8B857, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MainMenu::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainMenu_StartGame_m7A8EC89BE15A970A0611FB396EF1A037D3B6380A (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartGameU3Ed__9_t5943B27B547E1A8BAC6E9C4440021A69644F4E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartGameU3Ed__9_t5943B27B547E1A8BAC6E9C4440021A69644F4E81* L_0 = (U3CStartGameU3Ed__9_t5943B27B547E1A8BAC6E9C4440021A69644F4E81*)il2cpp_codegen_object_new(U3CStartGameU3Ed__9_t5943B27B547E1A8BAC6E9C4440021A69644F4E81_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartGameU3Ed__9__ctor_m3FBD18F770B83FD969598F9B2D78CBE7FC8CFFDB(L_0, 0, NULL);
		U3CStartGameU3Ed__9_t5943B27B547E1A8BAC6E9C4440021A69644F4E81* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MainMenu::InitializeAds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_InitializeAds_mBD629A3C437214D7F8FAFA59CD6B27D6F1447A0C (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Initialize(_gameId, true, this);
		String_t* L_0 = __this->____gameId_6;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Initialize_mA83C553537C87F2C2B12FCBAE4B9EB75EC9DA343(L_0, (bool)1, __this, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::OnInitializationComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_OnInitializationComplete_mCDBD24CAAE8A2498CA76244FB827339F4D010F5E (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AC83B16A16E7A6F6CCAD22E41FB93F9AE1BC676);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Unity Ads initialization complete.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6AC83B16A16E7A6F6CCAD22E41FB93F9AE1BC676, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::OnInitializationFailed(UnityEngine.Advertisements.UnityAdsInitializationError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_OnInitializationFailed_mED817D411A15B58F19F8FC110036B81F8A69AA49 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF98106D655FE006622287D39C1E55DD9F0B0D259);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Unity Ads Initialization Failed: {error.ToString()} - {message}");
		Il2CppFakeBox<int32_t> L_0(UnityAdsInitializationError_t7710E0659C1D799AD891D1B8B173C43A8F61A2E6_il2cpp_TypeInfo_var, (&___error0));
		String_t* L_1;
		L_1 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_0), NULL);
		String_t* L_2 = ___message1;
		String_t* L_3;
		L_3 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralF98106D655FE006622287D39C1E55DD9F0B0D259, L_1, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62, L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m8209CEC1D907C87A96D777961F4D0536E6E948DD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainMenu/<StartGame>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameU3Ed__9__ctor_m3FBD18F770B83FD969598F9B2D78CBE7FC8CFFDB (U3CStartGameU3Ed__9_t5943B27B547E1A8BAC6E9C4440021A69644F4E81* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MainMenu/<StartGame>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameU3Ed__9_System_IDisposable_Dispose_m6FCA6BBFD5123A167E424A4E857896168F283EAE (U3CStartGameU3Ed__9_t5943B27B547E1A8BAC6E9C4440021A69644F4E81* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MainMenu/<StartGame>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartGameU3Ed__9_MoveNext_m532E1A67583D0A21EB6C6CB1929E8115302BB7D3 (U3CStartGameU3Ed__9_t5943B27B547E1A8BAC6E9C4440021A69644F4E81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_003b;
	}

IL_0020:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0034:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_003b:
	{
		// while(title.anchoredPosition.y < 1490)
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_5 = V_1;
		NullCheck(L_5);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = L_5->___title_7;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_6, NULL);
		float L_8 = L_7.___y_1;
		if ((((float)L_8) < ((float)(1490.0f))))
		{
			goto IL_0020;
		}
	}
	{
		// if(title.anchoredPosition.y >= 1490)
		MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* L_9 = V_1;
		NullCheck(L_9);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9->___title_7;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_10, NULL);
		float L_12 = L_11.___y_1;
		if ((!(((float)L_12) >= ((float)(1490.0f)))))
		{
			goto IL_0073;
		}
	}
	{
		// SceneManager.LoadScene(GameData.SetScene());
		il2cpp_codegen_runtime_class_init_inline(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = GameData_SetScene_mE10F1889945BD3399B82F31BF52736B60D47CD47(NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_13, NULL);
	}

IL_0073:
	{
		// }
		return (bool)0;
	}
}
// System.Object MainMenu/<StartGame>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartGameU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFC033B12583E4B567FDCCDE4ADA9F14FBCCFE3CE (U3CStartGameU3Ed__9_t5943B27B547E1A8BAC6E9C4440021A69644F4E81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MainMenu/<StartGame>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartGameU3Ed__9_System_Collections_IEnumerator_Reset_m2A6C9843BB5B0CE1763395BAE16ABFA3360AE66C (U3CStartGameU3Ed__9_t5943B27B547E1A8BAC6E9C4440021A69644F4E81* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartGameU3Ed__9_System_Collections_IEnumerator_Reset_m2A6C9843BB5B0CE1763395BAE16ABFA3360AE66C_RuntimeMethod_var)));
	}
}
// System.Object MainMenu/<StartGame>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartGameU3Ed__9_System_Collections_IEnumerator_get_Current_mD5CC3C8F76DE715C6C5CE336766192D4445E2221 (U3CStartGameU3Ed__9_t5943B27B547E1A8BAC6E9C4440021A69644F4E81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainWord::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_Awake_m5489444F7D8F42A28CE8BC5A6698A98F770C18D1 (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (instance == null) instance = this;
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_0 = ((MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E_StaticFields*)il2cpp_codegen_static_fields_for(MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (instance == null) instance = this;
		((MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E_StaticFields*)il2cpp_codegen_static_fields_for(MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E_StaticFields*)il2cpp_codegen_static_fields_for(MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
	}

IL_0013:
	{
		// currentSceneIndex = SceneManager.GetActiveScene().buildIndex;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		__this->___currentSceneIndex_18 = L_3;
		// }
		return;
	}
}
// System.Void MainWord::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_Start_mF13EF8E5BCE1FCDDD49CCB7E8D9CA313503C9106 (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E651D43A8CF7AA546CAE5214C19769E2368D899);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GameData.scene = SceneManager.GetActiveScene().buildIndex + 1;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		il2cpp_codegen_runtime_class_init_inline(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___scene_1 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// PlayerPrefs.SetInt("scene", GameData.scene);
		int32_t L_2 = ((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___scene_1;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteral6E651D43A8CF7AA546CAE5214C19769E2368D899, L_2, NULL);
		// sounds = Sounds.instance;
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_3 = ((Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_StaticFields*)il2cpp_codegen_static_fields_for(Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_il2cpp_TypeInfo_var))->___instance_4;
		__this->___sounds_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sounds_5), (void*)L_3);
		// SetLettersPositions();
		MainWord_SetLettersPositions_m9C9A2F91F9EBF250B34F7B705C110F2CE28823D0(__this, NULL);
		// currentWord = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___currentWord_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWord_16), (void*)L_4);
		// currentWordText.text = currentWord;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___currentWordText_7;
		String_t* L_6 = __this->___currentWord_16;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
		// }
		return;
	}
}
// System.Void MainWord::UpdateCurrentWord(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_UpdateCurrentWord_m5656AE52DC623A175068994A8D4CAC7FFBDCD38E (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, String_t* ___letter0, const RuntimeMethod* method) 
{
	{
		// currentWord += letter;
		String_t* L_0 = __this->___currentWord_16;
		String_t* L_1 = ___letter0;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_1, NULL);
		__this->___currentWord_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWord_16), (void*)L_2);
		// currentWordText.text = currentWord;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___currentWordText_7;
		String_t* L_4 = __this->___currentWord_16;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// }
		return;
	}
}
// System.Void MainWord::SetLettersPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_SetLettersPositions_m9C9A2F91F9EBF250B34F7B705C110F2CE28823D0 (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLetter_t83D09CA3E6072C9F786F1B3E362B451913633B71_mBA50BDA57728E58B6E41FB3CBE364FCC7DDD1219_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		// for (int i = 0; i < letters.Length; i++)
		V_0 = 0;
		goto IL_002e;
	}

IL_0004:
	{
		// letters[i].GetComponent<Letter>().SetLetter(mainWord[i].ToString());
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_0 = __this->___letters_8;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* L_4;
		L_4 = Component_GetComponent_TisLetter_t83D09CA3E6072C9F786F1B3E362B451913633B71_mBA50BDA57728E58B6E41FB3CBE364FCC7DDD1219(L_3, Component_GetComponent_TisLetter_t83D09CA3E6072C9F786F1B3E362B451913633B71_mBA50BDA57728E58B6E41FB3CBE364FCC7DDD1219_RuntimeMethod_var);
		String_t* L_5 = __this->___mainWord_9;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_1 = L_7;
		String_t* L_8;
		L_8 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_1), NULL);
		NullCheck(L_4);
		Letter_SetLetter_m873DAECD197199A4D3A6F5469802B33D28E7E6C2(L_4, L_8, NULL);
		// for (int i = 0; i < letters.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002e:
	{
		// for (int i = 0; i < letters.Length; i++)
		int32_t L_10 = V_0;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_11 = __this->___letters_8;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MainWord::ShuffleLettersPositions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_ShuffleLettersPositions_mE681A5C12B4406B797B744496326F6EC3D1F63E9 (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLetter_t83D09CA3E6072C9F786F1B3E362B451913633B71_mBA50BDA57728E58B6E41FB3CBE364FCC7DDD1219_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar V_1 = 0x0;
	{
		// for (int i = 0; i < letters.Length; i++)
		V_0 = 0;
		goto IL_002e;
	}

IL_0004:
	{
		// letters[i].GetComponent<Letter>().SetShuffledLetter(mainWord[i].ToString());
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_0 = __this->___letters_8;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* L_4;
		L_4 = Component_GetComponent_TisLetter_t83D09CA3E6072C9F786F1B3E362B451913633B71_mBA50BDA57728E58B6E41FB3CBE364FCC7DDD1219(L_3, Component_GetComponent_TisLetter_t83D09CA3E6072C9F786F1B3E362B451913633B71_mBA50BDA57728E58B6E41FB3CBE364FCC7DDD1219_RuntimeMethod_var);
		String_t* L_5 = __this->___mainWord_9;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_1 = L_7;
		String_t* L_8;
		L_8 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_1), NULL);
		NullCheck(L_4);
		Letter_SetShuffledLetter_mC527AE2B8C8899D48041EAED4CA17FA585AD8A90(L_4, L_8, NULL);
		// for (int i = 0; i < letters.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002e:
	{
		// for (int i = 0; i < letters.Length; i++)
		int32_t L_10 = V_0;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_11 = __this->___letters_8;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MainWord::OkButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_OkButton_m19E4D6A7694CBC766B97FD144339A14DF146306E (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (currentWord.Length > 0) targetWordsContainer.CheckTargetWord(currentWord);
		String_t* L_0 = __this->___currentWord_16;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		// if (currentWord.Length > 0) targetWordsContainer.CheckTargetWord(currentWord);
		TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* L_2 = __this->___targetWordsContainer_6;
		String_t* L_3 = __this->___currentWord_16;
		NullCheck(L_2);
		TargetWordsContainer_CheckTargetWord_m52BC432387951ECB422FC8AD0DEB2EA38598A3D6(L_2, L_3, NULL);
	}

IL_001f:
	{
		// currentWord = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___currentWord_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWord_16), (void*)L_4);
		// currentWordText.text = currentWord;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___currentWordText_7;
		String_t* L_6 = __this->___currentWord_16;
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
		// for (int i = 0; i < letters.Length; i++)
		V_0 = 0;
		goto IL_0051;
	}

IL_003f:
	{
		// letters[i].interactable = true;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_7 = __this->___letters_8;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_10, (bool)1, NULL);
		// for (int i = 0; i < letters.Length; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0051:
	{
		// for (int i = 0; i < letters.Length; i++)
		int32_t L_12 = V_0;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_13 = __this->___letters_8;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MainWord::CancelButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_CancelButton_mFB74ED564D9B2F5FC6E43C70A89E93A39AE95F6B (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// sounds.click.Play();
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_0 = __this->___sounds_5;
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___click_5;
		NullCheck(L_1);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// currentWord = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___currentWord_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWord_16), (void*)L_2);
		// currentWordText.text = currentWord;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___currentWordText_7;
		String_t* L_4 = __this->___currentWord_16;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// for (int i = 0; i < letters.Length; i++)
		V_0 = 0;
		goto IL_0042;
	}

IL_0030:
	{
		// letters[i].interactable = true;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_5 = __this->___letters_8;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_8, (bool)1, NULL);
		// for (int i = 0; i < letters.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0042:
	{
		// for (int i = 0; i < letters.Length; i++)
		int32_t L_10 = V_0;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_11 = __this->___letters_8;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0030;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MainWord::ShuffleLetters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_ShuffleLetters_mEBED5380FDF3CA9D918F2E0445B56B63FBB3A474 (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_2 = NULL;
	{
		// sounds.shuffle.Play();
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_0 = __this->___sounds_5;
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___shuffle_8;
		NullCheck(L_1);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// for (int i = letters.Length - 1; i >= 1; i--)
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_2 = __this->___letters_8;
		NullCheck(L_2);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
		goto IL_0052;
	}

IL_001d:
	{
		// int j = random.Next(i + 1);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_3 = __this->___random_17;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)));
		V_1 = L_5;
		// var temp = letters[j];
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_6 = __this->___letters_8;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// letters[j] = letters[i];
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_10 = __this->___letters_8;
		int32_t L_11 = V_1;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_12 = __this->___letters_8;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_15);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)L_15);
		// letters[i] = temp;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_16 = __this->___letters_8;
		int32_t L_17 = V_0;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = V_2;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)L_18);
		// for (int i = letters.Length - 1; i >= 1; i--)
		int32_t L_19 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
	}

IL_0052:
	{
		// for (int i = letters.Length - 1; i >= 1; i--)
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) >= ((int32_t)1)))
		{
			goto IL_001d;
		}
	}
	{
		// ShuffleLettersPositions();
		MainWord_ShuffleLettersPositions_mE681A5C12B4406B797B744496326F6EC3D1F63E9(__this, NULL);
		// }
		return;
	}
}
// System.Void MainWord::WrongWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_WrongWord_m831B3891EE3C4A6B095E7AA652984806440FCC4A (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLetter_t83D09CA3E6072C9F786F1B3E362B451913633B71_mBA50BDA57728E58B6E41FB3CBE364FCC7DDD1219_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// sounds.error.Play();
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_0 = __this->___sounds_5;
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___error_6;
		NullCheck(L_1);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// for (int i = 0; i < letters.Length; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_0014:
	{
		// letters[i].GetComponent<Letter>().WrongWord();
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_2 = __this->___letters_8;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Letter_t83D09CA3E6072C9F786F1B3E362B451913633B71* L_6;
		L_6 = Component_GetComponent_TisLetter_t83D09CA3E6072C9F786F1B3E362B451913633B71_mBA50BDA57728E58B6E41FB3CBE364FCC7DDD1219(L_5, Component_GetComponent_TisLetter_t83D09CA3E6072C9F786F1B3E362B451913633B71_mBA50BDA57728E58B6E41FB3CBE364FCC7DDD1219_RuntimeMethod_var);
		NullCheck(L_6);
		Letter_WrongWord_mEF57CF2DEC4F186909B1957305BE4F8533E895B4(L_6, NULL);
		// for (int i = 0; i < letters.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_002a:
	{
		// for (int i = 0; i < letters.Length; i++)
		int32_t L_8 = V_0;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_9 = __this->___letters_8;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		// }
		return;
	}
}
// System.Void MainWord::HomeButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_HomeButton_mF1279554E2549A3AE9B1D4DA71EA32B831E98D81 (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB44BC31634C5B75101CE782DB41BE7F3AB64C430);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sounds.click.Play();
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_0 = __this->___sounds_5;
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___click_5;
		NullCheck(L_1);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// uiAnim.SetTrigger("endlevel");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___uiAnim_11;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, _stringLiteralB44BC31634C5B75101CE782DB41BE7F3AB64C430, NULL);
		// StartCoroutine(EndLevel(0));
		RuntimeObject* L_3;
		L_3 = MainWord_EndLevel_m6CA634FC5D53E0061F70F95EC70C54888526B9C9(__this, 0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MainWord::EndLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainWord_EndLevel_m6CA634FC5D53E0061F70F95EC70C54888526B9C9 (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, int32_t ___scene0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEndLevelU3Ed__25_t58EB982CBFE59898728A9D19E228AD0C226E5A7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEndLevelU3Ed__25_t58EB982CBFE59898728A9D19E228AD0C226E5A7B* L_0 = (U3CEndLevelU3Ed__25_t58EB982CBFE59898728A9D19E228AD0C226E5A7B*)il2cpp_codegen_object_new(U3CEndLevelU3Ed__25_t58EB982CBFE59898728A9D19E228AD0C226E5A7B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEndLevelU3Ed__25__ctor_m2BCE84F55FC7D820647D06B5025670C715BAD769(L_0, 0, NULL);
		U3CEndLevelU3Ed__25_t58EB982CBFE59898728A9D19E228AD0C226E5A7B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CEndLevelU3Ed__25_t58EB982CBFE59898728A9D19E228AD0C226E5A7B* L_2 = L_1;
		int32_t L_3 = ___scene0;
		NullCheck(L_2);
		L_2->___scene_3 = L_3;
		return L_2;
	}
}
// System.Collections.IEnumerator MainWord::CloseWatchAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MainWord_CloseWatchAd_mC791285C0B4E9C74340D6E87071813C3BB689B6B (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCloseWatchAdU3Ed__26_t354965111CF47935B1DB62EB09810726AC667DB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCloseWatchAdU3Ed__26_t354965111CF47935B1DB62EB09810726AC667DB2* L_0 = (U3CCloseWatchAdU3Ed__26_t354965111CF47935B1DB62EB09810726AC667DB2*)il2cpp_codegen_object_new(U3CCloseWatchAdU3Ed__26_t354965111CF47935B1DB62EB09810726AC667DB2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCloseWatchAdU3Ed__26__ctor_mFC3EE35C39350FDD1D0B98C96F84F49B86E17756(L_0, 0, NULL);
		U3CCloseWatchAdU3Ed__26_t354965111CF47935B1DB62EB09810726AC667DB2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void MainWord::LevelComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_LevelComplete_m546748DBB122B99341E1953FF178E7171DDEE7DA (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) 
{
	{
		// winPopUp.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___winPopUp_12;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainWord::NextLevelButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_NextLevelButton_mB0BE9F5BFD513826D4996D35C943E771D37C8544 (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB44BC31634C5B75101CE782DB41BE7F3AB64C430);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sounds.click.Play();
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_0 = __this->___sounds_5;
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___click_5;
		NullCheck(L_1);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// winPopUp.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___winPopUp_12;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// uiAnim.SetTrigger("endlevel");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___uiAnim_11;
		NullCheck(L_3);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_3, _stringLiteralB44BC31634C5B75101CE782DB41BE7F3AB64C430, NULL);
		// StartCoroutine(EndLevel(GameData.SetScene()));
		il2cpp_codegen_runtime_class_init_inline(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = GameData_SetScene_mE10F1889945BD3399B82F31BF52736B60D47CD47(NULL);
		RuntimeObject* L_5;
		L_5 = MainWord_EndLevel_m6CA634FC5D53E0061F70F95EC70C54888526B9C9(__this, L_4, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void MainWord::ActivateWatchAdPopUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_ActivateWatchAdPopUp_m305E4AB8FC00973897CA5A32BDFCB3C2D8BA7C32 (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) 
{
	{
		// sounds.click.Play();
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_0 = __this->___sounds_5;
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___click_5;
		NullCheck(L_1);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// watchAdPopUp.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___watchAdPopUp_13;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainWord::DeactivateWatchAdPopUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord_DeactivateWatchAdPopUp_m51BDFBBE367FD60F1B8483C2D90B961B53B8BFB3 (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sounds.click.Play();
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_0 = __this->___sounds_5;
		NullCheck(L_0);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___click_5;
		NullCheck(L_1);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// watchAdAnimator.SetTrigger("close");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___watchAdAnimator_14;
		NullCheck(L_2);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_2, _stringLiteral093507DEB05FB14DD8659BC619825EC3274FD8C6, NULL);
		// StartCoroutine(CloseWatchAd());
		RuntimeObject* L_3;
		L_3 = MainWord_CloseWatchAd_mC791285C0B4E9C74340D6E87071813C3BB689B6B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void MainWord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainWord__ctor_m7AAB77DF405DED686BBA606EC8621EB4446CFC5A (MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// System.Random random = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		__this->___random_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___random_17), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainWord/<EndLevel>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndLevelU3Ed__25__ctor_m2BCE84F55FC7D820647D06B5025670C715BAD769 (U3CEndLevelU3Ed__25_t58EB982CBFE59898728A9D19E228AD0C226E5A7B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MainWord/<EndLevel>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndLevelU3Ed__25_System_IDisposable_Dispose_m04A29CE614166C8DF1A95BD527BBD8E243135897 (U3CEndLevelU3Ed__25_t58EB982CBFE59898728A9D19E228AD0C226E5A7B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MainWord/<EndLevel>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEndLevelU3Ed__25_MoveNext_m6BA6A2041558EB8CDE10997FE1BF348443E7D237 (U3CEndLevelU3Ed__25_t58EB982CBFE59898728A9D19E228AD0C226E5A7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_003b;
	}

IL_0020:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0034:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_003b:
	{
		// while (panel.anchoredPosition.x < 1490)
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_5 = V_1;
		NullCheck(L_5);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = L_5->___panel_10;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_6, NULL);
		float L_8 = L_7.___x_0;
		if ((((float)L_8) < ((float)(1490.0f))))
		{
			goto IL_0020;
		}
	}
	{
		// if (panel.anchoredPosition.x >= 1490)
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_9 = V_1;
		NullCheck(L_9);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9->___panel_10;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_10, NULL);
		float L_12 = L_11.___x_0;
		if ((!(((float)L_12) >= ((float)(1490.0f)))))
		{
			goto IL_0074;
		}
	}
	{
		// SceneManager.LoadScene(scene);
		int32_t L_13 = __this->___scene_3;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_13, NULL);
	}

IL_0074:
	{
		// }
		return (bool)0;
	}
}
// System.Object MainWord/<EndLevel>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEndLevelU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDE404B80726F7CEE2A161F9197132F9EAE5A7B4B (U3CEndLevelU3Ed__25_t58EB982CBFE59898728A9D19E228AD0C226E5A7B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MainWord/<EndLevel>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndLevelU3Ed__25_System_Collections_IEnumerator_Reset_mF9C94E0CD80AC7875BC58DD4FABD7E16B7C3E462 (U3CEndLevelU3Ed__25_t58EB982CBFE59898728A9D19E228AD0C226E5A7B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEndLevelU3Ed__25_System_Collections_IEnumerator_Reset_mF9C94E0CD80AC7875BC58DD4FABD7E16B7C3E462_RuntimeMethod_var)));
	}
}
// System.Object MainWord/<EndLevel>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEndLevelU3Ed__25_System_Collections_IEnumerator_get_Current_m35B7304FB75C130E6D485D703633F64F1FED5F32 (U3CEndLevelU3Ed__25_t58EB982CBFE59898728A9D19E228AD0C226E5A7B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MainWord/<CloseWatchAd>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseWatchAdU3Ed__26__ctor_mFC3EE35C39350FDD1D0B98C96F84F49B86E17756 (U3CCloseWatchAdU3Ed__26_t354965111CF47935B1DB62EB09810726AC667DB2* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MainWord/<CloseWatchAd>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseWatchAdU3Ed__26_System_IDisposable_Dispose_mA320D1C5BD0B0A3B9BCAE4CB71097380158BA4A9 (U3CCloseWatchAdU3Ed__26_t354965111CF47935B1DB62EB09810726AC667DB2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MainWord/<CloseWatchAd>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCloseWatchAdU3Ed__26_MoveNext_m7DD170A77BCB5E56F270EE8F9B6D69E547E1C2D8 (U3CCloseWatchAdU3Ed__26_t354965111CF47935B1DB62EB09810726AC667DB2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_003b;
	}

IL_0020:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_4 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0034:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_003b:
	{
		// while (watchadPanel.anchoredPosition.x < 1490)
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_5 = V_1;
		NullCheck(L_5);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = L_5->___watchadPanel_15;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_6, NULL);
		float L_8 = L_7.___x_0;
		if ((((float)L_8) < ((float)(1490.0f))))
		{
			goto IL_0020;
		}
	}
	{
		// if (watchadPanel.anchoredPosition.x >= 1490)
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_9 = V_1;
		NullCheck(L_9);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9->___watchadPanel_15;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_10, NULL);
		float L_12 = L_11.___x_0;
		if ((!(((float)L_12) >= ((float)(1490.0f)))))
		{
			goto IL_0075;
		}
	}
	{
		// watchAdPopUp.SetActive(false);
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_13 = V_1;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___watchAdPopUp_13;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
	}

IL_0075:
	{
		// }
		return (bool)0;
	}
}
// System.Object MainWord/<CloseWatchAd>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCloseWatchAdU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFA5B92FB3126CF982DB0EF3A375DAEB16D69362D (U3CCloseWatchAdU3Ed__26_t354965111CF47935B1DB62EB09810726AC667DB2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MainWord/<CloseWatchAd>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCloseWatchAdU3Ed__26_System_Collections_IEnumerator_Reset_m1BF406E848C22346A56D679B0470D4F7C4244D79 (U3CCloseWatchAdU3Ed__26_t354965111CF47935B1DB62EB09810726AC667DB2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCloseWatchAdU3Ed__26_System_Collections_IEnumerator_Reset_m1BF406E848C22346A56D679B0470D4F7C4244D79_RuntimeMethod_var)));
	}
}
// System.Object MainWord/<CloseWatchAd>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCloseWatchAdU3Ed__26_System_Collections_IEnumerator_get_Current_m83C158889FE1D473024B35C205D045EE09E3CEF2 (U3CCloseWatchAdU3Ed__26_t354965111CF47935B1DB62EB09810726AC667DB2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ShowAdsScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdsScript_Awake_mE3D8E21F0328627EC7C0F20D625B095A598E2FD2 (ShowAdsScript_tF28E300E8FCAD76C7B4C2BF0305869FCBCB529A2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ShowAdsScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdsScript_Start_mCE6324EEE83CC5ACD57536CB9D65ED5E6F95F1C3 (ShowAdsScript_tF28E300E8FCAD76C7B4C2BF0305869FCBCB529A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _targetWordsContainer = TargetWordsContainer.instance;
		TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* L_0 = ((TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84_StaticFields*)il2cpp_codegen_static_fields_for(TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84_il2cpp_TypeInfo_var))->___instance_4;
		__this->____targetWordsContainer_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____targetWordsContainer_7), (void*)L_0);
		// noadsAnim = noadsText.GetComponent<Animator>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___noadsText_5;
		NullCheck(L_1);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2;
		L_2 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_1, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___noadsAnim_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___noadsAnim_6), (void*)L_2);
		// LoadAd();
		ShowAdsScript_LoadAd_mD9ADE9AE3043EB8FA8E04441C00885F438685086(__this, NULL);
		// }
		return;
	}
}
// System.Void ShowAdsScript::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdsScript_LoadAd_mD9ADE9AE3043EB8FA8E04441C00885F438685086 (ShowAdsScript_tF28E300E8FCAD76C7B4C2BF0305869FCBCB529A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Loading Ad: " + _androidAdUnitId);
		String_t* L_0 = __this->____androidAdUnitId_4;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// Advertisement.Load(_androidAdUnitId, this);
		String_t* L_2 = __this->____androidAdUnitId_4;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5(L_2, __this, NULL);
		// }
		return;
	}
}
// System.Void ShowAdsScript::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdsScript_OnUnityAdsAdLoaded_m0DA3DF4284B8BD6804BB3AF3E16A9FB46CB4A68E (ShowAdsScript_tF28E300E8FCAD76C7B4C2BF0305869FCBCB529A2* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Ad Loaded: " + adUnitId);
		String_t* L_0 = ___adUnitId0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7D898DC9143DA9A784AECC2F9DAC49A7B95E89E6, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void ShowAdsScript::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdsScript_ShowAd_m3E9B1F73FC0960D53F9C4F5256AD5A79FDB76973 (ShowAdsScript_tF28E300E8FCAD76C7B4C2BF0305869FCBCB529A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Advertisement.Show(_androidAdUnitId, this);
		String_t* L_0 = __this->____androidAdUnitId_4;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B(L_0, __this, NULL);
		// }
		return;
	}
}
// System.Void ShowAdsScript::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdsScript_OnUnityAdsShowComplete_m61C5B6A21DFD3CF77A197F9252C15B2AD714D7A6 (ShowAdsScript_tF28E300E8FCAD76C7B4C2BF0305869FCBCB529A2* __this, String_t* ___adUnitId0, int32_t ___showCompletionState1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA3AF0A4C3265C884943923F0BE18C57C4FC07C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (adUnitId.Equals(_androidAdUnitId) && showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED))
		String_t* L_0 = ___adUnitId0;
		String_t* L_1 = __this->____androidAdUnitId_4;
		NullCheck(L_0);
		bool L_2;
		L_2 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_3 = 1;
		RuntimeObject* L_4 = Box(UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var, &L_3);
		Il2CppFakeBox<int32_t> L_5(UnityAdsShowCompletionState_tB7187D3727AD4D55E87A88A273F377A62CBC91FD_il2cpp_TypeInfo_var, (&___showCompletionState1));
		bool L_6;
		L_6 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), L_4, NULL);
		if (!L_6)
		{
			goto IL_0060;
		}
	}
	{
		// Debug.Log("Unity Ads Rewarded Ad Completed");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralFA3AF0A4C3265C884943923F0BE18C57C4FC07C5, NULL);
		// _targetWordsContainer.mainWord.DeactivateWatchAdPopUp();
		TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* L_7 = __this->____targetWordsContainer_7;
		NullCheck(L_7);
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_8 = L_7->___mainWord_5;
		NullCheck(L_8);
		MainWord_DeactivateWatchAdPopUp_m51BDFBBE367FD60F1B8483C2D90B961B53B8BFB3(L_8, NULL);
		// GameData.hintsAmount += 1;
		il2cpp_codegen_runtime_class_init_inline(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		int32_t L_9 = ((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___hintsAmount_0;
		((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___hintsAmount_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// _targetWordsContainer.UpdateHintsAmount();
		TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* L_10 = __this->____targetWordsContainer_7;
		NullCheck(L_10);
		TargetWordsContainer_UpdateHintsAmount_m569EB621E52E2AE97F3177CB68481EC29CE011A2(L_10, NULL);
		// Advertisement.Load(_androidAdUnitId, this);
		String_t* L_11 = __this->____androidAdUnitId_4;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5(L_11, __this, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void ShowAdsScript::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdsScript_OnUnityAdsFailedToLoad_m51FFE5105C252E5C56F781FF7D4D50E84080C222 (ShowAdsScript_tF28E300E8FCAD76C7B4C2BF0305869FCBCB529A2* __this, String_t* ___adUnitId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8FC9459B04D1762B9CD72161B97A02D1D24F952);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Error loading Ad Unit {adUnitId}: {error.ToString()} - {message}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral79B685BCD18A31A2296B5B9B7AC3BFB112F6BFF1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___adUnitId0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var, (&___error1));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___message2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// noadsAnim.SetTrigger("noads");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___noadsAnim_6;
		NullCheck(L_12);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_12, _stringLiteralD8FC9459B04D1762B9CD72161B97A02D1D24F952, NULL);
		// }
		return;
	}
}
// System.Void ShowAdsScript::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdsScript_OnUnityAdsShowFailure_m1E3A9F8EE7A96FA1501C76038669B6D4C7F2CF0B (ShowAdsScript_tF28E300E8FCAD76C7B4C2BF0305869FCBCB529A2* __this, String_t* ___adUnitId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Error showing Ad Unit {adUnitId}: {error.ToString()} - {message}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___adUnitId0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var, (&___error1));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___message2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// }
		return;
	}
}
// System.Void ShowAdsScript::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdsScript_OnUnityAdsShowStart_m8A92A662717A512D89D168C8A47D95A5A3E820E9 (ShowAdsScript_tF28E300E8FCAD76C7B4C2BF0305869FCBCB529A2* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	{
		// public void OnUnityAdsShowStart(string adUnitId) { }
		return;
	}
}
// System.Void ShowAdsScript::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdsScript_OnUnityAdsShowClick_mF0B3EACEDD046D1B72A1956ABDEFAE4270A2F83A (ShowAdsScript_tF28E300E8FCAD76C7B4C2BF0305869FCBCB529A2* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	{
		// public void OnUnityAdsShowClick(string adUnitId) { }
		return;
	}
}
// System.Void ShowAdsScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowAdsScript__ctor_mF32ABCC0B16B1668D3DB9F80FCAD10BDF05F92A5 (ShowAdsScript_tF28E300E8FCAD76C7B4C2BF0305869FCBCB529A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] string _androidAdUnitId = "Rewarded_Android";
		__this->____androidAdUnitId_4 = _stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____androidAdUnitId_4), (void*)_stringLiteral7872F39A71E752A71C67011A954892DD418DDFCF);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkipAdScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipAdScript_Start_m536145E815BB42833216C07D0839552EF1E0F2DD (SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* __this, const RuntimeMethod* method) 
{
	{
		// LoadAd();
		SkipAdScript_LoadAd_mC359A7C8BCC424034F4B12CF2FD0B97F255BF354(__this, NULL);
		// StartCoroutine(ShowAdsCor());
		RuntimeObject* L_0;
		L_0 = SkipAdScript_ShowAdsCor_m4344AA257237D03BC9285CCBB1046D3257A777FC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void SkipAdScript::LoadAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipAdScript_LoadAd_mC359A7C8BCC424034F4B12CF2FD0B97F255BF354 (SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Loading Ad: " + _adUnitId);
		String_t* L_0 = __this->____adUnitId_4;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7916CDFD764BC8A705CEF2DB666B9F68C8D57C83, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// Advertisement.Load(_adUnitId, this);
		String_t* L_2 = __this->____adUnitId_4;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Load_m57620941EB371D6E9EFC283698511946CA9BA0A5(L_2, __this, NULL);
		// }
		return;
	}
}
// System.Void SkipAdScript::ShowAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipAdScript_ShowAd_mAC27F080EC2FD658E077CB85996DA68D2339CF6F (SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC15C2D6947DEDE9FABF17FE521B3593922B4FEA0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Showing Ad: " + _adUnitId);
		String_t* L_0 = __this->____adUnitId_4;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC15C2D6947DEDE9FABF17FE521B3593922B4FEA0, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// Advertisement.Show(_adUnitId, this);
		String_t* L_2 = __this->____adUnitId_4;
		il2cpp_codegen_runtime_class_init_inline(Advertisement_tA24B0B700823049F9FFF77F4D46E4F4599671EC5_il2cpp_TypeInfo_var);
		Advertisement_Show_m8F5AB716E9FB227B3FCD267DBCA7BCCE63C06C6B(L_2, __this, NULL);
		// }
		return;
	}
}
// System.Void SkipAdScript::OnUnityAdsAdLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipAdScript_OnUnityAdsAdLoaded_m6082717249AC3566E686875EF8C22FCC5D4DA68C (SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SkipAdScript::OnUnityAdsFailedToLoad(System.String,UnityEngine.Advertisements.UnityAdsLoadError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipAdScript_OnUnityAdsFailedToLoad_mA71E2F9E2F2B3594609C2A17DDB19B63599F00A1 (SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* __this, String_t* ___adUnitId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39D29036CA1A8D3D77F721192C0E6B6151BDF3A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Error loading Ad Unit: {adUnitId} - {error.ToString()} - {message}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral39D29036CA1A8D3D77F721192C0E6B6151BDF3A8);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral39D29036CA1A8D3D77F721192C0E6B6151BDF3A8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___adUnitId0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(UnityAdsLoadError_tB6550E28188DE4BB11BDA67CC987095C6B10575A_il2cpp_TypeInfo_var, (&___error1));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___message2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// LoadAd();
		SkipAdScript_LoadAd_mC359A7C8BCC424034F4B12CF2FD0B97F255BF354(__this, NULL);
		// }
		return;
	}
}
// System.Void SkipAdScript::OnUnityAdsShowFailure(System.String,UnityEngine.Advertisements.UnityAdsShowError,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipAdScript_OnUnityAdsShowFailure_m3A4FB5585795BD6D5C9FF068C88BB94796EA39BF (SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* __this, String_t* ___adUnitId0, int32_t ___error1, String_t* ___message2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log($"Error showing Ad Unit {adUnitId}: {error.ToString()} - {message}");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD33E5060507A85EFF48F3C2C04CF16CAFD9EE46D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3 = ___adUnitId0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		Il2CppFakeBox<int32_t> L_6(UnityAdsShowError_t1CD1E4BAEEDB40B5D7B7CD76EB96F27A61909F91_il2cpp_TypeInfo_var, (&___error1));
		String_t* L_7;
		L_7 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_6), NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_7);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_5;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___message2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		String_t* L_11;
		L_11 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_11, NULL);
		// }
		return;
	}
}
// System.Void SkipAdScript::OnUnityAdsShowStart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipAdScript_OnUnityAdsShowStart_m174FB8F5CD25C1B00C824A8924E66DAA689D1AF8 (SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	{
		// public void OnUnityAdsShowStart(string adUnitId) { LoadAd(); }
		SkipAdScript_LoadAd_mC359A7C8BCC424034F4B12CF2FD0B97F255BF354(__this, NULL);
		// public void OnUnityAdsShowStart(string adUnitId) { LoadAd(); }
		return;
	}
}
// System.Void SkipAdScript::OnUnityAdsShowClick(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipAdScript_OnUnityAdsShowClick_m9C6B982DC77DD7915B079F211D24EC12A06A36D9 (SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	{
		// public void OnUnityAdsShowClick(string adUnitId) { }
		return;
	}
}
// System.Void SkipAdScript::OnUnityAdsShowComplete(System.String,UnityEngine.Advertisements.UnityAdsShowCompletionState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipAdScript_OnUnityAdsShowComplete_m933FB145E318CC8264A3CC1DB3B1DE6264049DE1 (SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* __this, String_t* ___adUnitId0, int32_t ___showCompletionState1, const RuntimeMethod* method) 
{
	{
		// public void OnUnityAdsShowComplete(string adUnitId, UnityAdsShowCompletionState showCompletionState) { }
		return;
	}
}
// System.Collections.IEnumerator SkipAdScript::ShowAdsCor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkipAdScript_ShowAdsCor_m4344AA257237D03BC9285CCBB1046D3257A777FC (SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowAdsCorU3Ed__10_t506EA7A7E251FDD0348024942C49F6BB2BE382F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowAdsCorU3Ed__10_t506EA7A7E251FDD0348024942C49F6BB2BE382F6* L_0 = (U3CShowAdsCorU3Ed__10_t506EA7A7E251FDD0348024942C49F6BB2BE382F6*)il2cpp_codegen_object_new(U3CShowAdsCorU3Ed__10_t506EA7A7E251FDD0348024942C49F6BB2BE382F6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShowAdsCorU3Ed__10__ctor_m0DDF05DE10739FB41E513AEEEF1F7D6705274130(L_0, 0, NULL);
		U3CShowAdsCorU3Ed__10_t506EA7A7E251FDD0348024942C49F6BB2BE382F6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SkipAdScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkipAdScript__ctor_mAF45C905EFB3E37BCE4743A2098D5CC1115EB667 (SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] string _adUnitId = "Interstitial_Android";
		__this->____adUnitId_4 = _stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adUnitId_4), (void*)_stringLiteralEFA47F71E5B10C8687187F17AAB808B42144C642);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SkipAdScript/<ShowAdsCor>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowAdsCorU3Ed__10__ctor_m0DDF05DE10739FB41E513AEEEF1F7D6705274130 (U3CShowAdsCorU3Ed__10_t506EA7A7E251FDD0348024942C49F6BB2BE382F6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SkipAdScript/<ShowAdsCor>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowAdsCorU3Ed__10_System_IDisposable_Dispose_m738D9E80BB529577724372A13DA7DE7549F6148D (U3CShowAdsCorU3Ed__10_t506EA7A7E251FDD0348024942C49F6BB2BE382F6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SkipAdScript/<ShowAdsCor>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowAdsCorU3Ed__10_MoveNext_m8C39575D2A6BDE8B27CE5A71511D46B43347DC3B (U3CShowAdsCorU3Ed__10_t506EA7A7E251FDD0348024942C49F6BB2BE382F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(150);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (150.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// ShowAd();
		SkipAdScript_tB240F397916A8B7F4A43580230B446014E96D616* L_5 = V_1;
		NullCheck(L_5);
		SkipAdScript_ShowAd_mAC27F080EC2FD658E077CB85996DA68D2339CF6F(L_5, NULL);
		// while(true)
		goto IL_001e;
	}
}
// System.Object SkipAdScript/<ShowAdsCor>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowAdsCorU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m688EDBB7304E28D8FB0BDA65C430F3D0781C9DEF (U3CShowAdsCorU3Ed__10_t506EA7A7E251FDD0348024942C49F6BB2BE382F6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SkipAdScript/<ShowAdsCor>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowAdsCorU3Ed__10_System_Collections_IEnumerator_Reset_mEE0F041103BEC30669BEB4052CFBB08459DC7053 (U3CShowAdsCorU3Ed__10_t506EA7A7E251FDD0348024942C49F6BB2BE382F6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowAdsCorU3Ed__10_System_Collections_IEnumerator_Reset_mEE0F041103BEC30669BEB4052CFBB08459DC7053_RuntimeMethod_var)));
	}
}
// System.Object SkipAdScript/<ShowAdsCor>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowAdsCorU3Ed__10_System_Collections_IEnumerator_get_Current_m6B210F6DE31E14620A44A4273C1863ED12363045 (U3CShowAdsCorU3Ed__10_t506EA7A7E251FDD0348024942C49F6BB2BE382F6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SoundButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundButton_Start_m0BEA52F2864D578EDAF07FEFBE457B021D75954B (SoundButton_t89D99898FDCFA80B6F365E76AAE14594905F58EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sounds = Sounds.instance;
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_0 = ((Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_StaticFields*)il2cpp_codegen_static_fields_for(Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_il2cpp_TypeInfo_var))->___instance_4;
		__this->___sounds_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sounds_6), (void*)L_0);
		// image = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___image_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___image_7), (void*)L_1);
		// if(AudioListener.volume == 1)
		float L_2;
		L_2 = AudioListener_get_volume_m8EAB8FBA127A53E689C1D8C1857781070381974A(NULL);
		if ((!(((float)L_2) == ((float)(1.0f)))))
		{
			goto IL_0035;
		}
	}
	{
		// image.sprite = onSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___image_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___onSprite_4;
		NullCheck(L_3);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_3, L_4, NULL);
		return;
	}

IL_0035:
	{
		// image.sprite = offSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___image_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = __this->___offSprite_5;
		NullCheck(L_5);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void SoundButton::SwitchSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundButton_SwitchSound_m2F1D9ECBD44EAB21E209915B8196AC1E0EA4A55E (SoundButton_t89D99898FDCFA80B6F365E76AAE14594905F58EC* __this, const RuntimeMethod* method) 
{
	{
		// if(AudioListener.volume == 1)
		float L_0;
		L_0 = AudioListener_get_volume_m8EAB8FBA127A53E689C1D8C1857781070381974A(NULL);
		if ((!(((float)L_0) == ((float)(1.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		// AudioListener.volume = 0;
		AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721((0.0f), NULL);
		// image.sprite = offSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___image_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = __this->___offSprite_5;
		NullCheck(L_1);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_1, L_2, NULL);
		return;
	}

IL_0028:
	{
		// AudioListener.volume = 1;
		AudioListener_set_volume_m72BAF2D558A5449091A59630EBF48095DEB4C721((1.0f), NULL);
		// image.sprite = onSprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___image_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___onSprite_4;
		NullCheck(L_3);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_3, L_4, NULL);
		// sounds.click.Play();
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_5 = __this->___sounds_6;
		NullCheck(L_5);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = L_5->___click_5;
		NullCheck(L_6);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_6, NULL);
		// }
		return;
	}
}
// System.Void SoundButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundButton__ctor_mDE6B5DE540F764C1A805B20FE6520944EE651C23 (SoundButton_t89D99898FDCFA80B6F365E76AAE14594905F58EC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sounds::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sounds_Awake_mDE2FFF066DE7496BE95CAA19B40B28C4444FE0C5 (Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(instance == null) instance = this;
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_0 = ((Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_StaticFields*)il2cpp_codegen_static_fields_for(Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if(instance == null) instance = this;
		((Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_StaticFields*)il2cpp_codegen_static_fields_for(Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_StaticFields*)il2cpp_codegen_static_fields_for(Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Sounds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sounds__ctor_m3DBFCB62F766E20E0F87D213B9425AEDDE3158D0 (Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TargetWord::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetWord_Start_mC6A25E00F391E66C3FFF4E67F3C7604E4AFC64E9 (TargetWord_t8CD796E5195AD3989A87B2A10B4FCEBCE331DE22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void TargetWord::RevealWord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetWord_RevealWord_m4D7B467F35DCFBC16CFFE38DFF9500D109ED976A (TargetWord_t8CD796E5195AD3989A87B2A10B4FCEBCE331DE22* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A928BF8198595142496A3CD14FE5DCAE3CB1C50);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetTrigger("reveal");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_6;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral5A928BF8198595142496A3CD14FE5DCAE3CB1C50, NULL);
		// targetWordText.text = targetWord;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___targetWordText_5;
		String_t* L_2 = __this->___targetWord_4;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void TargetWord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetWord__ctor_m43CB95FCC7BE33B5C244E88B9D066EF53781C0AD (TargetWord_t8CD796E5195AD3989A87B2A10B4FCEBCE331DE22* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TargetWordsContainer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetWordsContainer_Awake_mCDD7189938154FED75A6BF5A0B3ADD17E60DB817 (TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(instance == null) instance = this;
		TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* L_0 = ((TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84_StaticFields*)il2cpp_codegen_static_fields_for(TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if(instance == null) instance = this;
		((TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84_StaticFields*)il2cpp_codegen_static_fields_for(TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84_StaticFields*)il2cpp_codegen_static_fields_for(TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void TargetWordsContainer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetWordsContainer_Start_m3A513337DEAFF1ED1E6767866DD2A4CA8997FB47 (TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m55E0F26E7EB2ABA0D11CA450FD0035154E7B3BC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDEE58F38D1467E8A58FC6BC32DD271D2B8164A7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// mainWord = MainWord.instance;
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_0 = ((MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E_StaticFields*)il2cpp_codegen_static_fields_for(MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E_il2cpp_TypeInfo_var))->___instance_4;
		__this->___mainWord_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainWord_5), (void*)L_0);
		// hintsAmountText.text = GameData.hintsAmount.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___hintsAmountText_8;
		il2cpp_codegen_runtime_class_init_inline(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___hintsAmount_0), NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// wordsCount = 0;
		__this->___wordsCount_12 = 0;
		// startWordsCount = targetWords.Count;
		List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* L_3 = __this->___targetWords_6;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_inline(L_3, List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_RuntimeMethod_var);
		__this->___startWordsCount_11 = L_4;
		// progressText.text = "SOLVED: " + wordsCount.ToString() + "/" + startWordsCount.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___progressText_7;
		int32_t* L_6 = (&__this->___wordsCount_12);
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_6, NULL);
		int32_t* L_8 = (&__this->___startWordsCount_11);
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralBDEE58F38D1467E8A58FC6BC32DD271D2B8164A7, L_7, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_9, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_10);
		// wordsSolvedText.text = targetWords.Count.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___wordsSolvedText_9;
		List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* L_12 = __this->___targetWords_6;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_inline(L_12, List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_RuntimeMethod_var);
		V_0 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_14);
		// for (int i = 0; i < targetWords.Count; i++)
		V_1 = 0;
		goto IL_00aa;
	}

IL_008a:
	{
		// words.Add(targetWords[i].targetWord);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = __this->___words_10;
		List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* L_16 = __this->___targetWords_6;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		TargetWord_t8CD796E5195AD3989A87B2A10B4FCEBCE331DE22* L_18;
		L_18 = List_1_get_Item_m55E0F26E7EB2ABA0D11CA450FD0035154E7B3BC9(L_16, L_17, List_1_get_Item_m55E0F26E7EB2ABA0D11CA450FD0035154E7B3BC9_RuntimeMethod_var);
		NullCheck(L_18);
		String_t* L_19 = L_18->___targetWord_4;
		NullCheck(L_15);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_15, L_19, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// for (int i = 0; i < targetWords.Count; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_00aa:
	{
		// for (int i = 0; i < targetWords.Count; i++)
		int32_t L_21 = V_1;
		List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* L_22 = __this->___targetWords_6;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_inline(L_22, List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_008a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TargetWordsContainer::UpdateHintsAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetWordsContainer_UpdateHintsAmount_m569EB621E52E2AE97F3177CB68481EC29CE011A2 (TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB9697C2FB8495AF7FCFEF8B970DBB5FF59D461C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("hintsAmount", GameData.hintsAmount);
		il2cpp_codegen_runtime_class_init_inline(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___hintsAmount_0;
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralDB9697C2FB8495AF7FCFEF8B970DBB5FF59D461C, L_0, NULL);
		// hintsAmountText.text = GameData.hintsAmount.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___hintsAmountText_8;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___hintsAmount_0), NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// }
		return;
	}
}
// System.Void TargetWordsContainer::CheckTargetWord(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetWordsContainer_CheckTargetWord_m52BC432387951ECB422FC8AD0DEB2EA38598A3D6 (TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* __this, String_t* ___currentWord0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m10E74475523F1CC79186F9CFB7C590AAFB35C52E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m55E0F26E7EB2ABA0D11CA450FD0035154E7B3BC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDEE58F38D1467E8A58FC6BC32DD271D2B8164A7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(targetWords.Count > 0)
		List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* L_0 = __this->___targetWords_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_inline(L_0, List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_00f5;
		}
	}
	{
		// if(!words.Contains(currentWord))
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = __this->___words_10;
		String_t* L_3 = ___currentWord0;
		NullCheck(L_2);
		bool L_4;
		L_4 = List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1(L_2, L_3, List_1_Contains_m359254483BE42CAD4DCA8FBAFB87473FB4CF00E1_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_002b;
		}
	}
	{
		// mainWord.WrongWord();
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_5 = __this->___mainWord_5;
		NullCheck(L_5);
		MainWord_WrongWord_m831B3891EE3C4A6B095E7AA652984806440FCC4A(L_5, NULL);
		// return;
		return;
	}

IL_002b:
	{
		// for (int i = 0; i < targetWords.Count; i++)
		V_0 = 0;
		goto IL_00e4;
	}

IL_0032:
	{
		// if(targetWords[i].targetWord == currentWord)
		List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* L_6 = __this->___targetWords_6;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		TargetWord_t8CD796E5195AD3989A87B2A10B4FCEBCE331DE22* L_8;
		L_8 = List_1_get_Item_m55E0F26E7EB2ABA0D11CA450FD0035154E7B3BC9(L_6, L_7, List_1_get_Item_m55E0F26E7EB2ABA0D11CA450FD0035154E7B3BC9_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9 = L_8->___targetWord_4;
		String_t* L_10 = ___currentWord0;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_00e0;
		}
	}
	{
		// mainWord.sounds.correct.Play();
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_12 = __this->___mainWord_5;
		NullCheck(L_12);
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_13 = L_12->___sounds_5;
		NullCheck(L_13);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_14 = L_13->___correct_7;
		NullCheck(L_14);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_14, NULL);
		// targetWords[i].RevealWord();
		List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* L_15 = __this->___targetWords_6;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		TargetWord_t8CD796E5195AD3989A87B2A10B4FCEBCE331DE22* L_17;
		L_17 = List_1_get_Item_m55E0F26E7EB2ABA0D11CA450FD0035154E7B3BC9(L_15, L_16, List_1_get_Item_m55E0F26E7EB2ABA0D11CA450FD0035154E7B3BC9_RuntimeMethod_var);
		NullCheck(L_17);
		TargetWord_RevealWord_m4D7B467F35DCFBC16CFFE38DFF9500D109ED976A(L_17, NULL);
		// targetWords.RemoveAt(i);
		List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* L_18 = __this->___targetWords_6;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		List_1_RemoveAt_m10E74475523F1CC79186F9CFB7C590AAFB35C52E(L_18, L_19, List_1_RemoveAt_m10E74475523F1CC79186F9CFB7C590AAFB35C52E_RuntimeMethod_var);
		// words.Remove(currentWord);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_20 = __this->___words_10;
		String_t* L_21 = ___currentWord0;
		NullCheck(L_20);
		bool L_22;
		L_22 = List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D(L_20, L_21, List_1_Remove_mD9E8CFB6777A99046B3C0195F7343FE771A2E99D_RuntimeMethod_var);
		// wordsCount++;
		int32_t L_23 = __this->___wordsCount_12;
		__this->___wordsCount_12 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		// progressText.text = "SOLVED: " + wordsCount.ToString() + "/" + startWordsCount.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = __this->___progressText_7;
		int32_t* L_25 = (&__this->___wordsCount_12);
		String_t* L_26;
		L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_25, NULL);
		int32_t* L_27 = (&__this->___startWordsCount_11);
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_27, NULL);
		String_t* L_29;
		L_29 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralBDEE58F38D1467E8A58FC6BC32DD271D2B8164A7, L_26, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_28, NULL);
		NullCheck(L_24);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_29);
		// if(AllWordsSolved())
		bool L_30;
		L_30 = TargetWordsContainer_AllWordsSolved_mC387077161F1711A586DC1E6936A5F72670FE01B(__this, NULL);
		if (!L_30)
		{
			goto IL_00df;
		}
	}
	{
		// mainWord.LevelComplete();
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_31 = __this->___mainWord_5;
		NullCheck(L_31);
		MainWord_LevelComplete_m546748DBB122B99341E1953FF178E7171DDEE7DA(L_31, NULL);
		// return;
		return;
	}

IL_00df:
	{
		// return;
		return;
	}

IL_00e0:
	{
		// for (int i = 0; i < targetWords.Count; i++)
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00e4:
	{
		// for (int i = 0; i < targetWords.Count; i++)
		int32_t L_33 = V_0;
		List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* L_34 = __this->___targetWords_6;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_inline(L_34, List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_RuntimeMethod_var);
		if ((((int32_t)L_33) < ((int32_t)L_35)))
		{
			goto IL_0032;
		}
	}

IL_00f5:
	{
		// }
		return;
	}
}
// System.Void TargetWordsContainer::Hint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetWordsContainer_Hint_m63208C9E69C4EA18FCF39FF7BF4052EB8C70BCED (TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m10E74475523F1CC79186F9CFB7C590AAFB35C52E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m55E0F26E7EB2ABA0D11CA450FD0035154E7B3BC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDEE58F38D1467E8A58FC6BC32DD271D2B8164A7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(GameData.hintsAmount > 0)
		il2cpp_codegen_runtime_class_init_inline(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___hintsAmount_0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00d1;
		}
	}
	{
		// if (targetWords.Count > 0)
		List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* L_1 = __this->___targetWords_6;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_inline(L_1, List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		// mainWord.sounds.correct.Play();
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_3 = __this->___mainWord_5;
		NullCheck(L_3);
		Sounds_tDE819CF7AD28101F9D04716674C2F19545BBD840* L_4 = L_3->___sounds_5;
		NullCheck(L_4);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = L_4->___correct_7;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
		// int randomIndex = Random.Range(0, targetWords.Count);
		List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* L_6 = __this->___targetWords_6;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_inline(L_6, List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_RuntimeMethod_var);
		int32_t L_8;
		L_8 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_7, NULL);
		V_0 = L_8;
		// targetWords[randomIndex].RevealWord();
		List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* L_9 = __this->___targetWords_6;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		TargetWord_t8CD796E5195AD3989A87B2A10B4FCEBCE331DE22* L_11;
		L_11 = List_1_get_Item_m55E0F26E7EB2ABA0D11CA450FD0035154E7B3BC9(L_9, L_10, List_1_get_Item_m55E0F26E7EB2ABA0D11CA450FD0035154E7B3BC9_RuntimeMethod_var);
		NullCheck(L_11);
		TargetWord_RevealWord_m4D7B467F35DCFBC16CFFE38DFF9500D109ED976A(L_11, NULL);
		// targetWords.RemoveAt(randomIndex);
		List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* L_12 = __this->___targetWords_6;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		List_1_RemoveAt_m10E74475523F1CC79186F9CFB7C590AAFB35C52E(L_12, L_13, List_1_RemoveAt_m10E74475523F1CC79186F9CFB7C590AAFB35C52E_RuntimeMethod_var);
		// words.RemoveAt(randomIndex);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = __this->___words_10;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D(L_14, L_15, List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		// wordsCount++;
		int32_t L_16 = __this->___wordsCount_12;
		__this->___wordsCount_12 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		// progressText.text = "SOLVED: " + wordsCount.ToString() + "/" + startWordsCount.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___progressText_7;
		int32_t* L_18 = (&__this->___wordsCount_12);
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_18, NULL);
		int32_t* L_20 = (&__this->___startWordsCount_11);
		String_t* L_21;
		L_21 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_20, NULL);
		String_t* L_22;
		L_22 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralBDEE58F38D1467E8A58FC6BC32DD271D2B8164A7, L_19, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_21, NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_22);
		// GameData.hintsAmount -= 1;
		il2cpp_codegen_runtime_class_init_inline(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		int32_t L_23 = ((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___hintsAmount_0;
		((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_StaticFields*)il2cpp_codegen_static_fields_for(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var))->___hintsAmount_0 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		// UpdateHintsAmount();
		TargetWordsContainer_UpdateHintsAmount_m569EB621E52E2AE97F3177CB68481EC29CE011A2(__this, NULL);
		// if (AllWordsSolved())
		bool L_24;
		L_24 = TargetWordsContainer_AllWordsSolved_mC387077161F1711A586DC1E6936A5F72670FE01B(__this, NULL);
		if (!L_24)
		{
			goto IL_00d0;
		}
	}
	{
		// mainWord.LevelComplete();
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_25 = __this->___mainWord_5;
		NullCheck(L_25);
		MainWord_LevelComplete_m546748DBB122B99341E1953FF178E7171DDEE7DA(L_25, NULL);
		// return;
		return;
	}

IL_00d0:
	{
		// return;
		return;
	}

IL_00d1:
	{
		// mainWord.ActivateWatchAdPopUp();
		MainWord_t712CC0391D947AF0BED1928DA0D75200E07C164E* L_26 = __this->___mainWord_5;
		NullCheck(L_26);
		MainWord_ActivateWatchAdPopUp_m305E4AB8FC00973897CA5A32BDFCB3C2D8BA7C32(L_26, NULL);
	}

IL_00dc:
	{
		// }
		return;
	}
}
// System.Boolean TargetWordsContainer::AllWordsSolved()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TargetWordsContainer_AllWordsSolved_mC387077161F1711A586DC1E6936A5F72670FE01B (TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(targetWords.Count == 0)
		List_1_t2CFEB9FD8E37AA338EB1676EC63DABA28BA9D704* L_0 = __this->___targetWords_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_inline(L_0, List_1_get_Count_mD39EEF6172BCC0E664618112927DF040604A25F9_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000f:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void TargetWordsContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetWordsContainer__ctor_m8029C33F6A1A6F55D85972378620F8B17A8B87E2 (TargetWordsContainer_t00A8F30DC942EF3FB3B9664A8DCEE16D9BE86C84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<string> words = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___words_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___words_10), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerLoadOptions_set_loadCallback_m219703CC2E16DAFA77481374046BD19298B27BF0_inline (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* ___value0, const RuntimeMethod* method) 
{
	{
		// public LoadCallback loadCallback { get; set; }
		LoadCallback_tD229C4997971D804773ED4479F4D768D5A21377B* L_0 = ___value0;
		__this->___U3CloadCallbackU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CloadCallbackU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerLoadOptions_set_errorCallback_m73A7C9AEA0F79A4963538CE38D3AAE5AB69AF6E2_inline (BannerLoadOptions_t9FEE2B8F78545F5207EC7F1A49E6955A35B9957E* __this, ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* ___value0, const RuntimeMethod* method) 
{
	{
		// public ErrorCallback errorCallback { get; set; }
		ErrorCallback_tA2D794EA095CA371EB48018F2C47E7728FA82029* L_0 = ___value0;
		__this->___U3CerrorCallbackU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CerrorCallbackU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerOptions_set_clickCallback_mE9C4A4716FC257B551A4334985D494453509B0A9_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___value0, const RuntimeMethod* method) 
{
	{
		// public BannerCallback clickCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = ___value0;
		__this->___U3CclickCallbackU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CclickCallbackU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerOptions_set_hideCallback_m9877994E49979C868E5331BA9708D52DE2F18424_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___value0, const RuntimeMethod* method) 
{
	{
		// public BannerCallback hideCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = ___value0;
		__this->___U3ChideCallbackU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3ChideCallbackU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BannerOptions_set_showCallback_m14C693B20F26D364ECB7B9B90F3C455D0B361357_inline (BannerOptions_tCBB4B505757433AF3934C75D65F47FFCF1C47F5A* __this, BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* ___value0, const RuntimeMethod* method) 
{
	{
		// public BannerCallback showCallback { get; set; }
		BannerCallback_t064796640D9EE7F36DFE697EEC24B3059246EA88* L_0 = ___value0;
		__this->___U3CshowCallbackU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CshowCallbackU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
