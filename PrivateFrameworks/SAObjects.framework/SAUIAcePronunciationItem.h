/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAcePronunciationItem : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *commands;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *tts;

+ (id)acePronunciationItem;
+ (id)acePronunciationItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setCommands:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTts:(id)arg1;
- (id)title;
- (id)tts;

@end
