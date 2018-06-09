/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
 */

@interface DSIOHIDDevice : NSObject {
    struct __IOHIDDevice { } * _device;
    struct __IOHIDManager { } * _manager;
}

+ (id)deviceWithDeviceIdentifier:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;

- (id)_sharedSerialQueue;
- (void)dealloc;
- (id)initWithDeviceIdentifier:(struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })arg1;
- (id)serialNumber;
- (id)stringFromHIDReport:(long long)arg1;

@end
