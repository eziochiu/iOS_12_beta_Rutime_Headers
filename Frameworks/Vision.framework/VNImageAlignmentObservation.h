/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageAlignmentObservation : VNObservation {
    VNImageRegistrationSignature * _floatingImageSignature;
    VNImageRegistrationSignature * _referenceImageSignature;
}

@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } alignmentTransform;
@property (nonatomic, retain) VNImageRegistrationSignature *floatingImageSignature;
@property (nonatomic, retain) VNImageRegistrationSignature *referenceImageSignature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })alignmentTransform;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)floatingImageSignature;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)referenceImageSignature;
- (void)setAlignmentTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setFloatingImageSignature:(id)arg1;
- (void)setReferenceImageSignature:(id)arg1;

@end
