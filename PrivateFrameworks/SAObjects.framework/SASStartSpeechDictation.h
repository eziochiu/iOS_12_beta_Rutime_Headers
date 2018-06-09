/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASStartSpeechDictation : SASStartSpeech

@property (nonatomic, copy) NSData *activationToken;
@property (nonatomic, copy) NSString *applicationName;
@property (nonatomic, copy) NSString *applicationVersion;
@property (nonatomic) bool censorSpeech;
@property (nonatomic, copy) NSString *fieldId;
@property (nonatomic, copy) NSString *fieldLabel;
@property (nonatomic, copy) NSArray *inlineItemList;
@property (nonatomic, copy) NSString *interactionId;
@property (nonatomic, copy) NSString *keyboardIdentifier;
@property (nonatomic, copy) NSString *keyboardReturnKey;
@property (nonatomic, copy) NSString *keyboardType;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *postfixText;
@property (nonatomic, copy) NSString *prefixText;
@property (nonatomic, copy) NSString *region;
@property (nonatomic) bool saveRequestAudio;
@property (nonatomic, copy) NSString *selectedText;
@property (nonatomic) bool speakerIndependentRecognition;

+ (id)startSpeechDictation;
+ (id)startSpeechDictationWithDictionary:(id)arg1 context:(id)arg2;

- (id)activationToken;
- (id)applicationName;
- (id)applicationVersion;
- (bool)censorSpeech;
- (id)encodedClassName;
- (id)fieldId;
- (id)fieldLabel;
- (id)groupIdentifier;
- (id)inlineItemList;
- (id)interactionId;
- (id)keyboardIdentifier;
- (id)keyboardReturnKey;
- (id)keyboardType;
- (id)language;
- (id)postfixText;
- (id)prefixText;
- (id)region;
- (bool)requiresResponse;
- (bool)saveRequestAudio;
- (id)selectedText;
- (void)setActivationToken:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setCensorSpeech:(bool)arg1;
- (void)setFieldId:(id)arg1;
- (void)setFieldLabel:(id)arg1;
- (void)setInlineItemList:(id)arg1;
- (void)setInteractionId:(id)arg1;
- (void)setKeyboardIdentifier:(id)arg1;
- (void)setKeyboardReturnKey:(id)arg1;
- (void)setKeyboardType:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setPostfixText:(id)arg1;
- (void)setPrefixText:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setSaveRequestAudio:(bool)arg1;
- (void)setSelectedText:(id)arg1;
- (void)setSpeakerIndependentRecognition:(bool)arg1;
- (bool)speakerIndependentRecognition;

@end
