/* made by EzioChiu.
 */

@protocol FBSServiceFacilityXPCClientDelegate <NSObject>

@required

- (void)client:(FBSServiceFacilityXPCClient *)arg1 configureConnectMessage:(FBSXPCMessage *)arg2;
- (void)client:(FBSServiceFacilityXPCClient *)arg1 handleError:(NSError *)arg2;
- (void)client:(FBSServiceFacilityXPCClient *)arg1 handleMessage:(FBSXPCMessage *)arg2 withType:(long long)arg3;

@end
