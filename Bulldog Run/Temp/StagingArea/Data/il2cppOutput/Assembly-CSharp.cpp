#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image>
struct IEnumerable_1_tDC9C34179CE64EEFCDEA207F75A9C887BE68F931;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct KeyCollection_t47FFDBDA052BA25EBBE7B1AAD324D29257951CF7;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<ObjectPooler/Pool>
struct List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<Sound>
struct Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct ValueCollection_t4258B35F0EBB3B6F0E2F80D4F993788844F3D518;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>[]
struct EntryU5BU5D_tBB92B9C5EE0355A3EAD3872FDE7F096B860FDA7F;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF;
// Sound[]
struct SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Menu.Leaderboard/Highscore[]
struct HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45;
// ObjectPooler/Pool[]
struct PoolU5BU5D_t8AA5DFDB82C0664EB8AF6F3A7F908C7BE390C5E1;
// AddScore
struct AddScore_tADF34CA133EE17E756E5BBC194831423F0749138;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// AudioManager
struct AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BackgroundMove
struct BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// BreakOnContact
struct BreakOnContact_tA10D610B461ED55D9DA2E13FCE01F086A60CC68F;
// CameraFollow
struct CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DetachScript
struct DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D;
// DisplayLeaderboard
struct DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// End
struct End_tCAD9562D0381FD04310D8A496C18ABE9B9F198CB;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// Game.GameCustomization
struct GameCustomization_t51D49F05E6436D2F5912992CA7122476342299C6;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// InGame
struct InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1;
// Menu.Leaderboard
struct Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10;
// LoadScene
struct LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuController
struct MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// ObjectPooler
struct ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C;
// ObjectSpawn
struct ObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0;
// Pause
struct Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// Game.PowerUp
struct PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F;
// PowerupTrigger
struct PowerupTrigger_t019E815EA655B080CBCAC0958308C7B6E9D5C577;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SelfDistruct
struct SelfDistruct_tED2253925CF74F63C2EF1E19960A8AEB6821C5D7;
// Shop
struct Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6;
// Sound
struct Sound_tF983595F9C621A86B56E05F9778810369E90A0FE;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// AudioManager/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tA3BCDD4327DA28EB58F404C4F16EF439D2996561;
// DisplayLeaderboard/<RefreshHighscore>d__5
struct U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59;
// Menu.Leaderboard/<DownloadHighScoresFromDatabase>d__10
struct U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C;
// Menu.Leaderboard/<UploadHighScore>d__8
struct U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// MenuController/<Check>d__9
struct U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39;
// ObjectPooler/Pool
struct Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907;
// Game.PowerUp/<Plus20>d__8
struct U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C;
// Game.PowerUp/<SpeedMarks>d__10
struct U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22;

IL2CPP_EXTERN_C RuntimeClass* AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tDC9C34179CE64EEFCDEA207F75A9C887BE68F931_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t105D975150D7B655C765ADAEA87B948AABDBCE7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tA3BCDD4327DA28EB58F404C4F16EF439D2996561_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06ACA940C76E2255F9BDD1561F9C8C2D4C548127;
IL2CPP_EXTERN_C String_t* _stringLiteral071666327F92E3DF233681CE9178B3FA3FC28BC9;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A;
IL2CPP_EXTERN_C String_t* _stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE;
IL2CPP_EXTERN_C String_t* _stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2;
IL2CPP_EXTERN_C String_t* _stringLiteral27D492F8437C01F1044CEA1DB3B2CEB0F608759A;
IL2CPP_EXTERN_C String_t* _stringLiteral2A365493542AB63B7ACEF3555F84504F2AEF1FAC;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4A4EA1D542F24C140452BA1A66AC18985A27CE;
IL2CPP_EXTERN_C String_t* _stringLiteral365061B975A0BA73BBE9F663933E71FD2438E18A;
IL2CPP_EXTERN_C String_t* _stringLiteral4A281F9DBD5E103CE9E67E73392C2A3BA578F217;
IL2CPP_EXTERN_C String_t* _stringLiteral51EFF23BD552E151AAC34F0A27C9FD6B615AB07C;
IL2CPP_EXTERN_C String_t* _stringLiteral5A46C11CD3F70707214DB728DB0948965F3C565D;
IL2CPP_EXTERN_C String_t* _stringLiteral5A586A30974E22E0CE7FC399239230150D30BC32;
IL2CPP_EXTERN_C String_t* _stringLiteral61342C2D4DE405988C6A6096193CF4A5BDED0520;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7131B822A03BF66704984F23A1198C1811D63906;
IL2CPP_EXTERN_C String_t* _stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA;
IL2CPP_EXTERN_C String_t* _stringLiteral8E528B3D59F4DF44EA6F2EFBE4003B6BBE14CAB2;
IL2CPP_EXTERN_C String_t* _stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8;
IL2CPP_EXTERN_C String_t* _stringLiteralAEAA3D19B34E863D781F6E3CBAD835645B0EC222;
IL2CPP_EXTERN_C String_t* _stringLiteralBEECFC235557F8AFEAF3B0F8BC857C6925D5A379;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCF3275A961E194A83E0ECE355A73639CEB31FEAC;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralEA6352D40ACCDE05CB70DEC0247729EC02120D73;
IL2CPP_EXTERN_C String_t* _stringLiteralF20A0891533742DFF5CE00A9BB969B01DD83F59F;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFE378D9AF0FD3CE0E891CD3E54C14A1324534134;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisSound_tF983595F9C621A86B56E05F9778810369E90A0FE_m8886E4A3962CC028DD7BA865B6D22B53587639C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D_m12BCC364F5DABEAF1A054879A4E6EDF51A34D829_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLeaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10_mD15B5C4FEC11737FF743D08A897EBEEB1E1BEA5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mACF0E07ADEA1089A0F21EA9B0D17FBDC1EE7AB66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m0C5D895ACF50E41367BBB10271D5F9F98A83C8C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9855F31661557D2E7ACD8FBBFB501CF407440712_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m250063473D2FECA30827552033CEF780DBE2B3DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD358285C570D857647783DAAE1D7A7AB8A113B88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE237407D8D333C9B3D0EA57503853C5FD6FFE0D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCCB7040DE017C0E76B2F9C66DD1DF179BF3DB918_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0_m2D6C8A818EFC056446910D77E7560AAEF576D873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4BF3ECEF353287E39CD723B6B234EE2611D67346_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m41E2A799648B173ADBE5EC11BC96DC086099D80B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mAB7D03D5E1E8D5574DB751A04534E90B970BE0CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m989302E3AE90AD39E5B892C79B3A6365966D1852_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckU3Ed__9_System_Collections_IEnumerator_Reset_mAFB4E6F753083522F69C029862F100C3240E27FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownloadHighScoresFromDatabaseU3Ed__10_System_Collections_IEnumerator_Reset_m552389298B6C7157EA8B96A7107A32F96D711271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlus20U3Ed__8_System_Collections_IEnumerator_Reset_mB1556DAA886226E8317544FD52135C1B745155C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRefreshHighscoreU3Ed__5_System_Collections_IEnumerator_Reset_m381760D869745E94BC16E32C85999E55FF4685F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpeedMarksU3Ed__10_System_Collections_IEnumerator_Reset_mB0258C4AD2CFE5BD2CC92673C824C9C5F62ED863_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CPlayU3Eb__0_m3638A911493D9A1EDF26B6B317DFE476AE17D16E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUploadHighScoreU3Ed__8_System_Collections_IEnumerator_Reset_m8993F8C0D29AB8E8046C74170E654D3E72A07831_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
struct Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF;
struct SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
struct HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>
struct Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBB92B9C5EE0355A3EAD3872FDE7F096B860FDA7F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t47FFDBDA052BA25EBBE7B1AAD324D29257951CF7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4258B35F0EBB3B6F0E2F80D4F993788844F3D518 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___entries_1)); }
	inline EntryU5BU5D_tBB92B9C5EE0355A3EAD3872FDE7F096B860FDA7F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBB92B9C5EE0355A3EAD3872FDE7F096B860FDA7F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBB92B9C5EE0355A3EAD3872FDE7F096B860FDA7F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___keys_7)); }
	inline KeyCollection_t47FFDBDA052BA25EBBE7B1AAD324D29257951CF7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t47FFDBDA052BA25EBBE7B1AAD324D29257951CF7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t47FFDBDA052BA25EBBE7B1AAD324D29257951CF7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ___values_8)); }
	inline ValueCollection_t4258B35F0EBB3B6F0E2F80D4F993788844F3D518 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4258B35F0EBB3B6F0E2F80D4F993788844F3D518 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4258B35F0EBB3B6F0E2F80D4F993788844F3D518 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<ObjectPooler/Pool>
struct List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PoolU5BU5D_t8AA5DFDB82C0664EB8AF6F3A7F908C7BE390C5E1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B, ____items_1)); }
	inline PoolU5BU5D_t8AA5DFDB82C0664EB8AF6F3A7F908C7BE390C5E1* get__items_1() const { return ____items_1; }
	inline PoolU5BU5D_t8AA5DFDB82C0664EB8AF6F3A7F908C7BE390C5E1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PoolU5BU5D_t8AA5DFDB82C0664EB8AF6F3A7F908C7BE390C5E1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PoolU5BU5D_t8AA5DFDB82C0664EB8AF6F3A7F908C7BE390C5E1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B_StaticFields, ____emptyArray_5)); }
	inline PoolU5BU5D_t8AA5DFDB82C0664EB8AF6F3A7F908C7BE390C5E1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PoolU5BU5D_t8AA5DFDB82C0664EB8AF6F3A7F908C7BE390C5E1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PoolU5BU5D_t8AA5DFDB82C0664EB8AF6F3A7F908C7BE390C5E1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____array_0)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__array_0() const { return ____array_0; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Sound
struct Sound_tF983595F9C621A86B56E05F9778810369E90A0FE  : public RuntimeObject
{
public:
	// System.String Sound::ClipName
	String_t* ___ClipName_0;
	// UnityEngine.AudioClip Sound::clip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip_1;
	// System.Single Sound::pitch
	float ___pitch_2;
	// System.Single Sound::volume
	float ___volume_3;
	// UnityEngine.AudioSource Sound::source
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___source_4;

public:
	inline static int32_t get_offset_of_ClipName_0() { return static_cast<int32_t>(offsetof(Sound_tF983595F9C621A86B56E05F9778810369E90A0FE, ___ClipName_0)); }
	inline String_t* get_ClipName_0() const { return ___ClipName_0; }
	inline String_t** get_address_of_ClipName_0() { return &___ClipName_0; }
	inline void set_ClipName_0(String_t* value)
	{
		___ClipName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClipName_0), (void*)value);
	}

	inline static int32_t get_offset_of_clip_1() { return static_cast<int32_t>(offsetof(Sound_tF983595F9C621A86B56E05F9778810369E90A0FE, ___clip_1)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_clip_1() const { return ___clip_1; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_clip_1() { return &___clip_1; }
	inline void set_clip_1(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___clip_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clip_1), (void*)value);
	}

	inline static int32_t get_offset_of_pitch_2() { return static_cast<int32_t>(offsetof(Sound_tF983595F9C621A86B56E05F9778810369E90A0FE, ___pitch_2)); }
	inline float get_pitch_2() const { return ___pitch_2; }
	inline float* get_address_of_pitch_2() { return &___pitch_2; }
	inline void set_pitch_2(float value)
	{
		___pitch_2 = value;
	}

	inline static int32_t get_offset_of_volume_3() { return static_cast<int32_t>(offsetof(Sound_tF983595F9C621A86B56E05F9778810369E90A0FE, ___volume_3)); }
	inline float get_volume_3() const { return ___volume_3; }
	inline float* get_address_of_volume_3() { return &___volume_3; }
	inline void set_volume_3(float value)
	{
		___volume_3 = value;
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(Sound_tF983595F9C621A86B56E05F9778810369E90A0FE, ___source_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_source_4() const { return ___source_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_4), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// AudioManager/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tA3BCDD4327DA28EB58F404C4F16EF439D2996561  : public RuntimeObject
{
public:
	// System.String AudioManager/<>c__DisplayClass4_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_tA3BCDD4327DA28EB58F404C4F16EF439D2996561, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// DisplayLeaderboard/<RefreshHighscore>d__5
struct U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59  : public RuntimeObject
{
public:
	// System.Int32 DisplayLeaderboard/<RefreshHighscore>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DisplayLeaderboard/<RefreshHighscore>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DisplayLeaderboard DisplayLeaderboard/<RefreshHighscore>d__5::<>4__this
	DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59, ___U3CU3E4__this_2)); }
	inline DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Menu.Leaderboard/<DownloadHighScoresFromDatabase>d__10
struct U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C  : public RuntimeObject
{
public:
	// System.Int32 Menu.Leaderboard/<DownloadHighScoresFromDatabase>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Menu.Leaderboard/<DownloadHighScoresFromDatabase>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Menu.Leaderboard Menu.Leaderboard/<DownloadHighScoresFromDatabase>d__10::<>4__this
	Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest Menu.Leaderboard/<DownloadHighScoresFromDatabase>d__10::<www>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwwwU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C, ___U3CU3E4__this_2)); }
	inline Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C, ___U3CwwwU3E5__2_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwwwU3E5__2_3() const { return ___U3CwwwU3E5__2_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwwwU3E5__2_3() { return &___U3CwwwU3E5__2_3; }
	inline void set_U3CwwwU3E5__2_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwwwU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_3), (void*)value);
	}
};


// Menu.Leaderboard/<UploadHighScore>d__8
struct U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF  : public RuntimeObject
{
public:
	// System.Int32 Menu.Leaderboard/<UploadHighScore>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Menu.Leaderboard/<UploadHighScore>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String Menu.Leaderboard/<UploadHighScore>d__8::username
	String_t* ___username_2;
	// System.Int32 Menu.Leaderboard/<UploadHighScore>d__8::score
	int32_t ___score_3;
	// UnityEngine.Networking.UnityWebRequest Menu.Leaderboard/<UploadHighScore>d__8::<www>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwwwU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_username_2() { return static_cast<int32_t>(offsetof(U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF, ___username_2)); }
	inline String_t* get_username_2() const { return ___username_2; }
	inline String_t** get_address_of_username_2() { return &___username_2; }
	inline void set_username_2(String_t* value)
	{
		___username_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___username_2), (void*)value);
	}

	inline static int32_t get_offset_of_score_3() { return static_cast<int32_t>(offsetof(U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF, ___score_3)); }
	inline int32_t get_score_3() const { return ___score_3; }
	inline int32_t* get_address_of_score_3() { return &___score_3; }
	inline void set_score_3(int32_t value)
	{
		___score_3 = value;
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF, ___U3CwwwU3E5__2_4)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwwwU3E5__2_4() const { return ___U3CwwwU3E5__2_4; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwwwU3E5__2_4() { return &___U3CwwwU3E5__2_4; }
	inline void set_U3CwwwU3E5__2_4(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwwwU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwwwU3E5__2_4), (void*)value);
	}
};


// MenuController/<Check>d__9
struct U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39  : public RuntimeObject
{
public:
	// System.Int32 MenuController/<Check>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MenuController/<Check>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// MenuController MenuController/<Check>d__9::<>4__this
	MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * ___U3CU3E4__this_2;
	// UnityEngine.Networking.UnityWebRequest MenuController/<Check>d__9::<uwr>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CuwrU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39, ___U3CU3E4__this_2)); }
	inline MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuwrU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39, ___U3CuwrU3E5__2_3)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CuwrU3E5__2_3() const { return ___U3CuwrU3E5__2_3; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CuwrU3E5__2_3() { return &___U3CuwrU3E5__2_3; }
	inline void set_U3CuwrU3E5__2_3(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CuwrU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CuwrU3E5__2_3), (void*)value);
	}
};


// ObjectPooler/Pool
struct Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907  : public RuntimeObject
{
public:
	// System.String ObjectPooler/Pool::tag
	String_t* ___tag_0;
	// UnityEngine.GameObject ObjectPooler/Pool::prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_1;
	// System.Int32 ObjectPooler/Pool::size
	int32_t ___size_2;

public:
	inline static int32_t get_offset_of_tag_0() { return static_cast<int32_t>(offsetof(Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907, ___tag_0)); }
	inline String_t* get_tag_0() const { return ___tag_0; }
	inline String_t** get_address_of_tag_0() { return &___tag_0; }
	inline void set_tag_0(String_t* value)
	{
		___tag_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tag_0), (void*)value);
	}

	inline static int32_t get_offset_of_prefab_1() { return static_cast<int32_t>(offsetof(Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907, ___prefab_1)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefab_1() const { return ___prefab_1; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefab_1() { return &___prefab_1; }
	inline void set_prefab_1(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefab_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_1), (void*)value);
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907, ___size_2)); }
	inline int32_t get_size_2() const { return ___size_2; }
	inline int32_t* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(int32_t value)
	{
		___size_2 = value;
	}
};


// Game.PowerUp/<Plus20>d__8
struct U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C  : public RuntimeObject
{
public:
	// System.Int32 Game.PowerUp/<Plus20>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Game.PowerUp/<Plus20>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Game.PowerUp Game.PowerUp/<Plus20>d__8::<>4__this
	PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C, ___U3CU3E4__this_2)); }
	inline PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Game.PowerUp/<SpeedMarks>d__10
struct U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22  : public RuntimeObject
{
public:
	// System.Int32 Game.PowerUp/<SpeedMarks>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Game.PowerUp/<SpeedMarks>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Game.PowerUp Game.PowerUp/<SpeedMarks>d__10::<>4__this
	PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22, ___U3CU3E4__this_2)); }
	inline PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<ObjectPooler/Pool>
struct Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B, ___list_0)); }
	inline List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B * get_list_0() const { return ___list_0; }
	inline List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B, ___current_3)); }
	inline Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907 * get_current_3() const { return ___current_3; }
	inline Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// Menu.Leaderboard/Highscore
