/* made by EzioChiu.
 */

@protocol CLNotifierServiceClientProtocol <CLIntersiloClientProtocol>

@required

- (void)onNotification:(int)arg1 withData:(CLNotifierData *)arg2;

@end
