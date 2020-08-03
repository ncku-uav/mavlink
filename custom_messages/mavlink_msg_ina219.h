#pragma once
// MESSAGE ina219 PACKING

#define MAVLINK_MSG_ID_ina219 6000

MAVPACKED(
typedef struct __mavlink_ina219_t {
 uint64_t timestamp; /*<  Time since system start*/
 float voltageLeft; /*< [volts] Voltage in volts*/
 float currentLeft; /*< [amperes] Current in amperes*/
 float powerLeft; /*< [watts] Power in watts*/
 float voltageRight; /*< [volts] Voltage in volts*/
 float currentRight; /*< [amperes] Current in amperes*/
 float powerRight; /*< [watts] Power in watts*/
}) mavlink_ina219_t;

#define MAVLINK_MSG_ID_ina219_LEN 32
#define MAVLINK_MSG_ID_ina219_MIN_LEN 32
#define MAVLINK_MSG_ID_6000_LEN 32
#define MAVLINK_MSG_ID_6000_MIN_LEN 32

#define MAVLINK_MSG_ID_ina219_CRC 242
#define MAVLINK_MSG_ID_6000_CRC 242



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ina219 { \
    6000, \
    "ina219", \
    7, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_ina219_t, timestamp) }, \
         { "voltageLeft", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ina219_t, voltageLeft) }, \
         { "currentLeft", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ina219_t, currentLeft) }, \
         { "powerLeft", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ina219_t, powerLeft) }, \
         { "voltageRight", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ina219_t, voltageRight) }, \
         { "currentRight", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ina219_t, currentRight) }, \
         { "powerRight", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_ina219_t, powerRight) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ina219 { \
    "ina219", \
    7, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_ina219_t, timestamp) }, \
         { "voltageLeft", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ina219_t, voltageLeft) }, \
         { "currentLeft", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ina219_t, currentLeft) }, \
         { "powerLeft", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ina219_t, powerLeft) }, \
         { "voltageRight", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ina219_t, voltageRight) }, \
         { "currentRight", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ina219_t, currentRight) }, \
         { "powerRight", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_ina219_t, powerRight) }, \
         } \
}
#endif

