/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDateParser : NSObject {
    NSMutableArray * mFormatCategories;
    bool  mIsJapaneseLocale;
    OITSULocale * mLocale;
    struct __CFDateFormatter { } * mSpecialCaseFormatter;
}

- (void)addFormat:(id)arg1 locale:(struct __CFLocale { }*)arg2 formatCategoryMap:(id)arg3;
- (void)dealloc;
- (id)formatStringsDictionary;
- (id)initWithLocale:(id)arg1;
- (struct __CFDate { }*)newDateFromString:(struct __CFString { }*)arg1 preferredFormatString:(struct __CFString { }*)arg2 successfulFormatString:(const struct __CFString {}**)arg3 tryAggressiveFormats:(bool)arg4;
- (struct __CFDate { }*)newDateFromString:(struct __CFString { }*)arg1 successfulFormatString:(const struct __CFString {}**)arg2;
- (struct __CFDate { }*)newDateFromStringTryingFormats:(struct __CFString { }*)arg1 locale:(struct __CFLocale { }*)arg2 formats:(id)arg3 outSuccessfulFormatString:(const struct __CFString {}**)arg4;
- (void)parseFormat:(id)arg1 initialPattern:(id*)arg2 separator:(unsigned short*)arg3;
- (struct __CFDateFormatter { }*)specialCaseDateFormatterForLocale:(struct __CFLocale { }*)arg1;

@end
