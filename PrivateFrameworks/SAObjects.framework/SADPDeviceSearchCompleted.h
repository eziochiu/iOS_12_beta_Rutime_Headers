/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADPDeviceSearchCompleted : SABaseCommand <SAAceSerializable, SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSArray *resolvedDevices;
@property (readonly) Class superclass;

+ (id)deviceSearchCompleted;
+ (id)deviceSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)resolvedDevices;
- (void)setResolvedDevices:(id)arg1;

@end
