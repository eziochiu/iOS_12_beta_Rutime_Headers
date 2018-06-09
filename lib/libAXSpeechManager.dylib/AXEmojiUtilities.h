/* made by EzioChiu
   Image: /usr/lib/libAXSpeechManager.dylib
 */

@interface AXEmojiUtilities : NSObject

+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })emojiRangeFromString:(id)arg1 withSearchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)arg1 stringForPauses:(id)arg2 language:(id)arg3 rangeReplacements:(id)arg4 appendEmojiSuffix:(bool)arg5;

@end
