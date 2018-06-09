/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSAccelerometer : NSObject {
    struct __CFRunLoop { } * _accelerometerEventsRunLoop;
    struct __CFRunLoopSource { } * _accelerometerEventsSource;
    <BKSAccelerometerDelegate> * _delegate;
    NSLock * _lock;
    int  _orientationCheckToken;
    bool  _orientationEventsEnabled;
    NSThread * _orientationEventsThread;
    int  _orientationNotificationsToken;
    unsigned int  _orientationPort;
    bool  _passiveOrientationEvents;
    double  _updateInterval;
    float  _xThreshold;
    float  _yThreshold;
    float  _zThreshold;
}

@property (nonatomic) bool accelerometerEventsEnabled;
@property (nonatomic) <BKSAccelerometerDelegate> *delegate;
@property (nonatomic) bool orientationEventsEnabled;
@property (nonatomic) bool passiveOrientationEvents;
@property (nonatomic) double updateInterval;
@property (nonatomic) float xThreshold;
@property (nonatomic) float yThreshold;
@property (nonatomic) float zThreshold;

- (void).cxx_destruct;
- (void)_checkIn;
- (void)_checkOut;
- (void)_orientationDidChange;
- (id)_orientationEventsThread;
- (void)_serverWasRestarted;
- (void)_updateOrientationServer;
- (bool)accelerometerEventsEnabled;
- (int)currentDeviceOrientation;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)orientationEventsEnabled;
- (bool)passiveOrientationEvents;
- (void)setAccelerometerEventsEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOrientationEventsEnabled:(bool)arg1;
- (void)setPassiveOrientationEvents:(bool)arg1;
- (void)setUpdateInterval:(double)arg1;
- (void)setXThreshold:(float)arg1;
- (void)setYThreshold:(float)arg1;
- (void)setZThreshold:(float)arg1;
- (double)updateInterval;
- (float)xThreshold;
- (float)yThreshold;
- (float)zThreshold;

@end
