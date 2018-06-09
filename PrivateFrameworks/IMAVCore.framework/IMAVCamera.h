/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVCamera : NSObject {
    id  _internalDevice;
}

@property (nonatomic, readonly) long long cameraStyle;
@property (nonatomic, readonly) bool hasShutter;
@property (nonatomic, readonly) bool isShutterOpen;
@property (nonatomic, readonly) bool isSuspended;
@property (nonatomic, readonly) bool isWideScreen;
@property (nonatomic, readonly, retain) NSString *name;
@property (nonatomic, readonly, retain) NSString *uniqueID;

- (id)_AVCamera;
- (id)_initWithAVCamera:(id)arg1;
- (long long)cameraStyle;
- (void)dealloc;
- (id)description;
- (bool)hasShutter;
- (id)init;
- (bool)isShutterOpen;
- (bool)isSuspended;
- (bool)isWideScreen;
- (id)name;
- (id)uniqueID;

@end