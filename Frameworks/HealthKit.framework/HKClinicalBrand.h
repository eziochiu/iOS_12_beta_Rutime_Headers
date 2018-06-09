/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKClinicalBrand : NSObject <NSCopying, NSSecureCoding> {
    NSString * _batchID;
    NSString * _externalID;
}

@property (nonatomic, readonly, copy) NSString *batchID;
@property (nonatomic, readonly, copy) NSString *externalID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)batchID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)externalID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalID:(id)arg1 batchID:(id)arg2;

@end
