/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPlaneAnchor : ARAnchor {
    long long  _alignment;
    void _center;
    void _extent;
    ARPlaneGeometry * _geometry;
    ARPatchGrid * _gridExtent;
    float  _uncertaintyAlongNormal;
    long long  _worldAlignmentRotation;
}

@property (nonatomic, readonly) long long alignment;
@property (nonatomic) void center;
@property (nonatomic) void extent;
@property (nonatomic, retain) ARPlaneGeometry *geometry;
@property (nonatomic, retain) ARPatchGrid *gridExtent;
@property (nonatomic) float uncertaintyAlongNormal;
@property (nonatomic) long long worldAlignmentRotation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_description:(bool)arg1;
- (id)_hitTestFromOrigin:(void *)arg1 withDirection:(void *)arg2 usingExtent:(void *)arg3 usingGeometry:(void *)arg4; // needs 4 arg types, found 2: bool, bool
- (long long)alignment;
- (void)center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugQuickLookObject;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)extent;
- (id)geometry;
- (id)gridExtent;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 alignment:(long long)arg3;
- (void)setCenter;
- (void)setExtent;
- (void)setGeometry:(id)arg1;
- (void)setGridExtent:(id)arg1;
- (void)setUncertaintyAlongNormal:(float)arg1;
- (void)setWorldAlignmentRotation:(long long)arg1;
- (float)uncertaintyAlongNormal;
- (long long)worldAlignmentRotation;

@end
