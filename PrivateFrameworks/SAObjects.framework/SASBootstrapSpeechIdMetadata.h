/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASBootstrapSpeechIdMetadata : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *bootstrapSpeechId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceType;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDate *keychainCreationDate;
@property (readonly) Class superclass;

+ (id)bootstrapSpeechIdMetadata;
+ (id)bootstrapSpeechIdMetadataWithDictionary:(id)arg1 context:(id)arg2;

- (id)bootstrapSpeechId;
- (id)deviceType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)keychainCreationDate;
- (void)setBootstrapSpeechId:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setKeychainCreationDate:(id)arg1;

@end
