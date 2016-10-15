#ifndef _GRASP_H_
#define _GRASP_H_

enum grasp_message {
  M_NOOP = 0,
  M_DISCOVERY = 1,
  M_RESPONSE = 2,
  M_REQ_NEG = 3,
  M_REQ_SYN = 4,
  M_NEGOTIATE = 5,
  M_END = 6,
  M_WAIT = 7,
  M_SYNCH = 8,
  M_FLOOD = 9};

enum grasp_options {
  O_DIVERT = 100,
  O_ACCEPT = 101,
  O_DECLINE = 102,
  O_IPv6_LOCATOR = 103,
  O_IPv4_LOCATOR = 104,
  O_FQDN_LOCATOR = 105,
  O_URI_LOCATOR = 106,
};

/*
 *    objective-flags = uint .bits objective-flag
 * objective-flag = &(
 *    F_DISC: 0 ; valid for discovery only
 *    F_NEG: 1 ; valid for discovery and negotiation
 *    F_SYNCH: 2) ; valid for discovery and synchronization
 */
enum objective_flags {
  F_DISC = 0,
  F_NEG  = 1,
  F_SYNCH= 2,
};


#endif /* _GRASP_H_ */
