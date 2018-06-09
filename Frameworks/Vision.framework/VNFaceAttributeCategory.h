/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceAttributeCategory : NSObject <NSCopying, NSSecureCoding, VNObservationsCacheKeyProviding, VNRequestRevisionProviding> {
    NSArray * _allLabelsWithConfidences;
    VNClassificationObservation * _mostLikelyLabel;
    unsigned long long  _requestRevision;
}

@property (nonatomic, copy) NSArray *allLabelsWithConfidences;
@property (nonatomic, copy) VNClassificationObservation *label;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allLabelsWithConfidences;
- (void)computeLabel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)observationsCacheKey;
- (unsigned long long)requestRevision;
- (void)setAllLabelsWithConfidences:(id)arg1;
- (void)setLabel:(id)arg1;

@end
