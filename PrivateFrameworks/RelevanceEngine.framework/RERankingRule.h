/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERankingRule : RERule <REIndentedDescription> {
    REComparisonCondition * _comparison;
    RECondition * _leftCondition;
    long long  _order;
    RECondition * _rightCondition;
}

@property (nonatomic, readonly) REComparisonCondition *comparison;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RECondition *leftCondition;
@property (nonatomic, readonly) long long order;
@property (nonatomic, readonly) RECondition *rightCondition;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)comparison;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)initWithLeftCondition:(id)arg1 rightCondition:(id)arg2 comparisonCondition:(id)arg3 order:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)leftCondition;
- (long long)order;
- (id)rightCondition;

@end
