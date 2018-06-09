/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSULocaleStructuredDictionary : NSObject {
    unsigned long long  _autoUpdatingCount;
    NSMutableDictionary * _cldrLanguageScriptForKey;
    NSMutableDictionary * _cldrLanguageScriptRegionForKey;
    NSDictionary * _dictionary;
    NSMutableDictionary * _workingDictionary;
    NSLocale * _workingLocale;
    bool  _workingLocaleIsAutoUpdating;
}

+ (id)dateFormatterSymbolsFallbackDictionary;
+ (id)dictionaryWithContentsOfFileForLocale:(id)arg1 inDirectory:(id)arg2 inBundle:(id)arg3;
+ (id)numberFormatterSymbolsFallbackDictionary;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 locale:(id)arg2;
- (id)objectForKey:(id)arg1 locale:(id)arg2;
- (bool)p_extractLanguage:(id*)arg1 script:(id*)arg2 region:(id*)arg3 fromString:(id)arg4;
- (id)p_makeLocaleIdentifierWithLanguage:(id)arg1 script:(id)arg2 region:(id)arg3;
- (void)p_remakeWorkingDictionaryWithLocale:(id)arg1;

@end
