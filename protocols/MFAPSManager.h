/* made by EzioChiu.
 */

@protocol MFAPSManager

@required

- (void)connect;
- (NSData *)copyDeviceToken;
- (NSString *)copyDiagnosticInformation;
- (void)startWatchingForTopic:(NSString *)arg1;
- (void)stopWatchingForTopic:(NSString *)arg1;
- (void)swapTopic:(NSString *)arg1 forNewTopic:(NSString *)arg2;

@end
