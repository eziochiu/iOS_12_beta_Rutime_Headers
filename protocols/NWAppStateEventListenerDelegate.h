/* made by EzioChiu.
 */

@protocol NWAppStateEventListenerDelegate <NSObject>

@required

- (void)handleApplicationStateChangeForDisplayName:(NSString *)arg1 UUID:(NSUUID *)arg2 pid:(int)arg3 state:(unsigned int)arg4;

@end
