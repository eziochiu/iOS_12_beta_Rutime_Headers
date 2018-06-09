/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARWorldTrackingPoseData : NSObject <ARResultData, NSSecureCoding> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _cameraTransform;
    double  _timestamp;
    struct { 
        long long state; 
        long long reason; 
        bool majorRelocalization; 
        bool minorRelocalization; 
        bool poseGraphUpdated; 
        int vioTrackingState; 
    }  _trackingState;
    NSDictionary * _vioStateDetails;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _visionCameraTransform;
    long long  _worldMappingStatus;
}

@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } cameraTransform;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic) struct { long long x1; long long x2; bool x3; bool x4; bool x5; int x6; } trackingState;
@property (nonatomic, copy) NSDictionary *vioStateDetails;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } visionCameraTransform;
@property (nonatomic) long long worldMappingStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })cameraTransform;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setTrackingState:(struct { long long x1; long long x2; bool x3; bool x4; bool x5; int x6; })arg1;
- (void)setVioStateDetails:(id)arg1;
- (void)setVisionCameraTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setWorldMappingStatus:(long long)arg1;
- (double)timestamp;
- (struct { long long x1; long long x2; bool x3; bool x4; bool x5; int x6; })trackingState;
- (id)vioStateDetails;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })visionCameraTransform;
- (long long)worldMappingStatus;

@end
