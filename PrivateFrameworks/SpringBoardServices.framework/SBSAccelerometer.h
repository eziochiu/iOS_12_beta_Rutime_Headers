/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSAccelerometer : NSObject <BKSAccelerometerDelegate> {
    BKSAccelerometer * _bksMirror;
    <SBSAccelerometerDelegate> * _delegate;
}

@property (nonatomic) bool accelerometerEventsEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBSAccelerometerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool orientationEventsEnabled;
@property (readonly) Class superclass;
@property (nonatomic) double updateInterval;
@property (nonatomic) float xThreshold;
@property (nonatomic) float yThreshold;
@property (nonatomic) float zThreshold;

- (void).cxx_destruct;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (bool)accelerometerEventsEnabled;
- (int)currentDeviceOrientation;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)orientationEventsEnabled;
- (void)setAccelerometerEventsEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOrientationEventsEnabled:(bool)arg1;
- (void)setUpdateInterval:(double)arg1;
- (void)setXThreshold:(float)arg1;
- (void)setYThreshold:(float)arg1;
- (void)setZThreshold:(float)arg1;
- (double)updateInterval;
- (float)xThreshold;
- (float)yThreshold;
- (float)zThreshold;

@end
