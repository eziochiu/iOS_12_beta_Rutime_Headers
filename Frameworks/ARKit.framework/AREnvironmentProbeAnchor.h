/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface AREnvironmentProbeAnchor : ARAnchor {
    <MTLTexture> * _environmentTexture;
    void _extent;
    NSUUID * _trackedPlaneIdentifier;
}

@property (nonatomic, retain) <MTLTexture> *environmentTexture;
@property (nonatomic, readonly) void extent;
@property (nonatomic, retain) NSUUID *trackedPlaneIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)environmentTexture;
- (void)extent;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)initWithIdentifier:(void *)arg1 transform:(void *)arg2 extent:(void *)arg3; // needs 3 arg types, found 2: id, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (id)initWithName:(void *)arg1 transform:(void *)arg2 extent:(void *)arg3; // needs 3 arg types, found 2: id, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (id)initWithTransform:(void *)arg1 extent:(void *)arg2; // needs 2 arg types, found 1: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (void)setEnvironmentTexture:(id)arg1;
- (void)setTrackedPlaneIdentifier:(id)arg1;
- (id)trackedPlaneIdentifier;

@end
