/* made by EzioChiu.
 */

@protocol PKPlugInPrivate <PKPlugIn>

@required

- (NSDictionary *)environment;
- (NSDictionary *)extensionState;
- (NSXPCConnection *)pluginConnection;
- (void)setEnvironment:(NSDictionary *)arg1;
- (void)setExtensionState:(NSDictionary *)arg1;
- (NSDate *)timestamp;
- (NSUUID *)uuid;

@end
