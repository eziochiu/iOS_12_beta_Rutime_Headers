/* made by EzioChiu.
 */

@protocol CARInputDeviceTouchpadDelegate <NSObject>

@required

- (void)performHapticType:(unsigned long long)arg1 deviceUUID:(NSString *)arg2;

@end
