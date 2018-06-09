/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureThermalMonitor : NSObject {
    float  _maxTorchLevel;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    int  _registrationToken;
    id /* block */  _thermalHandler;
    int  _thermalLevel;
    struct OpaqueFigSimpleMutex { } * _thermalNotificationLock;
}

@property (readonly) float maxTorchLevel;
@property (readonly) int thermalLevel;

+ (void)initialize;

- (void)_thermalNotification:(int)arg1;
- (void)dealloc;
- (id)init;
- (float)maxTorchLevel;
- (void)setThermalHandler:(id /* block */)arg1;
- (int)thermalLevel;

@end
