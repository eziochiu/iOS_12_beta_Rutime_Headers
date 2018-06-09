/* made by EzioChiu.
 */

@protocol PBBridgeGizmoProtocol <NSObject>

@required

- (void)enabledSiri:(IDSProtobuf *)arg1;
- (void)gotSiriState:(IDSProtobuf *)arg1;
- (void)handleActivationData:(IDSProtobuf *)arg1;
- (void)handleWarrantySentinelRequest:(IDSProtobuf *)arg1;
- (void)popToControllerType:(IDSProtobuf *)arg1;
- (void)pushControllerType:(IDSProtobuf *)arg1;
- (void)setCompanionLanguage:(IDSProtobuf *)arg1;
- (void)setCompanionRegion:(IDSProtobuf *)arg1;
- (void)setLocationEnabled:(IDSProtobuf *)arg1;
- (void)setPasscodeRestrictions:(IDSProtobuf *)arg1;

@optional

- (void)companionBecameAvailableWantsConfirmation:(IDSProtobuf *)arg1;

@end
