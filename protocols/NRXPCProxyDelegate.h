/* made by EzioChiu.
 */

@protocol NRXPCProxyDelegate <NSObject>

@required

- (bool)hasEntitlement:(NSString *)arg1 withBitmask:(unsigned int)arg2;
- (void)shouldMonitorProxy:(NRXPCProxy *)arg1 forSuspension:(bool)arg2;

@end
