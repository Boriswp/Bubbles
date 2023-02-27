#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<GooglePlayGames.BasicApi.Achievement[]>
struct Action_1_t4316DC28EEB660D34DF77C3D6317B5EA7B202924;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>
struct Action_1_t2AA378968D179CE7EFB8362F828F95AE0E912E67;
// System.Action`1<UnityEngine.AndroidJavaObject>
struct Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>
struct Action_1_t40721379DC6360875470B0B47A7D930554D1A3D3;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>
struct Action_1_t764690D8533B83F132388734EC2965A2712754D9;
// System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>
struct Action_1_tFEA0292F779769AD734C07DADE23F1B531A4EC95;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763;
// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B;
// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>
struct Action_1_tA52AED154B6BF7FC2F6E5C7FF9EB83083A14587B;
// System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>
struct Action_1_t229C6DB03F82E8A2201F49AB72795F9E8681C444;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<GooglePlayGames.BasicApi.SignInStatus>
struct Action_1_t38A40574AB80CC30FF578C805B326880626B49AF;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`1<GooglePlayGames.BasicApi.UIStatus>
struct Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF;
// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_t239560480D2FF80B907D2170BCBF5B82ADCC8AF5;
// System.Action`2<System.Int32Enum,System.Object>
struct Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F;
// System.Collections.Generic.IEnumerable`1<System.Action>
struct IEnumerable_1_tEA17B83295B756EFB23F3357537A3AAC9B4D9732;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>
struct List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Action`1<System.Boolean>[]
struct Action_1U5BU5D_tB4049DA1D39B30139817A3CFA2949CC0FFF2CA62;
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_t09D01F32899EC2D71ADFF17E5B8FBA83E5094C62;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// GooglePlayGames.PlayGamesScore[]
struct PlayGamesScoreU5BU5D_t31A3C8031BCADB48F59385BACBD33920CD783D07;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// GooglePlayGames.BasicApi.Achievement
struct Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// GooglePlayGames.Android.AndroidTaskUtils
struct AndroidTaskUtils_t029A74638E211889DF6771A9FC36E925A93F255D;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// GooglePlayGames.BasicApi.CommonTypesUtil
struct CommonTypesUtil_tA47115ADB076A35DF0744615FBBCDDDAB32521E1;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// GooglePlayGames.BasicApi.DummyClient
struct DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE;
// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient
struct DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC;
// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C;
// GooglePlayGames.BasicApi.Events.Event
struct Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// GooglePlayGames.BasicApi.SavedGame.IConflictResolver
struct IConflictResolver_tE12B7D94EECC5E5889D0158EC3E6F648DD91C92A;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// GooglePlayGames.BasicApi.Nearby.IDiscoveryListener
struct IDiscoveryListener_t93BE7B49481088A68874176BA8013B7BCD1F0A3E;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// GooglePlayGames.BasicApi.Events.IEventsClient
struct IEventsClient_t8D43DC95B5A4F08B7592A95C1242155A82E29E05;
// GooglePlayGames.BasicApi.Nearby.IMessageListener
struct IMessageListener_t9531F603CF2F1941B87710911F11116588A637DB;
// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient
struct INearbyConnectionClient_tBFE8F3C727285D4A45458AAD496AFBB7816429AD;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient
struct ISavedGameClient_tA17EDD4D0BF321E1DAC8B0648BC18E9FFF1319EB;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_t28210712AB3B58D4CF3C826770E11EA8912DD4AC;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t95B1CFEB3094570AFF240C7CDD61A3A5D0169E86;
// UnityEngine.SocialPlatforms.IUserProfile
struct IUserProfile_tF23DFE5CF90A1020C168F5751F7C4F2B628E22E3;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343;
// GooglePlayGames.OurUtils.Logger
struct Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// GooglePlayGames.OurUtils.NearbyHelperObject
struct NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F;
// GooglePlayGames.PlayGamesScore
struct PlayGamesScore_tB8ECE78BCBA5F9EBF68034D6792DDAE96AF748F9;
// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_tEC3D4D5F9E3BCF681A4E64A7C3D73489F7BB6D32;
// GooglePlayGames.BasicApi.Player
struct Player_t060AAFFE163492D49D701807DC96812E218898E0;
// GooglePlayGames.BasicApi.PlayerProfile
struct PlayerProfile_t588B042CAF1902A8CBA1EF4BCDFA018C0AEDBED9;
// GooglePlayGames.BasicApi.PlayerStats
struct PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// GooglePlayGames.Android.AndroidTaskUtils/TaskOnFailedProxy
struct TaskOnFailedProxy_tB6C5E72CEFD2E35C591FD1BE3F6FCCA3CA985B79;
// GooglePlayGames.OurUtils.Logger/<>c
struct U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2;
// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t968B9362DF4A00AE3730D328E35A2074CA135669;
// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tCEC6F202BDA31BF5F1DBF96748C6AEBFE9736A80;
// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t286159F89C45AEFF13DC278B791E70D0ABD58D72;
// GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t042EF451EC4B656D740E40E3CBD6CF1EFAD1BD10;

IL2CPP_EXTERN_C RuntimeClass* Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INearbyConnectionClient_tBFE8F3C727285D4A45458AAD496AFBB7816429AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseStatus_tD794E5AA3E3E3C4F5F59DF427A35FFCCB043A95F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskOnFailedProxy_tB6C5E72CEFD2E35C591FD1BE3F6FCCA3CA985B79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t042EF451EC4B656D740E40E3CBD6CF1EFAD1BD10_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t968B9362DF4A00AE3730D328E35A2074CA135669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_tCEC6F202BDA31BF5F1DBF96748C6AEBFE9736A80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t286159F89C45AEFF13DC278B791E70D0ABD58D72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0E0C6CFB1B8F69C9CCBEA31C5888616C9C93F318;
IL2CPP_EXTERN_C String_t* _stringLiteral147BFD4F80428A91C0F9D44952A51D817DE3C72F;
IL2CPP_EXTERN_C String_t* _stringLiteral14A85563EBD186910C075E2F651ADF038BCE4507;
IL2CPP_EXTERN_C String_t* _stringLiteral14AEDBE883EF2732471820EABAC5E9543381AF1A;
IL2CPP_EXTERN_C String_t* _stringLiteral151DE5DE7A9AF7DE7DC3064430378DDE294A20E5;
IL2CPP_EXTERN_C String_t* _stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723;
IL2CPP_EXTERN_C String_t* _stringLiteral35B82DD0E904662F7BBAD3252878566E7BB3A535;
IL2CPP_EXTERN_C String_t* _stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB;
IL2CPP_EXTERN_C String_t* _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8;
IL2CPP_EXTERN_C String_t* _stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral5187ED63B1D0FC2A896576DA1FBC217EB7236C31;
IL2CPP_EXTERN_C String_t* _stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4;
IL2CPP_EXTERN_C String_t* _stringLiteral545FF66BCE47797B96DDEDE6F014AA746BA6DC93;
IL2CPP_EXTERN_C String_t* _stringLiteral54BBC5A7505DB79E77AA0E8FE2EDF7EB2EA928B2;
IL2CPP_EXTERN_C String_t* _stringLiteral60AD3355EDD9D6A49C14EF7999212C6B9FF8AEDF;
IL2CPP_EXTERN_C String_t* _stringLiteral621D47B63CF421687DAD3C913833178F9D2A2B9B;
IL2CPP_EXTERN_C String_t* _stringLiteral73FC55BE751EC7926E1001D18150891CED5D15CC;
IL2CPP_EXTERN_C String_t* _stringLiteral756F726A317305EDA51B7C3ED9A0E521D2504AF0;
IL2CPP_EXTERN_C String_t* _stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF;
IL2CPP_EXTERN_C String_t* _stringLiteral7C451AC3EB5AB025342585D935B8CAF664FF385C;
IL2CPP_EXTERN_C String_t* _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D;
IL2CPP_EXTERN_C String_t* _stringLiteral92B0558434BA6C25E07F6C3D9B85B4CC71BAF3BA;
IL2CPP_EXTERN_C String_t* _stringLiteral93F52B9BA33C3AE812AEF143ABDAA85AD673D882;
IL2CPP_EXTERN_C String_t* _stringLiteralAA5C79471DFCE734BA20F373510B04EE3C99F7F1;
IL2CPP_EXTERN_C String_t* _stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34;
IL2CPP_EXTERN_C String_t* _stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralB83CF5D3F499F61FF3BC4A1B8F187BF6DDA9B350;
IL2CPP_EXTERN_C String_t* _stringLiteralB8B22370EF0FBA1E20C306924FF3234345072FC0;
IL2CPP_EXTERN_C String_t* _stringLiteralBA9B4AFE9B15F0DEE7467CB471ADE848233E5F39;
IL2CPP_EXTERN_C String_t* _stringLiteralC68E6DD4D6678717C05B5B1EADED9792B1D6A551;
IL2CPP_EXTERN_C String_t* _stringLiteralC798A7B286F071F7CD687674E7600AA6BC58EE4A;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCC4843A086C3E94A76137DD9BD551A9913474C68;
IL2CPP_EXTERN_C String_t* _stringLiteralCE38144E371DD18AF923733A68E7D8175974B938;
IL2CPP_EXTERN_C String_t* _stringLiteralD05C313FB48D49A0F08538D416D439DB37A17711;
IL2CPP_EXTERN_C String_t* _stringLiteralD98EFBEB57C6C6921D60597A6FC6CDBA37596E37;
IL2CPP_EXTERN_C String_t* _stringLiteralDB9D77120DC158BF2D325D1BF185A01AB6C3C0D8;
IL2CPP_EXTERN_C String_t* _stringLiteralE112AB60E299D09FDCB1AD292D752F8F8BAE8D28;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFF60DDE06C2C9D09E97ED4FEB8CA18A3747827F5;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Builder_WithUpdatedPlayedTime_mA0DD09952CA1BCED3A97AA6505CBC078339E1E2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m993432E6F59A9F04D89EB6B02C6F902AA380E783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m4AEB802C574E8B550BAF83C6EA8F835635C542EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m29B914A68B38CB68DBA414C2AB9BD5B5807B9DAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisNearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_m4909A551253E9F3E0EC3AE82D2F98A8DA1B7653B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_m4CB8623CF1F8CBA70C0D8F04A9D6330E7F5F800D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m516CC7340C5C8194052845BC1E0A320E218DAD7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD9589D237AA0A6107148FEEA4734D2C62A8374D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mF171865461EA69D2AF7CBAD748F52D7CEA7897C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35ECF228FCE04D6BC156DC5841E12EC008F35C25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD2CEA2EADFD5F476B0C1329AC086A662142362DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m73D6D1EC8C0647CD0EF417338A5F8075EA6A7D0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEB2C87F6A8974287C241AA2AF2439D9CEB7FD59D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mFD5B5846BC30FFDBBCDB78A0F7537F9D8A9074EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC1686B471742132A119A13D13229321826F22A6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisAction_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_mA693A09455752E9E95F88BBDB32BB9E68D811FE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m1FFA4C1CAB96A873CE27E749AF898DA83A14E854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Misc_GetSubsetBytes_m0F781EE45718D550703DF4C73E29DD77541A2E42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayGamesHelperObject_RunOnGameThread_mC9C5858B42DCB027670176AB4C2FC885748D1B48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToLogMessageU3Eb__12_0_mDD9678C6AC7A4CD1D0BF99248C8177EFE7550908_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_mA6977F035C951F2EAC191F61097CC2FBEDC9D32F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_m86999BB25B428A036C61A8D4E89E14B1A59E80D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_m500FEACCAFA3AEA76C97E5390C596DEA02F4C5BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m6FCF5F960E11CDEF1AB4BD25B3646D47848AD9BF_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C;;
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com;
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com;;
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke;
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AchievementU5BU5D_t09D01F32899EC2D71ADFF17E5B8FBA83E5094C62;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042;
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlayGamesScoreU5BU5D_t31A3C8031BCADB48F59385BACBD33920CD783D07;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<System.Action`1<System.Boolean>>
struct List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_tB4049DA1D39B30139817A3CFA2949CC0FFF2CA62* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Action_1U5BU5D_tB4049DA1D39B30139817A3CFA2949CC0FFF2CA62* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDB72209F35D56F62A287633F9450978E90B90987_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>
struct List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PlayGamesScoreU5BU5D_t31A3C8031BCADB48F59385BACBD33920CD783D07* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PlayGamesScoreU5BU5D_t31A3C8031BCADB48F59385BACBD33920CD783D07* ___s_emptyArray_5;
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

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// GooglePlayGames.Android.AndroidTaskUtils
struct AndroidTaskUtils_t029A74638E211889DF6771A9FC36E925A93F255D  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// GooglePlayGames.BasicApi.CommonTypesUtil
struct CommonTypesUtil_tA47115ADB076A35DF0744615FBBCDDDAB32521E1  : public RuntimeObject
{
};

// GooglePlayGames.BasicApi.DummyClient
struct DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE  : public RuntimeObject
{
};

// GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient
struct DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC  : public RuntimeObject
{
};

// GooglePlayGames.BasicApi.Events.Event
struct Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A  : public RuntimeObject
{
	// System.String GooglePlayGames.BasicApi.Events.Event::mId
	String_t* ___mId_0;
	// System.String GooglePlayGames.BasicApi.Events.Event::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Events.Event::mDescription
	String_t* ___mDescription_2;
	// System.String GooglePlayGames.BasicApi.Events.Event::mImageUrl
	String_t* ___mImageUrl_3;
	// System.UInt64 GooglePlayGames.BasicApi.Events.Event::mCurrentCount
	uint64_t ___mCurrentCount_4;
	// GooglePlayGames.BasicApi.Events.EventVisibility GooglePlayGames.BasicApi.Events.Event::mVisibility
	int32_t ___mVisibility_5;
};

// GooglePlayGames.BasicApi.LeaderboardScoreData
struct LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343  : public RuntimeObject
{
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mId
	String_t* ___mId_0;
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.LeaderboardScoreData::mStatus
	int32_t ___mStatus_1;
	// System.UInt64 GooglePlayGames.BasicApi.LeaderboardScoreData::mApproxCount
	uint64_t ___mApproxCount_2;
	// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::mTitle
	String_t* ___mTitle_3;
	// UnityEngine.SocialPlatforms.IScore GooglePlayGames.BasicApi.LeaderboardScoreData::mPlayerScore
	RuntimeObject* ___mPlayerScore_4;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mPrevPage
	ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* ___mPrevPage_5;
	// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::mNextPage
	ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* ___mNextPage_6;
	// System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore> GooglePlayGames.BasicApi.LeaderboardScoreData::mScores
	List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C* ___mScores_7;
};

// GooglePlayGames.OurUtils.Logger
struct Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB  : public RuntimeObject
{
};

struct Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_StaticFields
{
	// System.Boolean GooglePlayGames.OurUtils.Logger::debugLogEnabled
	bool ___debugLogEnabled_0;
	// System.Boolean GooglePlayGames.OurUtils.Logger::warningLogEnabled
	bool ___warningLogEnabled_1;
};

// GooglePlayGames.OurUtils.Misc
struct Misc_t4E0F670A8116C928C74CEC187F5725FD0C6E97A8  : public RuntimeObject
{
};

// GooglePlayGames.OurUtils.PlatformUtils
struct PlatformUtils_t93FFBFFFD5F3C79B14A9B93BB38DF02015F1671F  : public RuntimeObject
{
};

// GooglePlayGames.PlayGamesUserProfile
struct PlayGamesUserProfile_tEC3D4D5F9E3BCF681A4E64A7C3D73489F7BB6D32  : public RuntimeObject
{
	// System.String GooglePlayGames.PlayGamesUserProfile::mDisplayName
	String_t* ___mDisplayName_0;
	// System.String GooglePlayGames.PlayGamesUserProfile::mPlayerId
	String_t* ___mPlayerId_1;
	// System.String GooglePlayGames.PlayGamesUserProfile::mAvatarUrl
	String_t* ___mAvatarUrl_2;
	// System.Boolean GooglePlayGames.PlayGamesUserProfile::mIsFriend
	bool ___mIsFriend_3;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.PlayGamesUserProfile::mImageLoading
	bool ___mImageLoading_4;
	// UnityEngine.Texture2D GooglePlayGames.PlayGamesUserProfile::mImage
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mImage_5;
};

// GooglePlayGames.BasicApi.PlayerStats
struct PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513  : public RuntimeObject
{
	// System.Boolean GooglePlayGames.BasicApi.PlayerStats::mValid
	bool ___mValid_1;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mNumberOfPurchases
	int32_t ___mNumberOfPurchases_2;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mAvgSessionLength
	float ___mAvgSessionLength_3;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mDaysSinceLastPlayed
	int32_t ___mDaysSinceLastPlayed_4;
	// System.Int32 GooglePlayGames.BasicApi.PlayerStats::mNumberOfSessions
	int32_t ___mNumberOfSessions_5;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSessPercentile
	float ___mSessPercentile_6;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSpendPercentile
	float ___mSpendPercentile_7;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mSpendProbability
	float ___mSpendProbability_8;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mChurnProbability
	float ___mChurnProbability_9;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mHighSpenderProbability
	float ___mHighSpenderProbability_10;
	// System.Single GooglePlayGames.BasicApi.PlayerStats::mTotalSpendNext28Days
	float ___mTotalSpendNext28Days_11;
};

struct PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_StaticFields
{
	// System.Single GooglePlayGames.BasicApi.PlayerStats::UNSET_VALUE
	float ___UNSET_VALUE_0;
};

