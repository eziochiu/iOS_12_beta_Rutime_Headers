/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTFormulaTokenContext : NSObject {
    unsigned long long  mArgumentIndex;
    TSTExpressionNode * mExpressionNode;
    unsigned long long  mParenNestingLevel;
}

@property (nonatomic, readonly) unsigned long long argumentIndex;
@property (nonatomic, readonly) TSTExpressionNode *expressionNode;
@property (nonatomic, readonly) unsigned long long parenNestingLevel;

+ (id)tokenContextWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned long long)arg2;
+ (id)tokenContextWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned long long)arg2 argumentIndex:(unsigned long long)arg3;

- (unsigned long long)argumentIndex;
- (void)dealloc;
- (id)debugDescription;
- (id)expressionNode;
- (unsigned long long)hash;
- (id)init;
- (id)initWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned long long)arg2;
- (id)initWithExpressionNode:(id)arg1 parenNestingLevel:(unsigned long long)arg2 argumentIndex:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)parenNestingLevel;

@end
