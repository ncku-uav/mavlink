/** @file
 *    @brief MAVLink comm protocol testsuite generated from ina219.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef INA219_TESTSUITE_H
#define INA219_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_ina219(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_ina219(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_ina219(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_ina219 >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ina219_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0
    };
    mavlink_ina219_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.timestamp = packet_in.timestamp;
        packet1.voltageLeft = packet_in.voltageLeft;
        packet1.currentLeft = packet_in.currentLeft;
        packet1.powerLeft = packet_in.powerLeft;
        packet1.voltageRight = packet_in.voltageRight;
        packet1.currentRight = packet_in.currentRight;
        packet1.powerRight = packet_in.powerRight;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_ina219_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_ina219_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ina219_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ina219_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ina219_pack(system_id, component_id, &msg , packet1.timestamp , packet1.voltageLeft , packet1.currentLeft , packet1.powerLeft , packet1.voltageRight , packet1.currentRight , packet1.powerRight );
    mavlink_msg_ina219_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ina219_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.timestamp , packet1.voltageLeft , packet1.currentLeft , packet1.powerLeft , packet1.voltageRight , packet1.currentRight , packet1.powerRight );
    mavlink_msg_ina219_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ina219_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ina219_send(MAVLINK_COMM_1 , packet1.timestamp , packet1.voltageLeft , packet1.currentLeft , packet1.powerLeft , packet1.voltageRight , packet1.currentRight , packet1.powerRight );
    mavlink_msg_ina219_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_ina219(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_ina219(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // INA219_TESTSUITE_H
