/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

@interface EMFEmojiPreferencesClient : EMFEmojiPreferences {
    NSXPCConnection * _connection;
    bool  _isValid;
    NSString * _machName;
}

@property (nonatomic) bool isValid;
@property (nonatomic, retain) NSString *machName;

+ (id)differentialPrivacyRecorderForEmoji:(id)arg1 usageMode:(id)arg2;
+ (id)serviceInterface;

- (void).cxx_destruct;
- (void)_disconnect;
- (id)_initWithoutConnection;
- (void)createConnectionIfNecessary;
- (void)dealloc;
- (void)didDisplaySkinToneHelp;
- (void)didUseEmoji:(id)arg1;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2;
- (void)didUseEmoji:(id)arg1 usageMode:(id)arg2 typingName:(id)arg3;
- (void)didViewEmojiIndex:(long long)arg1 forCategory:(id)arg2;
- (id)initWithMachName:(id)arg1;
- (bool)isValid;
- (id)machName;
- (void)setIsValid:(bool)arg1;
- (void)setMachName:(id)arg1;
- (void)writeEmojiDefaults;

@end
