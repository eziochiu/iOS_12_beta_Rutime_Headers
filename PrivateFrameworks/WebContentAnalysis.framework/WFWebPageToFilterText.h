/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

@interface WFWebPageToFilterText : WFWebPageDecorator

- (id)URLFuzzyForFilter;
- (id)URLFuzzyWithWordLength:(int)arg1;
- (bool)isWorthAnalyzingWithEvidence:(int*)arg1 message:(id*)arg2;
- (id)rawPlainText;
- (bool)selfRestricted;

@end
