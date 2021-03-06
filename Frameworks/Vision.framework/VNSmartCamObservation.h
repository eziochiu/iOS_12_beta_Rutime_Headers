/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSmartCamObservation : VNObservation {
    NSString * _smartCamprintVersion;
    NSArray * _smartCamprints;
}

@property (nonatomic, readonly, copy) NSString *smartCamprintVersion;
@property (nonatomic, copy) NSArray *smartCamprints;

+ (id)observationWithSmartCamprints:(id)arg1;
+ (id)smartCamprintCurrentVersion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 smartCamprints:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setSmartCamprints:(id)arg1;
- (id)smartCamprintVersion;
- (id)smartCamprints;

@end
