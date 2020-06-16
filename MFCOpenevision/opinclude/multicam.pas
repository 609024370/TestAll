// MULTICAM.PAS -- MULTICAM DRIVER API


unit MultiCam;


interface


{$INCLUDE McParams.pas}
{$INCLUDE McDef.pas}
{$INCLUDE McIo.pas}


// DATA TYPES
type
  UINT32 = LongInt;
type
  PUINT32 = ^UINT32;
type
  INT32 = LongInt;
type
  PINT32 = ^INT32;
type
  FLOAT64 = Double;
type
  PFLOAT64 = ^FLOAT64;
type
  PVOID = Pointer;

type
  MCSTATUS = LongInt;
type
  MCHANDLE = LongInt;
type
  PMCHANDLE = ^MCHANDLE;
type
  MCPARAMID = LongInt;
type
  PMCPARAMID = ^MCPARAMID;
type
  MCSIGNAL = Integer;


// CALLBACK FUNCTION
type
  _MC_CALLBACK_INFO = record
    Context: PVOID;
    Instance: MCHANDLE;
    Signal: MCSIGNAL;
    SignalInfo: UINT32;
    Reserved: UINT32;
  end {_MC_CALLBACK_INFO};
  MCCALLBACKINFO = _MC_CALLBACK_INFO;
  PMCCALLBACKINFO = ^_MC_CALLBACK_INFO;
  MCSIGNALINFO = _MC_CALLBACK_INFO;
  PMCSIGNALINFO = ^_MC_CALLBACK_INFO;
type
  PMCCALLBACK = procedure(CbInfo: PMCSIGNALINFO); stdcall;
type
  PMCCALLBACKEX = procedure(Context: PVOID); stdcall;

// OBJECT CLASSES
const
  MC_GRABBER_CLASS =		$6;
const
  MC_SURFACE_CLASS =		$4;
const
  MC_CHANNEL_CLASS =		$8;
const
  MC_VIEWER_CLASS =             $A;
const
  MC_CONFIG_CLASS =             $2;
const
  MC_PROCESSOR_CLASS =		$C;
const
  MC_BOARD_CLASS =              $E;

// DEFAULT INSTANCE TEMPLATES
const
  MC_DEFAULT_GRABBER_HANDLE =		$6FFFFFFF;
const
  MC_DEFAULT_SURFACE_HANDLE =		$4FFFFFFF;
const
  MC_DEFAULT_CHANNEL_HANDLE =		$8FFFFFFF;
const
  MC_DEFAULT_VIEWER_HANDLE =		$AFFFFFFF;
const
  MC_DEFAULT_PROCESSOR_HANDLE =		$CFFFFFFF;
const
  MC_PROCESSOR_MULTI_HANDLE =		$CFFFFFFF;
const
  MC_PROCESSOR_PRESTISSIMO_HANDLE =	$CFFEFFFF;
const
  MC_CONFIGURATION =                    $20000000;
const
  MC_BOARD =                            $E0000000;

// CHANNEL CREATION MODELS
const
  MC_CHANNEL =                          $8000FFFF;
const
  MC_CHANNEL_GAMMA_X =			$8001FFFF;
const
  MC_CHANNEL_GAMMA_Y =			$8002FFFF;
const
  MC_CHANNEL_GAMMA_Z =			$8003FFFF;
const
  MC_CHANNEL_GAMMA_XBIS =		$8004FFFF;
const
  MC_CHANNEL_GAMMA_YBIS =		$8005FFFF;
const
  MC_CHANNEL_GAMMA_ZBIS =		$8006FFFF;
const
  MC_CHANNEL_ALPHA_X =			$8007FFFF;
const
  MC_CHANNEL_ALPHA_Y =			$8008FFFF;
const
  MC_CHANNEL_ALPHA_XBIS =		$8015FFFF;
const
  MC_CHANNEL_ALPHA_YBIS =		$8016FFFF;
const
  MC_CHANNEL_ALPHA_STEREOXY =	        $801CFFFF;
const
  MC_CHANNEL_VALUE_M =			$8009FFFF;
const
  MC_CHANNEL_EXPERT_M =			$800AFFFF;
const
  MC_CHANNEL_EXPERT_A =			$800BFFFF;
const
  MC_CHANNEL_EXPERT_B =			$800CFFFF;
const
  MC_CHANNEL_ALPHA_CPCI_CAM0 =  	$800DFFFF;
const
  MC_CHANNEL_ALPHA_CPCI_CAM1 =	        $800EFFFF;
const
  MC_CHANNEL_ALPHA_CPCI_CAM2 =	        $800FFFFF;
const
  MC_CHANNEL_ALPHA_CPCI_CAM3 =	        $8010FFFF;
const
  MC_CHANNEL_IOTA_X =			$8017FFFF;
const
  MC_CHANNEL_COLORSCAN =		$801DFFFF;


// DEFAULT PROCESSOR FUNCTION
const
  MC_ProcessType_BYPASS = 0;


// FUNCTIONS

// Driver connections

function McOpenDriver(const InstanceName: PChar): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McCloseDriver: MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

// Object creation / deletion

function McCreate(ModelInstance: MCHANDLE; 
                  Instance: PMCHANDLE): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McCreateNm(const ModelInstanceName: PChar; 
                    Instance: PMCHANDLE): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McDelete(Instance: MCHANDLE): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

// Acquisition control

function McStartAcq: MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McStopAcq: MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

