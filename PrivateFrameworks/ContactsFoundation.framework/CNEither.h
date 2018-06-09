/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNEither : NSObject <NSSecureCoding> {
    CNPair * _pair;
}

@property (nonatomic, readonly) bool isLeft;
@property (nonatomic, readonly) bool isRight;
@property (nonatomic, readonly) id left;
@property (nonatomic, retain) CNPair *pair;
@property (nonatomic, readonly) id right;

+ (id)eitherWithBlock:(id /* block */)arg1;
+ (id)eitherWithBool:(bool)arg1 error:(id)arg2;
+ (id)eitherWithLeft:(id)arg1;
+ (id)eitherWithLeft:(id)arg1 right:(id)arg2;
+ (id)eitherWithRight:(id)arg1;
+ (id)firstLeftInLazyChain:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLeft:(id)arg1 right:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isLeft;
- (bool)isRight;
- (id)left;
- (id)pair;
- (id)right;
- (void)setPair:(id)arg1;

@end
