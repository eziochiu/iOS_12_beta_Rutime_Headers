/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface AceObject : NSObject <AFAnalyticsContextVending, AFSecurityDigestibleChunksProviding, AceObject, SiriCoreThunking> {
    NSString * _aceId;
    NSNumber * _deserializationDuration;
    NSMutableDictionary * _dict;
    bool  _mutatingCommand;
    NSData * _plistData;
    NSString * _refId;
    NSNumber * _usefulnessScore;
}

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *dict;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool mutatingCommand;
@property (nonatomic, readonly) NSData *plistData;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *usefulnessScore;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)_aceObjectWithMutableDictionary:(id)arg1 context:(id)arg2;
+ (id)_filteredDictionaryForKeySet:(struct __CFSet { }*)arg1 plistData:(id)arg2;
+ (id)_newAceObjectWithMutableDictionary:(id)arg1;
+ (id)aceObjectArrayWithDictionaryArray:(id)arg1 baseClass:(Class)arg2 context:(id)arg3;
+ (id)aceObjectArrayWithDictionaryArray:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3;
+ (id)aceObjectDictionaryWithDictionary:(id)arg1 baseClass:(Class)arg2 context:(id)arg3;
+ (id)aceObjectDictionaryWithDictionary:(id)arg1 baseProtocol:(id)arg2 context:(id)arg3;
+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceObjectWithGenericCommand:(id)arg1 context:(id)arg2;
+ (id)aceObjectWithPlistData:(id)arg1;
+ (id)dictionaryArrayWithAceObjectArray:(id)arg1;
+ (id)dictionaryWithAceObjectDictionary:(id)arg1;
+ (id)newAceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)newAceObjectWithGenericCommand:(id)arg1 context:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)_appendDescriptionOfObject:(id)arg1 toString:(id)arg2 atDepth:(unsigned long long)arg3 withPrefixes:(id)arg4 hint:(id)arg5;
- (id)_descriptionHint;
- (void)_deserializeFromPlistData;
- (id)_dict;
- (id)_initWithMutableDictionary:(id)arg1;
- (id)_initWithPlistData:(id)arg1 aceId:(id)arg2 refId:(id)arg3;
- (id)_initWithPlistData:(id)arg1 aceId:(id)arg2 refId:(id)arg3 usefulnessScore:(id)arg4 mutatingCommand:(id)arg5;
- (id)_serializedData;
- (id)aceId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deserializationDuration;
- (id)dict;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedClassName;
- (id)forceEagerDeserialization;
- (id)fullDescription;
- (id)groupIdentifier;
- (bool)hasArrayForPropertyForKey:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)mutatingCommand;
- (id)plistData;
- (id)properties;
- (id)propertyForKey:(id)arg1;
- (id)propertyForKeyWithoutDeserializing:(id)arg1;
- (id)refId;
- (void)setAceId:(id)arg1;
- (void)setMutatingCommand:(bool)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setRefId:(id)arg1;
- (void)setTopLevelProperty:(id)arg1 forKey:(id)arg2;
- (void)setUsefulnessScore:(id)arg1;
- (id)topLevelPropertyForKey:(id)arg1;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)usefulnessScore;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (bool)_af_isKindOfDictationRequest;
- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_analyticsContext;
- (id)af_dialogIdentifier;
- (id)af_dialogIdentifiersForAnalyticsContext;
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (bool)af_isUserUtterance;
- (bool)af_isUtterance;
- (id)af_speakableText;
- (id)af_text;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (long long)_afui_usefulUserResultType;
- (id)afui_insertionContext;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (void)siriCore_invokeThunk;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (void)_siriui_applyUserInfoDictionary:(id)arg1;

@end
