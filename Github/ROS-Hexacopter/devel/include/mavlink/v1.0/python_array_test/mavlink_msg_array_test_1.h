// MESSAGE ARRAY_TEST_1 PACKING

#define MAVLINK_MSG_ID_ARRAY_TEST_1 151

typedef struct __mavlink_array_test_1_t
{
 uint32_t ar_u32[4]; ///< Value array
} mavlink_array_test_1_t;

#define MAVLINK_MSG_ID_ARRAY_TEST_1_LEN 16
#define MAVLINK_MSG_ID_151_LEN 16

#define MAVLINK_MSG_ID_ARRAY_TEST_1_CRC 72
#define MAVLINK_MSG_ID_151_CRC 72

#define MAVLINK_MSG_ARRAY_TEST_1_FIELD_AR_U32_LEN 4

#define MAVLINK_MESSAGE_INFO_ARRAY_TEST_1 { \
	"ARRAY_TEST_1", \
	1, \
	{  { "ar_u32", NULL, MAVLINK_TYPE_UINT32_T, 4, 0, offsetof(mavlink_array_test_1_t, ar_u32) }, \
         } \
}


/**
 * @brief Pack a array_test_1 message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param ar_u32 Value array
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_array_test_1_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
						       const uint32_t *ar_u32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ARRAY_TEST_1_LEN];

	_mav_put_uint32_t_array(buf, 0, ar_u32, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ARRAY_TEST_1_LEN);
#else
	mavlink_array_test_1_t packet;

	mav_array_memcpy(packet.ar_u32, ar_u32, sizeof(uint32_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ARRAY_TEST_1_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ARRAY_TEST_1;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ARRAY_TEST_1_LEN, MAVLINK_MSG_ID_ARRAY_TEST_1_CRC);
#else
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ARRAY_TEST_1_LEN);
#endif
}

/**
 * @brief Pack a array_test_1 message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ar_u32 Value array
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_array_test_1_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
							   mavlink_message_t* msg,
						           const uint32_t *ar_u32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ARRAY_TEST_1_LEN];

	_mav_put_uint32_t_array(buf, 0, ar_u32, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ARRAY_TEST_1_LEN);
#else
	mavlink_array_test_1_t packet;

	mav_array_memcpy(packet.ar_u32, ar_u32, sizeof(uint32_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ARRAY_TEST_1_LEN);
#endif

	msg->msgid = MAVLINK_MSG_ID_ARRAY_TEST_1;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ARRAY_TEST_1_LEN, MAVLINK_MSG_ID_ARRAY_TEST_1_CRC);
#else
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ARRAY_TEST_1_LEN);
#endif
}

/**
 * @brief Encode a array_test_1 struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param array_test_1 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_array_test_1_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_array_test_1_t* array_test_1)
{
	return mavlink_msg_array_test_1_pack(system_id, component_id, msg, array_test_1->ar_u32);
}

/**
 * @brief Encode a array_test_1 struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param array_test_1 C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_array_test_1_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_array_test_1_t* array_test_1)
{
	return mavlink_msg_array_test_1_pack_chan(system_id, component_id, chan, msg, array_test_1->ar_u32);
}

/**
 * @brief Send a array_test_1 message
 * @param chan MAVLink channel to send the message
 *
 * @param ar_u32 Value array
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_array_test_1_send(mavlink_channel_t chan, const uint32_t *ar_u32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char buf[MAVLINK_MSG_ID_ARRAY_TEST_1_LEN];

	_mav_put_uint32_t_array(buf, 0, ar_u32, 4);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARRAY_TEST_1, buf, MAVLINK_MSG_ID_ARRAY_TEST_1_LEN, MAVLINK_MSG_ID_ARRAY_TEST_1_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARRAY_TEST_1, buf, MAVLINK_MSG_ID_ARRAY_TEST_1_LEN);
#endif
#else
	mavlink_array_test_1_t packet;

	mav_array_memcpy(packet.ar_u32, ar_u32, sizeof(uint32_t)*4);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARRAY_TEST_1, (const char *)&packet, MAVLINK_MSG_ID_ARRAY_TEST_1_LEN, MAVLINK_MSG_ID_ARRAY_TEST_1_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARRAY_TEST_1, (const char *)&packet, MAVLINK_MSG_ID_ARRAY_TEST_1_LEN);
#endif
#endif
}

#if MAVLINK_MSG_ID_ARRAY_TEST_1_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_array_test_1_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint32_t *ar_u32)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
	char *buf = (char *)msgbuf;

	_mav_put_uint32_t_array(buf, 0, ar_u32, 4);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARRAY_TEST_1, buf, MAVLINK_MSG_ID_ARRAY_TEST_1_LEN, MAVLINK_MSG_ID_ARRAY_TEST_1_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARRAY_TEST_1, buf, MAVLINK_MSG_ID_ARRAY_TEST_1_LEN);
#endif
#else
	mavlink_array_test_1_t *packet = (mavlink_array_test_1_t *)msgbuf;

	mav_array_memcpy(packet->ar_u32, ar_u32, sizeof(uint32_t)*4);
#if MAVLINK_CRC_EXTRA
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARRAY_TEST_1, (const char *)packet, MAVLINK_MSG_ID_ARRAY_TEST_1_LEN, MAVLINK_MSG_ID_ARRAY_TEST_1_CRC);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ARRAY_TEST_1, (const char *)packet, MAVLINK_MSG_ID_ARRAY_TEST_1_LEN);
#endif
#endif
}
#endif

#endif

// MESSAGE ARRAY_TEST_1 UNPACKING


/**
 * @brief Get field ar_u32 from array_test_1 message
 *
 * @return Value array
 */
static inline uint16_t mavlink_msg_array_test_1_get_ar_u32(const mavlink_message_t* msg, uint32_t *ar_u32)
{
	return _MAV_RETURN_uint32_t_array(msg, ar_u32, 4,  0);
}

/**
 * @brief Decode a array_test_1 message into a struct
 *
 * @param msg The message to decode
 * @param array_test_1 C-struct to decode the message contents into
 */
static inline void mavlink_msg_array_test_1_decode(const mavlink_message_t* msg, mavlink_array_test_1_t* array_test_1)
{
#if MAVLINK_NEED_BYTE_SWAP
	mavlink_msg_array_test_1_get_ar_u32(msg, array_test_1->ar_u32);
#else
	memcpy(array_test_1, _MAV_PAYLOAD(msg), MAVLINK_MSG_ID_ARRAY_TEST_1_LEN);
#endif
}
