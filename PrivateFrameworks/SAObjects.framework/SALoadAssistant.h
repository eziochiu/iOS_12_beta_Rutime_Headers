/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SALoadAssistant : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSData *activationToken;
@property (nonatomic, copy) NSString *assistantId;
@property (nonatomic, copy) NSString *connectionMode;
@property (nonatomic, copy) NSString *connectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *linkedAssistantId;
@property (nonatomic, copy) NSData *linkedSessionValidationData;
@property (nonatomic, copy) NSString *linkedSpeechId;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSData *sessionValidationData;
@property (nonatomic, copy) NSString *sharedUserId;
@property (nonatomic, copy) NSString *speechId;
@property (readonly) Class superclass;

+ (id)loadAssistant;
+ (id)loadAssistantWithDictionary:(id)arg1 context:(id)arg2;

- (id)activationToken;
- (id)assistantId;
- (id)connectionMode;
- (id)connectionType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)language;
- (id)linkedAssistantId;
- (id)linkedSessionValidationData;
- (id)linkedSpeechId;
- (bool)requiresResponse;
- (id)sessionValidationData;
- (void)setActivationToken:(id)arg1;
- (void)setAssistantId:(id)arg1;
- (void)setConnectionMode:(id)arg1;
- (void)setConnectionType:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLinkedAssistantId:(id)arg1;
- (void)setLinkedSessionValidationData:(id)arg1;
- (void)setLinkedSpeechId:(id)arg1;
- (void)setSessionValidationData:(id)arg1;
- (void)setSharedUserId:(id)arg1;
- (void)setSpeechId:(id)arg1;
- (id)sharedUserId;
- (id)speechId;

@end
