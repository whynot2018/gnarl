typedef enum {
	CONNECTED,
	PHONE_RSSI,
	PUMP_RSSI,
	NIGHTSCOUT,
	COMMAND_TIME,
	SHOW_STATUS,
} display_op_t;

void display_init(void);

void display_update(display_op_t op, int arg);
