/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHPrefixSuffixCustomDataFormatter : TSCHCustomDataFormatter {
    NSString * mPrefixString;
    NSString * mSuffixString;
}

+ (id)dataFormatterWithCustomFormat:(id)arg1 customFormatListKey:(id)arg2 formatType:(int)arg3 prefixString:(id)arg4 suffixString:(id)arg5;

- (id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2;
- (id)convertToPersistableStyleObject;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)arg1;
- (void)dealloc;
- (id)initWithCustomFormat:(id)arg1 customFormatListKey:(id)arg2 formatType:(int)arg3 prefixString:(id)arg4 suffixString:(id)arg5;
- (id)p_formattedStringWithBodyString:(id)arg1;

@end
