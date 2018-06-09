/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMIOSurfaceWrapper : NSObject {
    void * _surface;
}

@property (nonatomic, readonly) void*surface;

- (void)dealloc;
- (id)initWithIOSurface:(void*)arg1;
- (void*)surface;

@end
