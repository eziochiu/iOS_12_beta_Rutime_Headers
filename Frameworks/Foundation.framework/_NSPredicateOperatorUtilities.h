/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSPredicateOperatorUtilities : NSObject

+ (long long)copyRegexFindSafePattern:(id)arg1 toBuffer:(unsigned short*)arg2;
+ (bool)doRegexForString:(id)arg1 pattern:(id)arg2 likeProtect:(bool)arg3 flags:(unsigned long long)arg4 context:(struct { id x1; void x2; }*)arg5;
+ (void)escapeFullwidthRegexChars:(id)arg1;
+ (id)newStringFrom:(id)arg1 usingUnicodeTransforms:(unsigned long long)arg2;
+ (struct __CFLocale { }*)retainedLocale;

@end
