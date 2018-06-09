/* made by EzioChiu.
 */

@protocol AXHARemoteUpdateProtocol <NSObject>

@required

- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(NSString *)arg2;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forDeviceID:(NSString *)arg3;

@end
