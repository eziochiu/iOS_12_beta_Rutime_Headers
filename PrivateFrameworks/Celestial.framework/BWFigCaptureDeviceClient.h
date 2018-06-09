/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFigCaptureDeviceClient : NSObject {
    int  _clientID;
    id /* block */  _deviceAvailabilityChangedHandler;
    int  _pid;
}

@property (nonatomic, readonly) int clientID;
@property (nonatomic, readonly) id /* block */ deviceAvailabilityChangedHandler;
@property (nonatomic, readonly) int pid;

+ (id)deviceClientWithPID:(int)arg1 clientIDOut:(int*)arg2 deviceAvailabilityChangedHandler:(id /* block */)arg3;

- (int)clientID;
- (void)dealloc;
- (id)description;
- (id /* block */)deviceAvailabilityChangedHandler;
- (id)initWithPID:(int)arg1 deviceAvailabilityChangedHandler:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (int)pid;

@end
