/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIIDSContactPropertyResolver : NSObject {
    CNUIIDSAvailabilityProvider * _idsAvailabilityProvider;
}

@property (nonatomic, readonly) CNUIIDSAvailabilityProvider *idsAvailabilityProvider;

+ (id)IDSRelevantPropertiesForContact:(id)arg1;
+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)idsAvailabilityProvider;
- (id)initWithIDSAvailabilityProvider:(id)arg1;
- (id)resolveBestFaceTimeIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2;
- (id)resolveBestIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2 usingAvailabilityProviderCall:(id /* block */)arg3;
- (id)resolveBestIMessageIDSPropertyForContact:(id)arg1 schedulerProvider:(id)arg2;

@end
