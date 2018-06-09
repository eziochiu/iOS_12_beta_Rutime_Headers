/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPreSynthesizeTTS : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *aceAudioData;
@property (nonatomic, copy) NSArray *dialogStrings;
@property (nonatomic, copy) NSDictionary *speakableContextInfo;

+ (id)preSynthesizeTTS;
+ (id)preSynthesizeTTSWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceAudioData;
- (id)dialogStrings;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAceAudioData:(id)arg1;
- (void)setDialogStrings:(id)arg1;
- (void)setSpeakableContextInfo:(id)arg1;
- (id)speakableContextInfo;

@end
