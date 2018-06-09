/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARODTResult : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraTransformAtDetection;
    unsigned long long  _detectedObjectID;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _visionTransform;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraTransformAtDetection;
@property (nonatomic) unsigned long long detectedObjectID;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } visionTransform;

- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransformAtDetection;
- (unsigned long long)detectedObjectID;
- (void)setCameraTransformAtDetection:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setDetectedObjectID:(unsigned long long)arg1;
- (void)setVisionTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })visionTransform;

@end