// GooglePlayGames.BasicApi.ScorePageToken
struct ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652  : public RuntimeObject
{
	// System.String GooglePlayGames.BasicApi.ScorePageToken::mId
	String_t* ___mId_0;
	// System.Object GooglePlayGames.BasicApi.ScorePageToken::mInternalObject
	RuntimeObject* ___mInternalObject_1;
	// GooglePlayGames.BasicApi.LeaderboardCollection GooglePlayGames.BasicApi.ScorePageToken::mCollection
	int32_t ___mCollection_2;
	// GooglePlayGames.BasicApi.LeaderboardTimeSpan GooglePlayGames.BasicApi.ScorePageToken::mTimespan
	int32_t ___mTimespan_3;
	// GooglePlayGames.BasicApi.ScorePageDirection GooglePlayGames.BasicApi.ScorePageToken::mDirection
	int32_t ___mDirection_4;
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

// GooglePlayGames.OurUtils.Logger/<>c
struct U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2  : public RuntimeObject
{
};

struct U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_StaticFields
{
	// GooglePlayGames.OurUtils.Logger/<>c GooglePlayGames.OurUtils.Logger/<>c::<>9
	U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2* ___U3CU3E9_0;
	// System.Action GooglePlayGames.OurUtils.Logger/<>c::<>9__12_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__12_0_1;
};

// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t968B9362DF4A00AE3730D328E35A2074CA135669  : public RuntimeObject
{
	// System.String GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::msg
	String_t* ___msg_0;
};

// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_tCEC6F202BDA31BF5F1DBF96748C6AEBFE9736A80  : public RuntimeObject
{
	// System.String GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::msg
	String_t* ___msg_0;
};

// GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t286159F89C45AEFF13DC278B791E70D0ABD58D72  : public RuntimeObject
{
	// System.String GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::msg
	String_t* ___msg_0;
};

// GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t042EF451EC4B656D740E40E3CBD6CF1EFAD1BD10  : public RuntimeObject
{
	// System.Collections.IEnumerator GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::action
	RuntimeObject* ___action_0;
};

// System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>
struct Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C 
{
	// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mStatus
	int32_t ___mStatus_0;
	// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::mLocalEndpointName
	String_t* ___mLocalEndpointName_1;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshaled_pinvoke
{
	int32_t ___mStatus_0;
	char* ___mLocalEndpointName_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.AdvertisingResult
struct AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshaled_com
{
	int32_t ___mStatus_0;
	Il2CppChar* ___mLocalEndpointName_1;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 
{
	// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mLocalClientId
	int64_t ___mLocalClientId_1;
	// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mRemoteEndpointId
	String_t* ___mRemoteEndpointId_2;
	// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mResponseStatus
	int32_t ___mResponseStatus_3;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::mPayload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mPayload_4;
};

struct ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_StaticFields
{
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EmptyPayload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___EmptyPayload_0;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshaled_pinvoke
{
	int64_t ___mLocalClientId_1;
	char* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	Il2CppSafeArray/*NONE*/* ___mPayload_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionResponse
struct ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshaled_com
{
	int64_t ___mLocalClientId_1;
	Il2CppChar* ___mRemoteEndpointId_2;
	int32_t ___mResponseStatus_3;
	Il2CppSafeArray/*NONE*/* ___mPayload_4;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C 
{
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mEndpointId
	String_t* ___mEndpointId_0;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mName
	String_t* ___mName_1;
	// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::mServiceId
	String_t* ___mServiceId_2;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke
{
	char* ___mEndpointId_0;
	char* ___mName_1;
	char* ___mServiceId_2;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.EndpointDetails
struct EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com
{
	Il2CppChar* ___mEndpointId_0;
	Il2CppChar* ___mName_1;
	Il2CppChar* ___mServiceId_2;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B 
{
	// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mInitializationCallback
	Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* ___mInitializationCallback_2;
	// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::mLocalClientId
	int64_t ___mLocalClientId_3;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshaled_pinvoke
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
struct NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshaled_com
{
	Il2CppMethodPointer ___mInitializationCallback_2;
	int64_t ___mLocalClientId_3;
};

// GooglePlayGames.BasicApi.Player
struct Player_t060AAFFE163492D49D701807DC96812E218898E0  : public PlayGamesUserProfile_tEC3D4D5F9E3BCF681A4E64A7C3D73489F7BB6D32
{
};

// GooglePlayGames.BasicApi.PlayerProfile
struct PlayerProfile_t588B042CAF1902A8CBA1EF4BCDFA018C0AEDBED9  : public PlayGamesUserProfile_tEC3D4D5F9E3BCF681A4E64A7C3D73489F7BB6D32
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value_1;
};

// GooglePlayGames.BasicApi.Achievement
struct Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C  : public RuntimeObject
{
	// System.String GooglePlayGames.BasicApi.Achievement::mId
	String_t* ___mId_1;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsIncremental
	bool ___mIsIncremental_2;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsRevealed
	bool ___mIsRevealed_3;
	// System.Boolean GooglePlayGames.BasicApi.Achievement::mIsUnlocked
	bool ___mIsUnlocked_4;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mCurrentSteps
	int32_t ___mCurrentSteps_5;
	// System.Int32 GooglePlayGames.BasicApi.Achievement::mTotalSteps
	int32_t ___mTotalSteps_6;
	// System.String GooglePlayGames.BasicApi.Achievement::mDescription
	String_t* ___mDescription_7;
	// System.String GooglePlayGames.BasicApi.Achievement::mName
	String_t* ___mName_8;
	// System.Int64 GooglePlayGames.BasicApi.Achievement::mLastModifiedTime
	int64_t ___mLastModifiedTime_9;
	// System.UInt64 GooglePlayGames.BasicApi.Achievement::mPoints
	uint64_t ___mPoints_10;
	// System.String GooglePlayGames.BasicApi.Achievement::mRevealedImageUrl
	String_t* ___mRevealedImageUrl_11;
	// System.String GooglePlayGames.BasicApi.Achievement::mUnlockedImageUrl
	String_t* ___mUnlockedImageUrl_12;
};

struct Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C_StaticFields
{
	// System.DateTime GooglePlayGames.BasicApi.Achievement::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_0;
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF 
{
	// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mRemoteEndpoint
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C ___mRemoteEndpoint_0;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mPayload
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mPayload_1;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshaled_pinvoke
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke ___mRemoteEndpoint_0;
	Il2CppSafeArray/*NONE*/* ___mPayload_1;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshaled_com
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com ___mRemoteEndpoint_0;
	Il2CppSafeArray/*NONE*/* ___mPayload_1;
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

// GooglePlayGames.PlayGamesScore
struct PlayGamesScore_tB8ECE78BCBA5F9EBF68034D6792DDAE96AF748F9  : public RuntimeObject
{
	// System.String GooglePlayGames.PlayGamesScore::mLbId
	String_t* ___mLbId_0;
	// System.Int64 GooglePlayGames.PlayGamesScore::mValue
	int64_t ___mValue_1;
	// System.UInt64 GooglePlayGames.PlayGamesScore::mRank
	uint64_t ___mRank_2;
	// System.String GooglePlayGames.PlayGamesScore::mPlayerId
	String_t* ___mPlayerId_3;
	// System.String GooglePlayGames.PlayGamesScore::mMetadata
	String_t* ___mMetadata_4;
	// System.DateTime GooglePlayGames.PlayGamesScore::mDate
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___mDate_5;
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

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0 
{
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPngCoverImage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::mNewPlayedTime
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
struct SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// GooglePlayGames.Android.AndroidTaskUtils/TaskOnFailedProxy
struct TaskOnFailedProxy_tB6C5E72CEFD2E35C591FD1BE3F6FCCA3CA985B79  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// System.Action`1<UnityEngine.AndroidJavaObject> GooglePlayGames.Android.AndroidTaskUtils/TaskOnFailedProxy::mCallback
	Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* ___mCallback_4;
};

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 
{
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPngCoverImage
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPlayedTime
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};
// Native definition for P/Invoke marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};
// Native definition for COM marshalling of GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	Il2CppSafeArray/*NONE*/* ___mNewPngCoverImage_3;
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___mNewPlayedTime_4;
};

// System.Action`1<GooglePlayGames.BasicApi.Achievement[]>
struct Action_1_t4316DC28EEB660D34DF77C3D6317B5EA7B202924  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>
struct Action_1_t2AA378968D179CE7EFB8362F828F95AE0E912E67  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.AndroidJavaObject>
struct Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594  : public MulticastDelegate_t
{
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>
struct Action_1_t40721379DC6360875470B0B47A7D930554D1A3D3  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>
struct Action_1_t764690D8533B83F132388734EC2965A2712754D9  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>
struct Action_1_tFEA0292F779769AD734C07DADE23F1B531A4EC95  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>
struct Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763  : public MulticastDelegate_t
{
};

// System.Action`1<System.Int32Enum>
struct Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>
struct Action_1_tA52AED154B6BF7FC2F6E5C7FF9EB83083A14587B  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>
struct Action_1_t229C6DB03F82E8A2201F49AB72795F9E8681C444  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.SignInStatus>
struct Action_1_t38A40574AB80CC30FF578C805B326880626B49AF  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action`1<GooglePlayGames.BasicApi.UIStatus>
struct Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF  : public MulticastDelegate_t
{
};

// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_t239560480D2FF80B907D2170BCBF5B82ADCC8AF5  : public MulticastDelegate_t
{
};

// System.Action`2<System.Int32Enum,System.Object>
struct Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// GooglePlayGames.OurUtils.NearbyHelperObject
struct NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields
{
	// GooglePlayGames.OurUtils.NearbyHelperObject GooglePlayGames.OurUtils.NearbyHelperObject::instance
	NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146* ___instance_4;
	// System.Double GooglePlayGames.OurUtils.NearbyHelperObject::mAdvertisingRemaining
	double ___mAdvertisingRemaining_5;
	// System.Double GooglePlayGames.OurUtils.NearbyHelperObject::mDiscoveryRemaining
	double ___mDiscoveryRemaining_6;
	// GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient GooglePlayGames.OurUtils.NearbyHelperObject::mClient
	RuntimeObject* ___mClient_7;
};

// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::localQueue
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___localQueue_7;
};

struct PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields
{
	// GooglePlayGames.OurUtils.PlayGamesHelperObject GooglePlayGames.OurUtils.PlayGamesHelperObject::instance
	PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F* ___instance_4;
	// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::sIsDummy
	bool ___sIsDummy_5;
	// System.Collections.Generic.List`1<System.Action> GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueue
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ___sQueue_6;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.OurUtils.PlayGamesHelperObject::sQueueEmpty
	bool ___sQueueEmpty_8;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sPauseCallbackList
	List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* ___sPauseCallbackList_9;
	// System.Collections.Generic.List`1<System.Action`1<System.Boolean>> GooglePlayGames.OurUtils.PlayGamesHelperObject::sFocusCallbackList
	List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* ___sFocusCallbackList_10;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
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
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43  : public RuntimeArray
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
// GooglePlayGames.BasicApi.Achievement[]
struct AchievementU5BU5D_t09D01F32899EC2D71ADFF17E5B8FBA83E5094C62  : public RuntimeArray
{
	ALIGN_FIELD (8) Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* m_Items[1];

	inline Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042  : public RuntimeArray
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
// GooglePlayGames.PlayGamesScore[]
struct PlayGamesScoreU5BU5D_t31A3C8031BCADB48F59385BACBD33920CD783D07  : public RuntimeArray
{
	ALIGN_FIELD (8) PlayGamesScore_tB8ECE78BCBA5F9EBF68034D6792DDAE96AF748F9* m_Items[1];

	inline PlayGamesScore_tB8ECE78BCBA5F9EBF68034D6792DDAE96AF748F9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayGamesScore_tB8ECE78BCBA5F9EBF68034D6792DDAE96AF748F9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayGamesScore_tB8ECE78BCBA5F9EBF68034D6792DDAE96AF748F9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PlayGamesScore_tB8ECE78BCBA5F9EBF68034D6792DDAE96AF748F9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayGamesScore_tB8ECE78BCBA5F9EBF68034D6792DDAE96AF748F9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayGamesScore_tB8ECE78BCBA5F9EBF68034D6792DDAE96AF748F9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke(const EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C& unmarshaled, EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke_back(const EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke& marshaled, EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C& unmarshaled);
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke_cleanup(EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com(const EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C& unmarshaled, EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com_back(const EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com& marshaled, EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C& unmarshaled);
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com_cleanup(EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com& marshaled);

// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.TimeSpan>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_gshared (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Int32Enum>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32Enum,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m05605BFAA1396765DE23112419D8E6F797B65101_gshared_inline (Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F* __this, int32_t ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Misc_CheckNotNull_TisRuntimeObject_mC83BADAAE6CA29E791B8E8F2BCB7E1509A278800_gshared (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_gshared (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m37D0109A49F7FF75E613FFC0FA9863BEF73D2638_gshared_inline (Action_1_t2AA378968D179CE7EFB8362F828F95AE0E912E67* __this, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mFB556BA0E8224DD47A073CB06DD16AE047FC546B_gshared_inline (Action_1_t764690D8533B83F132388734EC2965A2712754D9* __this, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ___obj0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.Android.AndroidTaskUtils/TaskOnFailedProxy::.ctor(System.Action`1<UnityEngine.AndroidJavaObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskOnFailedProxy__ctor_m5C7D847D4746F4D9E00F0CEB96E714E5D12768D9 (TaskOnFailedProxy_tB6C5E72CEFD2E35C591FD1BE3F6FCCA3CA985B79* __this, Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* ___callback0, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___methodName0, ___args1, method);
}
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___javaInterface0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AndroidJavaObject>::Invoke(T)
inline void Action_1_Invoke_mF1A9E047B412B279EA3AC2BFF9E1754B2C45EA56_inline (Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594*, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m70D49F7493E113CB929293FB9A519446C76932D4 (U3CU3Ec__DisplayClass8_0_tCEC6F202BDA31BF5F1DBF96748C6AEBFE9736A80* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunOnGameThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_RunOnGameThread_mC9C5858B42DCB027670176AB4C2FC885748D1B48 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mE2C44C2E459C3B71F0C60E7A97F7B6504C3BD6FC (U3CU3Ec__DisplayClass9_0_t286159F89C45AEFF13DC278B791E70D0ABD58D72* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mBBF05E32BAB548268954742D9AA3378FE693AC1E (U3CU3Ec__DisplayClass10_0_t968B9362DF4A00AE3730D328E35A2074CA135669* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.String GooglePlayGames.OurUtils.Logger::ToLogMessage(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Logger_ToLogMessage_m2573B67BE3C4E447C5A3538BDC25E84DE627C034 (String_t* ___prefix0, String_t* ___logType1, String_t* ___msg2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.Logger/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m74349611E9593AEF3C286F461AA2C4790657BCD9 (U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7 (RuntimeArray* ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray* ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<GooglePlayGames.OurUtils.NearbyHelperObject>()
inline NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146* GameObject_AddComponent_TisNearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_m4909A551253E9F3E0EC3AE82D2F98A8DA1B7653B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject__ctor_mB9816B1FECE0EDC7ECBBECABBE8876E4DEEA2195 (NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
inline bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, const RuntimeMethod*))Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.TimeSpan>::get_Value()
inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3 (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method)
{
	return ((  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, const RuntimeMethod*))Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_gshared)(__this, method);
}
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Double GooglePlayGames.OurUtils.NearbyHelperObject::ToSeconds(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NearbyHelperObject_ToSeconds_m2979D29F05ADFC791E46738A59A5F0C7FDB51C9B (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___span0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// T UnityEngine.GameObject::AddComponent<GooglePlayGames.OurUtils.PlayGamesHelperObject>()
inline PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F* GameObject_AddComponent_TisPlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_m4CB8623CF1F8CBA70C0D8F04A9D6330E7F5F800D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject__ctor_m2B2E6453DEF28A29E8D806605D83662BA8384DAB (PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m62D624713A455A2F1871FEFD3A39B38FBEF3A450 (U3CU3Ec__DisplayClass10_0_t042EF451EC4B656D740E40E3CBD6CF1EFAD1BD10* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Action>::Add(T)
inline void List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
inline void List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___collection0, method);
}
// T System.Collections.Generic.List`1<System.Action>::get_Item(System.Int32)
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
inline int32_t List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::GetEnumerator()
inline Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50 List_1_GetEnumerator_m35ECF228FCE04D6BC156DC5841E12EC008F35C25 (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50 (*) (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::Dispose()
inline void Enumerator_Dispose_m993432E6F59A9F04D89EB6B02C6F902AA380E783 (Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::get_Current()
inline Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* Enumerator_get_Current_m29B914A68B38CB68DBA414C2AB9BD5B5807B9DAF_inline (Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50* __this, const RuntimeMethod* method)
{
	return ((  Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* (*) (Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.Logger::e(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_e_m7AA171750BC8FBF664E6E88509DBB313E85DA5DF (String_t* ___msg0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action`1<System.Boolean>>::MoveNext()
inline bool Enumerator_MoveNext_m4AEB802C574E8B550BAF83C6EA8F835635C542EB (Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::Contains(T)
inline bool List_1_Contains_mF171865461EA69D2AF7CBAD748F52D7CEA7897C9 (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713*, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::Add(T)
inline void List_1_Add_m516CC7340C5C8194052845BC1E0A320E218DAD7F_inline (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713*, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::Remove(T)
inline bool List_1_Remove_mD2CEA2EADFD5F476B0C1329AC086A662142362DA (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713*, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Boolean>>::.ctor()
inline void List_1__ctor_mFD5B5846BC30FFDBBCDB78A0F7537F9D8A9074EC (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddMilliseconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___value0, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, int32_t ___kind7, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.DummyClient::LogUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A (const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.SignInStatus>::Invoke(T)
inline void Action_1_Invoke_m3CF94880784BE8A5EED9440FD26C15A78976FD3F_inline (Action_1_t38A40574AB80CC30FF578C805B326880626B49AF* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t38A40574AB80CC30FF578C805B326880626B49AF*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void GooglePlayGames.BasicApi.PlayerStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__ctor_m6F5119310FBCCA1C3FAEBADFFEEEB65DEF3B99C9 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>::Invoke(T1,T2)
inline void Action_2_Invoke_m531F4C263F0D60ADCEE06B2D0C4E272A360FE9FC_inline (Action_2_t239560480D2FF80B907D2170BCBF5B82ADCC8AF5* __this, int32_t ___arg10, PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t239560480D2FF80B907D2170BCBF5B82ADCC8AF5*, int32_t, PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513*, const RuntimeMethod*))Action_2_Invoke_m05605BFAA1396765DE23112419D8E6F797B65101_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(T)
inline void Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223_inline (Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* __this, IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78*, IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<GooglePlayGames.BasicApi.Achievement[]>::Invoke(T)
inline void Action_1_Invoke_m67BC7C74671506FB1CC276AB0A0C1B88DF498126_inline (Action_1_t4316DC28EEB660D34DF77C3D6317B5EA7B202924* __this, AchievementU5BU5D_t09D01F32899EC2D71ADFF17E5B8FBA83E5094C62* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4316DC28EEB660D34DF77C3D6317B5EA7B202924*, AchievementU5BU5D_t09D01F32899EC2D71ADFF17E5B8FBA83E5094C62*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<GooglePlayGames.BasicApi.UIStatus>::Invoke(T)
inline void Action_1_Invoke_mEDF8D512524D5E093FFEBDB6251BF7D328733484_inline (Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>::Invoke(T)
inline void Action_1_Invoke_mBE539CBA970EDE7980607A8210B5F9BC31A9D6AD_inline (Action_1_t229C6DB03F82E8A2201F49AB72795F9E8681C444* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t229C6DB03F82E8A2201F49AB72795F9E8681C444*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>::Invoke(T)
inline void Action_1_Invoke_m0ADB4F69EFB7A77DF48E8CC25BAFA07EC28F864D_inline (Action_1_tFEA0292F779769AD734C07DADE23F1B531A4EC95* __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tFEA0292F779769AD734C07DADE23F1B531A4EC95*, int32_t, const RuntimeMethod*))Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline)(__this, ___obj0, method);
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::.ctor(System.String,GooglePlayGames.BasicApi.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData__ctor_m109E3BA0F8C1D1CA502022E056D20AA3A34CDA90 (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, String_t* ___leaderboardId0, int32_t ___status1, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>::Invoke(T)
inline void Action_1_Invoke_mF2FBCE02FEEA0242E8384390FA029E4E67B4FDE9_inline (Action_1_tA52AED154B6BF7FC2F6E5C7FF9EB83083A14587B* __this, LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA52AED154B6BF7FC2F6E5C7FF9EB83083A14587B*, LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.String GooglePlayGames.BasicApi.ScorePageToken::get_LeaderboardId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScorePageToken_get_LeaderboardId_mBEBA3AD6E37CF08D4F220EDBD40DCFEC3A65D9A5 (ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_d_m7B222C8EEF0A9270A4A3201A3BC7E8F0781B4D36 (String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::.ctor()
inline void List_1__ctor_mEB2C87F6A8974287C241AA2AF2439D9CEB7FD59D (List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::ToArray()
inline PlayGamesScoreU5BU5D_t31A3C8031BCADB48F59385BACBD33920CD783D07* List_1_ToArray_m73D6D1EC8C0647CD0EF417338A5F8075EA6A7D0A (List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C* __this, const RuntimeMethod* method)
{
	return ((  PlayGamesScoreU5BU5D_t31A3C8031BCADB48F59385BACBD33920CD783D07* (*) (List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::Add(T)
inline void List_1_Add_mD9589D237AA0A6107148FEEA4734D2C62A8374D4_inline (List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C* __this, PlayGamesScore_tB8ECE78BCBA5F9EBF68034D6792DDAE96AF748F9* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C*, PlayGamesScore_tB8ECE78BCBA5F9EBF68034D6792DDAE96AF748F9*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<GooglePlayGames.PlayGamesScore>::get_Count()
inline int32_t List_1_get_Count_mC1686B471742132A119A13D13229321826F22A6B_inline (List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void GooglePlayGames.PlayGamesUserProfile::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile__ctor_m097C98C051115B5EA6EB84682574E51328299FB8 (PlayGamesUserProfile_tEC3D4D5F9E3BCF681A4E64A7C3D73489F7BB6D32* __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.PlayGamesUserProfile::.ctor(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesUserProfile__ctor_mF580078A01CDE4789C0CC04B4433AFE0B9D0DEE6 (PlayGamesUserProfile_tEC3D4D5F9E3BCF681A4E64A7C3D73489F7BB6D32* __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, bool ___isFriend3, const RuntimeMethod* method) ;
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfPurchases_m89B6E4A18BF6D64431AAEAD2CBA9313A1D7CC88A (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_AvgSessionLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_AvgSessionLength_m7706A60262AAC2EB855F5407CC49ED58423D45E9 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) ;
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_DaysSinceLastPlayed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_DaysSinceLastPlayed_mE88498CBD85AA36070BBC1CDFBB8B40675F2AA85 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) ;
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfSessions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfSessions_m18D64D164F75509C561124A5A15C4817401C7974 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SessPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SessPercentile_m37D358BFC7BAAC0CC244CEAC6B62F1920678E4FF (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SpendPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SpendPercentile_mE001119D91E5CE44670C4F5A50E58165EEE2F175 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_ChurnProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_ChurnProbability_m8CE0C33E3A35BCA4C7D06F883C80F0B0A4C4EBCC (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_HighSpenderProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_HighSpenderProbability_m2C4D3722D002A278C84C7D3648255C1C845E5F63 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) ;
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_TotalSpendNext28Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_TotalSpendNext28Days_m0B46574D8F26214ACAF329E6FC82BC834DDDB817 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_mFBA5FB3EE32FDBC4A51DF93E1B8C8292CC5C7C14 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 ___builder0, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsDescriptionUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mAA4E078DE38089EC25D925A39EB8A93DAFC67FC4 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m8ECA7BE5BFA92D0AC2D61881ED513DA64623332D (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsCoverImageUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_mA7F232A85D35F63B2558FE71A55248BB9A05E896 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) ;
// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPngCoverImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mA7647A08F7F963020D21FBF5C0A40DB777C467F3 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsPlayedTimeUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m2152967C608A38E561F49968DE7983BF8BAA9A40 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPlayedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m8D6718C8100611C88CA33EBAB6E726BC049E2069 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.String>(T)
inline String_t* Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545 (String_t* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_mC83BADAAE6CA29E791B8E8F2BCB7E1509A278800_gshared)(___value0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedDescription_mE9B7EF6DFD45DCB1893C4CC4390DEDB461199110 (Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* __this, String_t* ___description0, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedPngCoverImage_m2484990C7D5DFB84F5F933A2125BBC19596CDBB0 (Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___newPngCoverImage0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
inline void Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*))Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_gshared)(__this, ___value0, method);
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedPlayedTime_mA0DD09952CA1BCED3A97AA6505CBC078339E1E2D (Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___newPlayedTime0, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0 Builder_Build_m8EDC59A0D8E7D6DD3F7855B9975D147849F400FD (Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Nearby.AdvertisingResult::.ctor(GooglePlayGames.BasicApi.ResponseStatus,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvertisingResult__ctor_m15D7590EA615D30F680CB328BBDB198A523CC891 (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, int32_t ___status0, String_t* ___localEndpointName1, const RuntimeMethod* method) ;
// System.Boolean GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Succeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvertisingResult_get_Succeeded_m9981EE0B31926BC579FBD2D70ECBB82C66314955 (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_m15D8CEBEB8D857960DA7435B2B98EAF9C1B1E7F3 (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_mCC369A10E130C752357C1155FCD20DED9CF868A2 (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Nearby.EndpointDetails::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndpointDetails__ctor_m42A92D99714095AC5995C882AB7881A396A9FA52 (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Byte[]>(T)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m1FFA4C1CAB96A873CE27E749AF898DA83A14E854 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_mC83BADAAE6CA29E791B8E8F2BCB7E1509A278800_gshared)(___value0, method);
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionRequest::.ctor(System.String,System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionRequest__ctor_mDF66363E2D62D12229F19F0EFAAA9A721A1309E0 (ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* __this, String_t* ___remoteEndpointId0, String_t* ___remoteEndpointName1, String_t* ___serviceId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_RemoteEndpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C ConnectionRequest_get_RemoteEndpoint_m48F21C567D148A57B5AB4A00B6FF403217366C72 (ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* __this, const RuntimeMethod* method) ;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m3D13DE9B4C8C017BB0F1DCA02A6F1B4A834A70B0 (ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* __this, const RuntimeMethod* method) ;
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.ctor(System.Int64,System.String,GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method) ;
// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_mCE3D71D03B189859430A9554AAA444DA334BB7BA (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mB73CBEDE78BD068E2FBAFFA55AAA478F1928C39E (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) ;
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_m50721201BDD16E18CCBD9A5E05302B0AC98384FD (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) ;
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m63A2E17969A99A44E880B2580A7CC4CD3E890412 (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>::Invoke(T)
inline void Action_1_Invoke_m37D0109A49F7FF75E613FFC0FA9863BEF73D2638_inline (Action_1_t2AA378968D179CE7EFB8362F828F95AE0E912E67* __this, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2AA378968D179CE7EFB8362F828F95AE0E912E67*, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C, const RuntimeMethod*))Action_1_Invoke_m37D0109A49F7FF75E613FFC0FA9863BEF73D2638_gshared_inline)(__this, ___obj0, method);
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Rejected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ConnectionResponse_Rejected_m14B968B81CCAC54FAFEAA3D6A22A429966E26CA5 (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) ;
// System.Void System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>::Invoke(T)
inline void Action_1_Invoke_mFB556BA0E8224DD47A073CB06DD16AE047FC546B_inline (Action_1_t764690D8533B83F132388734EC2965A2712754D9* __this, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t764690D8533B83F132388734EC2965A2712754D9*, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71, const RuntimeMethod*))Action_1_Invoke_mFB556BA0E8224DD47A073CB06DD16AE047FC546B_gshared_inline)(__this, ___obj0, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_EndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_m5F4E6619FABAF16FBDE2940483FB1752B319DDCC (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_mED3DF73757840F813083F34F0D2F33D409C5AED8 (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, const RuntimeMethod* method) ;
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_m37A34FB2859BA3561172C799410A0B0A118AD094 (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, const RuntimeMethod* method) ;
// T GooglePlayGames.OurUtils.Misc::CheckNotNull<System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>>(T)
inline Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* Misc_CheckNotNull_TisAction_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_mA693A09455752E9E95F88BBDB32BB9E68D811FE3 (Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* ___value0, const RuntimeMethod* method)
{
	return ((  Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* (*) (Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763*, const RuntimeMethod*))Misc_CheckNotNull_TisRuntimeObject_mC83BADAAE6CA29E791B8E8F2BCB7E1509A278800_gshared)(___value0, method);
}
// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionConfiguration__ctor_mB1427DC130517FC2B16AF9BAAB94185A9916A18E (NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* __this, Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* ___callback0, int64_t ___localClientId1, const RuntimeMethod* method) ;
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_m98FA98E0D7B2410024B8B74DA80D8E5E041DDB28 (NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* __this, const RuntimeMethod* method) ;
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* NearbyConnectionConfiguration_get_InitializationCallback_mE751BCEF68A7D7CEDB42DA5D60EF1C829AB78B40 (NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.Android.AndroidTaskUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidTaskUtils__ctor_m1F7A746A629E19F9840D39BEA9C7876A2B400A95 (AndroidTaskUtils_t029A74638E211889DF6771A9FC36E925A93F255D* __this, const RuntimeMethod* method) 
{
	{
		// private AndroidTaskUtils()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidTaskUtils::AddOnFailureListener(UnityEngine.AndroidJavaObject,System.Action`1<UnityEngine.AndroidJavaObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidTaskUtils_AddOnFailureListener_m0D6EC0349363CF6554E1B75766E738FF33859AF9 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___task0, Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* ___callback1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskOnFailedProxy_tB6C5E72CEFD2E35C591FD1BE3F6FCCA3CA985B79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral756F726A317305EDA51B7C3ED9A0E521D2504AF0);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// using (task.Call<AndroidJavaObject>("addOnFailureListener", new TaskOnFailedProxy(callback))) ;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___task0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* L_3 = ___callback1;
		TaskOnFailedProxy_tB6C5E72CEFD2E35C591FD1BE3F6FCCA3CA985B79* L_4 = (TaskOnFailedProxy_tB6C5E72CEFD2E35C591FD1BE3F6FCCA3CA985B79*)il2cpp_codegen_object_new(TaskOnFailedProxy_tB6C5E72CEFD2E35C591FD1BE3F6FCCA3CA985B79_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TaskOnFailedProxy__ctor_m5C7D847D4746F4D9E00F0CEB96E714E5D12768D9(L_4, L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteral756F726A317305EDA51B7C3ED9A0E521D2504AF0, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_0;
					if (!L_6)
					{
						goto IL_0029;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_0;
					NullCheck(L_7);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_7);
				}

IL_0029:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_002a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002a:
	{
		// }
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
// System.Void GooglePlayGames.Android.AndroidTaskUtils/TaskOnFailedProxy::.ctor(System.Action`1<UnityEngine.AndroidJavaObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskOnFailedProxy__ctor_m5C7D847D4746F4D9E00F0CEB96E714E5D12768D9 (TaskOnFailedProxy_tB6C5E72CEFD2E35C591FD1BE3F6FCCA3CA985B79* __this, Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73FC55BE751EC7926E1001D18150891CED5D15CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("com/google/android/gms/tasks/OnFailureListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral73FC55BE751EC7926E1001D18150891CED5D15CC, NULL);
		// mCallback = callback;
		Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* L_0 = ___callback0;
		__this->___mCallback_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mCallback_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void GooglePlayGames.Android.AndroidTaskUtils/TaskOnFailedProxy::onFailure(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskOnFailedProxy_onFailure_mEE4371F327D1F5565E5317FD048A0578488D2714 (TaskOnFailedProxy_tB6C5E72CEFD2E35C591FD1BE3F6FCCA3CA985B79* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// using (exception)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ___exception0;
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0014:
			{// begin finally (depth: 1)
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = V_0;
					if (!L_1)
					{
						goto IL_001e;
					}
				}
				{
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_001e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// mCallback(exception);
			Action_1_tBD9457F0872CC7E6C1468CA37E6EF9D4403E1594* L_3 = __this->___mCallback_4;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ___exception0;
			NullCheck(L_3);
			Action_1_Invoke_mF1A9E047B412B279EA3AC2BFF9E1754B2C45EA56_inline(L_3, L_4, NULL);
			goto IL_001f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001f:
	{
		// }
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
// System.Boolean GooglePlayGames.OurUtils.Logger::get_DebugLogEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Logger_get_DebugLogEnabled_mEC3A726A71894E345C31BE369D4024CDEB7796D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// get { return debugLogEnabled; }
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		bool L_0 = ((Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var))->___debugLogEnabled_0;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return debugLogEnabled; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::set_DebugLogEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_set_DebugLogEnabled_mDB04550B7A84EF44998480FD1E64C1927155BC60 (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { debugLogEnabled = value; }
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		((Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var))->___debugLogEnabled_0 = L_0;
		// set { debugLogEnabled = value; }
		return;
	}
}
// System.Boolean GooglePlayGames.OurUtils.Logger::get_WarningLogEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Logger_get_WarningLogEnabled_m9DF80BC7237D69418A8C30A3E2B51222CE17FFEF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// get { return warningLogEnabled; }
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		bool L_0 = ((Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var))->___warningLogEnabled_1;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return warningLogEnabled; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::set_WarningLogEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_set_WarningLogEnabled_m9F269654E46D7C27EE1445BB6B35DCD3AAFCF961 (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { warningLogEnabled = value; }
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		((Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var))->___warningLogEnabled_1 = L_0;
		// set { warningLogEnabled = value; }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::d(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_d_m7B222C8EEF0A9270A4A3201A3BC7E8F0781B4D36 (String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_m500FEACCAFA3AEA76C97E5390C596DEA02F4C5BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_tCEC6F202BDA31BF5F1DBF96748C6AEBFE9736A80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_tCEC6F202BDA31BF5F1DBF96748C6AEBFE9736A80* V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass8_0_tCEC6F202BDA31BF5F1DBF96748C6AEBFE9736A80* L_0 = (U3CU3Ec__DisplayClass8_0_tCEC6F202BDA31BF5F1DBF96748C6AEBFE9736A80*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_tCEC6F202BDA31BF5F1DBF96748C6AEBFE9736A80_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass8_0__ctor_m70D49F7493E113CB929293FB9A519446C76932D4(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_tCEC6F202BDA31BF5F1DBF96748C6AEBFE9736A80* L_1 = V_0;
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		L_1->___msg_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___msg_0), (void*)L_2);
		// if (debugLogEnabled)
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		bool L_3 = ((Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var))->___debugLogEnabled_0;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() =>
		//     Debug.Log(ToLogMessage(string.Empty, "DEBUG", msg)));
		U3CU3Ec__DisplayClass8_0_tCEC6F202BDA31BF5F1DBF96748C6AEBFE9736A80* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_m500FEACCAFA3AEA76C97E5390C596DEA02F4C5BA_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_mC9C5858B42DCB027670176AB4C2FC885748D1B48(L_6, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::w(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_w_m7C2FAFD542FDE2F248A25E51BDF7968DEB519258 (String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m6FCF5F960E11CDEF1AB4BD25B3646D47848AD9BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t286159F89C45AEFF13DC278B791E70D0ABD58D72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t286159F89C45AEFF13DC278B791E70D0ABD58D72* V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass9_0_t286159F89C45AEFF13DC278B791E70D0ABD58D72* L_0 = (U3CU3Ec__DisplayClass9_0_t286159F89C45AEFF13DC278B791E70D0ABD58D72*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t286159F89C45AEFF13DC278B791E70D0ABD58D72_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass9_0__ctor_mE2C44C2E459C3B71F0C60E7A97F7B6504C3BD6FC(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t286159F89C45AEFF13DC278B791E70D0ABD58D72* L_1 = V_0;
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		L_1->___msg_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___msg_0), (void*)L_2);
		// if (warningLogEnabled)
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		bool L_3 = ((Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var))->___warningLogEnabled_1;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() =>
		//     Debug.LogWarning(ToLogMessage("!!!", "WARNING", msg)));
		U3CU3Ec__DisplayClass9_0_t286159F89C45AEFF13DC278B791E70D0ABD58D72* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m6FCF5F960E11CDEF1AB4BD25B3646D47848AD9BF_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_mC9C5858B42DCB027670176AB4C2FC885748D1B48(L_6, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::e(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_e_m7AA171750BC8FBF664E6E88509DBB313E85DA5DF (String_t* ___msg0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_m86999BB25B428A036C61A8D4E89E14B1A59E80D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t968B9362DF4A00AE3730D328E35A2074CA135669_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_t968B9362DF4A00AE3730D328E35A2074CA135669* V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass10_0_t968B9362DF4A00AE3730D328E35A2074CA135669* L_0 = (U3CU3Ec__DisplayClass10_0_t968B9362DF4A00AE3730D328E35A2074CA135669*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t968B9362DF4A00AE3730D328E35A2074CA135669_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass10_0__ctor_mBBF05E32BAB548268954742D9AA3378FE693AC1E(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_t968B9362DF4A00AE3730D328E35A2074CA135669* L_1 = V_0;
		String_t* L_2 = ___msg0;
		NullCheck(L_1);
		L_1->___msg_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___msg_0), (void*)L_2);
		// if (warningLogEnabled)
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		bool L_3 = ((Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var))->___warningLogEnabled_1;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// PlayGamesHelperObject.RunOnGameThread(() =>
		//     Debug.LogWarning(ToLogMessage("***", "ERROR", msg)));
		U3CU3Ec__DisplayClass10_0_t968B9362DF4A00AE3730D328E35A2074CA135669* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_m86999BB25B428A036C61A8D4E89E14B1A59E80D3_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_mC9C5858B42DCB027670176AB4C2FC885748D1B48(L_6, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.String GooglePlayGames.OurUtils.Logger::describe(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Logger_describe_m7167C796D513CB3A2F0B6300C332384CE8CA99C8 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8B22370EF0FBA1E20C306924FF3234345072FC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// return b == null ? "(null)" : "byte[" + b.Length + "]";
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___b0;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___b0;
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralB8B22370EF0FBA1E20C306924FF3234345072FC0, L_2, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		G_B3_0 = L_3;
		goto IL_0025;
	}

IL_0020:
	{
		G_B3_0 = _stringLiteralE6971243F7EB358A7C6E0D382075D789ADC51C31;
	}

IL_0025:
	{
		V_1 = G_B3_0;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		String_t* L_4 = V_1;
		return L_4;
	}
}
// System.String GooglePlayGames.OurUtils.Logger::ToLogMessage(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Logger_ToLogMessage_m2573B67BE3C4E447C5A3538BDC25E84DE627C034 (String_t* ___prefix0, String_t* ___logType1, String_t* ___msg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14AEDBE883EF2732471820EABAC5E9543381AF1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35B82DD0E904662F7BBAD3252878566E7BB3A535);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// string timeString = null;
		V_0 = (String_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		// timeString = DateTime.Now.ToString("MM/dd/yy H:mm:ss zzz");
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = DateTime_ToString_m6963A84785C320DA776C9FCFFEDAF26C8F1A8D78((&V_1), _stringLiteral14AEDBE883EF2732471820EABAC5E9543381AF1A, NULL);
		V_0 = L_1;
		goto IL_004a;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{// begin catch(System.Exception)
		{
			// catch (Exception)
			// PlayGamesHelperObject.RunOnGameThread(() =>
			//     Debug.LogWarning("*** [Play Games Plugin " + PluginVersion.VersionString + "] ERROR: Failed to format DateTime.Now"));
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_il2cpp_TypeInfo_var)));
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_il2cpp_TypeInfo_var))))->___U3CU3E9__12_0_1;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = L_2;
			G_B3_0 = L_3;
			if (L_3)
			{
				G_B4_0 = L_3;
				goto IL_003b;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_il2cpp_TypeInfo_var)));
			U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2* L_4 = ((U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_il2cpp_TypeInfo_var))))->___U3CU3E9_0;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
			NullCheck(L_5);
			Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, L_4, (intptr_t)((void*)((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CToLogMessageU3Eb__12_0_mDD9678C6AC7A4CD1D0BF99248C8177EFE7550908_RuntimeMethod_var))), NULL);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = L_5;
			((U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_il2cpp_TypeInfo_var))))->___U3CU3E9__12_0_1 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_il2cpp_TypeInfo_var))))->___U3CU3E9__12_0_1), (void*)L_6);
			G_B4_0 = L_6;
		}

IL_003b:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var)));
			PlayGamesHelperObject_RunOnGameThread_mC9C5858B42DCB027670176AB4C2FC885748D1B48(G_B4_0, NULL);
			// timeString = string.Empty;
			String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
			V_0 = L_7;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_004a;
		}
	}// end catch (depth: 1)

IL_004a:
	{
		// return string.Format("{0} [Play Games Plugin " + PluginVersion.VersionString+ "] {1} {2}: {3}",
		//     prefix, timeString, logType, msg);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		String_t* L_10 = ___prefix0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		String_t* L_12 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_11;
		String_t* L_14 = ___logType1;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_13;
		String_t* L_16 = ___msg2;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_16);
		String_t* L_17;
		L_17 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral35B82DD0E904662F7BBAD3252878566E7BB3A535, L_15, NULL);
		V_2 = L_17;
		goto IL_006d;
	}

IL_006d:
	{
		// }
		String_t* L_18 = V_2;
		return L_18;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__ctor_m3286129EAA1EBEABAE0DCD08B23194357817F4F0 (Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__cctor_m0F2DB63B53C34E638F4D348967B58F1F12D54D2B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static bool debugLogEnabled = false;
		((Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var))->___debugLogEnabled_0 = (bool)0;
		// private static bool warningLogEnabled = true;
		((Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_StaticFields*)il2cpp_codegen_static_fields_for(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var))->___warningLogEnabled_1 = (bool)1;
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
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m70D49F7493E113CB929293FB9A519446C76932D4 (U3CU3Ec__DisplayClass8_0_tCEC6F202BDA31BF5F1DBF96748C6AEBFE9736A80* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass8_0::<d>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CdU3Eb__0_m500FEACCAFA3AEA76C97E5390C596DEA02F4C5BA (U3CU3Ec__DisplayClass8_0_tCEC6F202BDA31BF5F1DBF96748C6AEBFE9736A80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral420970FC857D0E541C788790F58AA66962B22CC8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(ToLogMessage(string.Empty, "DEBUG", msg)));
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		String_t* L_1 = __this->___msg_0;
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Logger_ToLogMessage_m2573B67BE3C4E447C5A3538BDC25E84DE627C034(L_0, _stringLiteral420970FC857D0E541C788790F58AA66962B22CC8, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(L_2, NULL);
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
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mE2C44C2E459C3B71F0C60E7A97F7B6504C3BD6FC (U3CU3Ec__DisplayClass9_0_t286159F89C45AEFF13DC278B791E70D0ABD58D72* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass9_0::<w>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CwU3Eb__0_m6FCF5F960E11CDEF1AB4BD25B3646D47848AD9BF (U3CU3Ec__DisplayClass9_0_t286159F89C45AEFF13DC278B791E70D0ABD58D72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC68E6DD4D6678717C05B5B1EADED9792B1D6A551);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning(ToLogMessage("!!!", "WARNING", msg)));
		String_t* L_0 = __this->___msg_0;
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Logger_ToLogMessage_m2573B67BE3C4E447C5A3538BDC25E84DE627C034(_stringLiteralC68E6DD4D6678717C05B5B1EADED9792B1D6A551, _stringLiteralEA008AB922F24BD7FF67A671D99943A377F6F35A, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_1, NULL);
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
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mBBF05E32BAB548268954742D9AA3378FE693AC1E (U3CU3Ec__DisplayClass10_0_t968B9362DF4A00AE3730D328E35A2074CA135669* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c__DisplayClass10_0::<e>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CeU3Eb__0_m86999BB25B428A036C61A8D4E89E14B1A59E80D3 (U3CU3Ec__DisplayClass10_0_t968B9362DF4A00AE3730D328E35A2074CA135669* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning(ToLogMessage("***", "ERROR", msg)));
		String_t* L_0 = __this->___msg_0;
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Logger_ToLogMessage_m2573B67BE3C4E447C5A3538BDC25E84DE627C034(_stringLiteralB056053ED873F9751A6BF8D0EBEA1D10D0FF2F34, _stringLiteral8BD8EBBF9AAADE3A1911E0372AF7DEEFC2B7800D, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_1, NULL);
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
// System.Void GooglePlayGames.OurUtils.Logger/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA4DE2A141F7765EF30C7310DC0A924E7DF3366DB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2* L_0 = (U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2*)il2cpp_codegen_object_new(U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m74349611E9593AEF3C286F461AA2C4790657BCD9(L_0, NULL);
		((U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m74349611E9593AEF3C286F461AA2C4790657BCD9 (U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.Logger/<>c::<ToLogMessage>b__12_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CToLogMessageU3Eb__12_0_mDD9678C6AC7A4CD1D0BF99248C8177EFE7550908 (U3CU3Ec_tD89768FEE3BA8B42D1B01AE8ED8E6FAF5CF333A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E0C6CFB1B8F69C9CCBEA31C5888616C9C93F318);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogWarning("*** [Play Games Plugin " + PluginVersion.VersionString + "] ERROR: Failed to format DateTime.Now"));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral0E0C6CFB1B8F69C9CCBEA31C5888616C9C93F318, NULL);
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
// System.Boolean GooglePlayGames.OurUtils.Misc::BuffersAreIdentical(System.Byte[],System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Misc_BuffersAreIdentical_m41284D59C73A78194F75ED6F2FF1A24A28AC2898 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___a0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___b1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	{
		// if (a == b)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___a0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___b1;
		V_0 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_006b;
	}

IL_000e:
	{
		// if (a == null || b == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___a0;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___b1;
		G_B5_0 = ((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B5_0 = 1;
	}

IL_0018:
	{
		V_2 = (bool)G_B5_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_006b;
	}

IL_0021:
	{
		// if (a.Length != b.Length)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___a0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___b1;
		NullCheck(L_7);
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_006b;
	}

IL_0035:
	{
		// for (int i = 0; i < a.Length; i++)
		V_4 = 0;
		goto IL_005a;
	}

IL_003a:
	{
		// if (a[i] != b[i])
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___a0;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___b1;
		int32_t L_14 = V_4;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint8_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_5 = (bool)((((int32_t)((((int32_t)L_12) == ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_0053;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_006b;
	}

IL_0053:
	{
		// for (int i = 0; i < a.Length; i++)
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005a:
	{
		// for (int i = 0; i < a.Length; i++)
		int32_t L_19 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = ___a0;
		NullCheck(L_20);
		V_6 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))? 1 : 0);
		bool L_21 = V_6;
		if (L_21)
		{
			goto IL_003a;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_006b;
	}

IL_006b:
	{
		// }
		bool L_22 = V_1;
		return L_22;
	}
}
// System.Byte[] GooglePlayGames.OurUtils.Misc::GetSubsetBytes(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Misc_GetSubsetBytes_m0F781EE45718D550703DF4C73E29DD77541A2E42 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, int32_t ___offset1, int32_t ___length2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B15_0 = 0;
	{
		// if (array == null)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		V_1 = (bool)((((RuntimeObject*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// throw new ArgumentNullException("array");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Misc_GetSubsetBytes_m0F781EE45718D550703DF4C73E29DD77541A2E42_RuntimeMethod_var)));
	}

IL_0015:
	{
		// if (offset < 0 || offset >= array.Length)
		int32_t L_3 = ___offset1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_4 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___array0;
		NullCheck(L_5);
		G_B5_0 = ((((int32_t)((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0025;
	}

IL_0024:
	{
		G_B5_0 = 1;
	}

IL_0025:
	{
		V_2 = (bool)G_B5_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("offset");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral544DC80A2A82A08B6321F56F8987CB7E5DEED1C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Misc_GetSubsetBytes_m0F781EE45718D550703DF4C73E29DD77541A2E42_RuntimeMethod_var)));
	}

IL_0035:
	{
		// if (length < 0 || (array.Length - offset) < length)
		int32_t L_8 = ___length2;
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ___array0;
		NullCheck(L_9);
		int32_t L_10 = ___offset1;
		int32_t L_11 = ___length2;
		G_B10_0 = ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10))) < ((int32_t)L_11))? 1 : 0);
		goto IL_0044;
	}

IL_0043:
	{
		G_B10_0 = 1;
	}

IL_0044:
	{
		V_3 = (bool)G_B10_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0054;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("length");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_13 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Misc_GetSubsetBytes_m0F781EE45718D550703DF4C73E29DD77541A2E42_RuntimeMethod_var)));
	}

IL_0054:
	{
		// if (offset == 0 && length == array.Length)
		int32_t L_14 = ___offset1;
		if (L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___array0;
		NullCheck(L_16);
		G_B15_0 = ((((int32_t)L_15) == ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))? 1 : 0);
		goto IL_0060;
	}

IL_005f:
	{
		G_B15_0 = 0;
	}

IL_0060:
	{
		V_4 = (bool)G_B15_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_006c;
		}
	}
	{
		// return array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___array0;
		V_5 = L_18;
		goto IL_0083;
	}

IL_006c:
	{
		// byte[] piece = new byte[length];
		int32_t L_19 = ___length2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_19);
		V_0 = L_20;
		// Array.Copy(array, offset, piece, 0, length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = ___array0;
		int32_t L_22 = ___offset1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		int32_t L_24 = ___length2;
		Array_Copy_m2CC3EA1129E9B8EA82E6FA31EDE0D4F87BF67EC7((RuntimeArray*)L_21, L_22, (RuntimeArray*)L_23, 0, L_24, NULL);
		// return piece;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_0;
		V_5 = L_25;
		goto IL_0083;
	}

IL_0083:
	{
		// }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_5;
		return L_26;
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
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::CreateObject(GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_CreateObject_m0376E6666EBDFAEB64643C744143AFA20DFA609A (RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisNearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_m4909A551253E9F3E0EC3AE82D2F98A8DA1B7653B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF60DDE06C2C9D09E97ED4FEB8CA18A3747827F5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// if (instance != null)
		NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146* L_0 = ((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_004f;
	}

IL_0013:
	{
		// mClient = client;
		RuntimeObject* L_3 = ___client0;
		((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___mClient_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___mClient_7), (void*)L_3);
		// if (Application.isPlaying)
		bool L_4;
		L_4 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// GameObject obj = new GameObject("PlayGames_NearbyHelper");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_6, _stringLiteralFF60DDE06C2C9D09E97ED4FEB8CA18A3747827F5, NULL);
		V_2 = L_6;
		// DontDestroyOnLoad(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_7, NULL);
		// instance = obj.AddComponent<NearbyHelperObject>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_2;
		NullCheck(L_8);
		NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146* L_9;
		L_9 = GameObject_AddComponent_TisNearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_m4909A551253E9F3E0EC3AE82D2F98A8DA1B7653B(L_8, GameObject_AddComponent_TisNearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_m4909A551253E9F3E0EC3AE82D2F98A8DA1B7653B_RuntimeMethod_var);
		((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___instance_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___instance_4), (void*)L_9);
		goto IL_004f;
	}

IL_0043:
	{
		// instance = new NearbyHelperObject();
		NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146* L_10 = (NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146*)il2cpp_codegen_object_new(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		NearbyHelperObject__ctor_mB9816B1FECE0EDC7ECBBECABBE8876E4DEEA2195(L_10, NULL);
		((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___instance_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___instance_4), (void*)L_10);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Double GooglePlayGames.OurUtils.NearbyHelperObject::ToSeconds(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NearbyHelperObject_ToSeconds_m2979D29F05ADFC791E46738A59A5F0C7FDB51C9B (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___span0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!span.HasValue)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline((&___span0), Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// return 0;
		V_1 = (0.0);
		goto IL_0059;
	}

IL_001c:
	{
		// if (span.Value.TotalSeconds < 0)
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3((&___span0), Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var);
		V_3 = L_2;
		double L_3;
		L_3 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_3), NULL);
		V_2 = (bool)((((double)L_3) < ((double)(0.0)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		// return 0;
		V_1 = (0.0);
		goto IL_0059;
	}

IL_0047:
	{
		// return span.Value.TotalSeconds;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5;
		L_5 = Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3((&___span0), Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var);
		V_3 = L_5;
		double L_6;
		L_6 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_3), NULL);
		V_1 = L_6;
		goto IL_0059;
	}

IL_0059:
	{
		// }
		double L_7 = V_1;
		return L_7;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::StartAdvertisingTimer(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_StartAdvertisingTimer_m365248FCCBE6D5AC6D9D9D88055ED223B575CFCE (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___span0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mAdvertisingRemaining = ToSeconds(span);
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = ___span0;
		double L_1;
		L_1 = NearbyHelperObject_ToSeconds_m2979D29F05ADFC791E46738A59A5F0C7FDB51C9B(L_0, NULL);
		((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___mAdvertisingRemaining_5 = L_1;
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::StartDiscoveryTimer(System.Nullable`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_StartDiscoveryTimer_mE79D60794B4B28E72680CD531CA5081E6FF88888 (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___span0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mDiscoveryRemaining = ToSeconds(span);
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = ___span0;
		double L_1;
		L_1 = NearbyHelperObject_ToSeconds_m2979D29F05ADFC791E46738A59A5F0C7FDB51C9B(L_0, NULL);
		((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___mDiscoveryRemaining_6 = L_1;
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_Awake_m7843DB61A903767A94BBAA1911D2877624CECD27 (NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_0, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_OnDisable_mEE3406A77D551E1315093F4C8A614FAA72E58619 (NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (instance == this)
		NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146* L_0 = ((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, __this, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// instance = null;
		((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___instance_4 = (NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___instance_4), (void*)(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146*)NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject_Update_mA272E421CB61578029DB3186E1DAE45AEAE612F0 (NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INearbyConnectionClient_tBFE8F3C727285D4A45458AAD496AFBB7816429AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (mAdvertisingRemaining > 0)
		double L_0 = ((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___mAdvertisingRemaining_5;
		V_0 = (bool)((((double)L_0) > ((double)(0.0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		// mAdvertisingRemaining -= Time.deltaTime;
		double L_2 = ((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___mAdvertisingRemaining_5;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___mAdvertisingRemaining_5 = ((double)il2cpp_codegen_subtract(L_2, ((double)L_3)));
		// if (mAdvertisingRemaining < 0)
		double L_4 = ((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___mAdvertisingRemaining_5;
		V_1 = (bool)((((double)L_4) < ((double)(0.0)))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// mClient.StopAdvertising();
		RuntimeObject* L_6 = ((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___mClient_7;
		NullCheck(L_6);
		InterfaceActionInvoker0::Invoke(5 /* System.Void GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient::StopAdvertising() */, INearbyConnectionClient_tBFE8F3C727285D4A45458AAD496AFBB7816429AD_il2cpp_TypeInfo_var, L_6);
	}

IL_0048:
	{
	}

IL_0049:
	{
		// if (mDiscoveryRemaining > 0)
		double L_7 = ((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___mDiscoveryRemaining_6;
		V_2 = (bool)((((double)L_7) > ((double)(0.0)))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_009b;
		}
	}
	{
		// mDiscoveryRemaining -= Time.deltaTime;
		double L_9 = ((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___mDiscoveryRemaining_6;
		float L_10;
		L_10 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___mDiscoveryRemaining_6 = ((double)il2cpp_codegen_subtract(L_9, ((double)L_10)));
		// if (mDiscoveryRemaining < 0)
		double L_11 = ((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___mDiscoveryRemaining_6;
		V_3 = (bool)((((double)L_11) < ((double)(0.0)))? 1 : 0);
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_009a;
		}
	}
	{
		// mClient.StopDiscovery(mClient.GetServiceId());
		RuntimeObject* L_13 = ((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___mClient_7;
		RuntimeObject* L_14 = ((NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_StaticFields*)il2cpp_codegen_static_fields_for(NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146_il2cpp_TypeInfo_var))->___mClient_7;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = InterfaceFuncInvoker0< String_t* >::Invoke(14 /* System.String GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient::GetServiceId() */, INearbyConnectionClient_tBFE8F3C727285D4A45458AAD496AFBB7816429AD_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_13);
		InterfaceActionInvoker1< String_t* >::Invoke(9 /* System.Void GooglePlayGames.BasicApi.Nearby.INearbyConnectionClient::StopDiscovery(System.String) */, INearbyConnectionClient_tBFE8F3C727285D4A45458AAD496AFBB7816429AD_il2cpp_TypeInfo_var, L_13, L_15);
	}

IL_009a:
	{
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.NearbyHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyHelperObject__ctor_mB9816B1FECE0EDC7ECBBECABBE8876E4DEEA2195 (NearbyHelperObject_tF922DD4B9FF7734C47096F74E5196972C718E146* __this, const RuntimeMethod* method) 
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
// System.Boolean GooglePlayGames.OurUtils.PlatformUtils::get_Supported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformUtils_get_Supported_mB805E2F0158A0357BE81F4A0660129898D46556F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral151DE5DE7A9AF7DE7DC3064430378DDE294A20E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93F52B9BA33C3AE812AEF143ABDAA85AD673D882);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB9D77120DC158BF2D325D1BF185A01AB6C3C0D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var up = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_0;
		// var ca = up.GetStatic<AndroidJavaObject>("currentActivity");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_1, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_1 = L_2;
		// var packageManager = ca.Call<AndroidJavaObject>("getPackageManager");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_inline(Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_RuntimeMethod_var);
		NullCheck(L_3);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
		L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteralDB9D77120DC158BF2D325D1BF185A01AB6C3C0D8, L_4, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_2 = L_5;
		// AndroidJavaObject launchIntent = null;
		V_3 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
	}
	try
	{// begin try (depth: 1)
		//                    launchIntent =
		// packageManager.Call<AndroidJavaObject>("getLaunchIntentForPackage", "com.google.android.play.games");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral151DE5DE7A9AF7DE7DC3064430378DDE294A20E5);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral151DE5DE7A9AF7DE7DC3064430378DDE294A20E5);
		NullCheck(L_6);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9;
		L_9 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_6, _stringLiteral93F52B9BA33C3AE812AEF143ABDAA85AD673D882, L_8, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_3 = L_9;
		goto IL_0050;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0049;
		}
		throw e;
	}

CATCH_0049:
	{// begin catch(System.Exception)
		// catch (Exception)
		// return false;
		V_4 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0058;
	}// end catch (depth: 1)

IL_0050:
	{
		// return launchIntent != null;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_3;
		V_4 = (bool)((!(((RuntimeObject*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		goto IL_0058;
	}

IL_0058:
	{
		// }
		bool L_11 = V_4;
		return L_11;
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
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::CreateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_CreateObject_mA5F89E10242917E209537252CFC224264C6B8C0D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisPlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_m4CB8623CF1F8CBA70C0D8F04A9D6330E7F5F800D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA5C79471DFCE734BA20F373510B04EE3C99F7F1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// if (instance != null)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F* L_0 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_004f;
	}

IL_0013:
	{
		// if (Application.isPlaying)
		bool L_3;
		L_3 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		// GameObject obj = new GameObject("PlayGames_QueueRunner");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_5, _stringLiteralAA5C79471DFCE734BA20F373510B04EE3C99F7F1, NULL);
		V_2 = L_5;
		// DontDestroyOnLoad(obj);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_6, NULL);
		// instance = obj.AddComponent<PlayGamesHelperObject>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_2;
		NullCheck(L_7);
		PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F* L_8;
		L_8 = GameObject_AddComponent_TisPlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_m4CB8623CF1F8CBA70C0D8F04A9D6330E7F5F800D(L_7, GameObject_AddComponent_TisPlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_m4CB8623CF1F8CBA70C0D8F04A9D6330E7F5F800D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___instance_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___instance_4), (void*)L_8);
		goto IL_004f;
	}

IL_003d:
	{
		// instance = new PlayGamesHelperObject();
		PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F* L_9 = (PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F*)il2cpp_codegen_object_new(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		PlayGamesHelperObject__ctor_m2B2E6453DEF28A29E8D806605D83662BA8384DAB(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___instance_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___instance_4), (void*)L_9);
		// sIsDummy = true;
		((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sIsDummy_5 = (bool)1;
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_Awake_mC242D4413A1E8C14D3D3EB2DD3177D868207CA08 (PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_0, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_OnDisable_m8BCEB826404769FE7A38AF26B5E89BC5820C591E (PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (instance == this)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F* L_0 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, __this, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// instance = null;
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___instance_4 = (PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___instance_4), (void*)(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F*)NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_RunCoroutine_mAAD2630CD3F5D3EA62D02D9FAFAF9C2D57F73324 (RuntimeObject* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_mA6977F035C951F2EAC191F61097CC2FBEDC9D32F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t042EF451EC4B656D740E40E3CBD6CF1EFAD1BD10_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_t042EF451EC4B656D740E40E3CBD6CF1EFAD1BD10* V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass10_0_t042EF451EC4B656D740E40E3CBD6CF1EFAD1BD10* L_0 = (U3CU3Ec__DisplayClass10_0_t042EF451EC4B656D740E40E3CBD6CF1EFAD1BD10*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t042EF451EC4B656D740E40E3CBD6CF1EFAD1BD10_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass10_0__ctor_m62D624713A455A2F1871FEFD3A39B38FBEF3A450(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_t042EF451EC4B656D740E40E3CBD6CF1EFAD1BD10* L_1 = V_0;
		RuntimeObject* L_2 = ___action0;
		NullCheck(L_1);
		L_1->___action_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___action_0), (void*)L_2);
		// if (instance != null)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F* L_3 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		// RunOnGameThread(() => instance.StartCoroutine(action));
		U3CU3Ec__DisplayClass10_0_t042EF451EC4B656D740E40E3CBD6CF1EFAD1BD10* L_6 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_mA6977F035C951F2EAC191F61097CC2FBEDC9D32F_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_RunOnGameThread_mC9C5858B42DCB027670176AB4C2FC885748D1B48(L_7, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunOnGameThread(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_RunOnGameThread_mC9C5858B42DCB027670176AB4C2FC885748D1B48 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* V_2 = NULL;
	bool V_3 = false;
	{
		// if (action == null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		V_0 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// throw new ArgumentNullException("action");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlayGamesHelperObject_RunOnGameThread_mC9C5858B42DCB027670176AB4C2FC885748D1B48_RuntimeMethod_var)));
	}

IL_0015:
	{
		// if (sIsDummy)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		bool L_3 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sIsDummy_5;
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		// return;
		goto IL_0055;
	}

IL_0021:
	{
		// lock (sQueue)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_5 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sQueue_6;
		V_2 = L_5;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				{
					bool L_6 = V_3;
					if (!L_6)
					{
						goto IL_0054;
					}
				}
				{
					List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_7 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_7, NULL);
				}

IL_0054:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_8 = V_2;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_8, (&V_3), NULL);
			// sQueue.Add(action);
			il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_9 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sQueue_6;
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = ___action0;
			NullCheck(L_9);
			List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_9, L_10, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
			// sQueueEmpty = false;
			il2cpp_codegen_memory_barrier();
			((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sQueueEmpty_8 = (bool)0;
			goto IL_0055;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_Update_mB0ED1F3808A109A4CF53D5670C0A12DD5FF59338 (PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		// if (sIsDummy || sQueueEmpty)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		bool L_0 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sIsDummy_5;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		bool L_1 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sQueueEmpty_8;
		il2cpp_codegen_memory_barrier();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return;
		goto IL_009c;
	}

IL_001c:
	{
		// localQueue.Clear();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_3 = __this->___localQueue_7;
		NullCheck(L_3);
		List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline(L_3, List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
		// lock (sQueue)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_4 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sQueue_6;
		V_1 = L_4;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0061:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_2;
					if (!L_5)
					{
						goto IL_006b;
					}
				}
				{
					List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_6 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_6, NULL);
				}

IL_006b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_7 = V_1;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_7, (&V_2), NULL);
			// localQueue.AddRange(sQueue);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_8 = __this->___localQueue_7;
			il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_9 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sQueue_6;
			NullCheck(L_8);
			List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D(L_8, L_9, List_1_AddRange_m475DC02C782750D4036B11E287BC01ECB8313D1D_RuntimeMethod_var);
			// sQueue.Clear();
			List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_10 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sQueue_6;
			NullCheck(L_10);
			List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_inline(L_10, List_1_Clear_m344AD90676A608EA37B9DF93050BA9F80C23D17E_RuntimeMethod_var);
			// sQueueEmpty = true;
			il2cpp_codegen_memory_barrier();
			((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sQueueEmpty_8 = (bool)1;
			goto IL_006c;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006c:
	{
		// for (int i = 0; i < localQueue.Count; i++)
		V_3 = 0;
		goto IL_0088;
	}

IL_0070:
	{
		// localQueue[i].Invoke();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_11 = __this->___localQueue_7;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13;
		L_13 = List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D(L_11, L_12, List_1_get_Item_m8A119323481338039197B73D82916BB46DEE3C2D_RuntimeMethod_var);
		NullCheck(L_13);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_13, NULL);
		// for (int i = 0; i < localQueue.Count; i++)
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0088:
	{
		// for (int i = 0; i < localQueue.Count; i++)
		int32_t L_15 = V_3;
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_16 = __this->___localQueue_7;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline(L_16, List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_15) < ((int32_t)L_17))? 1 : 0);
		bool L_18 = V_4;
		if (L_18)
		{
			goto IL_0070;
		}
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_OnApplicationFocus_m16276D783624DE1D93B11D77BC1DEAB2CAD56196 (PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F* __this, bool ___focused0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m993432E6F59A9F04D89EB6B02C6F902AA380E783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4AEB802C574E8B550BAF83C6EA8F835635C542EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m29B914A68B38CB68DBA414C2AB9BD5B5807B9DAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35ECF228FCE04D6BC156DC5841E12EC008F35C25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// foreach (Action<bool> cb in sFocusCallbackList)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_0 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sFocusCallbackList_10;
		NullCheck(L_0);
		Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50 L_1;
		L_1 = List_1_GetEnumerator_m35ECF228FCE04D6BC156DC5841E12EC008F35C25(L_0, List_1_GetEnumerator_m35ECF228FCE04D6BC156DC5841E12EC008F35C25_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m993432E6F59A9F04D89EB6B02C6F902AA380E783((&V_0), Enumerator_Dispose_m993432E6F59A9F04D89EB6B02C6F902AA380E783_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004b_1;
			}

IL_000f_1:
			{
				// foreach (Action<bool> cb in sFocusCallbackList)
				Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2;
				L_2 = Enumerator_get_Current_m29B914A68B38CB68DBA414C2AB9BD5B5807B9DAF_inline((&V_0), Enumerator_get_Current_m29B914A68B38CB68DBA414C2AB9BD5B5807B9DAF_RuntimeMethod_var);
				V_1 = L_2;
			}
			try
			{// begin try (depth: 2)
				// cb(focused);
				Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = V_1;
				bool L_4 = ___focused0;
				NullCheck(L_3);
				Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_3, L_4, NULL);
				goto IL_004a_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0024_1;
				}
				throw e;
			}

CATCH_0024_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// Logger.e("Exception in OnApplicationFocus:" +
				//                e.Message + "\n" + e.StackTrace);
				Exception_t* L_5 = V_2;
				NullCheck(L_5);
				String_t* L_6;
				L_6 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
				Exception_t* L_7 = V_2;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Exception::get_StackTrace() */, L_7);
				String_t* L_9;
				L_9 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C451AC3EB5AB025342585D935B8CAF664FF385C)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)), L_8, NULL);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var)));
				Logger_e_m7AA171750BC8FBF664E6E88509DBB313E85DA5DF(L_9, NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_004a_1;
			}// end catch (depth: 2)

IL_004a_1:
			{
			}

IL_004b_1:
			{
				// foreach (Action<bool> cb in sFocusCallbackList)
				bool L_10;
				L_10 = Enumerator_MoveNext_m4AEB802C574E8B550BAF83C6EA8F835635C542EB((&V_0), Enumerator_MoveNext_m4AEB802C574E8B550BAF83C6EA8F835635C542EB_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0065;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_OnApplicationPause_m79D4613B34410C6FDFBC6378572A588D01B8A6B4 (PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F* __this, bool ___paused0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m993432E6F59A9F04D89EB6B02C6F902AA380E783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m4AEB802C574E8B550BAF83C6EA8F835635C542EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m29B914A68B38CB68DBA414C2AB9BD5B5807B9DAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35ECF228FCE04D6BC156DC5841E12EC008F35C25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// foreach (Action<bool> cb in sPauseCallbackList)
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_0 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sPauseCallbackList_9;
		NullCheck(L_0);
		Enumerator_t235236CC2F6D1E55AA4B09B8F54C2AD9D321EF50 L_1;
		L_1 = List_1_GetEnumerator_m35ECF228FCE04D6BC156DC5841E12EC008F35C25(L_0, List_1_GetEnumerator_m35ECF228FCE04D6BC156DC5841E12EC008F35C25_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m993432E6F59A9F04D89EB6B02C6F902AA380E783((&V_0), Enumerator_Dispose_m993432E6F59A9F04D89EB6B02C6F902AA380E783_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004b_1;
			}

IL_000f_1:
			{
				// foreach (Action<bool> cb in sPauseCallbackList)
				Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2;
				L_2 = Enumerator_get_Current_m29B914A68B38CB68DBA414C2AB9BD5B5807B9DAF_inline((&V_0), Enumerator_get_Current_m29B914A68B38CB68DBA414C2AB9BD5B5807B9DAF_RuntimeMethod_var);
				V_1 = L_2;
			}
			try
			{// begin try (depth: 2)
				// cb(paused);
				Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = V_1;
				bool L_4 = ___paused0;
				NullCheck(L_3);
				Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_3, L_4, NULL);
				goto IL_004a_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0024_1;
				}
				throw e;
			}

CATCH_0024_1:
			{// begin catch(System.Exception)
				// catch (Exception e)
				V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// Logger.e("Exception in OnApplicationPause:" +
				//                e.Message + "\n" + e.StackTrace);
				Exception_t* L_5 = V_2;
				NullCheck(L_5);
				String_t* L_6;
				L_6 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
				Exception_t* L_7 = V_2;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Exception::get_StackTrace() */, L_7);
				String_t* L_9;
				L_9 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral54BBC5A7505DB79E77AA0E8FE2EDF7EB2EA928B2)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)), L_8, NULL);
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var)));
				Logger_e_m7AA171750BC8FBF664E6E88509DBB313E85DA5DF(L_9, NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_004a_1;
			}// end catch (depth: 2)

IL_004a_1:
			{
			}

IL_004b_1:
			{
				// foreach (Action<bool> cb in sPauseCallbackList)
				bool L_10;
				L_10 = Enumerator_MoveNext_m4AEB802C574E8B550BAF83C6EA8F835635C542EB((&V_0), Enumerator_MoveNext_m4AEB802C574E8B550BAF83C6EA8F835635C542EB_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0065;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::AddFocusCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_AddFocusCallback_m58A5D0A820CE72A84711040C3A29AD4C4FF4D63D (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m516CC7340C5C8194052845BC1E0A320E218DAD7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mF171865461EA69D2AF7CBAD748F52D7CEA7897C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!sFocusCallbackList.Contains(callback))
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_0 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sFocusCallbackList_10;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mF171865461EA69D2AF7CBAD748F52D7CEA7897C9(L_0, L_1, List_1_Contains_mF171865461EA69D2AF7CBAD748F52D7CEA7897C9_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// sFocusCallbackList.Add(callback);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_4 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sFocusCallbackList_10;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_5 = ___callback0;
		NullCheck(L_4);
		List_1_Add_m516CC7340C5C8194052845BC1E0A320E218DAD7F_inline(L_4, L_5, List_1_Add_m516CC7340C5C8194052845BC1E0A320E218DAD7F_RuntimeMethod_var);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::RemoveFocusCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesHelperObject_RemoveFocusCallback_mFBDA9F6223F3669FB42428D668B39A299800892D (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD2CEA2EADFD5F476B0C1329AC086A662142362DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return sFocusCallbackList.Remove(callback);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_0 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sFocusCallbackList_10;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mD2CEA2EADFD5F476B0C1329AC086A662142362DA(L_0, L_1, List_1_Remove_mD2CEA2EADFD5F476B0C1329AC086A662142362DA_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::AddPauseCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject_AddPauseCallback_m300BEBD8B30262BAAE5A27DF35A46F3E393E7975 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m516CC7340C5C8194052845BC1E0A320E218DAD7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mF171865461EA69D2AF7CBAD748F52D7CEA7897C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!sPauseCallbackList.Contains(callback))
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_0 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sPauseCallbackList_9;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mF171865461EA69D2AF7CBAD748F52D7CEA7897C9(L_0, L_1, List_1_Contains_mF171865461EA69D2AF7CBAD748F52D7CEA7897C9_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// sPauseCallbackList.Add(callback);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_4 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sPauseCallbackList_9;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_5 = ___callback0;
		NullCheck(L_4);
		List_1_Add_m516CC7340C5C8194052845BC1E0A320E218DAD7F_inline(L_4, L_5, List_1_Add_m516CC7340C5C8194052845BC1E0A320E218DAD7F_RuntimeMethod_var);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::RemovePauseCallback(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayGamesHelperObject_RemovePauseCallback_m5115DAAB501CAC4E76778866F1DE3653A447F815 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD2CEA2EADFD5F476B0C1329AC086A662142362DA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return sPauseCallbackList.Remove(callback);
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_0 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sPauseCallbackList_9;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = ___callback0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mD2CEA2EADFD5F476B0C1329AC086A662142362DA(L_0, L_1, List_1_Remove_mD2CEA2EADFD5F476B0C1329AC086A662142362DA_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject__ctor_m2B2E6453DEF28A29E8D806605D83662BA8384DAB (PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<System.Action> localQueue = new List<System.Action>();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_0, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		__this->___localQueue_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___localQueue_7), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayGamesHelperObject__cctor_mF59BA452E533BCFDA7AA411A42A67FFA81DACFD8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mFD5B5846BC30FFDBBCDB78A0F7537F9D8A9074EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static PlayGamesHelperObject instance = null;
		((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___instance_4 = (PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___instance_4), (void*)(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F*)NULL);
		// private static bool sIsDummy = false;
		((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sIsDummy_5 = (bool)0;
		// private static List<System.Action> sQueue = new List<Action>();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_0, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sQueue_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sQueue_6), (void*)L_0);
		// private volatile static bool sQueueEmpty = true;
		il2cpp_codegen_memory_barrier();
		((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sQueueEmpty_8 = (bool)1;
		// private static List<Action<bool>> sPauseCallbackList =
		//     new List<Action<bool>>();
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_1 = (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713*)il2cpp_codegen_object_new(List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mFD5B5846BC30FFDBBCDB78A0F7537F9D8A9074EC(L_1, List_1__ctor_mFD5B5846BC30FFDBBCDB78A0F7537F9D8A9074EC_RuntimeMethod_var);
		((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sPauseCallbackList_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sPauseCallbackList_9), (void*)L_1);
		// private static List<Action<bool>> sFocusCallbackList =
		//     new List<Action<bool>>();
		List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713* L_2 = (List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713*)il2cpp_codegen_object_new(List_1_tB2FB3A51525B691C3FF8B27FD20E9C31736D1713_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mFD5B5846BC30FFDBBCDB78A0F7537F9D8A9074EC(L_2, List_1__ctor_mFD5B5846BC30FFDBBCDB78A0F7537F9D8A9074EC_RuntimeMethod_var);
		((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sFocusCallbackList_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___sFocusCallbackList_10), (void*)L_2);
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
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_m62D624713A455A2F1871FEFD3A39B38FBEF3A450 (U3CU3Ec__DisplayClass10_0_t042EF451EC4B656D740E40E3CBD6CF1EFAD1BD10* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject/<>c__DisplayClass10_0::<RunCoroutine>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0_U3CRunCoroutineU3Eb__0_mA6977F035C951F2EAC191F61097CC2FBEDC9D32F (U3CU3Ec__DisplayClass10_0_t042EF451EC4B656D740E40E3CBD6CF1EFAD1BD10* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RunOnGameThread(() => instance.StartCoroutine(action));
		il2cpp_codegen_runtime_class_init_inline(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var);
		PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F* L_0 = ((PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayGamesHelperObject_t147A2F2943976A06328A2D06410C61C8AE086A4F_il2cpp_TypeInfo_var))->___instance_4;
		RuntimeObject* L_1 = __this->___action_0;
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_1, NULL);
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
// System.String GooglePlayGames.BasicApi.Achievement::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_ToString_m5F0E000DC319F149C7B3704837AD30F1D7E1786B (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14A85563EBD186910C075E2F651ADF038BCE4507);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5187ED63B1D0FC2A896576DA1FBC217EB7236C31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB83CF5D3F499F61FF3BC4A1B8F187BF6DDA9B350);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	{
		// return string.Format(
		//     "[Achievement] id={0}, name={1}, desc={2}, type={3}, revealed={4}, unlocked={5}, steps={6}/{7}",
		//     mId, mName, mDescription, mIsIncremental ? "INCREMENTAL" : "STANDARD",
		//     mIsRevealed, mIsUnlocked, mCurrentSteps, mTotalSteps);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = __this->___mId_1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		String_t* L_4 = __this->___mName_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_3;
		String_t* L_6 = __this->___mDescription_7;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_5;
		bool L_8 = __this->___mIsIncremental_2;
		G_B1_0 = 3;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		G_B1_3 = _stringLiteralB83CF5D3F499F61FF3BC4A1B8F187BF6DDA9B350;
		if (L_8)
		{
			G_B2_0 = 3;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			G_B2_3 = _stringLiteralB83CF5D3F499F61FF3BC4A1B8F187BF6DDA9B350;
			goto IL_0038;
		}
	}
	{
		G_B3_0 = _stringLiteral14A85563EBD186910C075E2F651ADF038BCE4507;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_003d;
	}

IL_0038:
	{
		G_B3_0 = _stringLiteral5187ED63B1D0FC2A896576DA1FBC217EB7236C31;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_003d:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = G_B3_3;
		bool L_10 = __this->___mIsRevealed_3;
		bool L_11 = L_10;
		RuntimeObject* L_12 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_9;
		bool L_14 = __this->___mIsUnlocked_4;
		bool L_15 = L_14;
		RuntimeObject* L_16 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		int32_t L_18 = __this->___mCurrentSteps_5;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		int32_t L_22 = __this->___mTotalSteps_6;
		int32_t L_23 = L_22;
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_24);
		String_t* L_25;
		L_25 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(G_B3_4, L_21, NULL);
		V_0 = L_25;
		goto IL_007e;
	}

IL_007e:
	{
		// }
		String_t* L_26 = V_0;
		return L_26;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m0337FFA168BA3B6646E5228B00663BDF1CB6F40E (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string mId = string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___mId_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_1), (void*)L_0);
		// private bool mIsIncremental = false;
		__this->___mIsIncremental_2 = (bool)0;
		// private bool mIsRevealed = false;
		__this->___mIsRevealed_3 = (bool)0;
		// private bool mIsUnlocked = false;
		__this->___mIsUnlocked_4 = (bool)0;
		// private int mCurrentSteps = 0;
		__this->___mCurrentSteps_5 = 0;
		// private int mTotalSteps = 0;
		__this->___mTotalSteps_6 = 0;
		// private string mDescription = string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___mDescription_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mDescription_7), (void*)L_1);
		// private string mName = string.Empty;
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___mName_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mName_8), (void*)L_2);
		// private long mLastModifiedTime = 0;
		__this->___mLastModifiedTime_9 = ((int64_t)0);
		// public Achievement()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Achievement::get_IsIncremental()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_IsIncremental_mE546B9F8633B21B4D71A472795D173A47C0E4A0B (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mIsIncremental; }
		bool L_0 = __this->___mIsIncremental_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsIncremental; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_IsIncremental(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_IsIncremental_mD3B9946C066875BCEC8077E258BBB9D9D6427EE2 (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { mIsIncremental = value; }
		bool L_0 = ___value0;
		__this->___mIsIncremental_2 = L_0;
		// set { mIsIncremental = value; }
		return;
	}
}
// System.Int32 GooglePlayGames.BasicApi.Achievement::get_CurrentSteps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Achievement_get_CurrentSteps_mB88179F5839499E63E715B4C536E9E88014F8DB0 (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mCurrentSteps; }
		int32_t L_0 = __this->___mCurrentSteps_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mCurrentSteps; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_CurrentSteps(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_CurrentSteps_m10992AB453C1DE78E13CA8A29DCC5A3C4C94846F (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { mCurrentSteps = value; }
		int32_t L_0 = ___value0;
		__this->___mCurrentSteps_5 = L_0;
		// set { mCurrentSteps = value; }
		return;
	}
}
// System.Int32 GooglePlayGames.BasicApi.Achievement::get_TotalSteps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Achievement_get_TotalSteps_mD45C6B330DCF063965618D2AB77B5346D8456D10 (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mTotalSteps; }
		int32_t L_0 = __this->___mTotalSteps_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mTotalSteps; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_TotalSteps(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_TotalSteps_m0BE38D306D9B59D6893BE24F2DCDC8D99AC30C66 (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { mTotalSteps = value; }
		int32_t L_0 = ___value0;
		__this->___mTotalSteps_6 = L_0;
		// set { mTotalSteps = value; }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Achievement::get_IsUnlocked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_IsUnlocked_mEDC791B0C59761E6F636EDB453F6C1A0312A9D3B (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mIsUnlocked; }
		bool L_0 = __this->___mIsUnlocked_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsUnlocked; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_IsUnlocked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_IsUnlocked_m78ABD4F47A4443627D30537DAB2A9476E642CAE8 (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { mIsUnlocked = value; }
		bool L_0 = ___value0;
		__this->___mIsUnlocked_4 = L_0;
		// set { mIsUnlocked = value; }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.Achievement::get_IsRevealed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_IsRevealed_mF7F8A88E4CFA7E7AA1598939ACA1BBEEBC1400E6 (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mIsRevealed; }
		bool L_0 = __this->___mIsRevealed_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mIsRevealed; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_IsRevealed(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_IsRevealed_m336CF3D14439E928F4232EDD5E03E7194A8A7DCD (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { mIsRevealed = value; }
		bool L_0 = ___value0;
		__this->___mIsRevealed_3 = L_0;
		// set { mIsRevealed = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Achievement::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_Id_mEABE1BF0C3D9E2706CED4CFB477FA7650AFF2032 (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_Id_mF4925401D673ABEE8BA2B666B0AE68099DA23583 (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { mId = value; }
		String_t* L_0 = ___value0;
		__this->___mId_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_1), (void*)L_0);
		// set { mId = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Achievement::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_Description_mD92C5619D6040D2DEDC6ACFFB19C3776CEC6E10C (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return this.mDescription; }
		String_t* L_0 = __this->___mDescription_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.mDescription; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_Description(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_Description_mCE20D83998C1A32984D4AD35A8D32718F8F2D723 (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { mDescription = value; }
		String_t* L_0 = ___value0;
		__this->___mDescription_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mDescription_7), (void*)L_0);
		// set { mDescription = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Achievement::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_Name_m0766DDB0BF5136DCDA51EF51194187768C3CE22A (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return this.mName; }
		String_t* L_0 = __this->___mName_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.mName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_Name_mD369413C9658980C6C53381124A81B98B326229D (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { mName = value; }
		String_t* L_0 = ___value0;
		__this->___mName_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mName_8), (void*)L_0);
		// set { mName = value; }
		return;
	}
}
// System.DateTime GooglePlayGames.BasicApi.Achievement::get_LastModifiedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Achievement_get_LastModifiedTime_m946991216948833DCDDFCC88B4D4842DC987D5E0 (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return UnixEpoch.AddMilliseconds(mLastModifiedTime); }
		il2cpp_codegen_runtime_class_init_inline(Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C_il2cpp_TypeInfo_var);
		int64_t L_0 = __this->___mLastModifiedTime_9;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_AddMilliseconds_mEF44A0EE635A478B7B0CDAA438D2240C14C88D05((&((Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C_StaticFields*)il2cpp_codegen_static_fields_for(Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C_il2cpp_TypeInfo_var))->___UnixEpoch_0), ((double)L_0), NULL);
		V_0 = L_1;
		goto IL_0015;
	}

IL_0015:
	{
		// get { return UnixEpoch.AddMilliseconds(mLastModifiedTime); }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = V_0;
		return L_2;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_LastModifiedTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_LastModifiedTime_m5576814F9F0FE27DA62ECB74C41540EB58D5F090 (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// TimeSpan ts = value - UnixEpoch;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ((Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C_StaticFields*)il2cpp_codegen_static_fields_for(Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C_il2cpp_TypeInfo_var))->___UnixEpoch_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(L_0, L_1, NULL);
		V_0 = L_2;
		// mLastModifiedTime = (long) ts.TotalMilliseconds;
		double L_3;
		L_3 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&V_0), NULL);
		__this->___mLastModifiedTime_9 = il2cpp_codegen_cast_double_to_int<int64_t>(L_3);
		// }
		return;
	}
}
// System.UInt64 GooglePlayGames.BasicApi.Achievement::get_Points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Achievement_get_Points_m16489ED9680C6DD4575BD519D7990A1209B3B786 (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// get { return mPoints; }
		uint64_t L_0 = __this->___mPoints_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mPoints; }
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_Points(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_Points_m483C660AB0BD49F0B5E47284A2B31D086389AF0D (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { mPoints = value; }
		uint64_t L_0 = ___value0;
		__this->___mPoints_10 = L_0;
		// set { mPoints = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Achievement::get_RevealedImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_RevealedImageUrl_m0108261D2B9EA2E1F762068577180D465CC324F2 (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mRevealedImageUrl; }
		String_t* L_0 = __this->___mRevealedImageUrl_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mRevealedImageUrl; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_RevealedImageUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_RevealedImageUrl_mEFDF4F533F28058AB6DF4FDFEB57ABF3030C7101 (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { mRevealedImageUrl = value; }
		String_t* L_0 = ___value0;
		__this->___mRevealedImageUrl_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mRevealedImageUrl_11), (void*)L_0);
		// set { mRevealedImageUrl = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Achievement::get_UnlockedImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_UnlockedImageUrl_m72F69304409C87D35C3971A35A572C2FFD3F5CC1 (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mUnlockedImageUrl; }
		String_t* L_0 = __this->___mUnlockedImageUrl_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mUnlockedImageUrl; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::set_UnlockedImageUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_UnlockedImageUrl_m7974CBEC35943F0A11BC34185EE489D5845686C0 (Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// set { mUnlockedImageUrl = value; }
		String_t* L_0 = ___value0;
		__this->___mUnlockedImageUrl_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mUnlockedImageUrl_12), (void*)L_0);
		// set { mUnlockedImageUrl = value; }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Achievement::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__cctor_m001854D1CFA81F11F96C6DDE4659FC3C4E2A2D6B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly DateTime UnixEpoch =
		//     new DateTime(1970, 1, 1, 0, 0, 0, 0, DateTimeKind.Utc);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_m30157484F8C1D6527DC8B93AC6C9268EDB0B1168((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 0, 1, /*hidden argument*/NULL);
		((Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C_StaticFields*)il2cpp_codegen_static_fields_for(Achievement_tEE0A98C9C91368F5405593AA4D07B33FB45E550C_il2cpp_TypeInfo_var))->___UnixEpoch_0 = L_0;
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
// System.Boolean GooglePlayGames.BasicApi.CommonTypesUtil::StatusIsSuccess(GooglePlayGames.BasicApi.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CommonTypesUtil_StatusIsSuccess_m44DD603B8DA96430376BB3AAEF582E4A3ACFCE09 (int32_t ___status0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return ((int) status) > 0;
		int32_t L_0 = ___status0;
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)0))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.CommonTypesUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTypesUtil__ctor_m60CFAF0B3CD4D5EDD51489BD82037A5F4D270EED (CommonTypesUtil_tA47115ADB076A35DF0744615FBBCDDDAB32521E1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void GooglePlayGames.BasicApi.DummyClient::Authenticate(System.Action`1<GooglePlayGames.BasicApi.SignInStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_Authenticate_m3713F0BDA26022A5BCC4FC105AEBDB60E3F4D4F5 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, Action_1_t38A40574AB80CC30FF578C805B326880626B49AF* ___callback0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null)
		Action_1_t38A40574AB80CC30FF578C805B326880626B49AF* L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t38A40574AB80CC30FF578C805B326880626B49AF*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback(SignInStatus.Canceled);
		Action_1_t38A40574AB80CC30FF578C805B326880626B49AF* L_2 = ___callback0;
		NullCheck(L_2);
		Action_1_Invoke_m3CF94880784BE8A5EED9440FD26C15A78976FD3F_inline(L_2, 2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::ManuallyAuthenticate(System.Action`1<GooglePlayGames.BasicApi.SignInStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_ManuallyAuthenticate_m83085FA8AAC65AE98ED3F14694A1CC3EEDE492C7 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, Action_1_t38A40574AB80CC30FF578C805B326880626B49AF* ___callback0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null)
		Action_1_t38A40574AB80CC30FF578C805B326880626B49AF* L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t38A40574AB80CC30FF578C805B326880626B49AF*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback(SignInStatus.Canceled);
		Action_1_t38A40574AB80CC30FF578C805B326880626B49AF* L_2 = ___callback0;
		NullCheck(L_2);
		Action_1_Invoke_m3CF94880784BE8A5EED9440FD26C15A78976FD3F_inline(L_2, 2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.DummyClient::IsAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DummyClient_IsAuthenticated_m4DFA2EA51BB3458EACF20A47EB01CBC1AD1761F1 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// return false;
		V_0 = (bool)0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::RequestServerSideAccess(System.Boolean,System.Action`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_RequestServerSideAccess_m1D3BFF109E9CECA8F0C06DADC0F46F5115F98E6B (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, bool ___forceRefreshToken0, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___callback1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null)
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_0 = ___callback1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback(null);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(L_2, (String_t*)NULL, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyClient_GetUserId_m7F6A0996563B430AF27FD216C7CD68EA2A47EBAB (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE38144E371DD18AF923733A68E7D8175974B938);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// return "DummyID";
		V_0 = _stringLiteralCE38144E371DD18AF923733A68E7D8175974B938;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::GetPlayerStats(System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_GetPlayerStats_mFE75E29F8397AF823BB32DD2D9CB4B28EDA34B0F (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, Action_2_t239560480D2FF80B907D2170BCBF5B82ADCC8AF5* ___callback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// callback(CommonStatusCodes.ApiNotConnected, new PlayerStats());
		Action_2_t239560480D2FF80B907D2170BCBF5B82ADCC8AF5* L_0 = ___callback0;
		PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* L_1 = (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513*)il2cpp_codegen_object_new(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		PlayerStats__ctor_m6F5119310FBCCA1C3FAEBADFFEEEB65DEF3B99C9(L_1, NULL);
		NullCheck(L_0);
		Action_2_Invoke_m531F4C263F0D60ADCEE06B2D0C4E272A360FE9FC_inline(L_0, ((int32_t)17), L_1, NULL);
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserDisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyClient_GetUserDisplayName_m628F425C92DE0A379EB34556C0594538C4D6CDE8 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// return "Player";
		V_0 = _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.DummyClient::GetUserImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyClient_GetUserImageUrl_m39EAB9130EB4BCEEE9C727E99DF25C032A67D717 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// return null;
		V_0 = (String_t*)NULL;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadUsers_mBE1CE5DCE5092DECD77C444039F18BF54F18AD1D (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___userIds0, Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* ___callback1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null)
		Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* L_0 = ___callback1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(null);
		Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78* L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223_inline(L_2, (IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)NULL, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadAchievements(System.Action`1<GooglePlayGames.BasicApi.Achievement[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadAchievements_mF11B05DDB72F0B5B567B058ECA670B0443BF5A36 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, Action_1_t4316DC28EEB660D34DF77C3D6317B5EA7B202924* ___callback0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null)
		Action_1_t4316DC28EEB660D34DF77C3D6317B5EA7B202924* L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t4316DC28EEB660D34DF77C3D6317B5EA7B202924*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(null);
		Action_1_t4316DC28EEB660D34DF77C3D6317B5EA7B202924* L_2 = ___callback0;
		NullCheck(L_2);
		Action_1_Invoke_m67BC7C74671506FB1CC276AB0A0C1B88DF498126_inline(L_2, (AchievementU5BU5D_t09D01F32899EC2D71ADFF17E5B8FBA83E5094C62*)NULL, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::UnlockAchievement(System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_UnlockAchievement_m376A6BB39D128AA1504C8118F60FB41852B8742E (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, String_t* ___achId0, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___callback1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::RevealAchievement(System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_RevealAchievement_mF7E8B8C75249AA3D56D762AFD43B056A33668E88 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, String_t* ___achId0, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___callback1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::IncrementAchievement(System.String,System.Int32,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_IncrementAchievement_m4F9804ED0F1549A4327A56E8974B2C594D71750C (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, String_t* ___achId0, int32_t ___steps1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___callback2;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::SetStepsAtLeast(System.String,System.Int32,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_SetStepsAtLeast_mCC0211F86F9EA947716C84867E6002DF39E0596C (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, String_t* ___achId0, int32_t ___steps1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___callback2;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::ShowAchievementsUI(System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_ShowAchievementsUI_m745A4A8907141940DB68FA23D9326C9FC3A97B04 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF* ___callback0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null)
		Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF* L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// callback.Invoke(UIStatus.VersionUpdateRequired);
		Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF* L_2 = ___callback0;
		NullCheck(L_2);
		Action_1_Invoke_mEDF8D512524D5E093FFEBDB6251BF7D328733484_inline(L_2, ((int32_t)-4), NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::AskForLoadFriendsResolution(System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_AskForLoadFriendsResolution_m44720F942178486516ADEDE82AA65B6A02F8D40D (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF* ___callback0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null) {
		Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF* L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// callback.Invoke(UIStatus.VersionUpdateRequired);
		Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF* L_2 = ___callback0;
		NullCheck(L_2);
		Action_1_Invoke_mEDF8D512524D5E093FFEBDB6251BF7D328733484_inline(L_2, ((int32_t)-4), NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// GooglePlayGames.BasicApi.LoadFriendsStatus GooglePlayGames.BasicApi.DummyClient::GetLastLoadFriendsStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyClient_GetLastLoadFriendsStatus_m2E61FF8890FBBABC1C242F577E90F752D746CE77 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// return LoadFriendsStatus.Unknown;
		V_0 = 0;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadFriends(System.Int32,System.Boolean,System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadFriends_m12FEF3126A90A9903B4DF05C7306452094A8543B (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, int32_t ___pageSize0, bool ___forceReload1, Action_1_t229C6DB03F82E8A2201F49AB72795F9E8681C444* ___callback2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null) {
		Action_1_t229C6DB03F82E8A2201F49AB72795F9E8681C444* L_0 = ___callback2;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t229C6DB03F82E8A2201F49AB72795F9E8681C444*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(LoadFriendsStatus.Unknown);
		Action_1_t229C6DB03F82E8A2201F49AB72795F9E8681C444* L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_mBE539CBA970EDE7980607A8210B5F9BC31A9D6AD_inline(L_2, 0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadMoreFriends(System.Int32,System.Action`1<GooglePlayGames.BasicApi.LoadFriendsStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadMoreFriends_m34A035F38527937BEF522B8CDD212085A61A025D (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, int32_t ___pageSize0, Action_1_t229C6DB03F82E8A2201F49AB72795F9E8681C444* ___callback1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null) {
		Action_1_t229C6DB03F82E8A2201F49AB72795F9E8681C444* L_0 = ___callback1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t229C6DB03F82E8A2201F49AB72795F9E8681C444*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(LoadFriendsStatus.Unknown);
		Action_1_t229C6DB03F82E8A2201F49AB72795F9E8681C444* L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_mBE539CBA970EDE7980607A8210B5F9BC31A9D6AD_inline(L_2, 0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::ShowCompareProfileWithAlternativeNameHintsUI(System.String,System.String,System.String,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_ShowCompareProfileWithAlternativeNameHintsUI_mD7340497A4DD9CCFA700F6F5ADE8F7402CEE4802 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, String_t* ___userId0, String_t* ___otherPlayerInGameName1, String_t* ___currentPlayerInGameName2, Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF* ___callback3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null) {
		Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF* L_0 = ___callback3;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// callback.Invoke(UIStatus.VersionUpdateRequired);
		Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF* L_2 = ___callback3;
		NullCheck(L_2);
		Action_1_Invoke_mEDF8D512524D5E093FFEBDB6251BF7D328733484_inline(L_2, ((int32_t)-4), NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::GetFriendsListVisibility(System.Boolean,System.Action`1<GooglePlayGames.BasicApi.FriendsListVisibilityStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_GetFriendsListVisibility_mB12BCE22A71C5F0014D8F3BFFB0A340FDFEBF05C (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, bool ___forceReload0, Action_1_tFEA0292F779769AD734C07DADE23F1B531A4EC95* ___callback1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null) {
		Action_1_tFEA0292F779769AD734C07DADE23F1B531A4EC95* L_0 = ___callback1;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tFEA0292F779769AD734C07DADE23F1B531A4EC95*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(FriendsListVisibilityStatus.Unknown);
		Action_1_tFEA0292F779769AD734C07DADE23F1B531A4EC95* L_2 = ___callback1;
		NullCheck(L_2);
		Action_1_Invoke_m0ADB4F69EFB7A77DF48E8CC25BAFA07EC28F864D_inline(L_2, 0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::ShowLeaderboardUI(System.String,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.UIStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_ShowLeaderboardUI_m0A950E4AE3B8A85A9E710C432E6958605CC40B55 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, String_t* ___leaderboardId0, int32_t ___span1, Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF* ___callback2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null)
		Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF* L_0 = ___callback2;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// callback.Invoke(UIStatus.VersionUpdateRequired);
		Action_1_t9DCFB7EC97088EE7614B6E8DE8D101CE7B6495CF* L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_mEDF8D512524D5E093FFEBDB6251BF7D328733484_inline(L_2, ((int32_t)-4), NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Int32 GooglePlayGames.BasicApi.DummyClient::LeaderboardMaxResults()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyClient_LeaderboardMaxResults_m31CACA13F15519AE951D1FF69DDF1507F52EB494 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return 25;
		V_0 = ((int32_t)25);
		goto IL_0006;
	}

IL_0006:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadScores(System.String,GooglePlayGames.BasicApi.LeaderboardStart,System.Int32,GooglePlayGames.BasicApi.LeaderboardCollection,GooglePlayGames.BasicApi.LeaderboardTimeSpan,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadScores_m1890F4151C780A502CE36EFC0D79ADDE072B2C2A (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, String_t* ___leaderboardId0, int32_t ___start1, int32_t ___rowCount2, int32_t ___collection3, int32_t ___timeSpan4, Action_1_tA52AED154B6BF7FC2F6E5C7FF9EB83083A14587B* ___callback5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null)
		Action_1_tA52AED154B6BF7FC2F6E5C7FF9EB83083A14587B* L_0 = ___callback5;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tA52AED154B6BF7FC2F6E5C7FF9EB83083A14587B*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// callback(new LeaderboardScoreData(
		//     leaderboardId,
		//     ResponseStatus.LicenseCheckFailed));
		Action_1_tA52AED154B6BF7FC2F6E5C7FF9EB83083A14587B* L_2 = ___callback5;
		String_t* L_3 = ___leaderboardId0;
		LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* L_4 = (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343*)il2cpp_codegen_object_new(LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		LeaderboardScoreData__ctor_m109E3BA0F8C1D1CA502022E056D20AA3A34CDA90(L_4, L_3, (-1), NULL);
		NullCheck(L_2);
		Action_1_Invoke_mF2FBCE02FEEA0242E8384390FA029E4E67B4FDE9_inline(L_2, L_4, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadMoreScores(GooglePlayGames.BasicApi.ScorePageToken,System.Int32,System.Action`1<GooglePlayGames.BasicApi.LeaderboardScoreData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadMoreScores_m7D973F3C080459538344592D3B78389D8ADAF198 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* ___token0, int32_t ___rowCount1, Action_1_tA52AED154B6BF7FC2F6E5C7FF9EB83083A14587B* ___callback2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null)
		Action_1_tA52AED154B6BF7FC2F6E5C7FF9EB83083A14587B* L_0 = ___callback2;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tA52AED154B6BF7FC2F6E5C7FF9EB83083A14587B*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// callback(new LeaderboardScoreData(
		//     token.LeaderboardId,
		//     ResponseStatus.LicenseCheckFailed));
		Action_1_tA52AED154B6BF7FC2F6E5C7FF9EB83083A14587B* L_2 = ___callback2;
		ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* L_3 = ___token0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = ScorePageToken_get_LeaderboardId_mBEBA3AD6E37CF08D4F220EDBD40DCFEC3A65D9A5(L_3, NULL);
		LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* L_5 = (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343*)il2cpp_codegen_object_new(LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		LeaderboardScoreData__ctor_m109E3BA0F8C1D1CA502022E056D20AA3A34CDA90(L_5, L_4, (-1), NULL);
		NullCheck(L_2);
		Action_1_Invoke_mF2FBCE02FEEA0242E8384390FA029E4E67B4FDE9_inline(L_2, L_5, NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::SubmitScore(System.String,System.Int64,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_SubmitScore_mF4FBD1A060D33EE116587BBC156F3D992CC9B28B (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, String_t* ___leaderboardId0, int64_t ___score1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___callback2;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___callback2;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::SubmitScore(System.String,System.Int64,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_SubmitScore_m328D7056FF59E58F7A4FF0EB49A25DD0342074BF (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, String_t* ___leaderboardId0, int64_t ___score1, String_t* ___metadata2, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback3, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// if (callback != null)
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___callback3;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// callback.Invoke(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = ___callback3;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_2, (bool)0, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// GooglePlayGames.BasicApi.SavedGame.ISavedGameClient GooglePlayGames.BasicApi.DummyClient::GetSavedGameClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DummyClient_GetSavedGameClient_m070DD611549FC73C85BF6277C7D64E171F63F21F (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// return null;
		V_0 = (RuntimeObject*)NULL;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// GooglePlayGames.BasicApi.Events.IEventsClient GooglePlayGames.BasicApi.DummyClient::GetEventsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DummyClient_GetEventsClient_mDADC15392EBDC138E5B156B3129E049A54089296 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// return null;
		V_0 = (RuntimeObject*)NULL;
		goto IL_000b;
	}

IL_000b:
	{
		// }
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LoadFriends(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LoadFriends_m622D25E13C93232F35325CA15EC22D0875BE2A12 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___callback0, const RuntimeMethod* method) 
{
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// callback(false);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = ___callback0;
		NullCheck(L_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// UnityEngine.SocialPlatforms.IUserProfile[] GooglePlayGames.BasicApi.DummyClient::GetFriends()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* DummyClient_GetFriends_m91C94A48DFF7B644A181A324368356141E299420 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* V_0 = NULL;
	{
		// LogUsage();
		DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A(NULL);
		// return new IUserProfile[0];
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_0 = (IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)(IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)SZArrayNew(IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = L_0;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::LogUsage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient_LogUsage_m850FBD51F56D605E5FC151B3E9E303DD46EB640A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral621D47B63CF421687DAD3C913833178F9D2A2B9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Logger.d("Received method call on DummyClient - using stub implementation.");
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m7B222C8EEF0A9270A4A3201A3BC7E8F0781B4D36(_stringLiteral621D47B63CF421687DAD3C913833178F9D2A2B9B, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.DummyClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyClient__ctor_m7815F867FA8E70B595218BB9D305ED71DD209F78 (DummyClient_t9F7E4D998D51578B4A9882C427B73A235B0F80CE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData__ctor_m56685C5231FA472712A09B09D4D2195DF09BB62E (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, String_t* ___leaderboardId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEB2C87F6A8974287C241AA2AF2439D9CEB7FD59D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<PlayGamesScore> mScores = new List<PlayGamesScore>();
		List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C* L_0 = (List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C*)il2cpp_codegen_object_new(List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mEB2C87F6A8974287C241AA2AF2439D9CEB7FD59D(L_0, List_1__ctor_mEB2C87F6A8974287C241AA2AF2439D9CEB7FD59D_RuntimeMethod_var);
		__this->___mScores_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mScores_7), (void*)L_0);
		// internal LeaderboardScoreData(string leaderboardId)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mId = leaderboardId;
		String_t* L_1 = ___leaderboardId0;
		__this->___mId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_1);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::.ctor(System.String,GooglePlayGames.BasicApi.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData__ctor_m109E3BA0F8C1D1CA502022E056D20AA3A34CDA90 (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, String_t* ___leaderboardId0, int32_t ___status1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEB2C87F6A8974287C241AA2AF2439D9CEB7FD59D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<PlayGamesScore> mScores = new List<PlayGamesScore>();
		List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C* L_0 = (List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C*)il2cpp_codegen_object_new(List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mEB2C87F6A8974287C241AA2AF2439D9CEB7FD59D(L_0, List_1__ctor_mEB2C87F6A8974287C241AA2AF2439D9CEB7FD59D_RuntimeMethod_var);
		__this->___mScores_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mScores_7), (void*)L_0);
		// internal LeaderboardScoreData(string leaderboardId, ResponseStatus status)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mId = leaderboardId;
		String_t* L_1 = ___leaderboardId0;
		__this->___mId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_1);
		// mStatus = status;
		int32_t L_2 = ___status1;
		__this->___mStatus_1 = L_2;
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.LeaderboardScoreData::get_Valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LeaderboardScoreData_get_Valid_m9295D904ECBE2632FF09D993A2B0F4D13F6F2D4F (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return mStatus == ResponseStatus.Success ||
		//        mStatus == ResponseStatus.SuccessWithStale;
		int32_t L_0 = __this->___mStatus_1;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = __this->___mStatus_1;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		goto IL_0016;
	}

IL_0015:
	{
		G_B3_0 = 1;
	}

IL_0016:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.LeaderboardScoreData::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LeaderboardScoreData_get_Status_mEDB180C739133FD242DD8979D14CCA1FB17A5D1B (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mStatus; }
		int32_t L_0 = __this->___mStatus_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mStatus; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_Status(GooglePlayGames.BasicApi.ResponseStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_Status_mB4AE5A67AE0D6861A67DF19D32F3C22946849841 (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { mStatus = value; }
		int32_t L_0 = ___value0;
		__this->___mStatus_1 = L_0;
		// internal set { mStatus = value; }
		return;
	}
}
// System.UInt64 GooglePlayGames.BasicApi.LeaderboardScoreData::get_ApproximateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t LeaderboardScoreData_get_ApproximateCount_m523AC4ADCF7650B015483B6BE44A506834D311B7 (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// get { return mApproxCount; }
		uint64_t L_0 = __this->___mApproxCount_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mApproxCount; }
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_ApproximateCount(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_ApproximateCount_m33D807DF99DBFFA332404B0CBF4D578BCF89EEBE (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, uint64_t ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { mApproxCount = value; }
		uint64_t L_0 = ___value0;
		__this->___mApproxCount_2 = L_0;
		// internal set { mApproxCount = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::get_Title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LeaderboardScoreData_get_Title_m134E27E5F01702B0B15965BEC684B55CED23F63F (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mTitle; }
		String_t* L_0 = __this->___mTitle_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mTitle; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_Title(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_Title_m67B238B928BF032EFA6E5CA2139F714F13248582 (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { mTitle = value; }
		String_t* L_0 = ___value0;
		__this->___mTitle_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mTitle_3), (void*)L_0);
		// internal set { mTitle = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LeaderboardScoreData_get_Id_m9A877748AE3F1256AD5B2FA7E8ED2D358F0271D3 (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_Id_mB727B847B55705986A4293872A26DF8367097157 (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { mId = value; }
		String_t* L_0 = ___value0;
		__this->___mId_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_0);
		// internal set { mId = value; }
		return;
	}
}
// UnityEngine.SocialPlatforms.IScore GooglePlayGames.BasicApi.LeaderboardScoreData::get_PlayerScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LeaderboardScoreData_get_PlayerScore_m2DDCEC4A618191C22312334D67ACA2D141C8C821 (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// get { return mPlayerScore; }
		RuntimeObject* L_0 = __this->___mPlayerScore_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mPlayerScore; }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_PlayerScore(UnityEngine.SocialPlatforms.IScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_PlayerScore_m631FA63501C079C5E919D3ECB02761EFA7CFE9B9 (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { mPlayerScore = value; }
		RuntimeObject* L_0 = ___value0;
		__this->___mPlayerScore_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPlayerScore_4), (void*)L_0);
		// internal set { mPlayerScore = value; }
		return;
	}
}
// UnityEngine.SocialPlatforms.IScore[] GooglePlayGames.BasicApi.LeaderboardScoreData::get_Scores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* LeaderboardScoreData_get_Scores_mB4BEB768E863A73183E7EFB087A63AFB706154BA (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m73D6D1EC8C0647CD0EF417338A5F8075EA6A7D0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* V_0 = NULL;
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* V_1 = NULL;
	{
		// get { return mScores.ToArray(); }
		List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C* L_0 = __this->___mScores_7;
		NullCheck(L_0);
		PlayGamesScoreU5BU5D_t31A3C8031BCADB48F59385BACBD33920CD783D07* L_1;
		L_1 = List_1_ToArray_m73D6D1EC8C0647CD0EF417338A5F8075EA6A7D0A(L_0, List_1_ToArray_m73D6D1EC8C0647CD0EF417338A5F8075EA6A7D0A_RuntimeMethod_var);
		V_0 = (IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042*)L_1;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_2 = V_0;
		V_1 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		// get { return mScores.ToArray(); }
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_3 = V_1;
		return L_3;
	}
}
// System.Int32 GooglePlayGames.BasicApi.LeaderboardScoreData::AddScore(GooglePlayGames.PlayGamesScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LeaderboardScoreData_AddScore_m19E293B3E8D1911159555ADF0F9B4E517F58B91D (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, PlayGamesScore_tB8ECE78BCBA5F9EBF68034D6792DDAE96AF748F9* ___score0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD9589D237AA0A6107148FEEA4734D2C62A8374D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC1686B471742132A119A13D13229321826F22A6B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// mScores.Add(score);
		List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C* L_0 = __this->___mScores_7;
		PlayGamesScore_tB8ECE78BCBA5F9EBF68034D6792DDAE96AF748F9* L_1 = ___score0;
		NullCheck(L_0);
		List_1_Add_mD9589D237AA0A6107148FEEA4734D2C62A8374D4_inline(L_0, L_1, List_1_Add_mD9589D237AA0A6107148FEEA4734D2C62A8374D4_RuntimeMethod_var);
		// return mScores.Count;
		List_1_t9A28AD5A5CAF0AA264E9F284BF953CEA8D4DB53C* L_2 = __this->___mScores_7;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mC1686B471742132A119A13D13229321826F22A6B_inline(L_2, List_1_get_Count_mC1686B471742132A119A13D13229321826F22A6B_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::get_PrevPageToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* LeaderboardScoreData_get_PrevPageToken_m77FF1B6BDA5BC4B35E0ACD95C09D26D3AEF96D27 (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, const RuntimeMethod* method) 
{
	ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* V_0 = NULL;
	{
		// get { return mPrevPage; }
		ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* L_0 = __this->___mPrevPage_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mPrevPage; }
		ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_PrevPageToken(GooglePlayGames.BasicApi.ScorePageToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_PrevPageToken_mF9C419CC151FEC27483DD66D40A98B8306404C61 (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { mPrevPage = value; }
		ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* L_0 = ___value0;
		__this->___mPrevPage_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPrevPage_5), (void*)L_0);
		// internal set { mPrevPage = value; }
		return;
	}
}
// GooglePlayGames.BasicApi.ScorePageToken GooglePlayGames.BasicApi.LeaderboardScoreData::get_NextPageToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* LeaderboardScoreData_get_NextPageToken_m6D3F7C4578693B35CBB9C2584757BF2EB00642F3 (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, const RuntimeMethod* method) 
{
	ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* V_0 = NULL;
	{
		// get { return mNextPage; }
		ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* L_0 = __this->___mNextPage_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNextPage; }
		ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* L_1 = V_0;
		return L_1;
	}
}
// System.Void GooglePlayGames.BasicApi.LeaderboardScoreData::set_NextPageToken(GooglePlayGames.BasicApi.ScorePageToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeaderboardScoreData_set_NextPageToken_mD1D92292E7D6459CF69F484888972F0E00E3C1F9 (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* ___value0, const RuntimeMethod* method) 
{
	{
		// internal set { mNextPage = value; }
		ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* L_0 = ___value0;
		__this->___mNextPage_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNextPage_6), (void*)L_0);
		// internal set { mNextPage = value; }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.LeaderboardScoreData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LeaderboardScoreData_ToString_m3A555A15B9EAE8A67604EA4D5B98013A389C397D (LeaderboardScoreData_tFDC6EF2785DEAACB4A1E03C126BDF1670EE49343* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseStatus_tD794E5AA3E3E3C4F5F59DF427A35FFCCB043A95F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD98EFBEB57C6C6921D60597A6FC6CDBA37596E37);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Format("[LeaderboardScoreData: mId={0}, " +
		//                      " mStatus={1}, mApproxCount={2}, mTitle={3}]",
		//     mId, mStatus, mApproxCount, mTitle);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		String_t* L_2 = __this->___mId_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_1;
		int32_t L_4 = __this->___mStatus_1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(ResponseStatus_tD794E5AA3E3E3C4F5F59DF427A35FFCCB043A95F_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		uint64_t L_8 = __this->___mApproxCount_2;
		uint64_t L_9 = L_8;
		RuntimeObject* L_10 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		String_t* L_12 = __this->___mTitle_3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_12);
		String_t* L_13;
		L_13 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteralD98EFBEB57C6C6921D60597A6FC6CDBA37596E37, L_11, NULL);
		V_0 = L_13;
		goto IL_0042;
	}

IL_0042:
	{
		// }
		String_t* L_14 = V_0;
		return L_14;
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
// System.Void GooglePlayGames.BasicApi.Player::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m6E1DAF1AAE495C5B45A4A5CA10862B8056425067 (Player_t060AAFFE163492D49D701807DC96812E218898E0* __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, const RuntimeMethod* method) 
{
	{
		// : base(displayName, playerId, avatarUrl)
		String_t* L_0 = ___displayName0;
		String_t* L_1 = ___playerId1;
		String_t* L_2 = ___avatarUrl2;
		PlayGamesUserProfile__ctor_m097C98C051115B5EA6EB84682574E51328299FB8(__this, L_0, L_1, L_2, NULL);
		// }
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
// System.Void GooglePlayGames.BasicApi.PlayerProfile::.ctor(System.String,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerProfile__ctor_mB5D861E0ACF000004A453E65B9CEC0FD796318F7 (PlayerProfile_t588B042CAF1902A8CBA1EF4BCDFA018C0AEDBED9* __this, String_t* ___displayName0, String_t* ___playerId1, String_t* ___avatarUrl2, bool ___isFriend3, const RuntimeMethod* method) 
{
	{
		// internal PlayerProfile(string displayName, string playerId, string avatarUrl, bool isFriend) : base(displayName,
		//     playerId, avatarUrl, isFriend)
		String_t* L_0 = ___displayName0;
		String_t* L_1 = ___playerId1;
		String_t* L_2 = ___avatarUrl2;
		bool L_3 = ___isFriend3;
		PlayGamesUserProfile__ctor_mF580078A01CDE4789C0CC04B4433AFE0B9D0DEE6(__this, L_0, L_1, L_2, L_3, NULL);
		// }
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
// System.Void GooglePlayGames.BasicApi.PlayerStats::.ctor(System.Int32,System.Single,System.Int32,System.Int32,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__ctor_mC9FD198D6991DE32CE798E5FFD4C8B6B908FB767 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, int32_t ___numberOfPurchases0, float ___avgSessionLength1, int32_t ___daysSinceLastPlayed2, int32_t ___numberOfSessions3, float ___sessPercentile4, float ___spendPercentile5, float ___spendProbability6, float ___churnProbability7, float ___highSpenderProbability8, float ___totalSpendNext28Days9, const RuntimeMethod* method) 
{
	{
		// public PlayerStats(
		//     int numberOfPurchases,
		//     float avgSessionLength,
		//     int daysSinceLastPlayed,
		//     int numberOfSessions,
		//     float sessPercentile,
		//     float spendPercentile,
		//     float spendProbability,
		//     float churnProbability,
		//     float highSpenderProbability,
		//     float totalSpendNext28Days)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mValid = true;
		__this->___mValid_1 = (bool)1;
		// mNumberOfPurchases = numberOfPurchases;
		int32_t L_0 = ___numberOfPurchases0;
		__this->___mNumberOfPurchases_2 = L_0;
		// mAvgSessionLength = avgSessionLength;
		float L_1 = ___avgSessionLength1;
		__this->___mAvgSessionLength_3 = L_1;
		// mDaysSinceLastPlayed = daysSinceLastPlayed;
		int32_t L_2 = ___daysSinceLastPlayed2;
		__this->___mDaysSinceLastPlayed_4 = L_2;
		// mNumberOfSessions = numberOfSessions;
		int32_t L_3 = ___numberOfSessions3;
		__this->___mNumberOfSessions_5 = L_3;
		// mSessPercentile = sessPercentile;
		float L_4 = ___sessPercentile4;
		__this->___mSessPercentile_6 = L_4;
		// mSpendPercentile = spendPercentile;
		float L_5 = ___spendPercentile5;
		__this->___mSpendPercentile_7 = L_5;
		// mSpendProbability = spendProbability;
		float L_6 = ___spendProbability6;
		__this->___mSpendProbability_8 = L_6;
		// mChurnProbability = churnProbability;
		float L_7 = ___churnProbability7;
		__this->___mChurnProbability_9 = L_7;
		// mHighSpenderProbability = highSpenderProbability;
		float L_8 = ___highSpenderProbability8;
		__this->___mHighSpenderProbability_10 = L_8;
		// mTotalSpendNext28Days = totalSpendNext28Days;
		float L_9 = ___totalSpendNext28Days9;
		__this->___mTotalSpendNext28Days_11 = L_9;
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.PlayerStats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__ctor_m6F5119310FBCCA1C3FAEBADFFEEEB65DEF3B99C9 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	{
		// public PlayerStats()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mValid = false;
		__this->___mValid_1 = (bool)0;
		// }
		return;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::get_Valid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_get_Valid_m3C3DA289819583640F8A8717F40266008CD3A093 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mValid; }
		bool L_0 = __this->___mValid_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mValid; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfPurchases_m89B6E4A18BF6D64431AAEAD2CBA9313A1D7CC88A (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mNumberOfPurchases; }
		int32_t L_0 = __this->___mNumberOfPurchases_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNumberOfPurchases; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_AvgSessionLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_AvgSessionLength_m7706A60262AAC2EB855F5407CC49ED58423D45E9 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mAvgSessionLength; }
		float L_0 = __this->___mAvgSessionLength_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mAvgSessionLength; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_DaysSinceLastPlayed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_DaysSinceLastPlayed_mE88498CBD85AA36070BBC1CDFBB8B40675F2AA85 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mDaysSinceLastPlayed; }
		int32_t L_0 = __this->___mDaysSinceLastPlayed_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mDaysSinceLastPlayed; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 GooglePlayGames.BasicApi.PlayerStats::get_NumberOfSessions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerStats_get_NumberOfSessions_m18D64D164F75509C561124A5A15C4817401C7974 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mNumberOfSessions; }
		int32_t L_0 = __this->___mNumberOfSessions_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNumberOfSessions; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SessPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SessPercentile_m37D358BFC7BAAC0CC244CEAC6B62F1920678E4FF (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mSessPercentile; }
		float L_0 = __this->___mSessPercentile_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mSessPercentile; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SpendPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SpendPercentile_mE001119D91E5CE44670C4F5A50E58165EEE2F175 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mSpendPercentile; }
		float L_0 = __this->___mSpendPercentile_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mSpendPercentile; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_SpendProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_SpendProbability_m1B417BAA2AC482F8AEBEDE3CB2DEBFD466CEB244 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mSpendProbability; }
		float L_0 = __this->___mSpendProbability_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mSpendProbability; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_ChurnProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_ChurnProbability_m8CE0C33E3A35BCA4C7D06F883C80F0B0A4C4EBCC (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mChurnProbability; }
		float L_0 = __this->___mChurnProbability_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mChurnProbability; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_HighSpenderProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_HighSpenderProbability_m2C4D3722D002A278C84C7D3648255C1C845E5F63 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mHighSpenderProbability; }
		float L_0 = __this->___mHighSpenderProbability_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mHighSpenderProbability; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single GooglePlayGames.BasicApi.PlayerStats::get_TotalSpendNext28Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerStats_get_TotalSpendNext28Days_m0B46574D8F26214ACAF329E6FC82BC834DDDB817 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return mTotalSpendNext28Days; }
		float L_0 = __this->___mTotalSpendNext28Days_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mTotalSpendNext28Days; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasNumberOfPurchases()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasNumberOfPurchases_mB1A9605FB57B4DBD4659958D4BE3482618DABF52 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return NumberOfPurchases != (int) UNSET_VALUE;
		int32_t L_0;
		L_0 = PlayerStats_get_NumberOfPurchases_m89B6E4A18BF6D64431AAEAD2CBA9313A1D7CC88A(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasAvgSessionLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasAvgSessionLength_m1CBCF2436BBD26D34C9113E6D9CB59537F12D512 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return AvgSessionLength != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_AvgSessionLength_m7706A60262AAC2EB855F5407CC49ED58423D45E9(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasDaysSinceLastPlayed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasDaysSinceLastPlayed_m5ED3293B90AB7ABB3160B84B6003669EBF73E3A8 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return DaysSinceLastPlayed != (int) UNSET_VALUE;
		int32_t L_0;
		L_0 = PlayerStats_get_DaysSinceLastPlayed_mE88498CBD85AA36070BBC1CDFBB8B40675F2AA85(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasNumberOfSessions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasNumberOfSessions_mEBA976F7B72D96D3C6FF2FB56C99F5A3C27AF85E (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return NumberOfSessions != (int) UNSET_VALUE;
		int32_t L_0;
		L_0 = PlayerStats_get_NumberOfSessions_m18D64D164F75509C561124A5A15C4817401C7974(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasSessPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasSessPercentile_m69BA775DEC663B4DB74968AF06820A32E918205A (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return SessPercentile != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_SessPercentile_m37D358BFC7BAAC0CC244CEAC6B62F1920678E4FF(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasSpendPercentile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasSpendPercentile_m0FBD133ED6985DA9F019A3CB4D0329DF1378EBBF (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return SpendPercentile != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_SpendPercentile_mE001119D91E5CE44670C4F5A50E58165EEE2F175(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasChurnProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasChurnProbability_mCEEA3E4FBB98053FF7265BD1D5BFDD433171A540 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return ChurnProbability != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_ChurnProbability_m8CE0C33E3A35BCA4C7D06F883C80F0B0A4C4EBCC(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasHighSpenderProbability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasHighSpenderProbability_m1DB914A55F3E1490EB9C54D654A01C17A7DC1956 (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return HighSpenderProbability != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_HighSpenderProbability_m2C4D3722D002A278C84C7D3648255C1C845E5F63(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean GooglePlayGames.BasicApi.PlayerStats::HasTotalSpendNext28Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerStats_HasTotalSpendNext28Days_m75FBB3A2EA2BEEBCB6631A041BA6FD8F0724996C (PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return TotalSpendNext28Days != UNSET_VALUE;
		float L_0;
		L_0 = PlayerStats_get_TotalSpendNext28Days_m0B46574D8F26214ACAF329E6FC82BC834DDDB817(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var))->___UNSET_VALUE_0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void GooglePlayGames.BasicApi.PlayerStats::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerStats__cctor_mFEB35CE4E58B87434BB7B8DC2252AADB4AAA95B1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static float UNSET_VALUE = -1.0f;
		((PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_StaticFields*)il2cpp_codegen_static_fields_for(PlayerStats_t80312B57D2D1660502DE4D8D5261F877D7621513_il2cpp_TypeInfo_var))->___UNSET_VALUE_0 = (-1.0f);
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
// System.Void GooglePlayGames.BasicApi.ScorePageToken::.ctor(System.Object,System.String,GooglePlayGames.BasicApi.LeaderboardCollection,GooglePlayGames.BasicApi.LeaderboardTimeSpan,GooglePlayGames.BasicApi.ScorePageDirection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScorePageToken__ctor_mC6A95B2CF5D58E225B68F324F89740440E463A25 (ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* __this, RuntimeObject* ___internalObject0, String_t* ___id1, int32_t ___collection2, int32_t ___timespan3, int32_t ___direction4, const RuntimeMethod* method) 
{
	{
		// internal ScorePageToken(object internalObject, string id,
		//     LeaderboardCollection collection, LeaderboardTimeSpan timespan,
		//     ScorePageDirection direction)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mInternalObject = internalObject;
		RuntimeObject* L_0 = ___internalObject0;
		__this->___mInternalObject_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mInternalObject_1), (void*)L_0);
		// mId = id;
		String_t* L_1 = ___id1;
		__this->___mId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_1);
		// mCollection = collection;
		int32_t L_2 = ___collection2;
		__this->___mCollection_2 = L_2;
		// mTimespan = timespan;
		int32_t L_3 = ___timespan3;
		__this->___mTimespan_3 = L_3;
		// mDirection = direction;
		int32_t L_4 = ___direction4;
		__this->___mDirection_4 = L_4;
		// }
		return;
	}
}
// GooglePlayGames.BasicApi.LeaderboardCollection GooglePlayGames.BasicApi.ScorePageToken::get_Collection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_Collection_mE50CCE1F8DAD88FC3C1339CA56E3589F59B66D5F (ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mCollection; }
		int32_t L_0 = __this->___mCollection_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mCollection; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// GooglePlayGames.BasicApi.LeaderboardTimeSpan GooglePlayGames.BasicApi.ScorePageToken::get_TimeSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_TimeSpan_mACECEE8508CBD17F79C6208DFC56C3ED3832E800 (ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mTimespan; }
		int32_t L_0 = __this->___mTimespan_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mTimespan; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// GooglePlayGames.BasicApi.ScorePageDirection GooglePlayGames.BasicApi.ScorePageToken::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScorePageToken_get_Direction_m311708F02EC16EE13575642268B522BDE4660396 (ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mDirection; }
		int32_t L_0 = __this->___mDirection_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mDirection; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.ScorePageToken::get_LeaderboardId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ScorePageToken_get_LeaderboardId_mBEBA3AD6E37CF08D4F220EDBD40DCFEC3A65D9A5 (ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Object GooglePlayGames.BasicApi.ScorePageToken::get_InternalObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScorePageToken_get_InternalObject_mD94F9B5585B544390A76C6682F1F26888DFB6624 (ScorePageToken_t46A318A8DF14F472951DABD9D2CB8E4D95C8A652* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// get { return mInternalObject; }
		RuntimeObject* L_0 = __this->___mInternalObject_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mInternalObject; }
		RuntimeObject* L_1 = V_0;
		return L_1;
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
void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_Multicast(ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* currentDelegate = reinterpret_cast<ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenInst(ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	NullCheck(___resolver0);
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, method);
}
void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenStatic(ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, method);
}
void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenStaticInvoker(ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_ClosedStaticInvoker(ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenVirtual(ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	NullCheck(___resolver0);
	VirtualActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(il2cpp_codegen_method_get_slot(method), ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenInterface(ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	NullCheck(___resolver0);
	InterfaceActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenGenericVirtual(ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	NullCheck(___resolver0);
	GenericVirtualActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(method, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenGenericInterface(ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method)
{
	NullCheck(___resolver0);
	GenericInterfaceActionInvoker4< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(method, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4);
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback__ctor_m4FFD96F23036F325DEB301CC41A8DDCFBF7764DE (ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4_Multicast;
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::Invoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback_Invoke_m92A34A283DDCDAB5A353A201B466BA9EDF2C9CA4 (ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___resolver0, ___original1, ___originalData2, ___unmerged3, ___unmergedData4, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GooglePlayGames.BasicApi.SavedGame.ConflictCallback::BeginInvoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConflictCallback_BeginInvoke_m070CB10EA460E07BB8606F1E716B17A211F702E8 (ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___resolver0, RuntimeObject* ___original1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___originalData2, RuntimeObject* ___unmerged3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___unmergedData4, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback5, RuntimeObject* ___object6, const RuntimeMethod* method) 
{
	void *__d_args[6] = {0};
	__d_args[0] = ___resolver0;
	__d_args[1] = ___original1;
	__d_args[2] = ___originalData2;
	__d_args[3] = ___unmerged3;
	__d_args[4] = ___unmergedData4;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConflictCallback_EndInvoke_mD8B65C517F1AF693DCDC2776A742EE122FBE907F (ConflictCallback_tF2EA395A528994434B1497A201D729C884B47D9F* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshal_pinvoke(const SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0& unmarshaled, SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshal_pinvoke_back(const SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshaled_pinvoke& marshaled, SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshal_pinvoke_cleanup(SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshal_com(const SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0& unmarshaled, SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshal_com_back(const SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshaled_com& marshaled, SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'SavedGameMetadataUpdate'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate
IL2CPP_EXTERN_C void SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshal_com_cleanup(SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0_marshaled_com& marshaled)
{
}
// System.Void GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::.ctor(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavedGameMetadataUpdate__ctor_mFBA5FB3EE32FDBC4A51DF93E1B8C8292CC5C7C14 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 ___builder0, const RuntimeMethod* method) 
{
	{
		// mDescriptionUpdated = builder.mDescriptionUpdated;
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_0 = ___builder0;
		bool L_1 = L_0.___mDescriptionUpdated_0;
		__this->___mDescriptionUpdated_0 = L_1;
		// mNewDescription = builder.mNewDescription;
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_2 = ___builder0;
		String_t* L_3 = L_2.___mNewDescription_1;
		__this->___mNewDescription_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewDescription_1), (void*)L_3);
		// mCoverImageUpdated = builder.mCoverImageUpdated;
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_4 = ___builder0;
		bool L_5 = L_4.___mCoverImageUpdated_2;
		__this->___mCoverImageUpdated_2 = L_5;
		// mNewPngCoverImage = builder.mNewPngCoverImage;
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_6 = ___builder0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6.___mNewPngCoverImage_3;
		__this->___mNewPngCoverImage_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewPngCoverImage_3), (void*)L_7);
		// mNewPlayedTime = builder.mNewPlayedTime;
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_8 = ___builder0;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_9 = L_8.___mNewPlayedTime_4;
		__this->___mNewPlayedTime_4 = L_9;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SavedGameMetadataUpdate__ctor_mFBA5FB3EE32FDBC4A51DF93E1B8C8292CC5C7C14_AdjustorThunk (RuntimeObject* __this, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 ___builder0, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0*>(__this + _offset);
	SavedGameMetadataUpdate__ctor_mFBA5FB3EE32FDBC4A51DF93E1B8C8292CC5C7C14(_thisAdjusted, ___builder0, method);
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsDescriptionUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mAA4E078DE38089EC25D925A39EB8A93DAFC67FC4 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mDescriptionUpdated; }
		bool L_0 = __this->___mDescriptionUpdated_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mDescriptionUpdated; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsDescriptionUpdated_mAA4E078DE38089EC25D925A39EB8A93DAFC67FC4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsDescriptionUpdated_mAA4E078DE38089EC25D925A39EB8A93DAFC67FC4(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m8ECA7BE5BFA92D0AC2D61881ED513DA64623332D (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mNewDescription; }
		String_t* L_0 = __this->___mNewDescription_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNewDescription; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* SavedGameMetadataUpdate_get_UpdatedDescription_m8ECA7BE5BFA92D0AC2D61881ED513DA64623332D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedDescription_m8ECA7BE5BFA92D0AC2D61881ED513DA64623332D(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsCoverImageUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_mA7F232A85D35F63B2558FE71A55248BB9A05E896 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mCoverImageUpdated; }
		bool L_0 = __this->___mCoverImageUpdated_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mCoverImageUpdated; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsCoverImageUpdated_mA7F232A85D35F63B2558FE71A55248BB9A05E896_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsCoverImageUpdated_mA7F232A85D35F63B2558FE71A55248BB9A05E896(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPngCoverImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mA7647A08F7F963020D21FBF5C0A40DB777C467F3 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// get { return mNewPngCoverImage; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mNewPngCoverImage_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNewPngCoverImage; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mA7647A08F7F963020D21FBF5C0A40DB777C467F3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedPngCoverImage_mA7647A08F7F963020D21FBF5C0A40DB777C467F3(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_IsPlayedTimeUpdated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m2152967C608A38E561F49968DE7983BF8BAA9A40 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// get { return mNewPlayedTime.HasValue; }
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* L_0 = (&__this->___mNewPlayedTime_4);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_inline(L_0, Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return mNewPlayedTime.HasValue; }
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m2152967C608A38E561F49968DE7983BF8BAA9A40_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0*>(__this + _offset);
	bool _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_IsPlayedTimeUpdated_m2152967C608A38E561F49968DE7983BF8BAA9A40(_thisAdjusted, method);
	return _returnValue;
}
// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate::get_UpdatedPlayedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m8D6718C8100611C88CA33EBAB6E726BC049E2069 (SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* __this, const RuntimeMethod* method) 
{
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return mNewPlayedTime; }
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_0 = __this->___mNewPlayedTime_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mNewPlayedTime; }
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 SavedGameMetadataUpdate_get_UpdatedPlayedTime_m8D6718C8100611C88CA33EBAB6E726BC049E2069_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0*>(__this + _offset);
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 _returnValue;
	_returnValue = SavedGameMetadataUpdate_get_UpdatedPlayedTime_m8D6718C8100611C88CA33EBAB6E726BC049E2069(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshal_pinvoke(const Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5& unmarshaled, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshaled_pinvoke& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshal_pinvoke_back(const Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshaled_pinvoke& marshaled, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshal_pinvoke_cleanup(Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshal_com(const Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5& unmarshaled, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshaled_com& marshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
IL2CPP_EXTERN_C void Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshal_com_back(const Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshaled_com& marshaled, Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5& unmarshaled)
{
	Exception_t* ___mNewPlayedTime_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'mNewPlayedTime' of type 'Builder'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___mNewPlayedTime_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
IL2CPP_EXTERN_C void Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshal_com_cleanup(Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5_marshaled_com& marshaled)
{
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedDescription(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedDescription_mE9B7EF6DFD45DCB1893C4CC4390DEDB461199110 (Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* __this, String_t* ___description0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// mNewDescription = Misc.CheckNotNull(description);
		String_t* L_0 = ___description0;
		String_t* L_1;
		L_1 = Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545(L_0, Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545_RuntimeMethod_var);
		__this->___mNewDescription_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewDescription_1), (void*)L_1);
		// mDescriptionUpdated = true;
		__this->___mDescriptionUpdated_0 = (bool)1;
		// return this;
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_2 = (*(Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5*)__this);
		V_0 = L_2;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedDescription_mE9B7EF6DFD45DCB1893C4CC4390DEDB461199110_AdjustorThunk (RuntimeObject* __this, String_t* ___description0, const RuntimeMethod* method)
{
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5*>(__this + _offset);
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 _returnValue;
	_returnValue = Builder_WithUpdatedDescription_mE9B7EF6DFD45DCB1893C4CC4390DEDB461199110(_thisAdjusted, ___description0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPngCoverImage(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedPngCoverImage_m2484990C7D5DFB84F5F933A2125BBC19596CDBB0 (Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___newPngCoverImage0, const RuntimeMethod* method) 
{
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// mCoverImageUpdated = true;
		__this->___mCoverImageUpdated_2 = (bool)1;
		// mNewPngCoverImage = newPngCoverImage;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___newPngCoverImage0;
		__this->___mNewPngCoverImage_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mNewPngCoverImage_3), (void*)L_0);
		// return this;
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_1 = (*(Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5*)__this);
		V_0 = L_1;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedPngCoverImage_m2484990C7D5DFB84F5F933A2125BBC19596CDBB0_AdjustorThunk (RuntimeObject* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___newPngCoverImage0, const RuntimeMethod* method)
{
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5*>(__this + _offset);
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 _returnValue;
	_returnValue = Builder_WithUpdatedPngCoverImage_m2484990C7D5DFB84F5F933A2125BBC19596CDBB0(_thisAdjusted, ___newPngCoverImage0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::WithUpdatedPlayedTime(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedPlayedTime_mA0DD09952CA1BCED3A97AA6505CBC078339E1E2D (Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___newPlayedTime0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (newPlayedTime.TotalMilliseconds > ulong.MaxValue)
		double L_0;
		L_0 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&___newPlayedTime0), NULL);
		V_0 = (bool)((((double)L_0) > ((double)(1.8446744073709552E+19)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// throw new InvalidOperationException("Timespans longer than ulong.MaxValue " +
		//                                     "milliseconds are not allowed");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral44422B1D8FA435D0D343B090134AB90503F8B8DD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Builder_WithUpdatedPlayedTime_mA0DD09952CA1BCED3A97AA6505CBC078339E1E2D_RuntimeMethod_var)));
	}

IL_0023:
	{
		// mNewPlayedTime = newPlayedTime;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3 = ___newPlayedTime0;
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC((&L_4), L_3, /*hidden argument*/Nullable_1__ctor_m57671EDBF4C8A3BEF5EF30DC71BE6C17C6A657AC_RuntimeMethod_var);
		__this->___mNewPlayedTime_4 = L_4;
		// return this;
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_5 = (*(Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5*)__this);
		V_1 = L_5;
		goto IL_0038;
	}

IL_0038:
	{
		// }
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_6 = V_1;
		return L_6;
	}
}
IL2CPP_EXTERN_C  Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 Builder_WithUpdatedPlayedTime_mA0DD09952CA1BCED3A97AA6505CBC078339E1E2D_AdjustorThunk (RuntimeObject* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___newPlayedTime0, const RuntimeMethod* method)
{
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5*>(__this + _offset);
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 _returnValue;
	_returnValue = Builder_WithUpdatedPlayedTime_mA0DD09952CA1BCED3A97AA6505CBC078339E1E2D(_thisAdjusted, ___newPlayedTime0, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0 Builder_Build_m8EDC59A0D8E7D6DD3F7855B9975D147849F400FD (Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* __this, const RuntimeMethod* method) 
{
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new SavedGameMetadataUpdate(this);
		Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5 L_0 = (*(Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5*)__this);
		SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		SavedGameMetadataUpdate__ctor_mFBA5FB3EE32FDBC4A51DF93E1B8C8292CC5C7C14((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0 Builder_Build_m8EDC59A0D8E7D6DD3F7855B9975D147849F400FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Builder_t49DB7C61D1787A7D14F8FAE09FDB00EC57A484A5*>(__this + _offset);
	SavedGameMetadataUpdate_t20A9D002EF0A6174E7C7B6B52EFA6AFA2E5775E0 _returnValue;
	_returnValue = Builder_Build_m8EDC59A0D8E7D6DD3F7855B9975D147849F400FD(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshal_pinvoke(const AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C& unmarshaled, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshaled_pinvoke& marshaled)
{
	marshaled.___mStatus_0 = unmarshaled.___mStatus_0;
	marshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_string(unmarshaled.___mLocalEndpointName_1);
}
IL2CPP_EXTERN_C void AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshal_pinvoke_back(const AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshaled_pinvoke& marshaled, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C& unmarshaled)
{
	int32_t unmarshaledmStatus_temp_0 = 0;
	unmarshaledmStatus_temp_0 = marshaled.___mStatus_0;
	unmarshaled.___mStatus_0 = unmarshaledmStatus_temp_0;
	unmarshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_string_result(marshaled.___mLocalEndpointName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mLocalEndpointName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mLocalEndpointName_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshal_pinvoke_cleanup(AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mLocalEndpointName_1);
	marshaled.___mLocalEndpointName_1 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshal_com(const AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C& unmarshaled, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshaled_com& marshaled)
{
	marshaled.___mStatus_0 = unmarshaled.___mStatus_0;
	marshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___mLocalEndpointName_1);
}
IL2CPP_EXTERN_C void AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshal_com_back(const AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshaled_com& marshaled, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C& unmarshaled)
{
	int32_t unmarshaledmStatus_temp_0 = 0;
	unmarshaledmStatus_temp_0 = marshaled.___mStatus_0;
	unmarshaled.___mStatus_0 = unmarshaledmStatus_temp_0;
	unmarshaled.___mLocalEndpointName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___mLocalEndpointName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mLocalEndpointName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mLocalEndpointName_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.AdvertisingResult
IL2CPP_EXTERN_C void AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshal_com_cleanup(AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mLocalEndpointName_1);
	marshaled.___mLocalEndpointName_1 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.AdvertisingResult::.ctor(GooglePlayGames.BasicApi.ResponseStatus,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdvertisingResult__ctor_m15D7590EA615D30F680CB328BBDB198A523CC891 (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, int32_t ___status0, String_t* ___localEndpointName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mStatus = status;
		int32_t L_0 = ___status0;
		__this->___mStatus_0 = L_0;
		// this.mLocalEndpointName = Misc.CheckNotNull(localEndpointName);
		String_t* L_1 = ___localEndpointName1;
		String_t* L_2;
		L_2 = Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545(L_1, Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545_RuntimeMethod_var);
		__this->___mLocalEndpointName_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mLocalEndpointName_1), (void*)L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AdvertisingResult__ctor_m15D7590EA615D30F680CB328BBDB198A523CC891_AdjustorThunk (RuntimeObject* __this, int32_t ___status0, String_t* ___localEndpointName1, const RuntimeMethod* method)
{
	AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C*>(__this + _offset);
	AdvertisingResult__ctor_m15D7590EA615D30F680CB328BBDB198A523CC891(_thisAdjusted, ___status0, ___localEndpointName1, method);
}
// System.Boolean GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Succeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdvertisingResult_get_Succeeded_m9981EE0B31926BC579FBD2D70ECBB82C66314955 (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return mStatus == ResponseStatus.Success; }
		int32_t L_0 = __this->___mStatus_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// get { return mStatus == ResponseStatus.Success; }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool AdvertisingResult_get_Succeeded_m9981EE0B31926BC579FBD2D70ECBB82C66314955_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C*>(__this + _offset);
	bool _returnValue;
	_returnValue = AdvertisingResult_get_Succeeded_m9981EE0B31926BC579FBD2D70ECBB82C66314955(_thisAdjusted, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.ResponseStatus GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdvertisingResult_get_Status_m15D8CEBEB8D857960DA7435B2B98EAF9C1B1E7F3 (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mStatus; }
		int32_t L_0 = __this->___mStatus_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mStatus; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AdvertisingResult_get_Status_m15D8CEBEB8D857960DA7435B2B98EAF9C1B1E7F3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AdvertisingResult_get_Status_m15D8CEBEB8D857960DA7435B2B98EAF9C1B1E7F3(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.AdvertisingResult::get_LocalEndpointName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdvertisingResult_get_LocalEndpointName_mCC369A10E130C752357C1155FCD20DED9CF868A2 (AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mLocalEndpointName; }
		String_t* L_0 = __this->___mLocalEndpointName_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mLocalEndpointName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* AdvertisingResult_get_LocalEndpointName_mCC369A10E130C752357C1155FCD20DED9CF868A2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = AdvertisingResult_get_LocalEndpointName_mCC369A10E130C752357C1155FCD20DED9CF868A2(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshal_pinvoke(const ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF& unmarshaled, ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshaled_pinvoke& marshaled)
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke(unmarshaled.___mRemoteEndpoint_0, marshaled.___mRemoteEndpoint_0);
	marshaled.___mPayload_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload_1);
}
IL2CPP_EXTERN_C void ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshal_pinvoke_back(const ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshaled_pinvoke& marshaled, ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C unmarshaledmRemoteEndpoint_temp_0;
	memset((&unmarshaledmRemoteEndpoint_temp_0), 0, sizeof(unmarshaledmRemoteEndpoint_temp_0));
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke_back(marshaled.___mRemoteEndpoint_0, unmarshaledmRemoteEndpoint_temp_0);
	unmarshaled.___mRemoteEndpoint_0 = unmarshaledmRemoteEndpoint_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mEndpointId_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mName_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mServiceId_2), (void*)NULL);
	#endif
	unmarshaled.___mPayload_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshal_pinvoke_cleanup(ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshaled_pinvoke& marshaled)
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke_cleanup(marshaled.___mRemoteEndpoint_0);
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_1);
	marshaled.___mPayload_1 = NULL;
}


// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshal_com(const ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF& unmarshaled, ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshaled_com& marshaled)
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com(unmarshaled.___mRemoteEndpoint_0, marshaled.___mRemoteEndpoint_0);
	marshaled.___mPayload_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload_1);
}
IL2CPP_EXTERN_C void ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshal_com_back(const ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshaled_com& marshaled, ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C unmarshaledmRemoteEndpoint_temp_0;
	memset((&unmarshaledmRemoteEndpoint_temp_0), 0, sizeof(unmarshaledmRemoteEndpoint_temp_0));
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com_back(marshaled.___mRemoteEndpoint_0, unmarshaledmRemoteEndpoint_temp_0);
	unmarshaled.___mRemoteEndpoint_0 = unmarshaledmRemoteEndpoint_temp_0;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mEndpointId_0), (void*)NULL);
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mName_1), (void*)NULL);
	#endif
	#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.___mRemoteEndpoint_0))->___mServiceId_2), (void*)NULL);
	#endif
	unmarshaled.___mPayload_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload_1), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_1));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
IL2CPP_EXTERN_C void ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshal_com_cleanup(ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF_marshaled_com& marshaled)
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com_cleanup(marshaled.___mRemoteEndpoint_0);
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_1);
	marshaled.___mPayload_1 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionRequest::.ctor(System.String,System.String,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionRequest__ctor_mDF66363E2D62D12229F19F0EFAAA9A721A1309E0 (ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* __this, String_t* ___remoteEndpointId0, String_t* ___remoteEndpointName1, String_t* ___serviceId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m1FFA4C1CAB96A873CE27E749AF898DA83A14E854_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Logger.d("Constructing ConnectionRequest");
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m7B222C8EEF0A9270A4A3201A3BC7E8F0781B4D36(_stringLiteral00AB7142CCB6B85BE064005EBDA9E7330D9CB0A5, NULL);
		// mRemoteEndpoint = new EndpointDetails(remoteEndpointId, remoteEndpointName, serviceId);
		String_t* L_0 = ___remoteEndpointId0;
		String_t* L_1 = ___remoteEndpointName1;
		String_t* L_2 = ___serviceId2;
		EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C L_3;
		memset((&L_3), 0, sizeof(L_3));
		EndpointDetails__ctor_m42A92D99714095AC5995C882AB7881A396A9FA52((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		__this->___mRemoteEndpoint_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mRemoteEndpoint_0))->___mEndpointId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mRemoteEndpoint_0))->___mName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___mRemoteEndpoint_0))->___mServiceId_2), (void*)NULL);
		#endif
		// this.mPayload = Misc.CheckNotNull(payload);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___payload3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m1FFA4C1CAB96A873CE27E749AF898DA83A14E854(L_4, Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m1FFA4C1CAB96A873CE27E749AF898DA83A14E854_RuntimeMethod_var);
		__this->___mPayload_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPayload_1), (void*)L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConnectionRequest__ctor_mDF66363E2D62D12229F19F0EFAAA9A721A1309E0_AdjustorThunk (RuntimeObject* __this, String_t* ___remoteEndpointId0, String_t* ___remoteEndpointName1, String_t* ___serviceId2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method)
{
	ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF*>(__this + _offset);
	ConnectionRequest__ctor_mDF66363E2D62D12229F19F0EFAAA9A721A1309E0(_thisAdjusted, ___remoteEndpointId0, ___remoteEndpointName1, ___serviceId2, ___payload3, method);
}
// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_RemoteEndpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C ConnectionRequest_get_RemoteEndpoint_m48F21C567D148A57B5AB4A00B6FF403217366C72 (ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* __this, const RuntimeMethod* method) 
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return mRemoteEndpoint; }
		EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C L_0 = __this->___mRemoteEndpoint_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mRemoteEndpoint; }
		EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C ConnectionRequest_get_RemoteEndpoint_m48F21C567D148A57B5AB4A00B6FF403217366C72_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF*>(__this + _offset);
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C _returnValue;
	_returnValue = ConnectionRequest_get_RemoteEndpoint_m48F21C567D148A57B5AB4A00B6FF403217366C72(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m3D13DE9B4C8C017BB0F1DCA02A6F1B4A834A70B0 (ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionRequest_get_Payload_m3D13DE9B4C8C017BB0F1DCA02A6F1B4A834A70B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionRequest_t91E30890E727FF25CC25A9DBB5CF83894E4F4EFF*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ConnectionRequest_get_Payload_m3D13DE9B4C8C017BB0F1DCA02A6F1B4A834A70B0(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshal_pinvoke(const ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71& unmarshaled, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshaled_pinvoke& marshaled)
{
	marshaled.___mLocalClientId_1 = unmarshaled.___mLocalClientId_1;
	marshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_string(unmarshaled.___mRemoteEndpointId_2);
	marshaled.___mResponseStatus_3 = unmarshaled.___mResponseStatus_3;
	marshaled.___mPayload_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload_4);
}
IL2CPP_EXTERN_C void ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshal_pinvoke_back(const ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshaled_pinvoke& marshaled, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaledmLocalClientId_temp_0 = 0;
	unmarshaledmLocalClientId_temp_0 = marshaled.___mLocalClientId_1;
	unmarshaled.___mLocalClientId_1 = unmarshaledmLocalClientId_temp_0;
	unmarshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_string_result(marshaled.___mRemoteEndpointId_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mRemoteEndpointId_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mRemoteEndpointId_2));
	int32_t unmarshaledmResponseStatus_temp_2 = 0;
	unmarshaledmResponseStatus_temp_2 = marshaled.___mResponseStatus_3;
	unmarshaled.___mResponseStatus_3 = unmarshaledmResponseStatus_temp_2;
	unmarshaled.___mPayload_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload_4), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_4));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshal_pinvoke_cleanup(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mRemoteEndpointId_2);
	marshaled.___mRemoteEndpointId_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_4);
	marshaled.___mPayload_4 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshal_com(const ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71& unmarshaled, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshaled_com& marshaled)
{
	marshaled.___mLocalClientId_1 = unmarshaled.___mLocalClientId_1;
	marshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___mRemoteEndpointId_2);
	marshaled.___mResponseStatus_3 = unmarshaled.___mResponseStatus_3;
	marshaled.___mPayload_4 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___mPayload_4);
}
IL2CPP_EXTERN_C void ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshal_com_back(const ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshaled_com& marshaled, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t unmarshaledmLocalClientId_temp_0 = 0;
	unmarshaledmLocalClientId_temp_0 = marshaled.___mLocalClientId_1;
	unmarshaled.___mLocalClientId_1 = unmarshaledmLocalClientId_temp_0;
	unmarshaled.___mRemoteEndpointId_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___mRemoteEndpointId_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mRemoteEndpointId_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mRemoteEndpointId_2));
	int32_t unmarshaledmResponseStatus_temp_2 = 0;
	unmarshaledmResponseStatus_temp_2 = marshaled.___mResponseStatus_3;
	unmarshaled.___mResponseStatus_3 = unmarshaledmResponseStatus_temp_2;
	unmarshaled.___mPayload_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mPayload_4), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___mPayload_4));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionResponse
IL2CPP_EXTERN_C void ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshal_com_cleanup(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mRemoteEndpointId_2);
	marshaled.___mRemoteEndpointId_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___mPayload_4);
	marshaled.___mPayload_4 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.ctor(System.Int64,System.String,GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m1FFA4C1CAB96A873CE27E749AF898DA83A14E854_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mLocalClientId = localClientId;
		int64_t L_0 = ___localClientId0;
		__this->___mLocalClientId_1 = L_0;
		// this.mRemoteEndpointId = Misc.CheckNotNull(remoteEndpointId);
		String_t* L_1 = ___remoteEndpointId1;
		String_t* L_2;
		L_2 = Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545(L_1, Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545_RuntimeMethod_var);
		__this->___mRemoteEndpointId_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mRemoteEndpointId_2), (void*)L_2);
		// this.mResponseStatus = code;
		int32_t L_3 = ___code2;
		__this->___mResponseStatus_3 = L_3;
		// this.mPayload = Misc.CheckNotNull(payload);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___payload3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m1FFA4C1CAB96A873CE27E749AF898DA83A14E854(L_4, Misc_CheckNotNull_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m1FFA4C1CAB96A873CE27E749AF898DA83A14E854_RuntimeMethod_var);
		__this->___mPayload_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mPayload_4), (void*)L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A_AdjustorThunk (RuntimeObject* __this, int64_t ___localClientId0, String_t* ___remoteEndpointId1, int32_t ___code2, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload3, const RuntimeMethod* method)
{
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71*>(__this + _offset);
	ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A(_thisAdjusted, ___localClientId0, ___remoteEndpointId1, ___code2, ___payload3, method);
}
// System.Int64 GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ConnectionResponse_get_LocalClientId_mCE3D71D03B189859430A9554AAA444DA334BB7BA (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->___mLocalClientId_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mLocalClientId; }
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int64_t ConnectionResponse_get_LocalClientId_mCE3D71D03B189859430A9554AAA444DA334BB7BA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ConnectionResponse_get_LocalClientId_mCE3D71D03B189859430A9554AAA444DA334BB7BA(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_RemoteEndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConnectionResponse_get_RemoteEndpointId_mB73CBEDE78BD068E2FBAFFA55AAA478F1928C39E (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mRemoteEndpointId; }
		String_t* L_0 = __this->___mRemoteEndpointId_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mRemoteEndpointId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* ConnectionResponse_get_RemoteEndpointId_mB73CBEDE78BD068E2FBAFFA55AAA478F1928C39E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ConnectionResponse_get_RemoteEndpointId_mB73CBEDE78BD068E2FBAFFA55AAA478F1928C39E(_thisAdjusted, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse/Status GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_ResponseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConnectionResponse_get_ResponseStatus_m50721201BDD16E18CCBD9A5E05302B0AC98384FD (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mResponseStatus; }
		int32_t L_0 = __this->___mResponseStatus_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mResponseStatus; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ConnectionResponse_get_ResponseStatus_m50721201BDD16E18CCBD9A5E05302B0AC98384FD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ConnectionResponse_get_ResponseStatus_m50721201BDD16E18CCBD9A5E05302B0AC98384FD(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionResponse::get_Payload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m63A2E17969A99A44E880B2580A7CC4CD3E890412 (ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* __this, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___mPayload_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mPayload; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ConnectionResponse_get_Payload_m63A2E17969A99A44E880B2580A7CC4CD3E890412_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ConnectionResponse_get_Payload_m63A2E17969A99A44E880B2580A7CC4CD3E890412(_thisAdjusted, method);
	return _returnValue;
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Rejected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ConnectionResponse_Rejected_m14B968B81CCAC54FAFEAA3D6A22A429966E26CA5 (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.Rejected,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A((&L_3), L_0, L_1, 1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_4 = V_0;
		return L_4;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::NetworkNotConnected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ConnectionResponse_NetworkNotConnected_m3BB225746829B280E40CC49ECA180F729BA005AE (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.ErrorNetworkNotConnected,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A((&L_3), L_0, L_1, 3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_4 = V_0;
		return L_4;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::InternalError(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ConnectionResponse_InternalError_mD8523E5AA275FCB26953356470FFC1B08C4632A6 (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.ErrorInternal,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A((&L_3), L_0, L_1, 2, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_4 = V_0;
		return L_4;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::EndpointNotConnected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ConnectionResponse_EndpointNotConnected_mC9032078C89F51CA9E97529BC88B5623BCD1E6A6 (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.ErrorEndpointNotConnected,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A((&L_3), L_0, L_1, 4, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_4 = V_0;
		return L_4;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::Accepted(System.Int64,System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ConnectionResponse_Accepted_m14048A59F4F8BC85286C547E4B8BD56695FD5315 (int64_t ___localClientId0, String_t* ___remoteEndpointId1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload2, const RuntimeMethod* method) 
{
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId, Status.Accepted,
		//     payload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___payload2;
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A((&L_3), L_0, L_1, 0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_000d;
	}

IL_000d:
	{
		// }
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_4 = V_0;
		return L_4;
	}
}
// GooglePlayGames.BasicApi.Nearby.ConnectionResponse GooglePlayGames.BasicApi.Nearby.ConnectionResponse::AlreadyConnected(System.Int64,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ConnectionResponse_AlreadyConnected_m036F07ACEECFCDE2002D1859C1ABE4DD88D34F8F (int64_t ___localClientId0, String_t* ___remoteEndpointId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new ConnectionResponse(localClientId, remoteEndpointId,
		//     Status.ErrorAlreadyConnected,
		//     EmptyPayload);
		int64_t L_0 = ___localClientId0;
		String_t* L_1 = ___remoteEndpointId1;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ((ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var))->___EmptyPayload_0;
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_3;
		memset((&L_3), 0, sizeof(L_3));
		ConnectionResponse__ctor_m23CE2CB141ECDA6C57870035B019B0745F43AB9A((&L_3), L_0, L_1, 5, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_4 = V_0;
		return L_4;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.ConnectionResponse::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionResponse__cctor_m62A410E80BE47E4FADC9A236DC8591ED9EDE5091 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly byte[] EmptyPayload = new byte[0];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		((ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var))->___EmptyPayload_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_StaticFields*)il2cpp_codegen_static_fields_for(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var))->___EmptyPayload_0), (void*)L_0);
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
// System.Int32 GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::MaxUnreliableMessagePayloadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyNearbyConnectionClient_MaxUnreliableMessagePayloadLength_mB850F559E773636931AE8E8BB406F9E071A05AE9 (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return NearbyConnectionConfiguration.MaxUnreliableMessagePayloadLength;
		V_0 = ((int32_t)1168);
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Int32 GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::MaxReliableMessagePayloadLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DummyNearbyConnectionClient_MaxReliableMessagePayloadLength_m06F10C244B7648A9AF6DEC2D924B4D0E34DF3DAC (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return NearbyConnectionConfiguration.MaxReliableMessagePayloadLength;
		V_0 = ((int32_t)4096);
		goto IL_0009;
	}

IL_0009:
	{
		// }
		int32_t L_0 = V_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendReliable(System.Collections.Generic.List`1<System.String>,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendReliable_m76E71D0583C0D38996E854A8769168F4AF3BDABA (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___recipientEndpointIds0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral147BFD4F80428A91C0F9D44952A51D817DE3C72F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("SendReliable called from dummy implementation");
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m7B222C8EEF0A9270A4A3201A3BC7E8F0781B4D36(_stringLiteral147BFD4F80428A91C0F9D44952A51D817DE3C72F, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendUnreliable(System.Collections.Generic.List`1<System.String>,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendUnreliable_mC4B80074F626D5847674B3648E72EF3087E7B2F0 (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___recipientEndpointIds0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral545FF66BCE47797B96DDEDE6F014AA746BA6DC93);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("SendUnreliable called from dummy implementation");
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m7B222C8EEF0A9270A4A3201A3BC7E8F0781B4D36(_stringLiteral545FF66BCE47797B96DDEDE6F014AA746BA6DC93, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StartAdvertising(System.String,System.Collections.Generic.List`1<System.String>,System.Nullable`1<System.TimeSpan>,System.Action`1<GooglePlayGames.BasicApi.Nearby.AdvertisingResult>,System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionRequest>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StartAdvertising_m49366801C1FAD71979B5A41F77DF621135C78534 (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, String_t* ___name0, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___appIdentifiers1, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___advertisingDuration2, Action_1_t2AA378968D179CE7EFB8362F828F95AE0E912E67* ___resultCallback3, Action_1_t40721379DC6360875470B0B47A7D930554D1A3D3* ___connectionRequestCallback4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AdvertisingResult obj = new AdvertisingResult(ResponseStatus.LicenseCheckFailed, string.Empty);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		AdvertisingResult__ctor_m15D7590EA615D30F680CB328BBDB198A523CC891((&V_0), (-1), L_0, NULL);
		// resultCallback.Invoke(obj);
		Action_1_t2AA378968D179CE7EFB8362F828F95AE0E912E67* L_1 = ___resultCallback3;
		AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C L_2 = V_0;
		NullCheck(L_1);
		Action_1_Invoke_m37D0109A49F7FF75E613FFC0FA9863BEF73D2638_inline(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopAdvertising()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopAdvertising_m3D3508DDE307C7FD15A89DBABEC3AF90D5270781 (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC4843A086C3E94A76137DD9BD551A9913474C68);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StopAvertising in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m7B222C8EEF0A9270A4A3201A3BC7E8F0781B4D36(_stringLiteralCC4843A086C3E94A76137DD9BD551A9913474C68, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::SendConnectionRequest(System.String,System.String,System.Byte[],System.Action`1<GooglePlayGames.BasicApi.Nearby.ConnectionResponse>,GooglePlayGames.BasicApi.Nearby.IMessageListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_SendConnectionRequest_m18FD298BEFC1B570FB52165C702785C48DAE16CE (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, String_t* ___name0, String_t* ___remoteEndpointId1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload2, Action_1_t764690D8533B83F132388734EC2965A2712754D9* ___responseCallback3, RuntimeObject* ___listener4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// OurUtils.Logger.d("SendConnectionRequest called from dummy implementation");
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m7B222C8EEF0A9270A4A3201A3BC7E8F0781B4D36(_stringLiteralB47A6861D450987577E9F46F5035FB9B79EBB645, NULL);
		// if (responseCallback != null)
		Action_1_t764690D8533B83F132388734EC2965A2712754D9* L_0 = ___responseCallback3;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t764690D8533B83F132388734EC2965A2712754D9*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// ConnectionResponse obj = ConnectionResponse.Rejected(0, string.Empty);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		il2cpp_codegen_runtime_class_init_inline(ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71_il2cpp_TypeInfo_var);
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_3;
		L_3 = ConnectionResponse_Rejected_m14B968B81CCAC54FAFEAA3D6A22A429966E26CA5(((int64_t)0), L_2, NULL);
		V_1 = L_3;
		// responseCallback.Invoke(obj);
		Action_1_t764690D8533B83F132388734EC2965A2712754D9* L_4 = ___responseCallback3;
		ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 L_5 = V_1;
		NullCheck(L_4);
		Action_1_Invoke_mFB556BA0E8224DD47A073CB06DD16AE047FC546B_inline(L_4, L_5, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::AcceptConnectionRequest(System.String,System.Byte[],GooglePlayGames.BasicApi.Nearby.IMessageListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_AcceptConnectionRequest_mD23A49C3949ACD746CA25D7EC3118CCE6B5B200B (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, String_t* ___remoteEndpointId0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___payload1, RuntimeObject* ___listener2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60AD3355EDD9D6A49C14EF7999212C6B9FF8AEDF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("AcceptConnectionRequest in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m7B222C8EEF0A9270A4A3201A3BC7E8F0781B4D36(_stringLiteral60AD3355EDD9D6A49C14EF7999212C6B9FF8AEDF, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StartDiscovery(System.String,System.Nullable`1<System.TimeSpan>,GooglePlayGames.BasicApi.Nearby.IDiscoveryListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StartDiscovery_m27D4A29F434992C265BEEF70A37B08C690928423 (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, String_t* ___serviceId0, Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___advertisingTimeout1, RuntimeObject* ___listener2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92B0558434BA6C25E07F6C3D9B85B4CC71BAF3BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StartDiscovery in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m7B222C8EEF0A9270A4A3201A3BC7E8F0781B4D36(_stringLiteral92B0558434BA6C25E07F6C3D9B85B4CC71BAF3BA, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopDiscovery(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopDiscovery_mCD7691DCFF1A6EA0BE827A7B5A04C78993A3B03C (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, String_t* ___serviceId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE112AB60E299D09FDCB1AD292D752F8F8BAE8D28);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StopDiscovery in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m7B222C8EEF0A9270A4A3201A3BC7E8F0781B4D36(_stringLiteralE112AB60E299D09FDCB1AD292D752F8F8BAE8D28, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::RejectConnectionRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_RejectConnectionRequest_m71491AEA881C9442201F83167CBA053FAD8707DA (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, String_t* ___requestingEndpointId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC798A7B286F071F7CD687674E7600AA6BC58EE4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("RejectConnectionRequest in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m7B222C8EEF0A9270A4A3201A3BC7E8F0781B4D36(_stringLiteralC798A7B286F071F7CD687674E7600AA6BC58EE4A, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::DisconnectFromEndpoint(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_DisconnectFromEndpoint_m5AAC25B0A6D48E20D76A7C6005DEE63469B448FB (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, String_t* ___remoteEndpointId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD05C313FB48D49A0F08538D416D439DB37A17711);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("DisconnectFromEndpoint in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m7B222C8EEF0A9270A4A3201A3BC7E8F0781B4D36(_stringLiteralD05C313FB48D49A0F08538D416D439DB37A17711, NULL);
		// }
		return;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::StopAllConnections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient_StopAllConnections_mADE4ECCE02420B408DC199007C25B04CB3807261 (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA9B4AFE9B15F0DEE7467CB471ADE848233E5F39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OurUtils.Logger.d("StopAllConnections in dummy implementation called");
		il2cpp_codegen_runtime_class_init_inline(Logger_t5CF800C3B704B1A729BF9B1448B6366BA9610ABB_il2cpp_TypeInfo_var);
		Logger_d_m7B222C8EEF0A9270A4A3201A3BC7E8F0781B4D36(_stringLiteralBA9B4AFE9B15F0DEE7467CB471ADE848233E5F39, NULL);
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::LocalEndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_LocalEndpointId_mC292A539D110A2F8AF9378C705B4FE33FF8AF0E7 (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return string.Empty;
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::LocalDeviceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_LocalDeviceId_m692C4FFAA7CE075E04D4212DAA9C825C2FFD675E (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return "DummyDevice";
		V_0 = _stringLiteral340A4E6113B91F3053467C6C9DD290DCC19AB723;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::GetAppBundleId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_GetAppBundleId_mBE040E3049AA4526BD3E0F3507D48B581A3BF33F (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return "dummy.bundle.id";
		V_0 = _stringLiteral7ABC30D82A54972627C87DC7A578D29EBEE8F0EF;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.String GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::GetServiceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DummyNearbyConnectionClient_GetServiceId_mC7C3070530CD97B9E2B5A3A7BCAADB9885FBAF2D (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return "dummy.service.id";
		V_0 = _stringLiteral3D9B11B83DF3D810DBEC9A8899C7DCC0359E3DFB;
		goto IL_0009;
	}

IL_0009:
	{
		// }
		String_t* L_0 = V_0;
		return L_0;
	}
}
// System.Void GooglePlayGames.BasicApi.Nearby.DummyNearbyConnectionClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DummyNearbyConnectionClient__ctor_mBEF7D59B77A5D0BE43018313BA7E25EA2381084F (DummyNearbyConnectionClient_tEDD1EAB8821E45D8CC29DA23A551F53C26497DAC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke(const EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C& unmarshaled, EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke& marshaled)
{
	marshaled.___mEndpointId_0 = il2cpp_codegen_marshal_string(unmarshaled.___mEndpointId_0);
	marshaled.___mName_1 = il2cpp_codegen_marshal_string(unmarshaled.___mName_1);
	marshaled.___mServiceId_2 = il2cpp_codegen_marshal_string(unmarshaled.___mServiceId_2);
}
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke_back(const EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke& marshaled, EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C& unmarshaled)
{
	unmarshaled.___mEndpointId_0 = il2cpp_codegen_marshal_string_result(marshaled.___mEndpointId_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mEndpointId_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mEndpointId_0));
	unmarshaled.___mName_1 = il2cpp_codegen_marshal_string_result(marshaled.___mName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mName_1));
	unmarshaled.___mServiceId_2 = il2cpp_codegen_marshal_string_result(marshaled.___mServiceId_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mServiceId_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___mServiceId_2));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_pinvoke_cleanup(EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___mEndpointId_0);
	marshaled.___mEndpointId_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___mName_1);
	marshaled.___mName_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___mServiceId_2);
	marshaled.___mServiceId_2 = NULL;
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com(const EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C& unmarshaled, EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com& marshaled)
{
	marshaled.___mEndpointId_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___mEndpointId_0);
	marshaled.___mName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___mName_1);
	marshaled.___mServiceId_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___mServiceId_2);
}
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com_back(const EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com& marshaled, EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C& unmarshaled)
{
	unmarshaled.___mEndpointId_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___mEndpointId_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mEndpointId_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mEndpointId_0));
	unmarshaled.___mName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___mName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mName_1));
	unmarshaled.___mServiceId_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___mServiceId_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mServiceId_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___mServiceId_2));
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.EndpointDetails
IL2CPP_EXTERN_C void EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshal_com_cleanup(EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___mEndpointId_0);
	marshaled.___mEndpointId_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___mName_1);
	marshaled.___mName_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___mServiceId_2);
	marshaled.___mServiceId_2 = NULL;
}
// System.Void GooglePlayGames.BasicApi.Nearby.EndpointDetails::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndpointDetails__ctor_m42A92D99714095AC5995C882AB7881A396A9FA52 (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mEndpointId = Misc.CheckNotNull(endpointId);
		String_t* L_0 = ___endpointId0;
		String_t* L_1;
		L_1 = Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545(L_0, Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545_RuntimeMethod_var);
		__this->___mEndpointId_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mEndpointId_0), (void*)L_1);
		// this.mName = Misc.CheckNotNull(name);
		String_t* L_2 = ___name1;
		String_t* L_3;
		L_3 = Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545(L_2, Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545_RuntimeMethod_var);
		__this->___mName_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mName_1), (void*)L_3);
		// this.mServiceId = Misc.CheckNotNull(serviceId);
		String_t* L_4 = ___serviceId2;
		String_t* L_5;
		L_5 = Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545(L_4, Misc_CheckNotNull_TisString_t_mCA096C06AD022052B0A4B849F93F2C94DC940545_RuntimeMethod_var);
		__this->___mServiceId_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mServiceId_2), (void*)L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void EndpointDetails__ctor_m42A92D99714095AC5995C882AB7881A396A9FA52_AdjustorThunk (RuntimeObject* __this, String_t* ___endpointId0, String_t* ___name1, String_t* ___serviceId2, const RuntimeMethod* method)
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C*>(__this + _offset);
	EndpointDetails__ctor_m42A92D99714095AC5995C882AB7881A396A9FA52(_thisAdjusted, ___endpointId0, ___name1, ___serviceId2, method);
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_EndpointId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_EndpointId_m5F4E6619FABAF16FBDE2940483FB1752B319DDCC (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mEndpointId; }
		String_t* L_0 = __this->___mEndpointId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mEndpointId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_EndpointId_m5F4E6619FABAF16FBDE2940483FB1752B319DDCC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_EndpointId_m5F4E6619FABAF16FBDE2940483FB1752B319DDCC(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_Name_mED3DF73757840F813083F34F0D2F33D409C5AED8 (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mName; }
		String_t* L_0 = __this->___mName_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_Name_mED3DF73757840F813083F34F0D2F33D409C5AED8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_Name_mED3DF73757840F813083F34F0D2F33D409C5AED8(_thisAdjusted, method);
	return _returnValue;
}
// System.String GooglePlayGames.BasicApi.Nearby.EndpointDetails::get_ServiceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EndpointDetails_get_ServiceId_m37A34FB2859BA3561172C799410A0B0A118AD094 (EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mServiceId; }
		String_t* L_0 = __this->___mServiceId_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mServiceId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* EndpointDetails_get_ServiceId_m37A34FB2859BA3561172C799410A0B0A118AD094_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<EndpointDetails_t95EEA60E16EE0F4CD6834AF29B6BCDE20C10520C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EndpointDetails_get_ServiceId_m37A34FB2859BA3561172C799410A0B0A118AD094(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshal_pinvoke(const NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B& unmarshaled, NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshaled_pinvoke& marshaled)
{
	marshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___mInitializationCallback_2));
	marshaled.___mLocalClientId_3 = unmarshaled.___mLocalClientId_3;
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshal_pinvoke_back(const NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshaled_pinvoke& marshaled, NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763>(marshaled.___mInitializationCallback_2, Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mInitializationCallback_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763>(marshaled.___mInitializationCallback_2, Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_il2cpp_TypeInfo_var));
	int64_t unmarshaledmLocalClientId_temp_1 = 0;
	unmarshaledmLocalClientId_temp_1 = marshaled.___mLocalClientId_3;
	unmarshaled.___mLocalClientId_3 = unmarshaledmLocalClientId_temp_1;
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshal_pinvoke_cleanup(NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshal_com(const NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B& unmarshaled, NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshaled_com& marshaled)
{
	marshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.___mInitializationCallback_2));
	marshaled.___mLocalClientId_3 = unmarshaled.___mLocalClientId_3;
}
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshal_com_back(const NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshaled_com& marshaled, NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___mInitializationCallback_2 = il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763>(marshaled.___mInitializationCallback_2, Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_il2cpp_TypeInfo_var);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___mInitializationCallback_2), (void*)il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763>(marshaled.___mInitializationCallback_2, Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_il2cpp_TypeInfo_var));
	int64_t unmarshaledmLocalClientId_temp_1 = 0;
	unmarshaledmLocalClientId_temp_1 = marshaled.___mLocalClientId_3;
	unmarshaled.___mLocalClientId_3 = unmarshaledmLocalClientId_temp_1;
}
// Conversion method for clean up from marshalling of: GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration
IL2CPP_EXTERN_C void NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshal_com_cleanup(NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B_marshaled_com& marshaled)
{
}
// System.Void GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::.ctor(System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NearbyConnectionConfiguration__ctor_mB1427DC130517FC2B16AF9BAAB94185A9916A18E (NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* __this, Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* ___callback0, int64_t ___localClientId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Misc_CheckNotNull_TisAction_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_mA693A09455752E9E95F88BBDB32BB9E68D811FE3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.mInitializationCallback = Misc.CheckNotNull(callback);
		Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* L_0 = ___callback0;
		Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* L_1;
		L_1 = Misc_CheckNotNull_TisAction_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_mA693A09455752E9E95F88BBDB32BB9E68D811FE3(L_0, Misc_CheckNotNull_TisAction_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763_mA693A09455752E9E95F88BBDB32BB9E68D811FE3_RuntimeMethod_var);
		__this->___mInitializationCallback_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mInitializationCallback_2), (void*)L_1);
		// this.mLocalClientId = localClientId;
		int64_t L_2 = ___localClientId1;
		__this->___mLocalClientId_3 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NearbyConnectionConfiguration__ctor_mB1427DC130517FC2B16AF9BAAB94185A9916A18E_AdjustorThunk (RuntimeObject* __this, Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* ___callback0, int64_t ___localClientId1, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B*>(__this + _offset);
	NearbyConnectionConfiguration__ctor_mB1427DC130517FC2B16AF9BAAB94185A9916A18E(_thisAdjusted, ___callback0, ___localClientId1, method);
}
// System.Int64 GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t NearbyConnectionConfiguration_get_LocalClientId_m98FA98E0D7B2410024B8B74DA80D8E5E041DDB28 (NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		// get { return mLocalClientId; }
		int64_t L_0 = __this->___mLocalClientId_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mLocalClientId; }
		int64_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int64_t NearbyConnectionConfiguration_get_LocalClientId_m98FA98E0D7B2410024B8B74DA80D8E5E041DDB28_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = NearbyConnectionConfiguration_get_LocalClientId_m98FA98E0D7B2410024B8B74DA80D8E5E041DDB28(_thisAdjusted, method);
	return _returnValue;
}
// System.Action`1<GooglePlayGames.BasicApi.Nearby.InitializationStatus> GooglePlayGames.BasicApi.Nearby.NearbyConnectionConfiguration::get_InitializationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* NearbyConnectionConfiguration_get_InitializationCallback_mE751BCEF68A7D7CEDB42DA5D60EF1C829AB78B40 (NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* __this, const RuntimeMethod* method) 
{
	Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* V_0 = NULL;
	{
		// get { return mInitializationCallback; }
		Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* L_0 = __this->___mInitializationCallback_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mInitializationCallback; }
		Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* NearbyConnectionConfiguration_get_InitializationCallback_mE751BCEF68A7D7CEDB42DA5D60EF1C829AB78B40_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NearbyConnectionConfiguration_tE55B6A801BCD8C3912629F60025986E74A62285B*>(__this + _offset);
	Action_1_tE4FBD7EC56F0E972C4DE41489F7F4890407C8763* _returnValue;
	_returnValue = NearbyConnectionConfiguration_get_InitializationCallback_mE751BCEF68A7D7CEDB42DA5D60EF1C829AB78B40(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GooglePlayGames.BasicApi.Events.Event::.ctor(System.String,System.String,System.String,System.String,System.UInt64,GooglePlayGames.BasicApi.Events.EventVisibility)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Event__ctor_m7B556E6AB4B2CCE3939135651F2DEC3194E33C4B (Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A* __this, String_t* ___id0, String_t* ___name1, String_t* ___description2, String_t* ___imageUrl3, uint64_t ___currentCount4, int32_t ___visibility5, const RuntimeMethod* method) 
{
	{
		// internal Event(string id, string name, string description, string imageUrl,
		//     ulong currentCount, EventVisibility visibility)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mId = id;
		String_t* L_0 = ___id0;
		__this->___mId_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mId_0), (void*)L_0);
		// mName = name;
		String_t* L_1 = ___name1;
		__this->___mName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mName_1), (void*)L_1);
		// mDescription = description;
		String_t* L_2 = ___description2;
		__this->___mDescription_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mDescription_2), (void*)L_2);
		// mImageUrl = imageUrl;
		String_t* L_3 = ___imageUrl3;
		__this->___mImageUrl_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mImageUrl_3), (void*)L_3);
		// mCurrentCount = currentCount;
		uint64_t L_4 = ___currentCount4;
		__this->___mCurrentCount_4 = L_4;
		// mVisibility = visibility;
		int32_t L_5 = ___visibility5;
		__this->___mVisibility_5 = L_5;
		// }
		return;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Id_mDB059CFF41860171CDD4A0AC92E04A4BA1E9A0A7 (Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mId; }
		String_t* L_0 = __this->___mId_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mId; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Name_mA37D7FB644CC50D5E90B72331502364EE90E66BE (Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mName; }
		String_t* L_0 = __this->___mName_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mName; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_Description_m891BCB63ED187774CFEDD7545B6E0FB6E329B6D1 (Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mDescription; }
		String_t* L_0 = __this->___mDescription_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mDescription; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String GooglePlayGames.BasicApi.Events.Event::get_ImageUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Event_get_ImageUrl_mB0CEF2CD2D2A162D873B137C35A7EF859A236C18 (Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A* __this, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// get { return mImageUrl; }
		String_t* L_0 = __this->___mImageUrl_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mImageUrl; }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.UInt64 GooglePlayGames.BasicApi.Events.Event::get_CurrentCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Event_get_CurrentCount_m1DBE8D3501BC0F8513428DA15EAEEF37558649F3 (Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A* __this, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// get { return mCurrentCount; }
		uint64_t L_0 = __this->___mCurrentCount_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mCurrentCount; }
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// GooglePlayGames.BasicApi.Events.EventVisibility GooglePlayGames.BasicApi.Events.Event::get_Visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_Visibility_m1943DA6E09E14FF4E57B99B6B013777F7F2845D3 (Event_tA0AC23FA92EEDF53B55281BE32EF523E7C68972A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return mVisibility; }
		int32_t L_0 = __this->___mVisibility_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return mVisibility; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD63976C410D14373D6D1D3E713C09B1E152F2166_gshared_inline (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mBF7DDBCD230E9D28EDF45D3E65F907DE1AE0CCBC_gshared_inline (Action_1_tC926860F20D428DA3E93D6FBA36420E904DD903B* __this, int32_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m05605BFAA1396765DE23112419D8E6F797B65101_gshared_inline (Action_2_t829FF86EEA250A853DF3A95B2C4DAC034707E20F* __this, int32_t ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m37D0109A49F7FF75E613FFC0FA9863BEF73D2638_gshared_inline (Action_1_t2AA378968D179CE7EFB8362F828F95AE0E912E67* __this, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, AdvertisingResult_tC2A0D13DAF5903AFA04349C2874575FC621D1E2C, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mFB556BA0E8224DD47A073CB06DD16AE047FC546B_gshared_inline (Action_1_t764690D8533B83F132388734EC2965A2712754D9* __this, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71 ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ConnectionResponse_tD4B45BF8C81F4514392521939BA9A60D4C175A71, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
