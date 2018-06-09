/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
 */

@interface CEMSystemGameCenterDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {
    NSNumber * _payloadAllowAddingGameCenterFriends;
    NSNumber * _payloadAllowGameCenter;
    NSNumber * _payloadAllowMultiplayerGaming;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *payloadAllowAddingGameCenterFriends;
@property (nonatomic, copy) NSNumber *payloadAllowGameCenter;
@property (nonatomic, copy) NSNumber *payloadAllowMultiplayerGaming;
@property (readonly) Class superclass;

+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)arg1 withAllowGameCenter:(id)arg2 withAllowMultiplayerGaming:(id)arg3 withAllowAddingGameCenterFriends:(id)arg4;
+ (id)profileType;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (int)activationLevel;
- (id)assetReferences;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (bool)multipleAllowed;
- (bool)mustBeSupervised;
- (id)payloadAllowAddingGameCenterFriends;
- (id)payloadAllowGameCenter;
- (id)payloadAllowMultiplayerGaming;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (void)setPayloadAllowAddingGameCenterFriends:(id)arg1;
- (void)setPayloadAllowGameCenter:(id)arg1;
- (void)setPayloadAllowMultiplayerGaming:(id)arg1;

@end
