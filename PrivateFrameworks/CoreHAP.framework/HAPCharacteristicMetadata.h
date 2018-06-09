/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPCharacteristicMetadata : HMFObject <NSCopying, NSSecureCoding> {
    HAPMetadataConstraints * _constraints;
    NSString * _format;
    NSString * _manufacturerDescription;
    NSString * _units;
}

@property (nonatomic, retain) HAPMetadataConstraints *constraints;
@property (nonatomic, retain) NSString *format;
@property (nonatomic, copy) NSString *manufacturerDescription;
@property (nonatomic, retain) NSString *units;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_generateValidConstraints:(id)arg1;
- (id)constraints;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)format;
- (id)initWithCoder:(id)arg1;
- (id)initWithConstraints:(id)arg1 description:(id)arg2 format:(id)arg3 units:(id)arg4;
- (bool)isEqualToCharacteristicMetadata:(id)arg1;
- (id)manufacturerDescription;
- (void)setConstraints:(id)arg1;
- (void)setFormat:(id)arg1;
- (void)setManufacturerDescription:(id)arg1;
- (void)setUnits:(id)arg1;
- (id)units;

@end
