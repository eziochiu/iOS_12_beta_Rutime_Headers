/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardEmojiCategory : NSObject {
    long long  _categoryType;
    NSString * _displaySymbol;
    NSArray * _emoji;
    long long  _lastVisibleFirstEmojiIndex;
}

@property long long categoryType;
@property (getter=displaySymbol, readonly) NSString *displaySymbol;
@property (retain) NSArray *emoji;
@property (nonatomic) long long lastVisibleFirstEmojiIndex;
@property (getter=name, nonatomic, readonly) NSString *name;

+ (id)categories;
+ (id)categoryForType:(long long)arg1;
+ (unsigned long long)categoryIndexForCategoryType:(long long)arg1;
+ (long long)categoryTypeForCategoryIndex:(unsigned long long)arg1;
+ (id)displayName:(long long)arg1;
+ (id)emojiCategoryStringForCategoryType:(long long)arg1;
+ (long long)emojiCategoryTypeForCategoryString:(id)arg1;
+ (id)emojiRecentsFromPreferences;
+ (id)enabledCategoryIndexes;
+ (id)fallbackDisplayName:(long long)arg1;
+ (unsigned long long)hasVariantsForEmoji:(id)arg1;
+ (id)loadPrecomputedEmojiFlagCategory;
+ (id)localizedStringForKey:(id)arg1;
+ (long long)numberOfCategories;
+ (id)professionSkinToneEmojiBaseKey:(id)arg1;

- (long long)categoryType;
- (void)dealloc;
- (id)displaySymbol;
- (id)emoji;
- (long long)lastVisibleFirstEmojiIndex;
- (id)name;
- (void)releaseCategories;
- (void)setCategoryType:(long long)arg1;
- (void)setEmoji:(id)arg1;
- (void)setLastVisibleFirstEmojiIndex:(long long)arg1;

@end
