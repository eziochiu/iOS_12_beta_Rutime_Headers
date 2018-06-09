/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNObservation : NSObject <NSCopying, NSSecureCoding, VNObservationsCacheKeyProviding, VNRequestRevisionProviding> {
    float  _confidence;
    unsigned long long  _requestRevision;
    NSUUID * _uuid;
}

@property (nonatomic) float confidence;
@property (nonatomic, readonly) unsigned long long requestRevision;
@property (setter=setUUID:, nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)observationsCacheKey;
- (unsigned long long)requestRevision;
- (void)setConfidence:(float)arg1;
- (void)setUUID:(id)arg1;
- (id)uuid;

@end
