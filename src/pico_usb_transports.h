/***
 * Pico USB transport for MicroROS
 * Using the USB STDIO driver directly while I filter is in place on STDIO.
 * Thus enabling STDIO UART to be used while comms continue for ROS.
 *
 * Jon Durrant
 * 25-Jun-2023
 *
 */

#ifndef PICO_USB_TRANS
#define PICO_USB_TRANS

#include <stdio.h>
#include <stdint.h>

#include <uxr/client/profile/transport/custom/custom_transport.h>

/***
 * Open transport
 * @param transport
 * @return true if ok
 */
bool pico_usb_transport_open(struct uxrCustomTransport * transport);

/***
 * Close transport
 * @param transport
 * @return true if OK
 */
bool pico_usb_transport_close(struct uxrCustomTransport * transport);

/***
 * Write to the transport
 * @param transport
 * @param buf - Data to write
 * @param len - Length of data
 * @param err - error code
 * @return number of bytes written. <0 if error occurs
 */
size_t pico_usb_transport_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err);

/***
 * Read buffer with timeout
 * @param transport
 * @param buf - Data buffer to write to
 * @param len - Max length of buffer
 * @param timeout - timeout in micro Seconds
 * @param err
 * @return returns number of bytes read. < 0 if error occurs
 */
size_t pico_usb_transport_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err);

#endif //PICO_USB_TRANS
