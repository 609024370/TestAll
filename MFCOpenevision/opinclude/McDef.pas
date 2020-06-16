// MCDEF.PAS -- MULTICAM DEFINITIONS


// CALLBACK REASONS
const
  MC_MAX_EVENTS =                       12;
const
  MC_SIG_SURFACE_PROCESSING =           1;
const
  MC_SIG_SURFACE_FILLED =               2;
const
  MC_SIG_UNRECOVERABLE_OVERRUN =        3;
const
  MC_SIG_FRAMETRIGGER_VIOLATION =       4;
const
  MC_SIG_START_EXPOSURE =               5;
const
  MC_SIG_END_EXPOSURE =                 6;
const
  MC_SIG_ACQUISITION_FAILURE =          7;
const
  MC_SIG_CLUSTER_UNAVAILABLE =          8;
const
  MC_SIG_RELEASE =						9;
const
  MC_SIG_END_ACQUISITION_SEQUENCE =		10;
const
  MC_SIG_START_ACQUISITION_SEQUENCE =	11;
const
  MC_SIG_END_CHANNEL_ACTIVITY =			12;



// STATUS CODE
const
  MC_MAX_ERRORS_STD =		23;
const
  MC_OK =                       0;
const
  MC_NO_BOARD_FOUND =		-1;
const
  MC_BAD_PARAMETER =		-2;
const
  MC_IO_ERROR =	                -3;
const
  MC_INTERNAL_ERROR =		-4;
const
  MC_NO_MORE_RESOURCES =	-5;
const
  MC_IN_USE =	                -6;
const
  MC_NOT_SUPPORTED =		-7;
const
  MC_DATABASE_ERROR =		-8;
const
  MC_OUT_OF_BOUND =             -9;
const
  MC_INSTANCE_NOT_FOUND =	-10;
const
  MC_INVALID_HANDLE =		-11;
const
  MC_TIMEOUT =	                -12;
const
  MC_INVALID_VALUE =		-13;
const
  MC_RANGE_ERROR =              -14;
const
  MC_BAD_HW_CONFIG =		-15;
const
  MC_NO_EVENT =	                -16;
const
  MC_LICENSE_NOT_GRANTED =	-17;
const
  MC_FATAL_ERROR =              -18;
const
  MC_HW_EVENT_CONFLICT =	-19;
const
  MC_FILE_NOT_FOUND =		-20;
const
  MC_OVERFLOW =				-21;
const
  MC_INVALID_PARAMETER_SETTING =	-22;

const
  MC_MAX_ERRORS_MPF				=	3;
const
  MC_MPF_ERROR_BASE				=	-100;
const
  MC_BAD_GRABBER_CONFIG			=	-101;
const
  MC_ILLEGAL_PAGELENGTH_VALUE	=	-102;



// MULTICAM CONSTANTS
const
  MC_INFINITE =	-1;
const
  MC_INDETERMINATE =	-1;
const
  MC_LOW_PART =	0;
const
  MC_HIGH_PART =	1;
const
  MC_DISABLE =	0;
