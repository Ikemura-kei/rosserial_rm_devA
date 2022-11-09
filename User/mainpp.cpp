#include <mainpp.h>
#include <STM32Hardware.h>

uint8_t m_u8_uartBuffer = 43;

ros::NodeHandle nh;

std_msgs::String str_msg;
ros::Publisher chatter("chatter", &str_msg);
char hello[] = "STM32F427II on the DOG!";
static int cnt = 0;
bool advertiseRet = false;
bool m = false;
int triggerCounter = 0;

void HAL_UART_TxCpltCallback(UART_HandleTypeDef *huart){
  nh.getHardware()->flush();
  debugWatcherLoop();
  triggerCounter++;
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart){
  nh.getHardware()->reset_rbuf();
}

void setup(void)
{
	 nh.initNode();
	 advertiseRet = nh.advertise(chatter);
	 debugWatcherLoop();
}

void loop(void)
{
	str_msg.data = hello;
	chatter.publish(&str_msg);

	nh.spinOnce();
}


const uint8_t WATERFLOW_LED_PERIOD = 35;
GPIO_TypeDef * LED_PORT_ARRAY[] = { LED1_GPIO_Port, LED2_GPIO_Port,
		LED3_GPIO_Port, LED4_GPIO_Port, LED5_GPIO_Port, LED6_GPIO_Port,
		LED7_GPIO_Port, LED8_GPIO_Port };
const uint16_t LED_PIN_ARRAY[] = { LED1_Pin, LED2_Pin, LED3_Pin, LED4_Pin,
		LED5_Pin, LED6_Pin, LED7_Pin, LED8_Pin};

void waterflowLEDHelper(uint8_t forward) {
	if (forward) {
		for (int index = 0; index < 8; index++){
			HAL_GPIO_TogglePin(LED_PORT_ARRAY[index], LED_PIN_ARRAY[index]);
			HAL_Delay(WATERFLOW_LED_PERIOD);
		}
	} else {
		for (int index = 7; index >= 0; index--){
			HAL_GPIO_TogglePin(LED_PORT_ARRAY[index], LED_PIN_ARRAY[index]);
			HAL_Delay(WATERFLOW_LED_PERIOD);
		}
	}
}

void waterflowLED(){

	static 	uint8_t forward = 0;
	static int counter = 0;
	cnt++;
	counter++;
	if (counter % 5 == 0)
		forward = ~forward;
	waterflowLEDHelper(forward);
}
