/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface _RETrueConstantComparisonCondition : REComparisonCondition

+ (id)sharedInstance;

- (bool)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2;
- (id)_notCondition;
- (bool)_validForRanking;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
