/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentResponse : NSObject <INCacheableContainer, INGenericIntentResponse, INImageProxyInjecting, INIntentResponseExport, INIntentSlotComposing, INKeyImageProducing, INRuntimeObject, NSCopying, NSSecureCoding> {
    bool  __userConfirmationRequired;
    _INPBIntentResponse * _backingStore;
    long long  _code;
    PBCodable * _responseMessagePBRepresentation;
    NSUserActivity * _userActivity;
}

@property (nonatomic, readonly) NSString *_className;
@property (nonatomic, readonly) INIntentResponseDescription *_instanceDescription;
@property (nonatomic, readonly) INIntentResponseCodableCode *_intentResponseCodableCode;
@property (nonatomic, readonly) long long _intentResponseCode;
@property (readonly) long long _intents_toggleState;
@property (readonly) INImage *_keyImage;
@property (setter=_setPayloadResponseTypeName:, nonatomic, retain) NSString *_payloadResponseTypeName;
@property (setter=_setRequiresAuthentication:, nonatomic) bool _requiresAuthentication;
@property (setter=_setRequiresProtectedData:, nonatomic) bool _requiresProtectedData;
@property (setter=_setResponseMessagePBRepresentation:, nonatomic, retain) PBCodable *_responseMessagePBRepresentation;
@property (nonatomic, readonly) bool _shouldForwardIntentToApp;
@property (getter=_isSuccess, nonatomic, readonly) bool _success;
@property (nonatomic, readonly) long long _type;
@property (nonatomic, readonly) bool _userConfirmationRequired;
@property (nonatomic, readonly, copy) _INPBIntentResponse *backingStore;
@property (nonatomic) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *propertiesByName;
@property (nonatomic) bool shouldOpenContainingApplication;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSUserActivity *userActivity;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(bool)arg3;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (long long)_intentHandlingStatusFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (void)initialize;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (id)responseFailure;
+ (id)responseSuccess;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_className;
- (long long)_code;
- (void)_commonInit;
- (id)_dictionaryRepresentation;
- (id)_impl;
- (id)_inCodable;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_instanceDescription;
- (long long)_intentHandlingStatus;
- (id)_intentResponseCodableCode;
- (long long)_intentResponseCode;
- (id)_intents_cacheableObjects;
- (long long)_intents_toggleState;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (bool)_isSuccess;
- (id)_originatingBundleIdentifier;
- (id)_payloadResponseMessageData;
- (id)_payloadResponseTypeName;
- (id)_propertiesByNameForLanguage:(id)arg1;
- (bool)_requiresAuthentication;
- (bool)_requiresProtectedData;
- (id)_responseMessagePBRepresentation;
- (id)_responseTemplateForLanguage:(id)arg1;
- (id)_responseTemplateForLanguage:(id)arg1 requiresSiriCompatibility:(bool)arg2;
- (void)_setCode:(long long)arg1;
- (void)_setPayloadResponseMessageData:(id)arg1;
- (void)_setPayloadResponseTypeName:(id)arg1;
- (void)_setRequiresAuthentication:(bool)arg1;
- (void)_setRequiresProtectedData:(bool)arg1;
- (void)_setResponseMessagePBRepresentation:(id)arg1;
- (bool)_shouldForwardIntentToApp;
- (long long)_type;
- (bool)_userConfirmationRequired;
- (id)backingStore;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertiesByName:(id)arg1;
- (id)intentSlotDescriptions;
- (id)localizeValueOfSlotDescription:(id)arg1 forLanguage:(id)arg2;
- (id)propertiesByName;
- (id)protoData;
- (void)setCode:(long long)arg1;
- (void)setPropertiesByName:(id)arg1;
- (void)setShouldOpenContainingApplication:(bool)arg1;
- (void)setUserActivity:(id)arg1;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (bool)shouldOpenContainingApplication;
- (id)userActivity;
- (id)valueForKey:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore

- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_keyImage;

@end
