/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
 */

@interface IPRegexToolbox : NSObject

+ (id)emailSubjectPrefixRegex;
+ (id)firstMatchingKeywordForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(bool)arg3;
+ (bool)isRangeInsideQuotationMarks:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 text:(id)arg2 limitToSurroundingText:(bool)arg3;
+ (bool)isRangeNearbyExclusionKeyword:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 text:(id)arg2 limitToSurroundingText:(bool)arg3 language:(id)arg4;
+ (id)matchingKeywordResultsForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(bool)arg3;
+ (unsigned long long)numberOfMatchesForRegex:(id)arg1 inString:(id)arg2 needsToLowercase:(bool)arg3;
+ (id)regexPatternForLanguageID:(id)arg1 eventVocabularyArray:(id)arg2;
+ (id)regularExpressionWithKey:(id)arg1 generator:(id /* block */)arg2;

@end
