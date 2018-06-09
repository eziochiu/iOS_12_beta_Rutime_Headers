/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REFilteringRule : RERule <REIndentedDescription> {
    RECondition * _condition;
    unsigned long long  _type;
}

@property (nonatomic, readonly) RECondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)initWithCondition:(id)arg1;
- (id)initWithCondition:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
