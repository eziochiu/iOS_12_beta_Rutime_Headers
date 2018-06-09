/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassAutomaticSelectionCriterion : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _TCIs;
    bool  _supportsExpress;
    long long  _technologyType;
    NSString * _type;
}

@property (nonatomic, copy) NSSet *TCIs;
@property (nonatomic) bool supportsExpress;
@property (nonatomic) long long technologyType;
@property (nonatomic, copy) NSString *type;

+ (id)criterionForExpressMode:(id)arg1;
+ (id)expressModeForCriterion:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)TCIs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSupportsExpress:(bool)arg1;
- (void)setTCIs:(id)arg1;
- (void)setTechnologyType:(long long)arg1;
- (void)setType:(id)arg1;
- (bool)supportsExpress;
- (long long)technologyType;
- (id)type;

@end
