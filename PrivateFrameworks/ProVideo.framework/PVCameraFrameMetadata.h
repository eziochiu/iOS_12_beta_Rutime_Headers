/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVCameraFrameMetadata : NSObject {
    long long  _cameraPosition;
    long long  _deviceOrientation;
    struct { 
        double x; 
        double y; 
        double z; 
        double w; 
    }  _orientation;
    double  _rollRadians;
}

@property (nonatomic, readonly) long long cameraPosition;
@property (nonatomic, readonly) long long deviceOrientation;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } orientation;
@property (nonatomic, readonly) double rollRadians;

+ (id)frameMetadata:(long long)arg1 :(struct { double x1; double x2; double x3; double x4; })arg2 :(double)arg3 :(long long)arg4;

- (long long)cameraPosition;
- (id)description;
- (long long)deviceOrientation;
- (struct { double x1; double x2; double x3; double x4; })orientation;
- (double)rollRadians;

@end
