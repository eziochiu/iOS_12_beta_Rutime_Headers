/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARImageDetectionResultData : NSObject <ARResultData, NSCopying, NSSecureCoding> {
    ARCamera * _currentCamera;
    NSArray * _detectedImages;
    bool  _detectionOnly;
    bool  _providesWorldTrackingCameraPose;
}

@property (nonatomic, copy) ARCamera *currentCamera;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *detectedImages;
@property (nonatomic) bool detectionOnly;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool providesWorldTrackingCameraPose;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentCamera;
- (id)detectedImages;
- (bool)detectionOnly;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)providesWorldTrackingCameraPose;
- (void)setCurrentCamera:(id)arg1;
- (void)setDetectedImages:(id)arg1;
- (void)setDetectionOnly:(bool)arg1;
- (void)setProvidesWorldTrackingCameraPose:(bool)arg1;

@end
