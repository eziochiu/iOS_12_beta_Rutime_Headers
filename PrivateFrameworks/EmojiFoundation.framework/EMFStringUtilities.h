/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

@interface EMFStringUtilities : NSObject

+ (id)_baseFirstCharacterString:(id)arg1;
+ (id)_baseStringForEmojiString:(id)arg1;
+ (bool)_emojiString:(id)arg1 containsSubstring:(id)arg2;
+ (unsigned int)_firstLongCharacterOfString:(id)arg1;
+ (bool)_genderEmojiBaseStringNeedVariantSelector:(id)arg1;
+ (bool)_hasSkinToneVariantsForString:(id)arg1;
+ (id)_preferenceIndexString:(id)arg1;
+ (int)_skinToneForString:(id)arg1;
+ (id)_skinToneVariantsForString:(id)arg1;
+ (id)_stringWithUnichar:(unsigned int)arg1;
+ (id)professionSkinToneEmojiBaseKey:(id)arg1;

@end
