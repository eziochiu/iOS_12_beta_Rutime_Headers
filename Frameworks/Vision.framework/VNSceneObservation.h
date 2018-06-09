/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSceneObservation : VNObservation {
    NSString * _sceneprintVersion;
    NSArray * _sceneprints;
}

@property (nonatomic, readonly, copy) NSString *sceneprintVersion;
@property (nonatomic, readonly) NSArray *sceneprints;

+ (id)sceneprintCurrentVersion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 sceneprints:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)sceneprintVersion;
- (id)sceneprints;

@end
