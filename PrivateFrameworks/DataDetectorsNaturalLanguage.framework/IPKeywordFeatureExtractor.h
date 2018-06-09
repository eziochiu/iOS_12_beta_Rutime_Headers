/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPKeywordFeatureExtractor : IPFeatureExtractor

- (id)_matchingKeywordsForRegex:(id)arg1 inText:(id)arg2 message:(id)arg3 eventType:(id)arg4 keywordType:(unsigned long long)arg5;
- (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 context:(id)arg3;
- (id)matchesForTextString:(id)arg1 inMessageUnit:(id)arg2 eventType:(id)arg3;
- (id)matchesForTextString:(id)arg1 inMessageUnit:(id)arg2 eventType:(id)arg3 keywordType:(unsigned long long)arg4;

@end
