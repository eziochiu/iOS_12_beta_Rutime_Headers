/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARWorldTrackingReferenceAnchorData : NSObject <ARResultData, NSSecureCoding> {
    NSArray * _anchorIdentifiers;
    double  _timestamp;
    NSData * _visionTransformData;
}

@property (nonatomic, readonly) NSArray *anchorIdentifiers;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*anchorVisionTransforms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorIdentifiers;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)anchorVisionTransforms;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAnchorPosesDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
