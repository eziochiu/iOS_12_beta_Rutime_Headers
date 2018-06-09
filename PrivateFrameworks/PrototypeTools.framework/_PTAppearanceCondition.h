/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface _PTAppearanceCondition : NSObject {
    NSString * _conditionKeyPath;
    NSPredicate * _conditionPredicate;
}

@property (nonatomic, retain) NSString *conditionKeyPath;
@property (nonatomic, retain) NSPredicate *conditionPredicate;

+ (id)appearanceConditionWithPredicate:(id)arg1;

- (void).cxx_destruct;
- (void)addKeyPathPrefix:(id)arg1;
- (id)conditionKeyPath;
- (id)conditionPredicate;
- (bool)evaluateWithSettings:(id)arg1;
- (void)setConditionKeyPath:(id)arg1;
- (void)setConditionPredicate:(id)arg1;

@end
