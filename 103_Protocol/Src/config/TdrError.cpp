/* This file is generated by tdr. */
/* No manual modification is permitted. */

/* creation time: Tue Feb 10 17:59:35 2015 */
/* tdr version: 2.4.21914, build at 20110728 */

#include "TdrError.h"

namespace tsf4g_tdr
{


const char* TdrError::getErrorString(ErrorType errorCode)
{
    static const char* errorTab[] =
    {
        /* 0*/"no error",
        /* 1*/"available free space in buffer is not enough",
        /* 2*/"available data in buffer is not enough",
        /* 3*/"string length surpass defined size",
        /* 4*/"string length smaller than min string length",
        /* 5*/"string sizeinfo inconsistent with real length",
        /* 6*/"reffer value can not be minus",
        /* 7*/"reffer value bigger than count or size",
        /* 8*/"pointer-type argument is NULL",
        /* 9*/"cut-version is smaller than base-version",
        /*10*/"cut-version not covers entry refered by versionindicator",
        /*11*/"inet_ntoa failed when parse tdr_ip_t",
        /*12*/"value variable of tdr_ip_t is invalid",
        /*13*/"value variable of tdr_time_t is invalid",
        /*14*/"value variable of tdr_date_t is invalid",
        /*15*/"value variable of tdr_datetime_t is invalid",
        /*16*/"function 'localtime' or 'localtime_r' failed",
        /*17*/"invalid hex-string length, must be an even number",
        /*18*/"invalid hex-string format, each character must be a hex-digit",
        /*19*/"NULL pointer as parameter",
        /*20*/"cutVer from net-msg not in [BASEVERSION, CURRVERSION]",
    };

    int errorIndex = -1 * (int)errorCode;
    if (0 > errorIndex || errorIndex >= (int)(sizeof(errorTab)/sizeof(errorTab[0])))
    {
        return errorTab[0];
    } else
    {
        return errorTab[errorIndex];
    }
}

}