struct Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A 
{
public:
	// System.String Menu.Leaderboard/Highscore::username
	String_t* ___username_0;
	// System.Int32 Menu.Leaderboard/Highscore::Score
	int32_t ___Score_1;

public:
	inline static int32_t get_offset_of_username_0() { return static_cast<int32_t>(offsetof(Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A, ___username_0)); }
	inline String_t* get_username_0() const { return ___username_0; }
	inline String_t** get_address_of_username_0() { return &___username_0; }
	inline void set_username_0(String_t* value)
	{
		___username_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___username_0), (void*)value);
	}

	inline static int32_t get_offset_of_Score_1() { return static_cast<int32_t>(offsetof(Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A, ___Score_1)); }
	inline int32_t get_Score_1() const { return ___Score_1; }
	inline int32_t* get_address_of_Score_1() { return &___Score_1; }
	inline void set_Score_1(int32_t value)
	{
		___Score_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Menu.Leaderboard/Highscore
struct Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A_marshaled_pinvoke
{
	char* ___username_0;
	int32_t ___Score_1;
};
// Native definition for COM marshalling of Menu.Leaderboard/Highscore
struct Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A_marshaled_com
{
	Il2CppChar* ___username_0;
	int32_t ___Score_1;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RigidbodyType2D
struct RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9 
{
public:
	// System.Int32 UnityEngine.RigidbodyType2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.StringSplitOptions
struct StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringSplitOptions_tCBE57E9DF0385CEE90AEE9C25D18BD20E30D29D3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest/Result
struct Result_t3233C0F690EC3844C8E0C4649568659679AFBE75 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/Result::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Result_t3233C0F690EC3844C8E0C4649568659679AFBE75, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// System.Predicate`1<Sound>
struct Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// AddScore
struct AddScore_tADF34CA133EE17E756E5BBC194831423F0749138  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// AudioManager
struct AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Sound[] AudioManager::sounds
	SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* ___sounds_5;

public:
	inline static int32_t get_offset_of_sounds_5() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148, ___sounds_5)); }
	inline SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* get_sounds_5() const { return ___sounds_5; }
	inline SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF** get_address_of_sounds_5() { return &___sounds_5; }
	inline void set_sounds_5(SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* value)
	{
		___sounds_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sounds_5), (void*)value);
	}
};

struct AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_StaticFields
{
public:
	// AudioManager AudioManager::_AM
	AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * ____AM_4;

public:
	inline static int32_t get_offset_of__AM_4() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_StaticFields, ____AM_4)); }
	inline AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * get__AM_4() const { return ____AM_4; }
	inline AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 ** get_address_of__AM_4() { return &____AM_4; }
	inline void set__AM_4(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * value)
	{
		____AM_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____AM_4), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BackgroundMove
struct BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single BackgroundMove::bgSpeed
	float ___bgSpeed_4;
	// UnityEngine.Renderer BackgroundMove::bgRend
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___bgRend_5;

public:
	inline static int32_t get_offset_of_bgSpeed_4() { return static_cast<int32_t>(offsetof(BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D, ___bgSpeed_4)); }
	inline float get_bgSpeed_4() const { return ___bgSpeed_4; }
	inline float* get_address_of_bgSpeed_4() { return &___bgSpeed_4; }
	inline void set_bgSpeed_4(float value)
	{
		___bgSpeed_4 = value;
	}

	inline static int32_t get_offset_of_bgRend_5() { return static_cast<int32_t>(offsetof(BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D, ___bgRend_5)); }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * get_bgRend_5() const { return ___bgRend_5; }
	inline Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C ** get_address_of_bgRend_5() { return &___bgRend_5; }
	inline void set_bgRend_5(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * value)
	{
		___bgRend_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bgRend_5), (void*)value);
	}
};

struct BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_StaticFields
{
public:
	// System.Boolean BackgroundMove::Enabled
	bool ___Enabled_6;

public:
	inline static int32_t get_offset_of_Enabled_6() { return static_cast<int32_t>(offsetof(BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_StaticFields, ___Enabled_6)); }
	inline bool get_Enabled_6() const { return ___Enabled_6; }
	inline bool* get_address_of_Enabled_6() { return &___Enabled_6; }
	inline void set_Enabled_6(bool value)
	{
		___Enabled_6 = value;
	}
};


// BreakOnContact
struct BreakOnContact_tA10D610B461ED55D9DA2E13FCE01F086A60CC68F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// CameraFollow
struct CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CameraFollow::yPos
	float ___yPos_4;
	// System.Single CameraFollow::xPos
	float ___xPos_5;

public:
	inline static int32_t get_offset_of_yPos_4() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___yPos_4)); }
	inline float get_yPos_4() const { return ___yPos_4; }
	inline float* get_address_of_yPos_4() { return &___yPos_4; }
	inline void set_yPos_4(float value)
	{
		___yPos_4 = value;
	}

	inline static int32_t get_offset_of_xPos_5() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8, ___xPos_5)); }
	inline float get_xPos_5() const { return ___xPos_5; }
	inline float* get_address_of_xPos_5() { return &___xPos_5; }
	inline void set_xPos_5(float value)
	{
		___xPos_5 = value;
	}
};

struct CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_StaticFields
{
public:
	// UnityEngine.Transform CameraFollow::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_6;

public:
	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_StaticFields, ___player_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_6() const { return ___player_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_6), (void*)value);
	}
};


// DetachScript
struct DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator DetachScript::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_4;
	// UnityEngine.Rigidbody2D[] DetachScript::_rigidbody2Ds
	Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF* ____rigidbody2Ds_6;

public:
	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D, ___anim_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_4() const { return ___anim_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_4), (void*)value);
	}

	inline static int32_t get_offset_of__rigidbody2Ds_6() { return static_cast<int32_t>(offsetof(DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D, ____rigidbody2Ds_6)); }
	inline Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF* get__rigidbody2Ds_6() const { return ____rigidbody2Ds_6; }
	inline Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF** get_address_of__rigidbody2Ds_6() { return &____rigidbody2Ds_6; }
	inline void set__rigidbody2Ds_6(Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF* value)
	{
		____rigidbody2Ds_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rigidbody2Ds_6), (void*)value);
	}
};

struct DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D_StaticFields
{
public:
	// DetachScript DetachScript::_ds
	DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D * ____ds_5;

public:
	inline static int32_t get_offset_of__ds_5() { return static_cast<int32_t>(offsetof(DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D_StaticFields, ____ds_5)); }
	inline DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D * get__ds_5() const { return ____ds_5; }
	inline DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D ** get_address_of__ds_5() { return &____ds_5; }
	inline void set__ds_5(DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D * value)
	{
		____ds_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ds_5), (void*)value);
	}
};


// DisplayLeaderboard
struct DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text[] DisplayLeaderboard::highscoreText
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___highscoreText_4;
	// UnityEngine.UI.Text DisplayLeaderboard::OwnHighscore
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___OwnHighscore_5;
	// Menu.Leaderboard DisplayLeaderboard::leaderboardManager
	Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * ___leaderboardManager_6;

public:
	inline static int32_t get_offset_of_highscoreText_4() { return static_cast<int32_t>(offsetof(DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D, ___highscoreText_4)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_highscoreText_4() const { return ___highscoreText_4; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_highscoreText_4() { return &___highscoreText_4; }
	inline void set_highscoreText_4(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___highscoreText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highscoreText_4), (void*)value);
	}

	inline static int32_t get_offset_of_OwnHighscore_5() { return static_cast<int32_t>(offsetof(DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D, ___OwnHighscore_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_OwnHighscore_5() const { return ___OwnHighscore_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_OwnHighscore_5() { return &___OwnHighscore_5; }
	inline void set_OwnHighscore_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___OwnHighscore_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OwnHighscore_5), (void*)value);
	}

	inline static int32_t get_offset_of_leaderboardManager_6() { return static_cast<int32_t>(offsetof(DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D, ___leaderboardManager_6)); }
	inline Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * get_leaderboardManager_6() const { return ___leaderboardManager_6; }
	inline Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 ** get_address_of_leaderboardManager_6() { return &___leaderboardManager_6; }
	inline void set_leaderboardManager_6(Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * value)
	{
		___leaderboardManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leaderboardManager_6), (void*)value);
	}
};


// End
struct End_tCAD9562D0381FD04310D8A496C18ABE9B9F198CB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Game.GameCustomization
struct GameCustomization_t51D49F05E6436D2F5912992CA7122476342299C6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Object Game.GameCustomization::RegularBulldog
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___RegularBulldog_4;
	// UnityEngine.Vector3 Game.GameCustomization::startPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___startPos_5;

public:
	inline static int32_t get_offset_of_RegularBulldog_4() { return static_cast<int32_t>(offsetof(GameCustomization_t51D49F05E6436D2F5912992CA7122476342299C6, ___RegularBulldog_4)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_RegularBulldog_4() const { return ___RegularBulldog_4; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_RegularBulldog_4() { return &___RegularBulldog_4; }
	inline void set_RegularBulldog_4(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___RegularBulldog_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RegularBulldog_4), (void*)value);
	}

	inline static int32_t get_offset_of_startPos_5() { return static_cast<int32_t>(offsetof(GameCustomization_t51D49F05E6436D2F5912992CA7122476342299C6, ___startPos_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_startPos_5() const { return ___startPos_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_startPos_5() { return &___startPos_5; }
	inline void set_startPos_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___startPos_5 = value;
	}
};


// InGame
struct InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] InGame::UI
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___UI_4;
	// UnityEngine.UI.Text InGame::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_5;
	// System.Int32 InGame::score
	int32_t ___score_6;

public:
	inline static int32_t get_offset_of_UI_4() { return static_cast<int32_t>(offsetof(InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1, ___UI_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_UI_4() const { return ___UI_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_UI_4() { return &___UI_4; }
	inline void set_UI_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___UI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UI_4), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_5() { return static_cast<int32_t>(offsetof(InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1, ___scoreText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_5() const { return ___scoreText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_5() { return &___scoreText_5; }
	inline void set_scoreText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_5), (void*)value);
	}

	inline static int32_t get_offset_of_score_6() { return static_cast<int32_t>(offsetof(InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1, ___score_6)); }
	inline int32_t get_score_6() const { return ___score_6; }
	inline int32_t* get_address_of_score_6() { return &___score_6; }
	inline void set_score_6(int32_t value)
	{
		___score_6 = value;
	}
};

struct InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_StaticFields
{
public:
	// InGame InGame::_IG
	InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * ____IG_7;

public:
	inline static int32_t get_offset_of__IG_7() { return static_cast<int32_t>(offsetof(InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_StaticFields, ____IG_7)); }
	inline InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * get__IG_7() const { return ____IG_7; }
	inline InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 ** get_address_of__IG_7() { return &____IG_7; }
	inline void set__IG_7(InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * value)
	{
		____IG_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____IG_7), (void*)value);
	}
};


// Menu.Leaderboard
struct Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Menu.Leaderboard/Highscore[] Menu.Leaderboard::highscoresList
	HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45* ___highscoresList_7;
	// DisplayLeaderboard Menu.Leaderboard::leaderboardDisplay
	DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * ___leaderboardDisplay_8;
	// System.Boolean Menu.Leaderboard::created
	bool ___created_9;

public:
	inline static int32_t get_offset_of_highscoresList_7() { return static_cast<int32_t>(offsetof(Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10, ___highscoresList_7)); }
	inline HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45* get_highscoresList_7() const { return ___highscoresList_7; }
	inline HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45** get_address_of_highscoresList_7() { return &___highscoresList_7; }
	inline void set_highscoresList_7(HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45* value)
	{
		___highscoresList_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highscoresList_7), (void*)value);
	}

	inline static int32_t get_offset_of_leaderboardDisplay_8() { return static_cast<int32_t>(offsetof(Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10, ___leaderboardDisplay_8)); }
	inline DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * get_leaderboardDisplay_8() const { return ___leaderboardDisplay_8; }
	inline DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D ** get_address_of_leaderboardDisplay_8() { return &___leaderboardDisplay_8; }
	inline void set_leaderboardDisplay_8(DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * value)
	{
		___leaderboardDisplay_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leaderboardDisplay_8), (void*)value);
	}

	inline static int32_t get_offset_of_created_9() { return static_cast<int32_t>(offsetof(Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10, ___created_9)); }
	inline bool get_created_9() const { return ___created_9; }
	inline bool* get_address_of_created_9() { return &___created_9; }
	inline void set_created_9(bool value)
	{
		___created_9 = value;
	}
};


// LoadScene
struct LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MenuController
struct MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MenuController::SoundOn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SoundOn_4;
	// UnityEngine.GameObject MenuController::SoundOff
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SoundOff_5;
	// System.String MenuController::username
	String_t* ___username_8;

public:
	inline static int32_t get_offset_of_SoundOn_4() { return static_cast<int32_t>(offsetof(MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4, ___SoundOn_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SoundOn_4() const { return ___SoundOn_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SoundOn_4() { return &___SoundOn_4; }
	inline void set_SoundOn_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SoundOn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SoundOn_4), (void*)value);
	}

	inline static int32_t get_offset_of_SoundOff_5() { return static_cast<int32_t>(offsetof(MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4, ___SoundOff_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SoundOff_5() const { return ___SoundOff_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SoundOff_5() { return &___SoundOff_5; }
	inline void set_SoundOff_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SoundOff_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SoundOff_5), (void*)value);
	}

	inline static int32_t get_offset_of_username_8() { return static_cast<int32_t>(offsetof(MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4, ___username_8)); }
	inline String_t* get_username_8() const { return ___username_8; }
	inline String_t** get_address_of_username_8() { return &___username_8; }
	inline void set_username_8(String_t* value)
	{
		___username_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___username_8), (void*)value);
	}
};


// ObjectPooler
struct ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<ObjectPooler/Pool> ObjectPooler::pools
	List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B * ___pools_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>> ObjectPooler::poolDictionary
	Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * ___poolDictionary_6;

public:
	inline static int32_t get_offset_of_pools_5() { return static_cast<int32_t>(offsetof(ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C, ___pools_5)); }
	inline List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B * get_pools_5() const { return ___pools_5; }
	inline List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B ** get_address_of_pools_5() { return &___pools_5; }
	inline void set_pools_5(List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B * value)
	{
		___pools_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pools_5), (void*)value);
	}

	inline static int32_t get_offset_of_poolDictionary_6() { return static_cast<int32_t>(offsetof(ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C, ___poolDictionary_6)); }
	inline Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * get_poolDictionary_6() const { return ___poolDictionary_6; }
	inline Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F ** get_address_of_poolDictionary_6() { return &___poolDictionary_6; }
	inline void set_poolDictionary_6(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * value)
	{
		___poolDictionary_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___poolDictionary_6), (void*)value);
	}
};

struct ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C_StaticFields
{
public:
	// ObjectPooler ObjectPooler::pool_instance
	ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * ___pool_instance_4;

public:
	inline static int32_t get_offset_of_pool_instance_4() { return static_cast<int32_t>(offsetof(ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C_StaticFields, ___pool_instance_4)); }
	inline ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * get_pool_instance_4() const { return ___pool_instance_4; }
	inline ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C ** get_address_of_pool_instance_4() { return &___pool_instance_4; }
	inline void set_pool_instance_4(ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * value)
	{
		___pool_instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_instance_4), (void*)value);
	}
};


// ObjectSpawn
struct ObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ObjectSpawn::spawnMinG
	float ___spawnMinG_4;
	// System.Single ObjectSpawn::spawnMaxG
	float ___spawnMaxG_5;
	// System.Single ObjectSpawn::spawnMinC
	float ___spawnMinC_6;
	// System.Single ObjectSpawn::spawnMaxC
	float ___spawnMaxC_7;
	// UnityEngine.Transform ObjectSpawn::groundSpawn
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___groundSpawn_8;
	// UnityEngine.Transform ObjectSpawn::powerupSpawn
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___powerupSpawn_9;

public:
	inline static int32_t get_offset_of_spawnMinG_4() { return static_cast<int32_t>(offsetof(ObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0, ___spawnMinG_4)); }
	inline float get_spawnMinG_4() const { return ___spawnMinG_4; }
	inline float* get_address_of_spawnMinG_4() { return &___spawnMinG_4; }
	inline void set_spawnMinG_4(float value)
	{
		___spawnMinG_4 = value;
	}

	inline static int32_t get_offset_of_spawnMaxG_5() { return static_cast<int32_t>(offsetof(ObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0, ___spawnMaxG_5)); }
	inline float get_spawnMaxG_5() const { return ___spawnMaxG_5; }
	inline float* get_address_of_spawnMaxG_5() { return &___spawnMaxG_5; }
	inline void set_spawnMaxG_5(float value)
	{
		___spawnMaxG_5 = value;
	}

	inline static int32_t get_offset_of_spawnMinC_6() { return static_cast<int32_t>(offsetof(ObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0, ___spawnMinC_6)); }
	inline float get_spawnMinC_6() const { return ___spawnMinC_6; }
	inline float* get_address_of_spawnMinC_6() { return &___spawnMinC_6; }
	inline void set_spawnMinC_6(float value)
	{
		___spawnMinC_6 = value;
	}

	inline static int32_t get_offset_of_spawnMaxC_7() { return static_cast<int32_t>(offsetof(ObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0, ___spawnMaxC_7)); }
	inline float get_spawnMaxC_7() const { return ___spawnMaxC_7; }
	inline float* get_address_of_spawnMaxC_7() { return &___spawnMaxC_7; }
	inline void set_spawnMaxC_7(float value)
	{
		___spawnMaxC_7 = value;
	}

	inline static int32_t get_offset_of_groundSpawn_8() { return static_cast<int32_t>(offsetof(ObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0, ___groundSpawn_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_groundSpawn_8() const { return ___groundSpawn_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_groundSpawn_8() { return &___groundSpawn_8; }
	inline void set_groundSpawn_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___groundSpawn_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groundSpawn_8), (void*)value);
	}

	inline static int32_t get_offset_of_powerupSpawn_9() { return static_cast<int32_t>(offsetof(ObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0, ___powerupSpawn_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_powerupSpawn_9() const { return ___powerupSpawn_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_powerupSpawn_9() { return &___powerupSpawn_9; }
	inline void set_powerupSpawn_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___powerupSpawn_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___powerupSpawn_9), (void*)value);
	}
};


// Pause
struct Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Pause::pauseMenu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___pauseMenu_5;

public:
	inline static int32_t get_offset_of_pauseMenu_5() { return static_cast<int32_t>(offsetof(Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28, ___pauseMenu_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_pauseMenu_5() const { return ___pauseMenu_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_pauseMenu_5() { return &___pauseMenu_5; }
	inline void set_pauseMenu_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___pauseMenu_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseMenu_5), (void*)value);
	}
};

struct Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28_StaticFields
{
public:
	// System.Boolean Pause::gameIsPaused
	bool ___gameIsPaused_4;

public:
	inline static int32_t get_offset_of_gameIsPaused_4() { return static_cast<int32_t>(offsetof(Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28_StaticFields, ___gameIsPaused_4)); }
	inline bool get_gameIsPaused_4() const { return ___gameIsPaused_4; }
	inline bool* get_address_of_gameIsPaused_4() { return &___gameIsPaused_4; }
	inline void set_gameIsPaused_4(bool value)
	{
		___gameIsPaused_4 = value;
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Player::jumpForce
	float ___jumpForce_4;
	// UnityEngine.Transform Player::groundCheck
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___groundCheck_6;
	// System.Single Player::groundCheckRadius
	float ___groundCheckRadius_7;
	// UnityEngine.LayerMask Player::whatIsGround
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___whatIsGround_8;
	// UnityEngine.GameObject Player::mark
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mark_9;
	// UnityEngine.Rigidbody2D Player::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_10;

public:
	inline static int32_t get_offset_of_jumpForce_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___jumpForce_4)); }
	inline float get_jumpForce_4() const { return ___jumpForce_4; }
	inline float* get_address_of_jumpForce_4() { return &___jumpForce_4; }
	inline void set_jumpForce_4(float value)
	{
		___jumpForce_4 = value;
	}

	inline static int32_t get_offset_of_groundCheck_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___groundCheck_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_groundCheck_6() const { return ___groundCheck_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_groundCheck_6() { return &___groundCheck_6; }
	inline void set_groundCheck_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___groundCheck_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groundCheck_6), (void*)value);
	}

	inline static int32_t get_offset_of_groundCheckRadius_7() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___groundCheckRadius_7)); }
	inline float get_groundCheckRadius_7() const { return ___groundCheckRadius_7; }
	inline float* get_address_of_groundCheckRadius_7() { return &___groundCheckRadius_7; }
	inline void set_groundCheckRadius_7(float value)
	{
		___groundCheckRadius_7 = value;
	}

	inline static int32_t get_offset_of_whatIsGround_8() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___whatIsGround_8)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_whatIsGround_8() const { return ___whatIsGround_8; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_whatIsGround_8() { return &___whatIsGround_8; }
	inline void set_whatIsGround_8(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___whatIsGround_8 = value;
	}

	inline static int32_t get_offset_of_mark_9() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___mark_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mark_9() const { return ___mark_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mark_9() { return &___mark_9; }
	inline void set_mark_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mark_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mark_9), (void*)value);
	}

	inline static int32_t get_offset_of_rb_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___rb_10)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_10() const { return ___rb_10; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_10() { return &___rb_10; }
	inline void set_rb_10(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_10), (void*)value);
	}
};

struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields
{
public:
	// System.Single Player::moveSpeed
	float ___moveSpeed_5;

public:
	inline static int32_t get_offset_of_moveSpeed_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields, ___moveSpeed_5)); }
	inline float get_moveSpeed_5() const { return ___moveSpeed_5; }
	inline float* get_address_of_moveSpeed_5() { return &___moveSpeed_5; }
	inline void set_moveSpeed_5(float value)
	{
		___moveSpeed_5 = value;
	}
};


// Game.PowerUp
struct PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Game.PowerUp::plus20
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___plus20_4;
	// System.Single Game.PowerUp::FastSpeed
	float ___FastSpeed_5;
	// UnityEngine.GameObject Game.PowerUp::marks
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___marks_6;

public:
	inline static int32_t get_offset_of_plus20_4() { return static_cast<int32_t>(offsetof(PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F, ___plus20_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_plus20_4() const { return ___plus20_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_plus20_4() { return &___plus20_4; }
	inline void set_plus20_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___plus20_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___plus20_4), (void*)value);
	}

	inline static int32_t get_offset_of_FastSpeed_5() { return static_cast<int32_t>(offsetof(PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F, ___FastSpeed_5)); }
	inline float get_FastSpeed_5() const { return ___FastSpeed_5; }
	inline float* get_address_of_FastSpeed_5() { return &___FastSpeed_5; }
	inline void set_FastSpeed_5(float value)
	{
		___FastSpeed_5 = value;
	}

	inline static int32_t get_offset_of_marks_6() { return static_cast<int32_t>(offsetof(PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F, ___marks_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_marks_6() const { return ___marks_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_marks_6() { return &___marks_6; }
	inline void set_marks_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___marks_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marks_6), (void*)value);
	}
};

struct PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F_StaticFields
{
public:
	// Game.PowerUp Game.PowerUp::_PU
	PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * ____PU_7;

public:
	inline static int32_t get_offset_of__PU_7() { return static_cast<int32_t>(offsetof(PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F_StaticFields, ____PU_7)); }
	inline PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * get__PU_7() const { return ____PU_7; }
	inline PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F ** get_address_of__PU_7() { return &____PU_7; }
	inline void set__PU_7(PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * value)
	{
		____PU_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____PU_7), (void*)value);
	}
};


// PowerupTrigger
struct PowerupTrigger_t019E815EA655B080CBCAC0958308C7B6E9D5C577  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SelfDistruct
struct SelfDistruct_tED2253925CF74F63C2EF1E19960A8AEB6821C5D7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single SelfDistruct::TimeTillDistruct
	float ___TimeTillDistruct_4;

public:
	inline static int32_t get_offset_of_TimeTillDistruct_4() { return static_cast<int32_t>(offsetof(SelfDistruct_tED2253925CF74F63C2EF1E19960A8AEB6821C5D7, ___TimeTillDistruct_4)); }
	inline float get_TimeTillDistruct_4() const { return ___TimeTillDistruct_4; }
	inline float* get_address_of_TimeTillDistruct_4() { return &___TimeTillDistruct_4; }
	inline void set_TimeTillDistruct_4(float value)
	{
		___TimeTillDistruct_4 = value;
	}
};


// Shop
struct Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image[] Shop::SpaceWeiner
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___SpaceWeiner_4;
	// UnityEngine.UI.Image[] Shop::HispWeiner
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___HispWeiner_5;
	// UnityEngine.UI.Image[] Shop::FancyWeiner
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___FancyWeiner_6;
	// UnityEngine.GameObject[] Shop::Weiners
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Weiners_7;
	// UnityEngine.UI.Image[] Shop::WeinerParts
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___WeinerParts_8;
	// UnityEngine.Sprite Shop::red
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___red_9;
	// UnityEngine.Sprite Shop::white
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___white_10;
	// UnityEngine.Sprite Shop::redFoot
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___redFoot_11;
	// UnityEngine.Sprite Shop::boot
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___boot_12;
	// UnityEngine.GameObject[] Shop::prices
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___prices_13;
	// UnityEngine.Color Shop::greyColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___greyColor_14;
	// UnityEngine.UI.Text Shop::PicklesText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___PicklesText_15;

public:
	inline static int32_t get_offset_of_SpaceWeiner_4() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___SpaceWeiner_4)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_SpaceWeiner_4() const { return ___SpaceWeiner_4; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_SpaceWeiner_4() { return &___SpaceWeiner_4; }
	inline void set_SpaceWeiner_4(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___SpaceWeiner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpaceWeiner_4), (void*)value);
	}

	inline static int32_t get_offset_of_HispWeiner_5() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___HispWeiner_5)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_HispWeiner_5() const { return ___HispWeiner_5; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_HispWeiner_5() { return &___HispWeiner_5; }
	inline void set_HispWeiner_5(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___HispWeiner_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HispWeiner_5), (void*)value);
	}

	inline static int32_t get_offset_of_FancyWeiner_6() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___FancyWeiner_6)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_FancyWeiner_6() const { return ___FancyWeiner_6; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_FancyWeiner_6() { return &___FancyWeiner_6; }
	inline void set_FancyWeiner_6(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___FancyWeiner_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FancyWeiner_6), (void*)value);
	}

	inline static int32_t get_offset_of_Weiners_7() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___Weiners_7)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Weiners_7() const { return ___Weiners_7; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Weiners_7() { return &___Weiners_7; }
	inline void set_Weiners_7(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Weiners_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Weiners_7), (void*)value);
	}

	inline static int32_t get_offset_of_WeinerParts_8() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___WeinerParts_8)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_WeinerParts_8() const { return ___WeinerParts_8; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_WeinerParts_8() { return &___WeinerParts_8; }
	inline void set_WeinerParts_8(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___WeinerParts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WeinerParts_8), (void*)value);
	}

	inline static int32_t get_offset_of_red_9() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___red_9)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_red_9() const { return ___red_9; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_red_9() { return &___red_9; }
	inline void set_red_9(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___red_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___red_9), (void*)value);
	}

	inline static int32_t get_offset_of_white_10() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___white_10)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_white_10() const { return ___white_10; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_white_10() { return &___white_10; }
	inline void set_white_10(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___white_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___white_10), (void*)value);
	}

	inline static int32_t get_offset_of_redFoot_11() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___redFoot_11)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_redFoot_11() const { return ___redFoot_11; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_redFoot_11() { return &___redFoot_11; }
	inline void set_redFoot_11(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___redFoot_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___redFoot_11), (void*)value);
	}

	inline static int32_t get_offset_of_boot_12() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___boot_12)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_boot_12() const { return ___boot_12; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_boot_12() { return &___boot_12; }
	inline void set_boot_12(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___boot_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boot_12), (void*)value);
	}

	inline static int32_t get_offset_of_prices_13() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___prices_13)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_prices_13() const { return ___prices_13; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_prices_13() { return &___prices_13; }
	inline void set_prices_13(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___prices_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prices_13), (void*)value);
	}

	inline static int32_t get_offset_of_greyColor_14() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___greyColor_14)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_greyColor_14() const { return ___greyColor_14; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_greyColor_14() { return &___greyColor_14; }
	inline void set_greyColor_14(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___greyColor_14 = value;
	}

	inline static int32_t get_offset_of_PicklesText_15() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___PicklesText_15)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_PicklesText_15() const { return ___PicklesText_15; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_PicklesText_15() { return &___PicklesText_15; }
	inline void set_PicklesText_15(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___PicklesText_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PicklesText_15), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
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

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Sound[]
struct SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * m_Items[1];

public:
	inline Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sound_tF983595F9C621A86B56E05F9778810369E90A0FE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sound_tF983595F9C621A86B56E05F9778810369E90A0FE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Rigidbody2D[]
struct Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * m_Items[1];

public:
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * m_Items[1];

public:
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Menu.Leaderboard/Highscore[]
struct HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A  m_Items[1];

public:
	inline Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___username_0), (void*)NULL);
	}
	inline Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___username_0), (void*)NULL);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * m_Items[1];

