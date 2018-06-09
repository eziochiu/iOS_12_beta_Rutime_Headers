/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RECondition : NSObject <NSCopying, REIndentedDescription>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)andConditions:(id)arg1;
+ (id)conditionForFeature:(id)arg1 hasBoolValue:(bool)arg2;
+ (id)conditionForFeature:(id)arg1 hasIntegerValue:(long long)arg2;
+ (id)conditionForFeature:(id)arg1 hasValue:(id)arg2;
+ (id)conditionForFeature:(id)arg1 relation:(long long)arg2 feature:(id)arg3;
+ (id)conditionForFeature:(id)arg1 relation:(long long)arg2 floatValue:(float)arg3;
+ (id)conditionForFeature:(id)arg1 relation:(long long)arg2 integerValue:(long long)arg3;
+ (id)conditionHasValueForFeature:(id)arg1;
+ (id)falseCondition;
+ (id)notCondition:(id)arg1;
+ (id)orConditions:(id)arg1;
+ (id)trueCondition;

- (bool)_acceptsFeatureMap:(id)arg1;
- (bool)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2;
- (id)_dependentFeatures;
- (id)_notCondition;
- (bool)_requiresTwoFeatures;
- (bool)_validForRanking;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(unsigned long long)arg1;

@end