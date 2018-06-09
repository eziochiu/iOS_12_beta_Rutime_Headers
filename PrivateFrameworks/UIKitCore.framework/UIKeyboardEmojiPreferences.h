/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardEmojiPreferences : NSObject {
    NSObject<OS_dispatch_queue> * _clientDispatchQueue;
    NSArray * _localRecentsWithClient;
    NSArray * _localRecentsWithoutClient;
    EMFEmojiPreferencesClient * _preferencesClient;
}

@property (nonatomic, readonly) bool hasDisplayedSkinToneHelp;
@property (nonatomic) unsigned long long maximumRecentsCount;
@property (nonatomic, readonly) EMFEmojiPreferencesClient *preferencesClient;
@property (nonatomic, retain) NSArray *recents;
@property (nonatomic) long long selectedCategoryType;
@property (nonatomic, retain) NSDictionary *skinToneBaseKeyPreferences;

+ (id)sharedInstance;

- (void)_usageForEmoji:(id)arg1 language:(id)arg2 mode:(id)arg3 typingName:(id)arg4;
- (void)clearEmojiKeyboardPreferenceClient;
- (void)clearLocalRecentsCache;
- (void)dealloc;
- (void)didDisplaySkinToneHelp;
- (long long)emojiCategoryDefaultsIndex:(id)arg1;
- (void)emojiPredicted:(id)arg1 typingName:(id)arg2 language:(id)arg3;
- (void)emojiUsed:(id)arg1;
- (void)emojiUsed:(id)arg1 language:(id)arg2;
- (id)emojiWithoutDuplicateRecents:(id)arg1;
- (void)handleRead:(id)arg1;
- (void)handleSuspend:(id)arg1;
- (void)handleWrite:(id)arg1;
- (bool)hasDisplayedSkinToneHelp;
- (bool)hasLastUsedVariantForEmojiString:(id)arg1;
- (id)init;
- (id)lastUsedVariantEmojiForEmojiString:(id)arg1;
- (unsigned long long)maximumRecentsCount;
- (id)preferencesClient;
- (void)readEmojiDefaults;
- (id)recentEmojiAtIndex:(long long)arg1 size:(unsigned long long*)arg2;
- (id)recents;
- (void)refreshLocalRecents;
- (long long)selectedCategoryType;
- (void)setEmojiCategoryDefaultsIndex:(long long)arg1 forCategory:(id)arg2;
- (void)setMaximumRecentsCount:(unsigned long long)arg1;
- (void)setRecents:(id)arg1;
- (void)setSelectedCategoryType:(long long)arg1;
- (void)setSkinToneBaseKeyPreferences:(id)arg1;
- (id)skinToneBaseKeyPreferences;
- (id)typingNameForEmoji:(id)arg1 language:(id)arg2;
- (void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2;
- (void)writeEmojiDefaults;

@end
