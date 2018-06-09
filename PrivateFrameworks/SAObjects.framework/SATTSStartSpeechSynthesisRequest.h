/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SATTSStartSpeechSynthesisRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *audioType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableAudioInfo;
@property (nonatomic, copy) NSString *gender;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic) bool streaming;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

+ (id)startSpeechSynthesisRequest;
+ (id)startSpeechSynthesisRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioType;
- (bool)enableAudioInfo;
- (id)encodedClassName;
- (id)gender;
- (id)groupIdentifier;
- (id)languageCode;
- (bool)requiresResponse;
- (void)setAudioType:(id)arg1;
- (void)setEnableAudioInfo:(bool)arg1;
- (void)setGender:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setStreaming:(bool)arg1;
- (void)setText:(id)arg1;
- (bool)streaming;
- (id)text;

@end
