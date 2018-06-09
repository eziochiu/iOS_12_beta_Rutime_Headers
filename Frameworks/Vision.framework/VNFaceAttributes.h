/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceAttributes : NSObject <NSCopying, NSSecureCoding, VNObservationsCacheKeyProviding, VNRequestRevisionProviding> {
    VNFaceAttributeCategory * _ageCategory;
    VNFaceAttributeCategory * _baldCategory;
    VNFaceAttributeCategory * _eyesCategory;
    VNFaceAttributeCategory * _faceHairCategory;
    VNFaceAttributeCategory * _genderCategory;
    VNFaceAttributeCategory * _glassesCategory;
    VNFaceAttributeCategory * _hairColorCategory;
    unsigned long long  _requestRevision;
    VNFaceAttributeCategory * _smilingCategory;
}

@property (nonatomic, copy) VNFaceAttributeCategory *ageCategory;
@property (nonatomic, copy) VNFaceAttributeCategory *baldCategory;
@property (nonatomic, copy) VNFaceAttributeCategory *eyesCategory;
@property (nonatomic, copy) VNFaceAttributeCategory *faceHairCategory;
@property (nonatomic, copy) VNFaceAttributeCategory *genderCategory;
@property (nonatomic, copy) VNFaceAttributeCategory *glassesCategory;
@property (nonatomic, copy) VNFaceAttributeCategory *hairColorCategory;
@property (nonatomic, readonly) unsigned long long requestRevision;
@property (nonatomic, copy) VNFaceAttributeCategory *smilingCategory;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ageCategory;
- (id)baldCategory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)eyesCategory;
- (id)faceHairCategory;
- (id)genderCategory;
- (id)glassesCategory;
- (id)hairColorCategory;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)observationsCacheKey;
- (unsigned long long)requestRevision;
- (void)setAgeCategory:(id)arg1;
- (void)setBaldCategory:(id)arg1;
- (void)setEyesCategory:(id)arg1;
- (void)setFaceHairCategory:(id)arg1;
- (void)setGenderCategory:(id)arg1;
- (void)setGlassesCategory:(id)arg1;
- (void)setHairColorCategory:(id)arg1;
- (void)setSmilingCategory:(id)arg1;
- (id)smilingCategory;

@end
