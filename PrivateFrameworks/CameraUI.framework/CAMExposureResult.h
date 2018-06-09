/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMExposureResult : NSObject {
    bool  _adjustingExposure;
    bool  _deviceSupportsFocus;
    bool  _exposureDidEnd;
    bool  _exposureDidStart;
    long long  _exposureMode;
    float  _exposureTargetBias;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pointOfInterest;
}

@property (getter=isAdjustingExposure, nonatomic, readonly) bool adjustingExposure;
@property (nonatomic, readonly) bool deviceSupportsFocus;
@property (nonatomic, readonly) bool exposureDidEnd;
@property (nonatomic, readonly) bool exposureDidStart;
@property (nonatomic, readonly) long long exposureMode;
@property (nonatomic, readonly) float exposureTargetBias;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } pointOfInterest;

- (id)description;
- (bool)deviceSupportsFocus;
- (bool)exposureDidEnd;
- (bool)exposureDidStart;
- (long long)exposureMode;
- (float)exposureTargetBias;
- (id)initWithMode:(long long)arg1 pointOfInterest:(struct CGPoint { double x1; double x2; })arg2 exposureTargetBias:(float)arg3 adjusting:(bool)arg4 exposureDidStart:(bool)arg5 exposureDidEnd:(bool)arg6 deviceSupportsFocus:(bool)arg7;
- (bool)isAdjustingExposure;
- (struct CGPoint { double x1; double x2; })pointOfInterest;

@end
