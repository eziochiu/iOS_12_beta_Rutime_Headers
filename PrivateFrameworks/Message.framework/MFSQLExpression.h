/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSQLExpression : NSObject {
    NSString * _expression;
}

@property (nonatomic, retain) NSString *expression;

+ (id)expressionWithString:(id)arg1;

- (void).cxx_destruct;
- (id)SQLExpression;
- (id)beginsWithString:(id)arg1;
- (id)containsString:(id)arg1;
- (id)doesNotContainsString:(id)arg1;
- (id)endsWithString:(id)arg1;
- (id)equalToExpresion:(id)arg1;
- (id)equalToString:(id)arg1;
- (id)expression;
- (id)initWithString:(id)arg1;
- (id)like:(id)arg1;
- (id)like:(id)arg1 escapeCharacter:(unsigned short)arg2;
- (id)notLike:(id)arg1;
- (id)notLike:(id)arg1 escapeCharacter:(unsigned short)arg2;
- (void)setExpression:(id)arg1;

@end