public:
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 System.Array::Find<System.Object>(!!0[],System.Predicate`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_Find_TisRuntimeObject_m90AB9A960F75686141096F01E1A87A52C029A5B1_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___match1, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);

// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void InGame::PlayerScored()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGame_PlayerScored_mD253AA6020AB45EA445E174E23BF6CA6B0800CDD (InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE (float ___value0, const RuntimeMethod* method);
// System.Void AudioManager/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m67B1BB5E29B49389EC0244292A697D9F0DA398C5 (U3CU3Ec__DisplayClass4_0_tA3BCDD4327DA28EB58F404C4F16EF439D2996561 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<Sound>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m41E2A799648B173ADBE5EC11BC96DC086099D80B (Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared)(__this, ___object0, ___method1, method);
}
// !!0 System.Array::Find<Sound>(!!0[],System.Predicate`1<!!0>)
inline Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * Array_Find_TisSound_tF983595F9C621A86B56E05F9778810369E90A0FE_m8886E4A3962CC028DD7BA865B6D22B53587639C2 (SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* ___array0, Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9 * ___match1, const RuntimeMethod* method)
{
	return ((  Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * (*) (SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF*, Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9 *, const RuntimeMethod*))Array_Find_TisRuntimeObject_m90AB9A960F75686141096F01E1A87A52C029A5B1_gshared)(___array0, ___match1, method);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Material::get_mainTextureOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Material_get_mainTextureOffset_m515864AC74B322365689879CC668D001C41577D4 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m3045530900C547D17F181858EC245CC02CA5F3FE (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void InGame::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGame_GameOver_m795099F557C67187E115933640E09D5AF6FB3CD2 (InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.Console::WriteLine(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m8CE2BD87102C3CAB370A59BF3D9DC80B88C871B4 (RuntimeObject * ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Rigidbody2D>()
inline Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF* Component_GetComponentsInChildren_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mACF0E07ADEA1089A0F21EA9B0D17FBDC1EE7AB66 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCA5B356D4B0824C6DE60A8E90E6A6D4188C56C2F_gshared)(__this, method);
}
// System.Void AudioManager::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Play_mABE51D919CA26C8386CF6823417ECC0CD9000888 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_bodyType(UnityEngine.RigidbodyType2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddTorque_m39742C33C7A7EF1ED21ADB0296CAD5785C472901 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___torque0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, float ___t1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Menu.Leaderboard>()
inline Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * Component_GetComponent_TisLeaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10_mD15B5C4FEC11737FF743D08A897EBEEB1E1BEA5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void DisplayLeaderboard/<RefreshHighscore>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshHighscoreU3Ed__5__ctor_m0676DD49B791B161CE8CD7123EEC8A9C246749E6 (U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void InGame::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGame_UpdateText_mF1293A94C280BDA75FCE17E0DEBB08B84C564CAC (InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ObjectSpawn>()
inline ObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0 * GameObject_GetComponent_TisObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0_m2D6C8A818EFC056446910D77E7560AAEF576D873 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<DisplayLeaderboard>()
inline DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * Component_GetComponent_TisDisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D_m12BCC364F5DABEAF1A054879A4E6EDF51A34D829 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// System.Collections.IEnumerator Menu.Leaderboard::UploadHighScore(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Leaderboard_UploadHighScore_m86C57EA52E5822A4A277224C12990E715D163CEC (Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * __this, String_t* ___username0, int32_t ___score1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Menu.Leaderboard/<UploadHighScore>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUploadHighScoreU3Ed__8__ctor_m25947CC798624944004E884329CE56D000AA208A (U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Menu.Leaderboard/<DownloadHighScoresFromDatabase>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadHighScoresFromDatabaseU3Ed__10__ctor_m7C76657C840F2E799D713D2DFF181D9283C310F0 (U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m8334980E85EA3EF1F6204607324D9C34EFA4CA25 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, int32_t ___options1, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Void Menu.Leaderboard/Highscore::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highscore__ctor_m34D148AFD18CA520AC2C07CA33DA3DF2D1AC9452 (Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A * __this, String_t* ___username0, int32_t ___score1, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteKey_mCEF6CE08D7D7670AD4072228E261A7E746030554 (String_t* ___key0, const RuntimeMethod* method);
// System.Void MenuController::Generate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_Generate_m6C5C6B8D239B57A59FF0CAF46059D7B3D79EB1DB (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void MenuController::CheckUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_CheckUser_m37C74BC1FC57C3DB4E20C99593BCDB621B00D87C (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, const RuntimeMethod* method);
// System.Void MenuController/<Check>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckU3Ed__9__ctor_m605CD9301399BFFF4109E3089EA4309CE026835F (U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::.ctor()
inline void Dictionary_2__ctor_m9855F31661557D2E7ACD8FBBFB501CF407440712 (Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<ObjectPooler/Pool>::GetEnumerator()
inline Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B  List_1_GetEnumerator_m4BF3ECEF353287E39CD723B6B234EE2611D67346 (List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B  (*) (List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<ObjectPooler/Pool>::get_Current()
inline Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907 * Enumerator_get_Current_mCCB7040DE017C0E76B2F9C66DD1DF179BF3DB918_inline (Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B * __this, const RuntimeMethod* method)
{
	return ((  Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907 * (*) (Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::.ctor()
inline void Queue_1__ctor_m989302E3AE90AD39E5B892C79B3A6365966D1852 (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Enqueue(!0)
inline void Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513 (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::Add(!0,!1)
inline void Dictionary_2_Add_m0C5D895ACF50E41367BBB10271D5F9F98A83C8C1 (Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * __this, String_t* ___key0, Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F *, String_t*, Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<ObjectPooler/Pool>::MoveNext()
inline bool Enumerator_MoveNext_mE237407D8D333C9B3D0EA57503853C5FD6FFE0D9 (Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ObjectPooler/Pool>::Dispose()
inline void Enumerator_Dispose_mD358285C570D857647783DAAE1D7A7AB8A113B88 (Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Queue`1<UnityEngine.GameObject>>::get_Item(!0)
inline Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * Dictionary_2_get_Item_m250063473D2FECA30827552033CEF780DBE2B3DB (Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * (*) (Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Dequeue()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Queue_1_Dequeue_mAB7D03D5E1E8D5574DB751A04534E90B970BE0CC (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.GameObject ObjectPooler::SpawnFromPool(System.String,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectPooler_SpawnFromPool_mD92D16153398A869A2DE1E9342F5A51391E17F06 (ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * __this, String_t* ___t0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.String ObjectSpawn::GetPowerup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectSpawn_GetPowerup_mCC07F14A058502CF968D63A4D006106998FC8759 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Game.PowerUp::SetObjects(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PowerUp_SetObjects_mF70255F23F2910C402117F4372347E0D7FABA167_inline (PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m0, const RuntimeMethod* method);
// System.Void CameraFollow::SetPlayer(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_SetPlayer_m1E85761C8D021231C98926E149932D2909D97EAF (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___p0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean Player::CheckGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_CheckGround_m0CEF94F5A97477C97457C79CAE02B6DFDA235CA7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void Game.PowerUp::ShowPlus20()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_ShowPlus20_m07B73176E2D31F1FD6FCC61E61BA7B06AFFB6862 (PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * __this, const RuntimeMethod* method);
// System.Void Game.PowerUp::ShowSpeedMarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_ShowSpeedMarks_m0F78A7DE006FA444B9C1A1BED657F6B3274A9C11 (PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator Game.PowerUp::Plus20()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PowerUp_Plus20_m496FE5E2EA92D1942494B37C8834B5C33473B25D (PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * __this, const RuntimeMethod* method);
// System.Void Game.PowerUp/<Plus20>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlus20U3Ed__8__ctor_m7A41AE74507471B2DFAB5B5EFF8589FF17F567D7 (U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator Game.PowerUp::SpeedMarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PowerUp_SpeedMarks_m5AF0E0FE93899F5DBF42F96C9D5AFBA1FEB3A97E (PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * __this, const RuntimeMethod* method);
// System.Void Game.PowerUp/<SpeedMarks>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedMarksU3Ed__10__ctor_m279F26FE9E1EFAD7123255CD3DD186C22CBB2901 (U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void Game.PowerUp::SetPowerup(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_SetPowerup_mA81030D6D0D3756C84542F6F9A2129CE96C7F6A2 (PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * __this, String_t* ___n0, const RuntimeMethod* method);
// System.Void Shop::ChooseWeiner(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_ChooseWeiner_mEDBAB018DE4520B679F487659514D9A6CCD06E0B (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Boolean Shop::CheckBought(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shop_CheckBought_mD4B0F88EF00597B310D6D1395091345AA3201FD4 (int32_t ___i0, const RuntimeMethod* method);
// System.Void Shop::UndarkWeiner(System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_UndarkWeiner_m97F465E20CDF7F1C533D1F6B550BF6B3CD3E12E7 (RuntimeObject* ___w0, const RuntimeMethod* method);
// System.Void Shop::BuyWeiner(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_BuyWeiner_mAC54B786C31253B219809FD281E99B2DBB9565C4 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, int32_t ___i0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void Shop::ShowCustomization(UnityEngine.Sprite,UnityEngine.Sprite,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_ShowCustomization_mAB69E5500430951C071A7AC2E7840EFA9ED8EA45 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___foot0, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___arm1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___col2, const RuntimeMethod* method);
// System.Boolean Shop::CheckPickles(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shop_CheckPickles_mB5BBC04E014D3E8256DBBD07148D7BF2B2A20239 (int32_t ___i0, const RuntimeMethod* method);
// System.Void Shop::UpdatePicklesAmount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_UpdatePicklesAmount_mEA212A3AF79226C3ABCEBD518774978947D1E632 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, int32_t ___p0, const RuntimeMethod* method);
// System.Void Shop::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Deactivate_m8BF17BB10AEAFED3FCD17ADA8DEE9CDB333CD5BF (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void Shop::UpdatePicklesText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_UpdatePicklesText_mCCFD414289DF07144CCC890FAC66BC71298A33CF (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623 (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___c0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Menu.Leaderboard::DownloadHighScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_DownloadHighScores_m8DFD5EFA7FA2DD22827550173FC5A618F6EC1DA0 (Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A (String_t* ___uri0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// System.Void Menu.Leaderboard::FormatHighscores(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_FormatHighscores_mD7748CEF8083222CF3DFCE935A76BE5A69C2903E (Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void DisplayLeaderboard::OnHighscoresDownloaded(Menu.Leaderboard/Highscore[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayLeaderboard_OnHighscoresDownloaded_mC81C86649015127DF287C4BF46DE2378BBB4FCD6 (DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * __this, HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45* ___highscoreList0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void MenuController::CheckString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_CheckString_m004222D8C8ADEC857140DFC7DCD07E8CF27CCD16 (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, String_t* ___w0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
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
// System.Void AddScore::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddScore_OnTriggerEnter2D_m84028CCFA23662D4B3B58A384B17EB6A3B0DC554 (AddScore_tADF34CA133EE17E756E5BBC194831423F0749138 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!other.CompareTag("Player")) return;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!other.CompareTag("Player")) return;
		return;
	}

IL_000e:
	{
		// InGame._IG.PlayerScored();
		InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * L_2 = ((InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_StaticFields*)il2cpp_codegen_static_fields_for(InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_il2cpp_TypeInfo_var))->get__IG_7();
		InGame_PlayerScored_mD253AA6020AB45EA445E174E23BF6CA6B0800CDD(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AddScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AddScore__ctor_m39BA7F92305F30511F00F407945F7A2B02365973 (AddScore_tADF34CA133EE17E756E5BBC194831423F0749138 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AudioManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Awake_mD7873A38A3ED577A313A05D24BF6511E59EDEC01 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* V_0 = NULL;
	int32_t V_1 = 0;
	Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * V_2 = NULL;
	{
		// _AM = this;
		((AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_il2cpp_TypeInfo_var))->set__AM_4(__this);
		// foreach (var s in sounds)
		SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* L_0 = __this->get_sounds_5();
		V_0 = L_0;
		V_1 = 0;
		goto IL_005d;
	}

IL_0011:
	{
		// foreach (var s in sounds)
		SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// s.source = gameObject.AddComponent<AudioSource>();
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_5 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7;
		L_7 = GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76(L_6, /*hidden argument*/GameObject_AddComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m74F4A6C820807E361696D4E8F71DC1E54BBE7F76_RuntimeMethod_var);
		L_5->set_source_4(L_7);
		// s.source.clip = s.clip;
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_8 = V_2;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = L_8->get_source_4();
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_10 = V_2;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_11 = L_10->get_clip_1();
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_9, L_11, /*hidden argument*/NULL);
		// s.source.volume = s.volume;
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_12 = V_2;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_13 = L_12->get_source_4();
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_14 = V_2;
		float L_15 = L_14->get_volume_3();
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_13, L_15, /*hidden argument*/NULL);
		// s.source.pitch = s.pitch;
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_16 = V_2;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_17 = L_16->get_source_4();
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_18 = V_2;
		float L_19 = L_18->get_pitch_2();
		AudioSource_set_pitch_m9E9EEFADFAB44ADEC656573425CF34D0069A0CBC(L_17, L_19, /*hidden argument*/NULL);
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_005d:
	{
		// foreach (var s in sounds)
		int32_t L_21 = V_1;
		SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AudioManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Start_m54C0A7ACBAB2F38052C6B900BBBC3261339662FC (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// AudioListener.volume = PlayerPrefs.GetInt("Pause", 1) == 1 ? 1 : 0;
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8, 1, /*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE(((float)((float)G_B3_0)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioManager::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Play_mABE51D919CA26C8386CF6823417ECC0CD9000888 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisSound_tF983595F9C621A86B56E05F9778810369E90A0FE_m8886E4A3962CC028DD7BA865B6D22B53587639C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m41E2A799648B173ADBE5EC11BC96DC086099D80B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CPlayU3Eb__0_m3638A911493D9A1EDF26B6B317DFE476AE17D16E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tA3BCDD4327DA28EB58F404C4F16EF439D2996561_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tA3BCDD4327DA28EB58F404C4F16EF439D2996561 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tA3BCDD4327DA28EB58F404C4F16EF439D2996561 * L_0 = (U3CU3Ec__DisplayClass4_0_tA3BCDD4327DA28EB58F404C4F16EF439D2996561 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tA3BCDD4327DA28EB58F404C4F16EF439D2996561_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass4_0__ctor_m67B1BB5E29B49389EC0244292A697D9F0DA398C5(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tA3BCDD4327DA28EB58F404C4F16EF439D2996561 * L_1 = V_0;
		String_t* L_2 = ___name0;
		L_1->set_name_0(L_2);
		// Sound s = System.Array.Find(sounds, Sound => Sound.ClipName == name);
		SoundU5BU5D_tA5C580C0BFABFBC56CF4F26FC1765B4F5194E2DF* L_3 = __this->get_sounds_5();
		U3CU3Ec__DisplayClass4_0_tA3BCDD4327DA28EB58F404C4F16EF439D2996561 * L_4 = V_0;
		Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9 * L_5 = (Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9 *)il2cpp_codegen_object_new(Predicate_1_t216E1EED009F5B2581EDB5305C81FC67605D4FA9_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m41E2A799648B173ADBE5EC11BC96DC086099D80B(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass4_0_U3CPlayU3Eb__0_m3638A911493D9A1EDF26B6B317DFE476AE17D16E_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m41E2A799648B173ADBE5EC11BC96DC086099D80B_RuntimeMethod_var);
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_6;
		L_6 = Array_Find_TisSound_tF983595F9C621A86B56E05F9778810369E90A0FE_m8886E4A3962CC028DD7BA865B6D22B53587639C2(L_3, L_5, /*hidden argument*/Array_Find_TisSound_tF983595F9C621A86B56E05F9778810369E90A0FE_m8886E4A3962CC028DD7BA865B6D22B53587639C2_RuntimeMethod_var);
		// s.source.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = L_6->get_source_4();
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioManager::Mute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Mute_m3B3D1D0EF07D81813C8C67EFD2AD5306A033A07A (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("Pause", 1) == 0)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8, 1, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// PlayerPrefs.SetInt("Pause", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8, 1, /*hidden argument*/NULL);
		// AudioListener.volume = 1;
		AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE((1.0f), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0023:
	{
		// else if (PlayerPrefs.GetInt("Pause", 1) == 1)
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8, 1, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0046;
		}
	}
	{
		// PlayerPrefs.SetInt("Pause", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8, 0, /*hidden argument*/NULL);
		// AudioListener.volume = 0;
		AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE((0.0f), /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void AudioManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__ctor_m6C686441D1A1A223E4CF940A8EB0128535D603BD (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BackgroundMove::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundMove_Start_mD933FA130105D30792E4498B38818CFA614C9F83 (BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Enabled = true;
		IL2CPP_RUNTIME_CLASS_INIT(BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_il2cpp_TypeInfo_var);
		((BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_il2cpp_TypeInfo_var))->set_Enabled_6((bool)1);
		// }
		return;
	}
}
// System.Void BackgroundMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundMove_Update_mC000BA8E4EE3A8BEDABF0362533E7FD63DA28C09 (BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Enabled == false) return;
		IL2CPP_RUNTIME_CLASS_INIT(BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_il2cpp_TypeInfo_var);
		bool L_0 = ((BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_il2cpp_TypeInfo_var))->get_Enabled_6();
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (Enabled == false) return;
		return;
	}

IL_0008:
	{
		// bgRend.material.mainTextureOffset += new Vector2(bgSpeed * Time.deltaTime, 0f);
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_1 = __this->get_bgRend_5();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
		L_2 = Renderer_get_material_mE6B01125502D08EE0D6DFE2EAEC064AD9BB31804(L_1, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_3 = L_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Material_get_mainTextureOffset_m515864AC74B322365689879CC668D001C41577D4(L_3, /*hidden argument*/NULL);
		float L_5 = __this->get_bgSpeed_4();
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_7), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), (0.0f), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_4, L_7, /*hidden argument*/NULL);
		Material_set_mainTextureOffset_m3045530900C547D17F181858EC245CC02CA5F3FE(L_3, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BackgroundMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundMove__ctor_mEBA0406EE901ED70F123178B35F744FAF765E1DC (BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BackgroundMove::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundMove__cctor_mA88E8DA9F1182A9BC1759AEC298D808AD9D21B20 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Enabled = true;
		((BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_il2cpp_TypeInfo_var))->set_Enabled_6((bool)1);
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
// System.Void BreakOnContact::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BreakOnContact_OnTriggerEnter2D_m207DAF44FBA9AB557C486009050C3B18A0638474 (BreakOnContact_tA10D610B461ED55D9DA2E13FCE01F086A60CC68F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!other.CompareTag("Player")) return;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!other.CompareTag("Player")) return;
		return;
	}

IL_000e:
	{
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_2 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_3, /*hidden argument*/NULL);
		// BackgroundMove.Enabled = false;
		IL2CPP_RUNTIME_CLASS_INIT(BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_il2cpp_TypeInfo_var);
		((BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_il2cpp_TypeInfo_var))->set_Enabled_6((bool)0);
		// InGame._IG.GameOver();
		InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * L_4 = ((InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_StaticFields*)il2cpp_codegen_static_fields_for(InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_il2cpp_TypeInfo_var))->get__IG_7();
		InGame_GameOver_m795099F557C67187E115933640E09D5AF6FB3CD2(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BreakOnContact::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BreakOnContact__ctor_mCC4DF9543ABB401AA3D554B5A844C723C04EA15C (BreakOnContact_tA10D610B461ED55D9DA2E13FCE01F086A60CC68F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CameraFollow::SetPlayer(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_SetPlayer_m1E85761C8D021231C98926E149932D2909D97EAF (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = p.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___p0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		((CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_il2cpp_TypeInfo_var))->set_player_6(L_1);
		// }
		return;
	}
}
// System.Void CameraFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Update_m9762CC5B7A2D28B7B8116BA8DE2342AFB654AB08 (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		// transform.position = new Vector3(player.position.x + xPos, yPos, -10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = ((CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_StaticFields*)il2cpp_codegen_static_fields_for(CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8_il2cpp_TypeInfo_var))->get_player_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_xPos_5();
		float L_5 = __this->get_yPos_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((float)il2cpp_codegen_add((float)L_3, (float)L_4)), L_5, (-10.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_6, /*hidden argument*/NULL);
		// }
		goto IL_003a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0033;
		}
		throw e;
	}

CATCH_0033:
	{ // begin catch(System.Exception)
		// Console.WriteLine(e);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var)));
		Console_WriteLine_m8CE2BD87102C3CAB370A59BF3D9DC80B88C871B4(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003a;
	} // end catch (depth: 1)

IL_003a:
	{
		// }
		return;
	}
}
// System.Void CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_m29F88CCFD2ED12A7BCC75A9BBA892CEF179C83DE (CameraFollow_tC9B62E254DA1376073E7B793597F9D6CD2A82DF8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DetachScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetachScript_Awake_m514B68DE006C1BB273B7036F06D54687C9EF6008 (DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _ds = this;
		((DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D_StaticFields*)il2cpp_codegen_static_fields_for(DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D_il2cpp_TypeInfo_var))->set__ds_5(__this);
		// }
		return;
	}
}
// System.Void DetachScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetachScript_Start_mAA5F3B5F19ED6E048B9D9E4A4985BB4A20588C60 (DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mACF0E07ADEA1089A0F21EA9B0D17FBDC1EE7AB66_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _rigidbody2Ds = GetComponentsInChildren<Rigidbody2D>();
		Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF* L_0;
		L_0 = Component_GetComponentsInChildren_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mACF0E07ADEA1089A0F21EA9B0D17FBDC1EE7AB66(__this, /*hidden argument*/Component_GetComponentsInChildren_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mACF0E07ADEA1089A0F21EA9B0D17FBDC1EE7AB66_RuntimeMethod_var);
		__this->set__rigidbody2Ds_6(L_0);
		// }
		return;
	}
}
// System.Void DetachScript::Detach()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetachScript_Detach_mE3039170F87A43F921CA4D482B1B08DB2BA2F1BE (DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// AudioManager._AM.Play("Explosion");
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_0 = ((AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_il2cpp_TypeInfo_var))->get__AM_4();
		AudioManager_Play_mABE51D919CA26C8386CF6823417ECC0CD9000888(L_0, _stringLiteral1C6A610C9202C827AC40C209FCB0201E72DE223A, /*hidden argument*/NULL);
		// anim.enabled = false;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_anim_4();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_1, (bool)0, /*hidden argument*/NULL);
		// transform.parent = null;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_2, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
		// foreach (Rigidbody2D rb in _rigidbody2Ds)
		Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF* L_3 = __this->get__rigidbody2Ds_6();
		V_0 = L_3;
		V_1 = 0;
		goto IL_00c3;
	}

IL_0035:
	{
		// foreach (Rigidbody2D rb in _rigidbody2Ds)
		Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		// rb.bodyType = RigidbodyType2D.Dynamic;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_8 = L_7;
		Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_8, 0, /*hidden argument*/NULL);
		// rb.AddForce(transform.up * Random.Range(200, 500));
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_9 = L_8;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_10, /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)200), ((int32_t)500), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_11, ((float)((float)L_12)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_13, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_9, L_14, /*hidden argument*/NULL);
		// rb.AddTorque(Random.Range(10, 350));
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_15 = L_9;
		int32_t L_16;
		L_16 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)10), ((int32_t)350), /*hidden argument*/NULL);
		Rigidbody2D_AddTorque_m39742C33C7A7EF1ED21ADB0296CAD5785C472901(L_15, ((float)((float)L_16)), /*hidden argument*/NULL);
		// rb.gravityScale = 1f;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_17 = L_15;
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_17, (1.0f), /*hidden argument*/NULL);
		// rb.AddForce(transform.right * Random.Range(100, 300));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_18, /*hidden argument*/NULL);
		int32_t L_20;
		L_20 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)100), ((int32_t)300), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_19, ((float)((float)L_20)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_22;
		L_22 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_21, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_17, L_22, /*hidden argument*/NULL);
		// Destroy(gameObject, 5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_23, (5.0f), /*hidden argument*/NULL);
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00c3:
	{
		// foreach (Rigidbody2D rb in _rigidbody2Ds)
		int32_t L_25 = V_1;
		Rigidbody2DU5BU5D_t9CE3D06C92F81A1266F9DDF9BE6180FE19CC5CEF* L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))
		{
			goto IL_0035;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DetachScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetachScript__ctor_mD52C88795509C1A847967C12C458D6FF75224D37 (DetachScript_t4BEDAC7A3B107EBE5CB66DDA051049DB6A9CEF8D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DisplayLeaderboard::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayLeaderboard_Start_m9C1E33F0FF5401FA450AC9A2E39CB2C8542BADBB (DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLeaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10_mD15B5C4FEC11737FF743D08A897EBEEB1E1BEA5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A46C11CD3F70707214DB728DB0948965F3C565D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEAA3D19B34E863D781F6E3CBAD835645B0EC222);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (var i = 0; i < highscoreText.Length; i++)
		V_0 = 0;
		goto IL_002a;
	}

IL_0004:
	{
		// highscoreText[i].text = i + 1 + ". Fetching...";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_0 = __this->get_highscoreText_4();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_5, _stringLiteralAEAA3D19B34E863D781F6E3CBAD835645B0EC222, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// for (var i = 0; i < highscoreText.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002a:
	{
		// for (var i = 0; i < highscoreText.Length; i++)
		int32_t L_8 = V_0;
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_9 = __this->get_highscoreText_4();
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// leaderboardManager = GetComponent<Leaderboard>();
		Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * L_10;
		L_10 = Component_GetComponent_TisLeaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10_mD15B5C4FEC11737FF743D08A897EBEEB1E1BEA5B(__this, /*hidden argument*/Component_GetComponent_TisLeaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10_mD15B5C4FEC11737FF743D08A897EBEEB1E1BEA5B_RuntimeMethod_var);
		__this->set_leaderboardManager_6(L_10);
		// StartCoroutine(nameof(RefreshHighscore));
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_11;
		L_11 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteral5A46C11CD3F70707214DB728DB0948965F3C565D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DisplayLeaderboard::OnHighscoresDownloaded(Menu.Leaderboard/Highscore[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayLeaderboard_OnHighscoresDownloaded_mC81C86649015127DF287C4BF46DE2378BBB4FCD6 (DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * __this, HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45* ___highscoreList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (var i = 0; i < highscoreText.Length; i++)
		V_0 = 0;
		goto IL_0061;
	}

IL_0004:
	{
		// highscoreText[i].text = i + 1 + ".";
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_0 = __this->get_highscoreText_4();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_5, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// if (highscoreList.Length > i)
		HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45* L_7 = ___highscoreList0;
		int32_t L_8 = V_0;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))) <= ((int32_t)L_8)))
		{
			goto IL_005d;
		}
	}
	{
		// highscoreText[i].text += "  " + highscoreList[i].Score;
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_9 = __this->get_highscoreText_4();
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = L_12;
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_13);
		HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45* L_15 = ___highscoreList0;
		int32_t L_16 = V_0;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->get_Score_1();
		V_1 = L_17;
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_14, _stringLiteral8A8EFDA91C6C257127F8C8D526FAD7E7552766AA, L_18, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_19);
	}

IL_005d:
	{
		// for (var i = 0; i < highscoreText.Length; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0061:
	{
		// for (var i = 0; i < highscoreText.Length; i++)
		int32_t L_21 = V_0;
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_22 = __this->get_highscoreText_4();
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator DisplayLeaderboard::RefreshHighscore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DisplayLeaderboard_RefreshHighscore_mEBC113DA7F52A4608C78FBAD4B850DB97C2C8B82 (DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59 * L_0 = (U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59 *)il2cpp_codegen_object_new(U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59_il2cpp_TypeInfo_var);
		U3CRefreshHighscoreU3Ed__5__ctor_m0676DD49B791B161CE8CD7123EEC8A9C246749E6(L_0, 0, /*hidden argument*/NULL);
		U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void DisplayLeaderboard::ShowHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayLeaderboard_ShowHighScore_m799F92F44F0548295FC4BF3E1DDFE75B91161A53 (DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// OwnHighscore.text = PlayerPrefs.GetInt("HighScore", 0).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_OwnHighscore_5();
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void DisplayLeaderboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayLeaderboard__ctor_m96D5BA0F56F6C090D697C6F04F89A5AB750E35D3 (DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void End::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void End_OnTriggerEnter2D_m8B9D993335103A884FB9C3E091F72C24FB714D1F (End_tCAD9562D0381FD04310D8A496C18ABE9B9F198CB * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// InGame._IG.GameOver();
		InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * L_2 = ((InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_StaticFields*)il2cpp_codegen_static_fields_for(InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_il2cpp_TypeInfo_var))->get__IG_7();
		InGame_GameOver_m795099F557C67187E115933640E09D5AF6FB3CD2(L_2, /*hidden argument*/NULL);
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// }
		goto IL_002f;
	}

IL_0024:
	{
		// Destroy (other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// Destroy(other.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_7 = ___other0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void End::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void End__ctor_m205CBA8A3445D0A0E1224ACFD8A032DF066876DF (End_tCAD9562D0381FD04310D8A496C18ABE9B9F198CB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Game.GameCustomization::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCustomization_Start_m1E6E9282415E2F6229BEA101BD6EA0FC6EDC2816 (GameCustomization_t51D49F05E6436D2F5912992CA7122476342299C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A365493542AB63B7ACEF3555F84504F2AEF1FAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InGame._IG.UpdateText();
		InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * L_0 = ((InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_StaticFields*)il2cpp_codegen_static_fields_for(InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_il2cpp_TypeInfo_var))->get__IG_7();
		InGame_UpdateText_mF1293A94C280BDA75FCE17E0DEBB08B84C564CAC(L_0, /*hidden argument*/NULL);
		// var character = PlayerPrefs.GetInt("Bulldog", 0);
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral2A365493542AB63B7ACEF3555F84504F2AEF1FAC, 0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_003d;
		}
	}
	{
		// Instantiate(RegularBulldog, startPos, Quaternion.Euler(0, 0, 0));
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2 = __this->get_RegularBulldog_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_startPos_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_5;
		L_5 = Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Game.GameCustomization::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCustomization__ctor_m164F873D767CE3FDD6B2BA540942C0A9CAC85D82 (GameCustomization_t51D49F05E6436D2F5912992CA7122476342299C6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void InGame::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGame_Awake_m428DA3AD17430F4BD169DFDA986299C37E054D81 (InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _IG = this;
		((InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_StaticFields*)il2cpp_codegen_static_fields_for(InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_il2cpp_TypeInfo_var))->set__IG_7(__this);
		// }
		return;
	}
}
// System.Void InGame::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGame_GameOver_m795099F557C67187E115933640E09D5AF6FB3CD2 (InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0_m2D6C8A818EFC056446910D77E7560AAEF576D873_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (var i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// UI[i].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_UI_4();
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// for (var i = 0; i < 3; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0016:
	{
		// for (var i = 0; i < 3; i++)
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// UI[4].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_UI_4();
		int32_t L_7 = 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// Destroy(gameObject.GetComponent<ObjectSpawn>());
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		ObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0 * L_10;
		L_10 = GameObject_GetComponent_TisObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0_m2D6C8A818EFC056446910D77E7560AAEF576D873(L_9, /*hidden argument*/GameObject_GetComponent_TisObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0_m2D6C8A818EFC056446910D77E7560AAEF576D873_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
		// if (score > PlayerPrefs.GetInt ("HighScore", 0))
		int32_t L_11 = __this->get_score_6();
		int32_t L_12;
		L_12 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0069;
		}
	}
	{
		// PlayerPrefs.SetInt ("HighScore", score);
		int32_t L_13 = __this->get_score_6();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, L_13, /*hidden argument*/NULL);
		// UI[3].SetActive (true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get_UI_4();
		int32_t L_15 = 3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)1, /*hidden argument*/NULL);
	}

IL_0069:
	{
		// Player.moveSpeed = 0f;
		((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->set_moveSpeed_5((0.0f));
		// BackgroundMove.Enabled = false;
		IL2CPP_RUNTIME_CLASS_INIT(BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_il2cpp_TypeInfo_var);
		((BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_StaticFields*)il2cpp_codegen_static_fields_for(BackgroundMove_t7A3312AD9E03C13798FEF9420BC9CD2B11450C2D_il2cpp_TypeInfo_var))->set_Enabled_6((bool)0);
		// }
		return;
	}
}
// System.Void InGame::PlayerScored()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGame_PlayerScored_mD253AA6020AB45EA445E174E23BF6CA6B0800CDD (InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * __this, const RuntimeMethod* method)
{
	{
		// score++;
		int32_t L_0 = __this->get_score_6();
		__this->set_score_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// UpdateText();
		InGame_UpdateText_mF1293A94C280BDA75FCE17E0DEBB08B84C564CAC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void InGame::UpdateText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGame_UpdateText_mF1293A94C280BDA75FCE17E0DEBB08B84C564CAC (InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText.text = "Score: " + score;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_scoreText_5();
		int32_t* L_1 = __this->get_address_of_score_6();
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void InGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InGame__ctor_m73E73E53BA5AD5AFDE98C73FFC6F277BD2EC8A30 (InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Menu.Leaderboard::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_Awake_m30E6E04A88CBB034A47458F5E45AEBE10064AB10 (Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D_m12BCC364F5DABEAF1A054879A4E6EDF51A34D829_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// leaderboardDisplay = GetComponent<DisplayLeaderboard>();
		DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * L_0;
		L_0 = Component_GetComponent_TisDisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D_m12BCC364F5DABEAF1A054879A4E6EDF51A34D829(__this, /*hidden argument*/Component_GetComponent_TisDisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D_m12BCC364F5DABEAF1A054879A4E6EDF51A34D829_RuntimeMethod_var);
		__this->set_leaderboardDisplay_8(L_0);
		// }
		return;
	}
}
// System.Void Menu.Leaderboard::AddHighScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_AddHighScore_m46D78974137967F5938171F2B906A2859A6F6464 (Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A281F9DBD5E103CE9E67E73392C2A3BA578F217);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var username = PlayerPrefs.GetString("Username");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral4A281F9DBD5E103CE9E67E73392C2A3BA578F217, /*hidden argument*/NULL);
		V_0 = L_0;
		// var score = PlayerPrefs.GetInt("HighScore", 0);
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, 0, /*hidden argument*/NULL);
		V_1 = L_1;
		// StartCoroutine(UploadHighScore(username, score));
		String_t* L_2 = V_0;
		int32_t L_3 = V_1;
		RuntimeObject* L_4;
		L_4 = Leaderboard_UploadHighScore_m86C57EA52E5822A4A277224C12990E715D163CEC(__this, L_2, L_3, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Menu.Leaderboard::UploadHighScore(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Leaderboard_UploadHighScore_m86C57EA52E5822A4A277224C12990E715D163CEC (Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * __this, String_t* ___username0, int32_t ___score1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF * L_0 = (U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF *)il2cpp_codegen_object_new(U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF_il2cpp_TypeInfo_var);
		U3CUploadHighScoreU3Ed__8__ctor_m25947CC798624944004E884329CE56D000AA208A(L_0, 0, /*hidden argument*/NULL);
		U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF * L_1 = L_0;
		String_t* L_2 = ___username0;
		L_1->set_username_2(L_2);
		U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF * L_3 = L_1;
		int32_t L_4 = ___score1;
		L_3->set_score_3(L_4);
		return L_3;
	}
}
// System.Void Menu.Leaderboard::DownloadHighScores()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_DownloadHighScores_m8DFD5EFA7FA2DD22827550173FC5A618F6EC1DA0 (Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA6352D40ACCDE05CB70DEC0247729EC02120D73);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(nameof(DownloadHighScoresFromDatabase));
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0;
		L_0 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteralEA6352D40ACCDE05CB70DEC0247729EC02120D73, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Menu.Leaderboard::DownloadHighScoresFromDatabase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Leaderboard_DownloadHighScoresFromDatabase_m04EAEAA518994AC2F24AB659C3E307F387185835 (Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C * L_0 = (U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C *)il2cpp_codegen_object_new(U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C_il2cpp_TypeInfo_var);
		U3CDownloadHighScoresFromDatabaseU3Ed__10__ctor_m7C76657C840F2E799D713D2DFF181D9283C310F0(L_0, 0, /*hidden argument*/NULL);
		U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Menu.Leaderboard::FormatHighscores(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_FormatHighscores_mD7748CEF8083222CF3DFCE935A76BE5A69C2903E (Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// var entry = text.Split(new[] { '\n' }, System.StringSplitOptions.RemoveEmptyEntries);
		String_t* L_0 = ___text0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)10));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3;
		L_3 = String_Split_m8334980E85EA3EF1F6204607324D9C34EFA4CA25(L_0, L_2, 1, /*hidden argument*/NULL);
		V_0 = L_3;
		// highscoresList = new Highscore[entry.Length];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_0;
		HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45* L_5 = (HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45*)(HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45*)SZArrayNew(HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
		__this->set_highscoresList_7(L_5);
		// for (var i = 0; i < entry.Length; i++)
		V_1 = 0;
		goto IL_005b;
	}

IL_0025:
	{
		// var entryInfo = entry[i].Split('|');
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		String_t* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = L_10;
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)124));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12;
		L_12 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_9, L_11, /*hidden argument*/NULL);
		// var username = entryInfo[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = L_12;
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_2 = L_15;
		// var score = int.Parse(entryInfo[1]);
		int32_t L_16 = 1;
		String_t* L_17 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		int32_t L_18;
		L_18 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// highscoresList[i] = new Highscore(username, score);
		HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45* L_19 = __this->get_highscoresList_7();
		int32_t L_20 = V_1;
		String_t* L_21 = V_2;
		int32_t L_22 = V_3;
		Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Highscore__ctor_m34D148AFD18CA520AC2C07CA33DA3DF2D1AC9452((&L_23), L_21, L_22, /*hidden argument*/NULL);
		(L_19)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20), (Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A )L_23);
		// for (var i = 0; i < entry.Length; i++)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_005b:
	{
		// for (var i = 0; i < entry.Length; i++)
		int32_t L_25 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = V_0;
		if ((((int32_t)L_25) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Menu.Leaderboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard__ctor_m516C6E6E14F1266C79C442D0A6822CE56F899098 (Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LoadScene::LoadByIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene_LoadByIndex_m798303AFD25F914FF8C4F05D1101ED517D82BBFB (LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * __this, int32_t ___sceneIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// SceneManager.LoadScene (sceneIndex);
		int32_t L_0 = ___sceneIndex0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(L_0, /*hidden argument*/NULL);
		// if (sceneIndex == 1)
		int32_t L_1 = ___sceneIndex0;
		// }
		return;
	}
}
// System.Void LoadScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene__ctor_m3003C0157CC4154E26B2ABFEF86DAF98ED17150F (LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MenuController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_Start_m3789429129D401EB094B5BFC35FFFBF1ACCF1482 (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A281F9DBD5E103CE9E67E73392C2A3BA578F217);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.HasKey("Username")) return;
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral4A281F9DBD5E103CE9E67E73392C2A3BA578F217, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// if (PlayerPrefs.HasKey("Username")) return;
		return;
	}

IL_000d:
	{
		// PlayerPrefs.SetInt("0", 1); //Sets the regular weiner to be bought;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, 1, /*hidden argument*/NULL);
		// PlayerPrefs.DeleteKey("Username");
		PlayerPrefs_DeleteKey_mCEF6CE08D7D7670AD4072228E261A7E746030554(_stringLiteral4A281F9DBD5E103CE9E67E73392C2A3BA578F217, /*hidden argument*/NULL);
		// Generate();
		MenuController_Generate_m6C5C6B8D239B57A59FF0CAF46059D7B3D79EB1DB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::Generate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_Generate_m6C5C6B8D239B57A59FF0CAF46059D7B3D79EB1DB (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A281F9DBD5E103CE9E67E73392C2A3BA578F217);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7131B822A03BF66704984F23A1198C1811D63906);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		// var charAmount = Random.Range(5, 25);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(5, ((int32_t)25), /*hidden argument*/NULL);
		V_0 = L_0;
		// for (var i = 0; i < charAmount; i++)
		V_1 = 0;
		goto IL_0044;
	}

IL_000d:
	{
		// username += characters[Random.Range(0, characters.Length)];
		String_t* L_1 = __this->get_username_8();
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(_stringLiteral7131B822A03BF66704984F23A1198C1811D63906, /*hidden argument*/NULL);
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_2, /*hidden argument*/NULL);
		Il2CppChar L_4;
		L_4 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(_stringLiteral7131B822A03BF66704984F23A1198C1811D63906, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		String_t* L_5;
		L_5 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_2), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, L_5, /*hidden argument*/NULL);
		__this->set_username_8(L_6);
		// for (var i = 0; i < charAmount; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0044:
	{
		// for (var i = 0; i < charAmount; i++)
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000d;
		}
	}
	{
		// PlayerPrefs.SetString("Username", username);
		String_t* L_10 = __this->get_username_8();
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral4A281F9DBD5E103CE9E67E73392C2A3BA578F217, L_10, /*hidden argument*/NULL);
		// CheckUser();
		MenuController_CheckUser_m37C74BC1FC57C3DB4E20C99593BCDB621B00D87C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::CheckUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_CheckUser_m37C74BC1FC57C3DB4E20C99593BCDB621B00D87C (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E528B3D59F4DF44EA6F2EFBE4003B6BBE14CAB2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(nameof(Check));
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0;
		L_0 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteral8E528B3D59F4DF44EA6F2EFBE4003B6BBE14CAB2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator MenuController::Check()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MenuController_Check_mB8F167539F0D7A993CE703224E0516DC638D9399 (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39 * L_0 = (U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39 *)il2cpp_codegen_object_new(U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39_il2cpp_TypeInfo_var);
		U3CCheckU3Ed__9__ctor_m605CD9301399BFFF4109E3089EA4309CE026835F(L_0, 0, /*hidden argument*/NULL);
		U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void MenuController::CheckString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_CheckString_m004222D8C8ADEC857140DFC7DCD07E8CF27CCD16 (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, String_t* ___w0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (w == "")
		String_t* L_0 = ___w0;
		bool L_1;
		L_1 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Generate();
		MenuController_Generate_m6C5C6B8D239B57A59FF0CAF46059D7B3D79EB1DB(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void MenuController::CheckButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_CheckButton_mB47CC51FF687D6BF41AAFB28DA021F4E6A713EDE (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var a = PlayerPrefs.GetInt("Pause", 1);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralAAAA401E86E41E6120BB9E96B9892141CF5A81F8, 1, /*hidden argument*/NULL);
		// if (a != 0) return;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (a != 0) return;
		return;
	}

IL_000e:
	{
		// SoundOn.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_SoundOn_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// SoundOff.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_SoundOff_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController__ctor_m59357650A99D124D2EB1B4AD34FD6EB2B5F6E182 (MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ObjectPooler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPooler_Awake_mE0125C1F01DB977B133898A254CA9C9301FE4DCE (ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pool_instance = this;
		((ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C_il2cpp_TypeInfo_var))->set_pool_instance_4(__this);
		// }
		return;
	}
}
// System.Void ObjectPooler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPooler_Start_mE6EC0BA7ED19F45FAC7697D3C357F4155FF7EF6C (ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m0C5D895ACF50E41367BBB10271D5F9F98A83C8C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9855F31661557D2E7ACD8FBBFB501CF407440712_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD358285C570D857647783DAAE1D7A7AB8A113B88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE237407D8D333C9B3D0EA57503853C5FD6FFE0D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCCB7040DE017C0E76B2F9C66DD1DF179BF3DB918_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4BF3ECEF353287E39CD723B6B234EE2611D67346_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m989302E3AE90AD39E5B892C79B3A6365966D1852_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907 * V_1 = NULL;
	Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * V_2 = NULL;
	int32_t V_3 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// poolDictionary = new Dictionary<string, Queue<GameObject>>();
		Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * L_0 = (Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F *)il2cpp_codegen_object_new(Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m9855F31661557D2E7ACD8FBBFB501CF407440712(L_0, /*hidden argument*/Dictionary_2__ctor_m9855F31661557D2E7ACD8FBBFB501CF407440712_RuntimeMethod_var);
		__this->set_poolDictionary_6(L_0);
		// foreach (var pool in pools)
		List_1_tC9E41625DCBFD1FFFE40A52D83D5D70B9FF7AA6B * L_1 = __this->get_pools_5();
		Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B  L_2;
		L_2 = List_1_GetEnumerator_m4BF3ECEF353287E39CD723B6B234EE2611D67346(L_1, /*hidden argument*/List_1_GetEnumerator_m4BF3ECEF353287E39CD723B6B234EE2611D67346_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0067;
		}

IL_0019:
		{
			// foreach (var pool in pools)
			Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907 * L_3;
			L_3 = Enumerator_get_Current_mCCB7040DE017C0E76B2F9C66DD1DF179BF3DB918_inline((Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B *)(&V_0), /*hidden argument*/Enumerator_get_Current_mCCB7040DE017C0E76B2F9C66DD1DF179BF3DB918_RuntimeMethod_var);
			V_1 = L_3;
			// Queue<GameObject> objectPool = new Queue<GameObject>();
			Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * L_4 = (Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 *)il2cpp_codegen_object_new(Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92_il2cpp_TypeInfo_var);
			Queue_1__ctor_m989302E3AE90AD39E5B892C79B3A6365966D1852(L_4, /*hidden argument*/Queue_1__ctor_m989302E3AE90AD39E5B892C79B3A6365966D1852_RuntimeMethod_var);
			V_2 = L_4;
			// for (int i = 0; i < pool.size; i++)
			V_3 = 0;
			goto IL_004c;
		}

IL_002b:
		{
			// GameObject obj = Instantiate(pool.prefab);
			Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907 * L_5 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5->get_prefab_1();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
			L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
			V_4 = L_7;
			// obj.SetActive(false);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_4;
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
			// objectPool.Enqueue(obj);
			Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * L_9 = V_2;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_4;
			Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513(L_9, L_10, /*hidden argument*/Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513_RuntimeMethod_var);
			// for (int i = 0; i < pool.size; i++)
			int32_t L_11 = V_3;
			V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		}

IL_004c:
		{
			// for (int i = 0; i < pool.size; i++)
			int32_t L_12 = V_3;
			Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907 * L_13 = V_1;
			int32_t L_14 = L_13->get_size_2();
			if ((((int32_t)L_12) < ((int32_t)L_14)))
			{
				goto IL_002b;
			}
		}

IL_0055:
		{
			// poolDictionary.Add(pool.tag, objectPool);
			Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * L_15 = __this->get_poolDictionary_6();
			Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907 * L_16 = V_1;
			String_t* L_17 = L_16->get_tag_0();
			Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * L_18 = V_2;
			Dictionary_2_Add_m0C5D895ACF50E41367BBB10271D5F9F98A83C8C1(L_15, L_17, L_18, /*hidden argument*/Dictionary_2_Add_m0C5D895ACF50E41367BBB10271D5F9F98A83C8C1_RuntimeMethod_var);
		}

IL_0067:
		{
			// foreach (var pool in pools)
			bool L_19;
			L_19 = Enumerator_MoveNext_mE237407D8D333C9B3D0EA57503853C5FD6FFE0D9((Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mE237407D8D333C9B3D0EA57503853C5FD6FFE0D9_RuntimeMethod_var);
			if (L_19)
			{
				goto IL_0019;
			}
		}

IL_0070:
		{
			IL2CPP_LEAVE(0x80, FINALLY_0072);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0072;
	}

FINALLY_0072:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD358285C570D857647783DAAE1D7A7AB8A113B88((Enumerator_t0AF1683DC83CC54D02DC1C9F05623F680BBD4F2B *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD358285C570D857647783DAAE1D7A7AB8A113B88_RuntimeMethod_var);
		IL2CPP_END_FINALLY(114)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(114)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x80, IL_0080)
	}

IL_0080:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject ObjectPooler::SpawnFromPool(System.String,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectPooler_SpawnFromPool_mD92D16153398A869A2DE1E9342F5A51391E17F06 (ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * __this, String_t* ___t0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m250063473D2FECA30827552033CEF780DBE2B3DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mAB7D03D5E1E8D5574DB751A04534E90B970BE0CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// GameObject objectToSpawn = poolDictionary[t].Dequeue();
		Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * L_0 = __this->get_poolDictionary_6();
		String_t* L_1 = ___t0;
		Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * L_2;
		L_2 = Dictionary_2_get_Item_m250063473D2FECA30827552033CEF780DBE2B3DB(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m250063473D2FECA30827552033CEF780DBE2B3DB_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Queue_1_Dequeue_mAB7D03D5E1E8D5574DB751A04534E90B970BE0CC(L_2, /*hidden argument*/Queue_1_Dequeue_mAB7D03D5E1E8D5574DB751A04534E90B970BE0CC_RuntimeMethod_var);
		V_0 = L_3;
		// objectToSpawn.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// objectToSpawn.transform.position = position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___position1;
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_7, /*hidden argument*/NULL);
		// objectToSpawn.transform.rotation = rotation;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = ___rotation2;
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_9, L_10, /*hidden argument*/NULL);
		// poolDictionary[t].Enqueue(objectToSpawn);
		Dictionary_2_tDE4EDBDC568FB033EAC636207097351E6DC14C3F * L_11 = __this->get_poolDictionary_6();
		String_t* L_12 = ___t0;
		Queue_1_t19382AED9A873E9B1E7BA5D847E64540A2B4FC92 * L_13;
		L_13 = Dictionary_2_get_Item_m250063473D2FECA30827552033CEF780DBE2B3DB(L_11, L_12, /*hidden argument*/Dictionary_2_get_Item_m250063473D2FECA30827552033CEF780DBE2B3DB_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_0;
		Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513(L_13, L_14, /*hidden argument*/Queue_1_Enqueue_mBF3F677E8FA5E61DFEF3209F9DDA278775BDD513_RuntimeMethod_var);
		// return objectToSpawn;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = V_0;
		return L_15;
	}
}
// System.Void ObjectPooler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPooler__ctor_m0841039D1BC3E109F55536253500BFB91136C1A6 (ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ObjectSpawn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawn_Start_m20B4EFC8E2A1648CAB374AE11137519059AFBF50 (ObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D492F8437C01F1044CEA1DB3B2CEB0F608759A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61342C2D4DE405988C6A6096193CF4A5BDED0520);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke(nameof(SpawnGround), Random.Range(1, 2));
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 2, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral27D492F8437C01F1044CEA1DB3B2CEB0F608759A, ((float)((float)L_0)), /*hidden argument*/NULL);
		// Invoke(nameof(SpawnPowerup), Random.Range(1, 3));
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 3, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral61342C2D4DE405988C6A6096193CF4A5BDED0520, ((float)((float)L_1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectSpawn::SpawnGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawn_SpawnGround_mDB06B9E626F122702D26046A3E261EA19F3E0BDD (ObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D492F8437C01F1044CEA1DB3B2CEB0F608759A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ObjectPooler.pool_instance.SpawnFromPool("Ground", groundSpawn.position, Quaternion.identity);
		ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * L_0 = ((ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C_il2cpp_TypeInfo_var))->get_pool_instance_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_groundSpawn_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3;
		L_3 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = ObjectPooler_SpawnFromPool_mD92D16153398A869A2DE1E9342F5A51391E17F06(L_0, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, L_2, L_3, /*hidden argument*/NULL);
		// Invoke(nameof(SpawnGround), Random.Range(spawnMinG, spawnMaxG));
		float L_5 = __this->get_spawnMinG_4();
		float L_6 = __this->get_spawnMaxG_5();
		float L_7;
		L_7 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_5, L_6, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral27D492F8437C01F1044CEA1DB3B2CEB0F608759A, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ObjectSpawn::SpawnPowerup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawn_SpawnPowerup_m729AD64CD09B58E440691FD262C4086EA79C2099 (ObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61342C2D4DE405988C6A6096193CF4A5BDED0520);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ObjectPooler.pool_instance.SpawnFromPool(GetPowerup(), powerupSpawn.position, Quaternion.identity);
		ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * L_0 = ((ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C_il2cpp_TypeInfo_var))->get_pool_instance_4();
		String_t* L_1;
		L_1 = ObjectSpawn_GetPowerup_mCC07F14A058502CF968D63A4D006106998FC8759(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_powerupSpawn_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = ObjectPooler_SpawnFromPool_mD92D16153398A869A2DE1E9342F5A51391E17F06(L_0, L_1, L_3, L_4, /*hidden argument*/NULL);
		// Invoke(nameof(SpawnPowerup), Random.Range(spawnMinC, spawnMaxC));
		float L_6 = __this->get_spawnMinC_6();
		float L_7 = __this->get_spawnMaxC_7();
		float L_8;
		L_8 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_6, L_7, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral61342C2D4DE405988C6A6096193CF4A5BDED0520, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String ObjectSpawn::GetPowerup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ObjectSpawn_GetPowerup_mCC07F14A058502CF968D63A4D006106998FC8759 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4A4EA1D542F24C140452BA1A66AC18985A27CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// var i = Random.Range(0, 5);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 5, /*hidden argument*/NULL);
		V_0 = L_0;
		// return i switch
		// {
		//     0 => "Bone",
		//     1 => "Bone",
		//     4 => "Bone",
		//     2 => "Food",
		//     3 => "Food",
		//     _ => "Food"
		// };
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0024;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_003c;
			}
			case 3:
			{
				goto IL_0044;
			}
			case 4:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_004c;
	}

IL_0024:
	{
		V_1 = _stringLiteral2A4A4EA1D542F24C140452BA1A66AC18985A27CE;
		goto IL_0052;
	}

IL_002c:
	{
		V_1 = _stringLiteral2A4A4EA1D542F24C140452BA1A66AC18985A27CE;
		goto IL_0052;
	}

IL_0034:
	{
		V_1 = _stringLiteral2A4A4EA1D542F24C140452BA1A66AC18985A27CE;
		goto IL_0052;
	}

IL_003c:
	{
		V_1 = _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B;
		goto IL_0052;
	}

IL_0044:
	{
		V_1 = _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B;
		goto IL_0052;
	}

IL_004c:
	{
		V_1 = _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B;
	}

IL_0052:
	{
		String_t* L_2 = V_1;
		return L_2;
	}
}
// System.Void ObjectSpawn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawn__ctor_mC26E933BBC4D33E4CE9CC5C5CA78ECAF37EC4493 (ObjectSpawn_t5E681AD193C6EBD96E532AA27D083FED287196B0 * __this, const RuntimeMethod* method)
{
	{
		// public float spawnMinG = 1f;
		__this->set_spawnMinG_4((1.0f));
		// public float spawnMaxG = 2f;
		__this->set_spawnMaxG_5((2.0f));
		// public float spawnMinC = 2f;
		__this->set_spawnMinC_6((2.0f));
		// public float spawnMaxC = 4f;
		__this->set_spawnMaxC_7((4.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Pause::resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause_resume_mA0827E388A382A6BD92F04F0FBF784CAC9B72DA8 (Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenu.SetActive (false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenu_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// gameIsPaused = false;
		IL2CPP_RUNTIME_CLASS_INIT(Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28_il2cpp_TypeInfo_var);
		((Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28_StaticFields*)il2cpp_codegen_static_fields_for(Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28_il2cpp_TypeInfo_var))->set_gameIsPaused_4((bool)0);
		// }
		return;
	}
}
// System.Void Pause::pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause_pause_m32AC35B7F1167DABE5808DEB5B9F5868D2810035 (Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenu.SetActive (true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_pauseMenu_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// gameIsPaused = true;
		IL2CPP_RUNTIME_CLASS_INIT(Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28_il2cpp_TypeInfo_var);
		((Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28_StaticFields*)il2cpp_codegen_static_fields_for(Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28_il2cpp_TypeInfo_var))->set_gameIsPaused_4((bool)1);
		// }
		return;
	}
}
// System.Void Pause::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause__ctor_m0A16764376F8C9A6D19DE0BB24A41FA81F587928 (Pause_t5E28511B498597107F52BA155FEDA9E5F92E0E28 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pause::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pause__cctor_mEB6C5E15E2B12B13349A0128E05C385FAF66F37E (const RuntimeMethod* method)
{
	{
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
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_10(L_0);
		// PowerUp._PU.SetObjects(mark);
		PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * L_1 = ((PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F_StaticFields*)il2cpp_codegen_static_fields_for(PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F_il2cpp_TypeInfo_var))->get__PU_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_mark_9();
		PowerUp_SetObjects_mF70255F23F2910C402117F4372347E0D7FABA167_inline(L_1, L_2, /*hidden argument*/NULL);
		// CameraFollow.SetPlayer(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		CameraFollow_SetPlayer_m1E85761C8D021231C98926E149932D2909D97EAF(L_3, /*hidden argument*/NULL);
		// moveSpeed = 11;
		((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->set_moveSpeed_5((11.0f));
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb.velocity = new Vector2 (moveSpeed, rb.velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rb_10();
		float L_1 = ((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->get_moveSpeed_5();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2 = __this->get_rb_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), L_1, L_4, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_0, L_5, /*hidden argument*/NULL);
		// if (!Input.GetMouseButtonDown(0) || !CheckGround()) return;
		bool L_6;
		L_6 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		bool L_7;
		L_7 = Player_CheckGround_m0CEF94F5A97477C97457C79CAE02B6DFDA235CA7(__this, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0036;
		}
	}

IL_0035:
	{
		// if (!Input.GetMouseButtonDown(0) || !CheckGround()) return;
		return;
	}

IL_0036:
	{
		// rb.velocity = new Vector2 (rb.velocity.x, jumpForce);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_8 = __this->get_rb_10();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_9 = __this->get_rb_10();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_0();
		float L_12 = __this->get_jumpForce_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_13), L_11, L_12, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_8, L_13, /*hidden argument*/NULL);
		// AudioManager._AM.Play("Jump");
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_14 = ((AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_il2cpp_TypeInfo_var))->get__AM_4();
		AudioManager_Play_mABE51D919CA26C8386CF6823417ECC0CD9000888(L_14, _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Player::CheckGround()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Player_CheckGround_m0CEF94F5A97477C97457C79CAE02B6DFDA235CA7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Physics2D.OverlapCircle (groundCheck.position, groundCheckRadius, whatIsGround);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_groundCheck_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_groundCheckRadius_7();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_4 = __this->get_whatIsGround_8();
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6;
		L_6 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_2, L_3, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Game.PowerUp::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_Awake_mACEDB90F9EAF98CF621C8E3830FBBD4517C97053 (PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _PU = this;
		((PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F_StaticFields*)il2cpp_codegen_static_fields_for(PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F_il2cpp_TypeInfo_var))->set__PU_7(__this);
		// }
		return;
	}
}
// System.Void Game.PowerUp::SetPowerup(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_SetPowerup_mA81030D6D0D3756C84542F6F9A2129CE96C7F6A2 (PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * __this, String_t* ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEECFC235557F8AFEAF3B0F8BC857C6925D5A379);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF3275A961E194A83E0ECE355A73639CEB31FEAC);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___n0;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_1 = ___n0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteralBEECFC235557F8AFEAF3B0F8BC857C6925D5A379, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = ___n0;
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteralCF3275A961E194A83E0ECE355A73639CEB31FEAC, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		goto IL_002d;
	}

IL_001f:
	{
		// ShowPlus20();
		PowerUp_ShowPlus20_m07B73176E2D31F1FD6FCC61E61BA7B06AFFB6862(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0026:
	{
		// ShowSpeedMarks();
		PowerUp_ShowSpeedMarks_m0F78A7DE006FA444B9C1A1BED657F6B3274A9C11(__this, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_002d:
	{
		// ShowPlus20();
		PowerUp_ShowPlus20_m07B73176E2D31F1FD6FCC61E61BA7B06AFFB6862(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Game.PowerUp::SetObjects(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_SetObjects_mF70255F23F2910C402117F4372347E0D7FABA167 (PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m0, const RuntimeMethod* method)
{
	{
		// marks = m;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___m0;
		__this->set_marks_6(L_0);
		// }
		return;
	}
}
// System.Void Game.PowerUp::ShowPlus20()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_ShowPlus20_m07B73176E2D31F1FD6FCC61E61BA7B06AFFB6862 (PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(Plus20());
		RuntimeObject* L_0;
		L_0 = PowerUp_Plus20_m496FE5E2EA92D1942494B37C8834B5C33473B25D(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// InGame._IG.score += 20;
		InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * L_2 = ((InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_StaticFields*)il2cpp_codegen_static_fields_for(InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_il2cpp_TypeInfo_var))->get__IG_7();
		InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * L_3 = L_2;
		int32_t L_4 = L_3->get_score_6();
		L_3->set_score_6(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)((int32_t)20))));
		// InGame._IG.UpdateText();
		InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1 * L_5 = ((InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_StaticFields*)il2cpp_codegen_static_fields_for(InGame_tA5DE03D923F1B1B9D4EE8B0AFA331FC1AFE124B1_il2cpp_TypeInfo_var))->get__IG_7();
		InGame_UpdateText_mF1293A94C280BDA75FCE17E0DEBB08B84C564CAC(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Game.PowerUp::Plus20()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PowerUp_Plus20_m496FE5E2EA92D1942494B37C8834B5C33473B25D (PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C * L_0 = (U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C *)il2cpp_codegen_object_new(U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C_il2cpp_TypeInfo_var);
		U3CPlus20U3Ed__8__ctor_m7A41AE74507471B2DFAB5B5EFF8589FF17F567D7(L_0, 0, /*hidden argument*/NULL);
		U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Game.PowerUp::ShowSpeedMarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_ShowSpeedMarks_m0F78A7DE006FA444B9C1A1BED657F6B3274A9C11 (PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(SpeedMarks());
		RuntimeObject* L_0;
		L_0 = PowerUp_SpeedMarks_m5AF0E0FE93899F5DBF42F96C9D5AFBA1FEB3A97E(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Game.PowerUp::SpeedMarks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PowerUp_SpeedMarks_m5AF0E0FE93899F5DBF42F96C9D5AFBA1FEB3A97E (PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22 * L_0 = (U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22 *)il2cpp_codegen_object_new(U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22_il2cpp_TypeInfo_var);
		U3CSpeedMarksU3Ed__10__ctor_m279F26FE9E1EFAD7123255CD3DD186C22CBB2901(L_0, 0, /*hidden argument*/NULL);
		U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Game.PowerUp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp__ctor_m0CD54978E2CF3FA5E9604319A5A27ED820A6594B (PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * __this, const RuntimeMethod* method)
{
	{
		// public float FastSpeed = 12.5f;
		__this->set_FastSpeed_5((12.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PowerupTrigger::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerupTrigger_OnTriggerEnter2D_mF1177EFB259DA0921EC0DC4814DE640EE1B7C064 (PowerupTrigger_t019E815EA655B080CBCAC0958308C7B6E9D5C577 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!other.CompareTag("Player")) return;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___other0;
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!other.CompareTag("Player")) return;
		return;
	}

IL_000e:
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// PowerUp._PU.SetPowerup(name);
		PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * L_3 = ((PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F_StaticFields*)il2cpp_codegen_static_fields_for(PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F_il2cpp_TypeInfo_var))->get__PU_7();
		String_t* L_4;
		L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		PowerUp_SetPowerup_mA81030D6D0D3756C84542F6F9A2129CE96C7F6A2(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PowerupTrigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerupTrigger__ctor_m2F0477AD63ED2EA518CF0CEF10B200482C03E6F3 (PowerupTrigger_t019E815EA655B080CBCAC0958308C7B6E9D5C577 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SelfDistruct::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelfDistruct_Start_m4A7047FEA00E276B54A318CA47D49F2DE63D183F (SelfDistruct_tED2253925CF74F63C2EF1E19960A8AEB6821C5D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject, TimeTillDistruct);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_TimeTillDistruct_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(L_0, L_1, /*hidden argument*/NULL);
		// Destroy(this, TimeTillDistruct);
		float L_2 = __this->get_TimeTillDistruct_4();
		Object_Destroy_mAAAA103F4911E9FA18634BF9605C28559F5E2AC7(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SelfDistruct::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelfDistruct__ctor_m020038DE290B4F903CBA37C5E30A9409E74F44E8 (SelfDistruct_tED2253925CF74F63C2EF1E19960A8AEB6821C5D7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Shop::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Start_m511166AF24B2A3289A51FD338BFB6E39CD1B1A46 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51EFF23BD552E151AAC34F0A27C9FD6B615AB07C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// PlayerPrefs.SetInt("0", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, 1, /*hidden argument*/NULL);
		// ChooseWeiner(PlayerPrefs.GetInt("Weiner", 0));
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteral51EFF23BD552E151AAC34F0A27C9FD6B615AB07C, 0, /*hidden argument*/NULL);
		Shop_ChooseWeiner_mEDBAB018DE4520B679F487659514D9A6CCD06E0B(__this, L_0, /*hidden argument*/NULL);
		// for (var i = 1; i < 4; i++)
		V_0 = 1;
		goto IL_0091;
	}

IL_0020:
	{
		// if (!CheckBought(i)) continue;
		int32_t L_1 = V_0;
		bool L_2;
		L_2 = Shop_CheckBought_mD4B0F88EF00597B310D6D1395091345AA3201FD4(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)))
		{
			case 0:
			{
				goto IL_003e;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_0074;
			}
		}
	}
	{
		goto IL_008d;
	}

IL_003e:
	{
		// prices[0].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get_prices_13();
		int32_t L_5 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// UndarkWeiner(SpaceWeiner);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_7 = __this->get_SpaceWeiner_4();
		Shop_UndarkWeiner_m97F465E20CDF7F1C533D1F6B550BF6B3CD3E12E7((RuntimeObject*)(RuntimeObject*)L_7, /*hidden argument*/NULL);
		// break;
		goto IL_008d;
	}

IL_0059:
	{
		// prices[1].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = __this->get_prices_13();
		int32_t L_9 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// UndarkWeiner(HispWeiner);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_11 = __this->get_HispWeiner_5();
		Shop_UndarkWeiner_m97F465E20CDF7F1C533D1F6B550BF6B3CD3E12E7((RuntimeObject*)(RuntimeObject*)L_11, /*hidden argument*/NULL);
		// break;
		goto IL_008d;
	}

IL_0074:
	{
		// prices[2].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = __this->get_prices_13();
		int32_t L_13 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
		// UndarkWeiner(FancyWeiner);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_15 = __this->get_FancyWeiner_6();
		Shop_UndarkWeiner_m97F465E20CDF7F1C533D1F6B550BF6B3CD3E12E7((RuntimeObject*)(RuntimeObject*)L_15, /*hidden argument*/NULL);
	}

IL_008d:
	{
		// for (var i = 1; i < 4; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0091:
	{
		// for (var i = 1; i < 4; i++)
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) < ((int32_t)4)))
		{
			goto IL_0020;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Shop::OnClick(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_OnClick_mC6C5A6319252C78326EFDDC7BBD5A5A81CE7DDF1 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		// if (CheckBought(i) == false)
		int32_t L_0 = ___i0;
		bool L_1;
		L_1 = Shop_CheckBought_mD4B0F88EF00597B310D6D1395091345AA3201FD4(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// BuyWeiner(i);
		int32_t L_2 = ___i0;
		Shop_BuyWeiner_mAC54B786C31253B219809FD281E99B2DBB9565C4(__this, L_2, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// if (CheckBought(i))
		int32_t L_3 = ___i0;
		bool L_4;
		L_4 = Shop_CheckBought_mD4B0F88EF00597B310D6D1395091345AA3201FD4(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// ChooseWeiner(i);
		int32_t L_5 = ___i0;
		Shop_ChooseWeiner_mEDBAB018DE4520B679F487659514D9A6CCD06E0B(__this, L_5, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Shop::ChooseWeiner(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_ChooseWeiner_mEDBAB018DE4520B679F487659514D9A6CCD06E0B (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51EFF23BD552E151AAC34F0A27C9FD6B615AB07C);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___i0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_006b;
			}
			case 3:
			{
				goto IL_009c;
			}
		}
	}
	{
		return;
	}

IL_0017:
	{
		// ShowCustomization(redFoot, red, Color.white);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = __this->get_redFoot_11();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = __this->get_red_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_3;
		L_3 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Shop_ShowCustomization_mAB69E5500430951C071A7AC2E7840EFA9ED8EA45(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Weiner", i);
		int32_t L_4 = ___i0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral51EFF23BD552E151AAC34F0A27C9FD6B615AB07C, L_4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_003a:
	{
		// ShowCustomization(boot, white, Color.white);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = __this->get_boot_12();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = __this->get_white_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Shop_ShowCustomization_mAB69E5500430951C071A7AC2E7840EFA9ED8EA45(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Weiner", i);
		int32_t L_8 = ___i0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral51EFF23BD552E151AAC34F0A27C9FD6B615AB07C, L_8, /*hidden argument*/NULL);
		// Weiners[1].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = __this->get_Weiners_7();
		int32_t L_10 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_006b:
	{
		// ShowCustomization(redFoot, red, Color.white);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_12 = __this->get_redFoot_11();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_13 = __this->get_red_9();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_14;
		L_14 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		Shop_ShowCustomization_mAB69E5500430951C071A7AC2E7840EFA9ED8EA45(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Weiner", i);
		int32_t L_15 = ___i0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral51EFF23BD552E151AAC34F0A27C9FD6B615AB07C, L_15, /*hidden argument*/NULL);
		// Weiners[0].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_16 = __this->get_Weiners_7();
		int32_t L_17 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_009c:
	{
		// ShowCustomization(boot, white, greyColor);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_19 = __this->get_boot_12();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_20 = __this->get_white_10();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_21 = __this->get_greyColor_14();
		Shop_ShowCustomization_mAB69E5500430951C071A7AC2E7840EFA9ED8EA45(__this, L_19, L_20, L_21, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Weiner", i);
		int32_t L_22 = ___i0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral51EFF23BD552E151AAC34F0A27C9FD6B615AB07C, L_22, /*hidden argument*/NULL);
		// Weiners[2].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_23 = __this->get_Weiners_7();
		int32_t L_24 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Shop::CheckBought(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shop_CheckBought_mD4B0F88EF00597B310D6D1395091345AA3201FD4 (int32_t ___i0, const RuntimeMethod* method)
{
	{
		// return PlayerPrefs.GetInt(i.ToString(), 0) == 1; //1 is bought
		String_t* L_0;
		L_0 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___i0), /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(L_0, 0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
	}
}
// System.Void Shop::BuyWeiner(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_BuyWeiner_mAC54B786C31253B219809FD281E99B2DBB9565C4 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!CheckPickles(i)) return;
		int32_t L_0 = ___i0;
		bool L_1;
		L_1 = Shop_CheckPickles_mB5BBC04E014D3E8256DBBD07148D7BF2B2A20239(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (!CheckPickles(i)) return;
		return;
	}

IL_0009:
	{
		int32_t L_2 = ___i0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_008c;
			}
		}
	}
	{
		return;
	}

IL_001e:
	{
		// UpdatePicklesAmount(200);
		Shop_UpdatePicklesAmount_mEA212A3AF79226C3ABCEBD518774978947D1E632(__this, ((int32_t)200), /*hidden argument*/NULL);
		// ChooseWeiner(1);
		Shop_ChooseWeiner_mEDBAB018DE4520B679F487659514D9A6CCD06E0B(__this, 1, /*hidden argument*/NULL);
		// UndarkWeiner(SpaceWeiner);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_3 = __this->get_SpaceWeiner_4();
		Shop_UndarkWeiner_m97F465E20CDF7F1C533D1F6B550BF6B3CD3E12E7((RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("1", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3, 1, /*hidden argument*/NULL);
		// prices[0].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get_prices_13();
		int32_t L_5 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0055:
	{
		// UpdatePicklesAmount(300);
		Shop_UpdatePicklesAmount_mEA212A3AF79226C3ABCEBD518774978947D1E632(__this, ((int32_t)300), /*hidden argument*/NULL);
		// ChooseWeiner(2);
		Shop_ChooseWeiner_mEDBAB018DE4520B679F487659514D9A6CCD06E0B(__this, 2, /*hidden argument*/NULL);
		// UndarkWeiner(HispWeiner);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_7 = __this->get_HispWeiner_5();
		Shop_UndarkWeiner_m97F465E20CDF7F1C533D1F6B550BF6B3CD3E12E7((RuntimeObject*)(RuntimeObject*)L_7, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("2", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral21ED4C7AF50D987589A9029FC0422151BE3A0FC2, 1, /*hidden argument*/NULL);
		// prices[1].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = __this->get_prices_13();
		int32_t L_9 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_008c:
	{
		// UpdatePicklesAmount(450);
		Shop_UpdatePicklesAmount_mEA212A3AF79226C3ABCEBD518774978947D1E632(__this, ((int32_t)450), /*hidden argument*/NULL);
		// ChooseWeiner(3);
		Shop_ChooseWeiner_mEDBAB018DE4520B679F487659514D9A6CCD06E0B(__this, 3, /*hidden argument*/NULL);
		// UndarkWeiner(FancyWeiner);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_11 = __this->get_FancyWeiner_6();
		Shop_UndarkWeiner_m97F465E20CDF7F1C533D1F6B550BF6B3CD3E12E7((RuntimeObject*)(RuntimeObject*)L_11, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("3", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral2064F80F811DB79A33C4E51C10221454E30C74AE, 1, /*hidden argument*/NULL);
		// prices[2].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = __this->get_prices_13();
		int32_t L_13 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
		// break;
		return;
	}
}
// System.Void Shop::UndarkWeiner(System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_UndarkWeiner_m97F465E20CDF7F1C533D1F6B550BF6B3CD3E12E7 (RuntimeObject* ___w0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tDC9C34179CE64EEFCDEA207F75A9C887BE68F931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t105D975150D7B655C765ADAEA87B948AABDBCE7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var s in w)
		RuntimeObject* L_0 = ___w0;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image>::GetEnumerator() */, IEnumerable_1_tDC9C34179CE64EEFCDEA207F75A9C887BE68F931_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0019;
		}

IL_0009:
		{
			// foreach (var s in w)
			RuntimeObject* L_2 = V_0;
			Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3;
			L_3 = InterfaceFuncInvoker0< Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Image>::get_Current() */, IEnumerator_1_t105D975150D7B655C765ADAEA87B948AABDBCE7C_il2cpp_TypeInfo_var, L_2);
			// s.color = Color.white;
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
			L_4 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
			VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		}

IL_0019:
		{
			// foreach (var s in w)
			RuntimeObject* L_5 = V_0;
			bool L_6;
			L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			if (L_6)
			{
				goto IL_0009;
			}
		}

IL_0021:
		{
			IL2CPP_LEAVE(0x2D, FINALLY_0023);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0023;
	}

FINALLY_0023:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_7 = V_0;
			if (!L_7)
			{
				goto IL_002c;
			}
		}

IL_0026:
		{
			RuntimeObject* L_8 = V_0;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_002c:
		{
			IL2CPP_END_FINALLY(35)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(35)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void Shop::ShowCustomization(UnityEngine.Sprite,UnityEngine.Sprite,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_ShowCustomization_mAB69E5500430951C071A7AC2E7840EFA9ED8EA45 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___foot0, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___arm1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___col2, const RuntimeMethod* method)
{
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// Deactivate();
		Shop_Deactivate_m8BF17BB10AEAFED3FCD17ADA8DEE9CDB333CD5BF(__this, /*hidden argument*/NULL);
		// foreach (var t in WeinerParts)
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_0 = __this->get_WeinerParts_8();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0025;
	}

IL_0011:
	{
		// foreach (var t in WeinerParts)
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// t.sprite = arm;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = L_4;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = ___arm1;
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_5, L_6, /*hidden argument*/NULL);
		// t.color = col;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7 = ___col2;
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0025:
	{
		// foreach (var t in WeinerParts)
		int32_t L_9 = V_1;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_10 = V_0;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		// WeinerParts[8].sprite = foot;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_11 = __this->get_WeinerParts_8();
		int32_t L_12 = 8;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_14 = ___foot0;
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_13, L_14, /*hidden argument*/NULL);
		// WeinerParts[9].sprite = foot;
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_15 = __this->get_WeinerParts_8();
		int32_t L_16 = ((int32_t)9);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_18 = ___foot0;
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_17, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Shop::Deactivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Deactivate_m8BF17BB10AEAFED3FCD17ADA8DEE9CDB333CD5BF (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	{
		// Weiners[0].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_Weiners_7();
		int32_t L_1 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// Weiners[1].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_Weiners_7();
		int32_t L_4 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// Weiners[2].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_Weiners_7();
		int32_t L_7 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Shop::CheckPickles(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Shop_CheckPickles_mB5BBC04E014D3E8256DBBD07148D7BF2B2A20239 (int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF20A0891533742DFF5CE00A9BB969B01DD83F59F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var pickles = PlayerPrefs.GetInt("Pickles", 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralF20A0891533742DFF5CE00A9BB969B01DD83F59F, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = ___i0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003d;
	}

IL_0022:
	{
		// return pickles > 200;
		int32_t L_2 = V_0;
		return (bool)((((int32_t)L_2) > ((int32_t)((int32_t)200)))? 1 : 0);
	}

IL_002b:
	{
		// return pickles > 350;
		int32_t L_3 = V_0;
		return (bool)((((int32_t)L_3) > ((int32_t)((int32_t)350)))? 1 : 0);
	}

IL_0034:
	{
		// return pickles > 450;
		int32_t L_4 = V_0;
		return (bool)((((int32_t)L_4) > ((int32_t)((int32_t)450)))? 1 : 0);
	}

IL_003d:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Shop::UpdatePicklesAmount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_UpdatePicklesAmount_mEA212A3AF79226C3ABCEBD518774978947D1E632 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, int32_t ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF20A0891533742DFF5CE00A9BB969B01DD83F59F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var pickles = PlayerPrefs.GetInt("Pickles", 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralF20A0891533742DFF5CE00A9BB969B01DD83F59F, 0, /*hidden argument*/NULL);
		V_0 = L_0;
		// pickles -= p;
		int32_t L_1 = V_0;
		int32_t L_2 = ___p0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2));
		// PlayerPrefs.SetInt("Pickles", pickles);
		int32_t L_3 = V_0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralF20A0891533742DFF5CE00A9BB969B01DD83F59F, L_3, /*hidden argument*/NULL);
		// UpdatePicklesText();
		Shop_UpdatePicklesText_mCCFD414289DF07144CCC890FAC66BC71298A33CF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Shop::UpdatePicklesText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_UpdatePicklesText_mCCFD414289DF07144CCC890FAC66BC71298A33CF (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF20A0891533742DFF5CE00A9BB969B01DD83F59F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// PicklesText.text = PlayerPrefs.GetInt("Pickles", 0).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_PicklesText_15();
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralF20A0891533742DFF5CE00A9BB969B01DD83F59F, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void Shop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop__ctor_m9321F06993F85B2AE2C6F4E443276AC9D48E738C (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	{
		// private readonly Color greyColor = new Color32(70,70,70,255);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color32__ctor_m9D07EC69256BB7ED2784E543848DE7B8484A5C94((&L_0), (uint8_t)((int32_t)70), (uint8_t)((int32_t)70), (uint8_t)((int32_t)70), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_1;
		L_1 = Color32_op_Implicit_m63F14F1A14B1A9A3EE4D154413EE229D3E001623(L_0, /*hidden argument*/NULL);
		__this->set_greyColor_14(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Sound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sound__ctor_mEA0B0D2FBD514F91C21900B0BB8679CD78843FCD (Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void AudioManager/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m67B1BB5E29B49389EC0244292A697D9F0DA398C5 (U3CU3Ec__DisplayClass4_0_tA3BCDD4327DA28EB58F404C4F16EF439D2996561 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean AudioManager/<>c__DisplayClass4_0::<Play>b__0(Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass4_0_U3CPlayU3Eb__0_m3638A911493D9A1EDF26B6B317DFE476AE17D16E (U3CU3Ec__DisplayClass4_0_tA3BCDD4327DA28EB58F404C4F16EF439D2996561 * __this, Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * ___Sound0, const RuntimeMethod* method)
{
	{
		// Sound s = System.Array.Find(sounds, Sound => Sound.ClipName == name);
		Sound_tF983595F9C621A86B56E05F9778810369E90A0FE * L_0 = ___Sound0;
		String_t* L_1 = L_0->get_ClipName_0();
		String_t* L_2 = __this->get_name_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void DisplayLeaderboard/<RefreshHighscore>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshHighscoreU3Ed__5__ctor_m0676DD49B791B161CE8CD7123EEC8A9C246749E6 (U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DisplayLeaderboard/<RefreshHighscore>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshHighscoreU3Ed__5_System_IDisposable_Dispose_m08E8E380A0E2F6F4ED29D42B40BB6C96FAB25F73 (U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DisplayLeaderboard/<RefreshHighscore>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRefreshHighscoreU3Ed__5_MoveNext_m3CCB89DFEBD39482B58FAB4697891A59FF15C810 (U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// leaderboardManager.DownloadHighScores();
		DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * L_4 = V_1;
		Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * L_5 = L_4->get_leaderboardManager_6();
		Leaderboard_DownloadHighScores_m8DFD5EFA7FA2DD22827550173FC5A618F6EC1DA0(L_5, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(300);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (300.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0042:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_001e;
	}
}
// System.Object DisplayLeaderboard/<RefreshHighscore>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRefreshHighscoreU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD17A9DE602C34C9FC0461D15E80D8A294155761F (U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DisplayLeaderboard/<RefreshHighscore>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRefreshHighscoreU3Ed__5_System_Collections_IEnumerator_Reset_m381760D869745E94BC16E32C85999E55FF4685F6 (U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRefreshHighscoreU3Ed__5_System_Collections_IEnumerator_Reset_m381760D869745E94BC16E32C85999E55FF4685F6_RuntimeMethod_var)));
	}
}
// System.Object DisplayLeaderboard/<RefreshHighscore>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRefreshHighscoreU3Ed__5_System_Collections_IEnumerator_get_Current_mD553B0DA3439CBCA378861EDCA26606F7B0F14BE (U3CRefreshHighscoreU3Ed__5_t0CA594A647CB29EE789D4412C6EB2FAFECCF8F59 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Menu.Leaderboard/<DownloadHighScoresFromDatabase>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadHighScoresFromDatabaseU3Ed__10__ctor_m7C76657C840F2E799D713D2DFF181D9283C310F0 (U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Menu.Leaderboard/<DownloadHighScoresFromDatabase>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadHighScoresFromDatabaseU3Ed__10_System_IDisposable_Dispose_m8E5074273B885AB2DB4FCC5B1E7DEDE26A9A2712 (U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Menu.Leaderboard/<DownloadHighScoresFromDatabase>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDownloadHighScoresFromDatabaseU3Ed__10_MoveNext_m5057CDB91C899342FCF919A3936AD83138C60043 (U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral365061B975A0BA73BBE9F663933E71FD2438E18A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A586A30974E22E0CE7FC399239230150D30BC32);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var www = UnityWebRequest.Get(WEB_URL + PUBLIC_CODE + "/pipe/" + "9");
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_4;
		L_4 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(_stringLiteral365061B975A0BA73BBE9F663933E71FD2438E18A, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_3(L_4);
		// yield return www.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_5 = __this->get_U3CwwwU3E5__2_3();
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_6;
		L_6 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0048:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (www.result != UnityWebRequest.Result.Success)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = __this->get_U3CwwwU3E5__2_3();
		int32_t L_8;
		L_8 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0079;
		}
	}
	{
		// Debug.Log("Error uploading " + www.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = __this->get_U3CwwwU3E5__2_3();
		String_t* L_10;
		L_10 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_9, /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5A586A30974E22E0CE7FC399239230150D30BC32, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_11, /*hidden argument*/NULL);
		// }
		goto IL_00a0;
	}

IL_0079:
	{
		// FormatHighscores(www.downloadHandler.text);
		Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * L_12 = V_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_13 = __this->get_U3CwwwU3E5__2_3();
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_14;
		L_14 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_14, /*hidden argument*/NULL);
		Leaderboard_FormatHighscores_mD7748CEF8083222CF3DFCE935A76BE5A69C2903E(L_12, L_15, /*hidden argument*/NULL);
		// leaderboardDisplay.OnHighscoresDownloaded(highscoresList);
		Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * L_16 = V_1;
		DisplayLeaderboard_tD648BBE2048E90F39C11D4501C3D894F18F32B0D * L_17 = L_16->get_leaderboardDisplay_8();
		Leaderboard_tC248434C1D08ECFC5C102ACC279BC78BF0D7FF10 * L_18 = V_1;
		HighscoreU5BU5D_t9F98F23D9747759144A717A3784A5825C3DA1C45* L_19 = L_18->get_highscoresList_7();
		DisplayLeaderboard_OnHighscoresDownloaded_mC81C86649015127DF287C4BF46DE2378BBB4FCD6(L_17, L_19, /*hidden argument*/NULL);
	}

IL_00a0:
	{
		// }
		return (bool)0;
	}
}
// System.Object Menu.Leaderboard/<DownloadHighScoresFromDatabase>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDownloadHighScoresFromDatabaseU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6BC8EC1C66ACAF4622BBA568213ED03F1F6FB27A (U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Menu.Leaderboard/<DownloadHighScoresFromDatabase>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadHighScoresFromDatabaseU3Ed__10_System_Collections_IEnumerator_Reset_m552389298B6C7157EA8B96A7107A32F96D711271 (U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDownloadHighScoresFromDatabaseU3Ed__10_System_Collections_IEnumerator_Reset_m552389298B6C7157EA8B96A7107A32F96D711271_RuntimeMethod_var)));
	}
}
// System.Object Menu.Leaderboard/<DownloadHighScoresFromDatabase>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDownloadHighScoresFromDatabaseU3Ed__10_System_Collections_IEnumerator_get_Current_m8671AA5A4D02AC431E6ABA03839CB3112182611C (U3CDownloadHighScoresFromDatabaseU3Ed__10_t5CA31F574F664E9752CE484F1DD47DBFEC119B0C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Menu.Leaderboard/<UploadHighScore>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUploadHighScoreU3Ed__8__ctor_m25947CC798624944004E884329CE56D000AA208A (U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Menu.Leaderboard/<UploadHighScore>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUploadHighScoreU3Ed__8_System_IDisposable_Dispose_mA98E8527E4F0C599BFF67D722C00752786012110 (U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Menu.Leaderboard/<UploadHighScore>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUploadHighScoreU3Ed__8_MoveNext_mD79FA0264B418D3CE6D7813CA466021DA619DE55 (U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral071666327F92E3DF233681CE9178B3FA3FC28BC9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A586A30974E22E0CE7FC399239230150D30BC32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_005c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var www = UnityWebRequest.Get(WEB_URL + PRIVATE_CODE + "/add/" + username + "/" + score);
		String_t* L_3 = __this->get_username_2();
		int32_t* L_4 = __this->get_address_of_score_3();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral071666327F92E3DF233681CE9178B3FA3FC28BC9, L_3, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_5, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7;
		L_7 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_6, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_4(L_7);
		// yield return www.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = __this->get_U3CwwwU3E5__2_4();
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_9;
		L_9 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_8, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (www.result != UnityWebRequest.Result.Success)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10 = __this->get_U3CwwwU3E5__2_4();
		int32_t L_11;
		L_11 = UnityWebRequest_get_result_m4E9272AB25BD5CE7B927F4B1873763510476BDC6(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_008b;
		}
	}
	{
		// Debug.Log("Error uploading " + www.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_12 = __this->get_U3CwwwU3E5__2_4();
		String_t* L_13;
		L_13 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_12, /*hidden argument*/NULL);
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral5A586A30974E22E0CE7FC399239230150D30BC32, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_14, /*hidden argument*/NULL);
	}

IL_008b:
	{
		// }
		return (bool)0;
	}
}
// System.Object Menu.Leaderboard/<UploadHighScore>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUploadHighScoreU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB0396342F83863CA31D334EF0BB1D5BCDEDFEE52 (U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Menu.Leaderboard/<UploadHighScore>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUploadHighScoreU3Ed__8_System_Collections_IEnumerator_Reset_m8993F8C0D29AB8E8046C74170E654D3E72A07831 (U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUploadHighScoreU3Ed__8_System_Collections_IEnumerator_Reset_m8993F8C0D29AB8E8046C74170E654D3E72A07831_RuntimeMethod_var)));
	}
}
// System.Object Menu.Leaderboard/<UploadHighScore>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CUploadHighScoreU3Ed__8_System_Collections_IEnumerator_get_Current_mE19E1C7C57540AE274A65879E6190F58B03D1636 (U3CUploadHighScoreU3Ed__8_t5CF8CCF29F53032A61AF49D589B0FFD3AE8F89CF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// Conversion methods for marshalling of: Menu.Leaderboard/Highscore
IL2CPP_EXTERN_C void Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A_marshal_pinvoke(const Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A& unmarshaled, Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A_marshaled_pinvoke& marshaled)
{
	marshaled.___username_0 = il2cpp_codegen_marshal_string(unmarshaled.get_username_0());
	marshaled.___Score_1 = unmarshaled.get_Score_1();
}
IL2CPP_EXTERN_C void Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A_marshal_pinvoke_back(const Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A_marshaled_pinvoke& marshaled, Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A& unmarshaled)
{
	unmarshaled.set_username_0(il2cpp_codegen_marshal_string_result(marshaled.___username_0));
	int32_t unmarshaled_Score_temp_1 = 0;
	unmarshaled_Score_temp_1 = marshaled.___Score_1;
	unmarshaled.set_Score_1(unmarshaled_Score_temp_1);
}
// Conversion method for clean up from marshalling of: Menu.Leaderboard/Highscore
IL2CPP_EXTERN_C void Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A_marshal_pinvoke_cleanup(Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___username_0);
	marshaled.___username_0 = NULL;
}
// Conversion methods for marshalling of: Menu.Leaderboard/Highscore
IL2CPP_EXTERN_C void Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A_marshal_com(const Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A& unmarshaled, Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A_marshaled_com& marshaled)
{
	marshaled.___username_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_username_0());
	marshaled.___Score_1 = unmarshaled.get_Score_1();
}
IL2CPP_EXTERN_C void Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A_marshal_com_back(const Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A_marshaled_com& marshaled, Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A& unmarshaled)
{
	unmarshaled.set_username_0(il2cpp_codegen_marshal_bstring_result(marshaled.___username_0));
	int32_t unmarshaled_Score_temp_1 = 0;
	unmarshaled_Score_temp_1 = marshaled.___Score_1;
	unmarshaled.set_Score_1(unmarshaled_Score_temp_1);
}
// Conversion method for clean up from marshalling of: Menu.Leaderboard/Highscore
IL2CPP_EXTERN_C void Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A_marshal_com_cleanup(Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___username_0);
	marshaled.___username_0 = NULL;
}
// System.Void Menu.Leaderboard/Highscore::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Highscore__ctor_m34D148AFD18CA520AC2C07CA33DA3DF2D1AC9452 (Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A * __this, String_t* ___username0, int32_t ___score1, const RuntimeMethod* method)
{
	{
		// this.username = username;
		String_t* L_0 = ___username0;
		__this->set_username_0(L_0);
		// Score = score;
		int32_t L_1 = ___score1;
		__this->set_Score_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Highscore__ctor_m34D148AFD18CA520AC2C07CA33DA3DF2D1AC9452_AdjustorThunk (RuntimeObject * __this, String_t* ___username0, int32_t ___score1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A * _thisAdjusted = reinterpret_cast<Highscore_t675710B18C0D1A5766C2899F38CF8BCA2D40EE5A *>(__this + _offset);
	Highscore__ctor_m34D148AFD18CA520AC2C07CA33DA3DF2D1AC9452(_thisAdjusted, ___username0, ___score1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MenuController/<Check>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckU3Ed__9__ctor_m605CD9301399BFFF4109E3089EA4309CE026835F (U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void MenuController/<Check>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckU3Ed__9_System_IDisposable_Dispose_m94EF192402595189225A1438E6C3B9F32890B306 (U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean MenuController/<Check>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckU3Ed__9_MoveNext_m66A8EC6C7A5CD3A0D9D3BA195A73D87CB47691D3 (U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06ACA940C76E2255F9BDD1561F9C8C2D4C548127);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A281F9DBD5E103CE9E67E73392C2A3BA578F217);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE378D9AF0FD3CE0E891CD3E54C14A1324534134);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * V_1 = NULL;
	String_t* V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0054;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var user = PlayerPrefs.GetString("Username");
		String_t* L_4;
		L_4 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral4A281F9DBD5E103CE9E67E73392C2A3BA578F217, /*hidden argument*/NULL);
		V_2 = L_4;
		// UnityWebRequest uwr = UnityWebRequest.Get(WebUrl + PublicCode + "/pipe-get/" + user);
		String_t* L_5 = V_2;
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral06ACA940C76E2255F9BDD1561F9C8C2D4C548127, L_5, /*hidden argument*/NULL);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7;
		L_7 = UnityWebRequest_Get_m9C24DB3E8BED0B0886F28DCD982A4741A9903B1A(L_6, /*hidden argument*/NULL);
		__this->set_U3CuwrU3E5__2_3(L_7);
		// yield return uwr;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = __this->get_U3CuwrU3E5__2_3();
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0054:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (string.IsNullOrEmpty(uwr.error))
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = __this->get_U3CuwrU3E5__2_3();
		String_t* L_10;
		L_10 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_9, /*hidden argument*/NULL);
		bool L_11;
		L_11 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0085;
		}
	}
	{
		// CheckString(uwr.downloadHandler.text);
		MenuController_t588D7E4A49E600642B37B1A23E9A1C0DBDF0CEC4 * L_12 = V_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_13 = __this->get_U3CuwrU3E5__2_3();
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_14;
		L_14 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_13, /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_14, /*hidden argument*/NULL);
		MenuController_CheckString_m004222D8C8ADEC857140DFC7DCD07E8CF27CCD16(L_12, L_15, /*hidden argument*/NULL);
		// }
		goto IL_009f;
	}

IL_0085:
	{
		// print("Error Downloading " + uwr.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_16 = __this->get_U3CuwrU3E5__2_3();
		String_t* L_17;
		L_17 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_16, /*hidden argument*/NULL);
		String_t* L_18;
		L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFE378D9AF0FD3CE0E891CD3E54C14A1324534134, L_17, /*hidden argument*/NULL);
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_18, /*hidden argument*/NULL);
	}

IL_009f:
	{
		// }
		return (bool)0;
	}
}
// System.Object MenuController/<Check>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0CC991421070A8DA9AAD7A6053E0838AC2A85C03 (U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void MenuController/<Check>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckU3Ed__9_System_Collections_IEnumerator_Reset_mAFB4E6F753083522F69C029862F100C3240E27FC (U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckU3Ed__9_System_Collections_IEnumerator_Reset_mAFB4E6F753083522F69C029862F100C3240E27FC_RuntimeMethod_var)));
	}
}
// System.Object MenuController/<Check>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCheckU3Ed__9_System_Collections_IEnumerator_get_Current_mBE6E0A5DAD9BCEC0C1909F99611F32AF0E0AD3D6 (U3CCheckU3Ed__9_t35DB356AA7A3E31AE9984A09E06E23F796139D39 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void ObjectPooler/Pool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pool__ctor_mD52EA81158BAF333C5BFD4E0BBD117FBB2301212 (Pool_tE3DB84AD8337641E2A0B7037BCD1CCFDCE269907 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Game.PowerUp/<Plus20>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlus20U3Ed__8__ctor_m7A41AE74507471B2DFAB5B5EFF8589FF17F567D7 (U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Game.PowerUp/<Plus20>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlus20U3Ed__8_System_IDisposable_Dispose_m164631CDC68F68D78EA2CB20741B61E3329F032C (U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Game.PowerUp/<Plus20>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlus20U3Ed__8_MoveNext_mC1C26CCD61AF55C6C08B5CCFB57C1034DE0EB1B8 (U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// plus20.SetActive(true);
		PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * L_4 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_plus20_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0043:
	{
		__this->set_U3CU3E1__state_0((-1));
		// plus20.SetActive(false);
		PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * L_7 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_plus20_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Game.PowerUp/<Plus20>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPlus20U3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m201E3A029495AD1F04D1CB08556D006CA903604C (U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Game.PowerUp/<Plus20>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlus20U3Ed__8_System_Collections_IEnumerator_Reset_mB1556DAA886226E8317544FD52135C1B745155C2 (U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlus20U3Ed__8_System_Collections_IEnumerator_Reset_mB1556DAA886226E8317544FD52135C1B745155C2_RuntimeMethod_var)));
	}
}
// System.Object Game.PowerUp/<Plus20>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPlus20U3Ed__8_System_Collections_IEnumerator_get_Current_m02171DCE476D2B99F10A9EF30B6BCA73D634BC90 (U3CPlus20U3Ed__8_tF733D290F65678DF8E0E22F7B6B55C2E70AA456C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Game.PowerUp/<SpeedMarks>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedMarksU3Ed__10__ctor_m279F26FE9E1EFAD7123255CD3DD186C22CBB2901 (U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Game.PowerUp/<SpeedMarks>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedMarksU3Ed__10_System_IDisposable_Dispose_m0411562471804FEEF4F133E44B2358A84F725FDB (U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Game.PowerUp/<SpeedMarks>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpeedMarksU3Ed__10_MoveNext_m11F9790E7BA0197F8DF7EA1B064CF6846B169214 (U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_004e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// marks.SetActive(true);
		PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * L_4 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_4->get_marks_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// Player.moveSpeed = FastSpeed;
		PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * L_6 = V_1;
		float L_7 = L_6->get_FastSpeed_5();
		((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->set_moveSpeed_5(L_7);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_8 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_8, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004e:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Player.moveSpeed = 11;
		((Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_StaticFields*)il2cpp_codegen_static_fields_for(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F_il2cpp_TypeInfo_var))->set_moveSpeed_5((11.0f));
		// marks.SetActive(false);
		PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * L_9 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = L_9->get_marks_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Game.PowerUp/<SpeedMarks>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpeedMarksU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4ADFF1B2DE4FA903D6CC00F2D72E855CE7ACA918 (U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Game.PowerUp/<SpeedMarks>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpeedMarksU3Ed__10_System_Collections_IEnumerator_Reset_mB0258C4AD2CFE5BD2CC92673C824C9C5F62ED863 (U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpeedMarksU3Ed__10_System_Collections_IEnumerator_Reset_mB0258C4AD2CFE5BD2CC92673C824C9C5F62ED863_RuntimeMethod_var)));
	}
}
// System.Object Game.PowerUp/<SpeedMarks>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpeedMarksU3Ed__10_System_Collections_IEnumerator_get_Current_m35F4D56252CA6C7D8DAFC4D2A0832C1425B1F1DC (U3CSpeedMarksU3Ed__10_t659013253F377BE18D477C2D2636D5217FB76D22 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PowerUp_SetObjects_mF70255F23F2910C402117F4372347E0D7FABA167_inline (PowerUp_t4954911DFCDD8E147BDA910758DAE99D865DEA9F * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m0, const RuntimeMethod* method)
{
	{
		// marks = m;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___m0;
		__this->set_marks_6(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
