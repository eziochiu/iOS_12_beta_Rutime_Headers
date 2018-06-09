/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
 */

@interface CKTriple : NSObject <NSSecureCoding> {
    void value;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hashValue;
@property (nonatomic, readonly) NSString *object;
@property (nonatomic, readonly) NSString *predicate;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) long long weight;

+ (bool)supportsSecureCoding;

- (id /* block */).cxx_destruct;
- (id)description;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (long long)hashValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubject:(id)arg1 predicate:(id)arg2 object:(id)arg3 weight:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)object;
- (id)predicate;
- (id)subject;
- (long long)weight;

@end
