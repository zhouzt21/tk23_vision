#ifndef __HARDWARE_H__
#define __HARDWARE_H__

#include <rclcpp/rclcpp.hpp>
#include <vector>
#include "libcan/SocketCAN.hpp"
#include "config.hpp"

////////////////////Hardware Level//////////////////////////

typedef enum
{
    CAN_TxPY12V_ID = 0x200, //云台12V发送ID
    CAN_TxPY24V_ID = 0x1FF, //云台12V发送ID
    //	CAN_Pitch_ID 	= 0x201,			//云台Pitch
    //	CAN_Yaw_ID   	= 0x203,			//云台Yaw
    CAN_YAW_FEEDBACK_ID = 0x205, //云台Yaw24v
    CAN_PIT_FEEDBACK_ID = 0x206, //云台Yaw24v
    CAN_POKE_FEEDBACK_ID = 0x207,
    CAN_ZGYRO_RST_ID = 0x404,
    CAN_ZGYRO_FEEDBACK_MSG_ID = 0x401,
    CAN_MotorLF_ID = 0x041,         //左前
    CAN_MotorRF_ID = 0x042,         //右前
    CAN_MotorLB_ID = 0x043,         //左后
    CAN_MotorRB_ID = 0x044,         //右后
    CAN_EC60_four_ID = 0x200,       //EC60接收程序
    CAN_backLeft_EC60_ID = 0x203,   //ec60
    CAN_frontLeft_EC60_ID = 0x201,  //ec60
    CAN_backRight_EC60_ID = 0x202,  //ec60
    CAN_frontRight_EC60_ID = 0x204, //ec60
    CAN_3510Moto_ALL_ID = 0x200,
    CAN_3510Moto1_ID = 0x201,
    CAN_3510Moto2_ID = 0x202,
    CAN_3510Moto3_ID = 0x203,
    CAN_3510Moto4_ID = 0x204,
    CAN_3510Moto5_ID = 0x205,
    CAN_3510Moto6_ID = 0x206,
    CAN_3510Moto7_ID = 0x207,
    CAN_3510Moto8_ID = 0x208,
    CAN_DriverPower_ID = 0x80,
    CAN_HeartBeat_ID = 0x156,
    SINGLE_GYRO_ID = 0x401,
} CAN_Message_ID;

/*接收到的云台电机的参数结构体*/

typedef struct
{
    int16_t speed_rpm = 0;
    int16_t real_current = 0;
    int16_t given_current = 0;
    uint16_t angle = 0; //abs angle range:[0,8191]
    uint16_t last_angle = 0;
    uint16_t offset_angle = 0;
    uint8_t hall = 0;

    int32_t round_cnt = 0;
    int32_t total_angle = 0;
    uint32_t msg_cnt = 0;

    int16_t power = 0;
} moto_measure_t;

//////////////////////////////////////////////////////////////////

class RobotHardware
{
  public:
    RobotHardware();
    ~RobotHardware();

    /* HW Interface */
    moto_measure_t motors[HW_MOTOR_COUNT];

    /* HW Receiver */
    void CAN0_ReceiveFrame(can_frame_t *frame);

    /* HW Update */
    void update();

  private:
    /* HW Adapter */
    SocketCAN can0_adapter;

    /* Motor */
    void Motor_UpdateOffset(moto_measure_t *ptr, can_frame_t *frame);
    void CAN_Motor_Update();
};

//////////////////////////////Global Hardware Handle////////////////////////////////////

RobotHardware *Hardware();

void ReleaseHardware();

#endif