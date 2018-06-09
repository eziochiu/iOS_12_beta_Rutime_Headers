/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarTimeStringServerCache : NSObject {
    IOSurface * _queue_currentIOSurface;
    unsigned int  _queue_currentIOSurfaceMachPort;
    IOSurface * _queue_previousIOSurface;
    NSString * _queue_timeString;
    UIStatusBarForegroundStyleAttributes * _styleAttributes;
}

@property (nonatomic, readonly) IOSurface *currentIOSurface;
@property (nonatomic, readonly) unsigned int currentIOSurfaceMachPort;
@property (nonatomic, copy) NSString *timeString;

- (void).cxx_destruct;
- (id)currentIOSurface;
- (unsigned int)currentIOSurfaceMachPort;
- (void)dealloc;
- (id)init;
- (void)setTimeString:(id)arg1;
- (id)timeString;

@end