// Parameter handling

function McSetParamInt(Instance: MCHANDLE; 
                       Param: MCPARAMID; 
                       ValueInt: INT32): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McSetParamNmInt(Instance: MCHANDLE; 
                         const ParamName: PChar; 
                         ValueInt: INT32): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McSetParamStr(Instance: MCHANDLE; 
                       Param: MCPARAMID; 
                       const ValueStr: PChar): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McSetParamNmStr(Instance: MCHANDLE; 
                         const ParamName: PChar; 
                         const ValueStr: PChar): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McSetParamFloat(Instance: MCHANDLE; 
                         Param: MCPARAMID; 
                         ValueFloat: FLOAT64): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McSetParamNmFloat(Instance: MCHANDLE; 
                           const ParamName: PChar; 
                           ValueFloat: FLOAT64): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McSetParamInst(Instance: MCHANDLE; 
                        Param: MCPARAMID; 
                        ValueInst: MCHANDLE): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McSetParamNmInst(Instance: MCHANDLE; 
                          const ParamName: PChar; 
                          ValueInst: MCHANDLE): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 


function McGetParamInt(Instance: MCHANDLE; 
                       Param: MCPARAMID; 
                       ValueInt: PINT32): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF};

function McGetParamNmInt(Instance: MCHANDLE; 
                         const ParamName: PChar; 
                         ValueInt: PINT32): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McGetParamStr(Instance: MCHANDLE; 
                       Param: MCPARAMID; 
                       ValueStr: PChar; 
                       MaxLength: UINT32): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McGetParamNmStr(Instance: MCHANDLE; 
                         const ParamName: PChar; 
                         ValueStr: PChar; 
                         MaxLength: UINT32): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McGetParamFloat(Instance: MCHANDLE; 
                         Param: MCPARAMID; 
                         ValueFloat: PFLOAT64): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McGetParamNmFloat(Instance: MCHANDLE; 
                           const ParamName: PChar; 
                           ValueFloat: PFLOAT64): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McGetParamInst(Instance: MCHANDLE; 
                        Param: MCPARAMID; 
                        ValueInst: PMCHANDLE): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McGetParamNmInst(Instance: MCHANDLE; 
                          const ParamName: PChar; 
                          ValueInst: PMCHANDLE): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

// Callback registration for an object

function McRegisterCallback(Instance: MCHANDLE; 
                            CallBackFunction: PMCCALLBACK; 
                            Context: Pointer): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

// Event Management

function McWaitSignal(Instance: MCHANDLE; 
                      Signal: MCSIGNAL; 
                      Timeout: UINT32; 
                      Info: PMCSIGNALINFO): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 

function McGetSignalInfo(Instance: MCHANDLE; 
                         Signal: MCSIGNAL; 
                         Info: PMCSIGNALINFO): MCSTATUS cdecl  {$IFDEF WIN32} stdcall {$ENDIF}; 


implementation

function McOpenDriver; external 'MULTICAM.DLL' name '_McOpenDriver@4';
function McCloseDriver; external 'MULTICAM.DLL' name '_McCloseDriver@0';
function McCreate; external 'MULTICAM.DLL' name '_McCreate@8';
function McCreateNm; external 'MULTICAM.DLL' name '_McCreateNm@8';
function McDelete; external 'MULTICAM.DLL' name '_McDelete@4';
function McStartAcq; external 'MULTICAM.DLL' name '_McStartAcq@0';
function McStopAcq; external 'MULTICAM.DLL' name '_McStopAcq@0';
function McSetParamInt; external 'MULTICAM.DLL' name '_McSetParamInt@12';
function McSetParamNmInt; external 'MULTICAM.DLL' name '_McSetParamNmInt@12';
function McSetParamStr; external 'MULTICAM.DLL' name '_McSetParamStr@12';
function McSetParamNmStr; external 'MULTICAM.DLL' name '_McSetParamNmStr@12';
function McSetParamFloat; external 'MULTICAM.DLL' name '_McSetParamFloat@16';
function McSetParamNmFloat; external 'MULTICAM.DLL' name '_McSetParamNmFloat@16';
function McSetParamInst; external 'MULTICAM.DLL' name '_McSetParamInst@12';
function McSetParamNmInst; external 'MULTICAM.DLL' name '_McSetParamNmInst@12';
function McGetParamInt; external 'MULTICAM.DLL' name '_McGetParamInt@12';
function McGetParamNmInt; external 'MULTICAM.DLL' name '_McGetParamNmInt@12';
function McGetParamStr; external 'MULTICAM.DLL' name '_McGetParamStr@16';
function McGetParamNmStr; external 'MULTICAM.DLL' name '_McGetParamNmStr@16';
function McGetParamFloat; external 'MULTICAM.DLL' name '_McGetParamFloat@12';
function McGetParamNmFloat; external 'MULTICAM.DLL' name '_McGetParamNmFloat@12';
function McGetParamInst; external 'MULTICAM.DLL' name '_McGetParamInst@12';
function McGetParamNmInst; external 'MULTICAM.DLL' name '_McGetParamNmInst@12';
function McRegisterCallback; external 'MULTICAM.DLL' name '_McRegisterCallback@12';
function McWaitSignal; external 'MULTICAM.DLL' name '_McWaitSignal@16';
function McGetSignalInfo; external 'MULTICAM.DLL' name '_McGetSignalInfo@12';


end.
