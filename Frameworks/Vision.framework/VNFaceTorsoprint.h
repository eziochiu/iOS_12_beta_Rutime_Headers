/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNFaceTorsoprint : VNEspressoModelImageprint {
    VNFaceprint * _faceprint;
    VNTorsoprint * _torsoprint;
}

@property (nonatomic, readonly) VNFaceprint *faceprint;
@property (nonatomic, readonly) VNTorsoprint *torsoprint;
@property (getter=isValidTorsoprint, nonatomic, readonly) bool validTorsoprint;

+ (id)codingTypesToCodingKeys;
+ (unsigned int)currentCodingVersion;
+ (unsigned long long)currentSerializationVersion;
+ (id)currentVersion;
+ (unsigned long long)serializationMagicNumber;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)computeDistance:(id)arg1 withDistanceFunction:(unsigned long long)arg2 error:(id*)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)faceprint;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceprint:(id)arg1 torsoPrint:(id)arg2 requestRevision:(unsigned long long)arg3;
- (bool)isValidTorsoprint;
- (id)torsoprint;

@end
