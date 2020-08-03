/** @file
 *  @brief MAVLink comm protocol generated from ina219.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_INA219_H
#define MAVLINK_INA219_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_INA219.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{6000, 242, 32, 32, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_INA219

// ENUM DEFINITIONS


/** @brief Type of ina219 msgs */
#ifndef HAVE_ENUM_INA219_TYPE
#define HAVE_ENUM_INA219_TYPE
typedef enum INA219_TYPE
{
   TIMESTAMP=0, /* Time since system start | */
   voltage_left=1, /* Voltage in volts, 0 if unknown | */
   current_left=2, /* Current in amperes, -1 if unknown | */
   power_left=3, /* power in watts, -1 if unknown | */
   voltage_right=4, /* Voltage in volts, 0 if unknown | */
   current_right=5, /* Current in amperes, -1 if unknown | */
   power_right=6, /* power in watts, -1 if unknown | */
   INA219_TYPE_ENUM_END=7, /*  | */
} INA219_TYPE;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_ina219.h"

// base include


#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_ina219}
# define MAVLINK_MESSAGE_NAMES {{ "ina219", 6000 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_INA219_H
