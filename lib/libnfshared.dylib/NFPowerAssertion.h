/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFPowerAssertion : NSObject {
    NSMutableArray * _assertionHolders;
    unsigned int  _assertionID;
    NSObject<OS_os_transaction> * _powerAssertTransaction;
    unsigned int  _powerNotificationConnection;
    unsigned int  _powerNotificationNotifier;
    struct IONotificationPort { } * _powerNotificationPort;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedPowerAssertion;

- (void)dealloc;
- (void)holdPowerAssertion:(id)arg1;
- (id)init;
- (void)releasePowerAssertion:(id)arg1;

@end
