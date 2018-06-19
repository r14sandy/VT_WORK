#include <stdio.h>
#include<pthread.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/socket.h>
#include <bluetooth/bluetooth.h>
#include <bluetooth/hci.h>
#include <bluetooth/hci_lib.h>
#include <errno.h>
#include <glib.h>
#include<sys/timeb.h>
#include<time.h>
#include <errno.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>
#include <sys/param.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <signal.h>
#include <gio/gio.h>


/*mysql*/
#include <mysql/mysql.h>
#include <stdio.h>
#include <stdlib.h>
void push_to_database(char *,int);
///////

#define BLUEZ_BUS_NAME "org.bluez"
#define BLUEZ_INTF_ADAPTER "org.bluez.Adapter"

static GDBusConnection *dbus_conn = NULL;
static GMainLoop *main_loop;

struct handler_data {
  const char *bt_address;
  short rssi;
};

void initialise(int *,int *);
inquiry_info *bt_scan(int ,int *);
void Process_BT_data(int,inquiry_info *,int);
int read_rssi(const char *);
void local_time(char *,char *);
void *ble_cal(void*);
void *bt_cal(void*);
