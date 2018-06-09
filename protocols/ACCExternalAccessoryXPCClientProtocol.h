/* made by EzioChiu.
 */

@protocol ACCExternalAccessoryXPCClientProtocol <NSObject>

@required

- (void)ExternalAccessoryArrived:(NSDictionary *)arg1;
- (void)ExternalAccessoryLeft:(NSDictionary *)arg1;
- (void)accessoryCloseExternalAccessorySession:(NSString *)arg1;
- (void)destinationSharingStatus:(bool)arg1 forDestinationUUID:(NSString *)arg2 supportedParams:(NSArray *)arg3 forUUID:(NSString *)arg4;
- (void)enqueueLocationNMEASentence:(NSString *)arg1 forUUID:(NSString *)arg2;
- (void)handleIncomingExternalAccessoryData:(void *)arg1 forEASessionIdentifier:(void *)arg2 withReply:(void *)arg3; // needs 3 arg types, found 8: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)startDestinationSharingForUUID:(NSString *)arg1;
- (void)stopDestinationSharingForUUID:(NSString *)arg1;
- (void)updateAccessoryInfo:(NSDictionary *)arg1 forUUID:(NSString *)arg2;
- (void)vehicleStatusUpdate:(NSDictionary *)arg1 forUUID:(NSString *)arg2;

@end
