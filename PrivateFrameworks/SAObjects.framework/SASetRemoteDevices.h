/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetRemoteDevices : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic) bool remoteDeviceHasNoAssistantId;
@property (nonatomic) bool remoteDeviceNotSetup;
@property (nonatomic) bool remoteDeviceUnreachable;
@property (nonatomic, copy) NSArray *remoteDevices;
@property (readonly) Class superclass;

+ (id)setRemoteDevices;
+ (id)setRemoteDevicesWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)remoteDeviceHasNoAssistantId;
- (bool)remoteDeviceNotSetup;
- (bool)remoteDeviceUnreachable;
- (id)remoteDevices;
- (bool)requiresResponse;
- (void)setRemoteDeviceHasNoAssistantId:(bool)arg1;
- (void)setRemoteDeviceNotSetup:(bool)arg1;
- (void)setRemoteDeviceUnreachable:(bool)arg1;
- (void)setRemoteDevices:(id)arg1;

@end