/**
 * @brief Pack a ina219 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp  Time since system start
 * @param voltageLeft [volts] Voltage in volts
 * @param currentLeft [amperes] Current in amperes
 * @param powerLeft [watts] Power in watts
 * @param voltageRight [volts] Voltage in volts
 * @param currentRight [amperes] Current in amperes
 * @param powerRight [watts] Power in watts
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ina219_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, float voltageLeft, float currentLeft, float powerLeft, float voltageRight, float currentRight, float powerRight)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ina219_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, voltageLeft);
    _mav_put_float(buf, 12, currentLeft);
    _mav_put_float(buf, 16, powerLeft);
    _mav_put_float(buf, 20, voltageRight);
    _mav_put_float(buf, 24, currentRight);
    _mav_put_float(buf, 28, powerRight);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ina219_LEN);
#else
    mavlink_ina219_t packet;
    packet.timestamp = timestamp;
    packet.voltageLeft = voltageLeft;
    packet.currentLeft = currentLeft;
    packet.powerLeft = powerLeft;
    packet.voltageRight = voltageRight;
    packet.currentRight = currentRight;
    packet.powerRight = powerRight;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ina219_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ina219;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ina219_MIN_LEN, MAVLINK_MSG_ID_ina219_LEN, MAVLINK_MSG_ID_ina219_CRC);
}

/**
 * @brief Pack a ina219 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp  Time since system start
 * @param voltageLeft [volts] Voltage in volts
 * @param currentLeft [amperes] Current in amperes
 * @param powerLeft [watts] Power in watts
 * @param voltageRight [volts] Voltage in volts
 * @param currentRight [amperes] Current in amperes
 * @param powerRight [watts] Power in watts
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ina219_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,float voltageLeft,float currentLeft,float powerLeft,float voltageRight,float currentRight,float powerRight)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ina219_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, voltageLeft);
    _mav_put_float(buf, 12, currentLeft);
    _mav_put_float(buf, 16, powerLeft);
    _mav_put_float(buf, 20, voltageRight);
    _mav_put_float(buf, 24, currentRight);
    _mav_put_float(buf, 28, powerRight);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ina219_LEN);
#else
    mavlink_ina219_t packet;
    packet.timestamp = timestamp;
    packet.voltageLeft = voltageLeft;
    packet.currentLeft = currentLeft;
    packet.powerLeft = powerLeft;
    packet.voltageRight = voltageRight;
    packet.currentRight = currentRight;
    packet.powerRight = powerRight;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ina219_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ina219;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ina219_MIN_LEN, MAVLINK_MSG_ID_ina219_LEN, MAVLINK_MSG_ID_ina219_CRC);
}

/**
 * @brief Encode a ina219 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ina219 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ina219_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ina219_t* ina219)
{
    return mavlink_msg_ina219_pack(system_id, component_id, msg, ina219->timestamp, ina219->voltageLeft, ina219->currentLeft, ina219->powerLeft, ina219->voltageRight, ina219->currentRight, ina219->powerRight);
}

/**
 * @brief Encode a ina219 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ina219 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ina219_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ina219_t* ina219)
{
    return mavlink_msg_ina219_pack_chan(system_id, component_id, chan, msg, ina219->timestamp, ina219->voltageLeft, ina219->currentLeft, ina219->powerLeft, ina219->voltageRight, ina219->currentRight, ina219->powerRight);
}

/**
 * @brief Send a ina219 message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp  Time since system start
 * @param voltageLeft [volts] Voltage in volts
 * @param currentLeft [amperes] Current in amperes
 * @param powerLeft [watts] Power in watts
 * @param voltageRight [volts] Voltage in volts
 * @param currentRight [amperes] Current in amperes
 * @param powerRight [watts] Power in watts
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ina219_send(mavlink_channel_t chan, uint64_t timestamp, float voltageLeft, float currentLeft, float powerLeft, float voltageRight, float currentRight, float powerRight)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ina219_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, voltageLeft);
    _mav_put_float(buf, 12, currentLeft);
    _mav_put_float(buf, 16, powerLeft);
    _mav_put_float(buf, 20, voltageRight);
    _mav_put_float(buf, 24, currentRight);
    _mav_put_float(buf, 28, powerRight);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ina219, buf, MAVLINK_MSG_ID_ina219_MIN_LEN, MAVLINK_MSG_ID_ina219_LEN, MAVLINK_MSG_ID_ina219_CRC);
#else
    mavlink_ina219_t packet;
    packet.timestamp = timestamp;
    packet.voltageLeft = voltageLeft;
    packet.currentLeft = currentLeft;
    packet.powerLeft = powerLeft;
    packet.voltageRight = voltageRight;
    packet.currentRight = currentRight;
    packet.powerRight = powerRight;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ina219, (const char *)&packet, MAVLINK_MSG_ID_ina219_MIN_LEN, MAVLINK_MSG_ID_ina219_LEN, MAVLINK_MSG_ID_ina219_CRC);
#endif
}

/**
 * @brief Send a ina219 message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ina219_send_struct(mavlink_channel_t chan, const mavlink_ina219_t* ina219)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ina219_send(chan, ina219->timestamp, ina219->voltageLeft, ina219->currentLeft, ina219->powerLeft, ina219->voltageRight, ina219->currentRight, ina219->powerRight);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ina219, (const char *)ina219, MAVLINK_MSG_ID_ina219_MIN_LEN, MAVLINK_MSG_ID_ina219_LEN, MAVLINK_MSG_ID_ina219_CRC);
#endif
}

#if MAVLINK_MSG_ID_ina219_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ina219_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, float voltageLeft, float currentLeft, float powerLeft, float voltageRight, float currentRight, float powerRight)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, voltageLeft);
    _mav_put_float(buf, 12, currentLeft);
    _mav_put_float(buf, 16, powerLeft);
    _mav_put_float(buf, 20, voltageRight);
    _mav_put_float(buf, 24, currentRight);
    _mav_put_float(buf, 28, powerRight);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ina219, buf, MAVLINK_MSG_ID_ina219_MIN_LEN, MAVLINK_MSG_ID_ina219_LEN, MAVLINK_MSG_ID_ina219_CRC);
#else
    mavlink_ina219_t *packet = (mavlink_ina219_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->voltageLeft = voltageLeft;
    packet->currentLeft = currentLeft;
    packet->powerLeft = powerLeft;
    packet->voltageRight = voltageRight;
    packet->currentRight = currentRight;
    packet->powerRight = powerRight;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ina219, (const char *)packet, MAVLINK_MSG_ID_ina219_MIN_LEN, MAVLINK_MSG_ID_ina219_LEN, MAVLINK_MSG_ID_ina219_CRC);
#endif
}
#endif

#endif

// MESSAGE ina219 UNPACKING


/**
 * @brief Get field timestamp from ina219 message
 *
 * @return  Time since system start
 */
static inline uint64_t mavlink_msg_ina219_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field voltageLeft from ina219 message
 *
 * @return [volts] Voltage in volts
 */
static inline float mavlink_msg_ina219_get_voltageLeft(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field currentLeft from ina219 message
 *
 * @return [amperes] Current in amperes
 */
static inline float mavlink_msg_ina219_get_currentLeft(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field powerLeft from ina219 message
 *
 * @return [watts] Power in watts
 */
static inline float mavlink_msg_ina219_get_powerLeft(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field voltageRight from ina219 message
 *
 * @return [volts] Voltage in volts
 */
static inline float mavlink_msg_ina219_get_voltageRight(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field currentRight from ina219 message
 *
 * @return [amperes] Current in amperes
 */
static inline float mavlink_msg_ina219_get_currentRight(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field powerRight from ina219 message
 *
 * @return [watts] Power in watts
 */
static inline float mavlink_msg_ina219_get_powerRight(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Decode a ina219 message into a struct
 *
 * @param msg The message to decode
 * @param ina219 C-struct to decode the message contents into
 */
static inline void mavlink_msg_ina219_decode(const mavlink_message_t* msg, mavlink_ina219_t* ina219)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ina219->timestamp = mavlink_msg_ina219_get_timestamp(msg);
    ina219->voltageLeft = mavlink_msg_ina219_get_voltageLeft(msg);
    ina219->currentLeft = mavlink_msg_ina219_get_currentLeft(msg);
    ina219->powerLeft = mavlink_msg_ina219_get_powerLeft(msg);
    ina219->voltageRight = mavlink_msg_ina219_get_voltageRight(msg);
    ina219->currentRight = mavlink_msg_ina219_get_currentRight(msg);
    ina219->powerRight = mavlink_msg_ina219_get_powerRight(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ina219_LEN? msg->len : MAVLINK_MSG_ID_ina219_LEN;
        memset(ina219, 0, MAVLINK_MSG_ID_ina219_LEN);
    memcpy(ina219, _MAV_PAYLOAD(msg), len);
#endif
}
