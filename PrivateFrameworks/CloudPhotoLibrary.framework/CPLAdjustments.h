/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLAdjustments : NSObject <NSCopying, NSSecureCoding> {
    NSString * _adjustmentCompoundVersion;
    NSString * _adjustmentCreatorCode;
    CPLResource * _adjustmentData;
    unsigned long long  _adjustmentRenderTypes;
    unsigned long long  _adjustmentSourceType;
    NSString * _adjustmentType;
    NSString * _creatorCode;
    NSString * _otherAdjustmentsFingerprint;
    NSString * _similarToOriginalAdjustmentsFingerprint;
    NSData * _simpleAdjustmentData;
}

@property (nonatomic, copy) NSString *adjustmentCompoundVersion;
@property (nonatomic, copy) NSString *adjustmentCreatorCode;
@property (nonatomic, retain) CPLResource *adjustmentData;
@property (nonatomic) unsigned long long adjustmentRenderTypes;
@property (nonatomic) unsigned long long adjustmentSourceType;
@property (nonatomic, copy) NSString *adjustmentType;
@property (nonatomic, copy) NSString *creatorCode;
@property (nonatomic, copy) NSString *otherAdjustmentsFingerprint;
@property (nonatomic, copy) NSString *similarToOriginalAdjustmentsFingerprint;
@property (nonatomic, retain) NSData *simpleAdjustmentData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)adjustmentCompoundVersion;
- (id)adjustmentCreatorCode;
- (id)adjustmentData;
- (unsigned long long)adjustmentRenderTypes;
- (id)adjustmentSimpleDescription;
- (unsigned long long)adjustmentSourceType;
- (id)adjustmentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creatorCode;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)otherAdjustmentsFingerprint;
- (void)setAdjustmentCompoundVersion:(id)arg1;
- (void)setAdjustmentCreatorCode:(id)arg1;
- (void)setAdjustmentData:(id)arg1;
- (void)setAdjustmentRenderTypes:(unsigned long long)arg1;
- (void)setAdjustmentSourceType:(unsigned long long)arg1;
- (void)setAdjustmentType:(id)arg1;
- (void)setCreatorCode:(id)arg1;
- (void)setOtherAdjustmentsFingerprint:(id)arg1;
- (void)setSimilarToOriginalAdjustmentsFingerprint:(id)arg1;
- (void)setSimpleAdjustmentData:(id)arg1;
- (id)similarToOriginalAdjustmentsFingerprint;
- (id)simpleAdjustmentData;

@end
