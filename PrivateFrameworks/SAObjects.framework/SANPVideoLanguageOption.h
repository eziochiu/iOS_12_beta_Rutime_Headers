/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPVideoLanguageOption : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *characteristics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *languageTag;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)languageOption;
+ (id)languageOptionWithDictionary:(id)arg1 context:(id)arg2;

- (id)characteristics;
- (id)displayName;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifier;
- (id)languageTag;
- (void)setCharacteristics:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLanguageTag:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)_languageOptionFromMediaRemoteRepresentation:(void*)arg1;

@end
