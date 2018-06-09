/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARImageDetectionResult : NSObject <NSCopying, NSSecureCoding> {
    ARReferenceImage * _referenceImage;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _visionTransform;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _worldTrackingCameraTransformAtDetection;
}

@property (nonatomic, retain) ARReferenceImage *referenceImage;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } visionTransform;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } worldTrackingCameraTransformAtDetection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)referenceImage;
- (void)setReferenceImage:(id)arg1;
- (void)setVisionTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setWorldTrackingCameraTransformAtDetection:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })visionTransform;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })worldTrackingCameraTransformAtDetection;

@end
