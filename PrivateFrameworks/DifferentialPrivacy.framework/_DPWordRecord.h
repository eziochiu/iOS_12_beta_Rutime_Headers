/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPWordRecord : NSObject <NSCopying, NSSecureCoding> {
    NSString * _word;
    NSNumber * _wordPosition;
}

@property (nonatomic, readonly, copy) NSString *word;
@property (nonatomic, readonly) NSNumber *wordPosition;

+ (id)bogusCharacter;
+ (id)sequenceAndFragmentsFrom:(id)arg1 fragmentLimit:(unsigned long long)arg2 fragmentWidth:(unsigned long long)arg3 puzzlePieceCount:(unsigned long long)arg4;
+ (bool)supportsSecureCoding;
+ (id)word:(id)arg1 atPosition:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithWord:(id)arg1 atPosition:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToWordRecord:(id)arg1;
- (id)sequenceWithoutPadding;
- (id)word;
- (id)wordPosition;

@end
