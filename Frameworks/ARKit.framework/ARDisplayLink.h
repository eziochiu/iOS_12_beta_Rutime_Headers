/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARDisplayLink : NSObject {
    double  _actualVsyncOffset;
    id /* block */  _callback;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    CADisplayLink * _displayLink;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _preferredFramesPerSecond;
    ARRunLoop * _runloop;
    double  _vsyncOffset;
}

@property long long preferredFramesPerSecond;
@property double vsyncOffset;

- (void).cxx_destruct;
- (void)_recomputeActualVsyncOffsetWithVsyncOffset:(double)arg1 preferredFramesPerSecond:(long long)arg2;
- (void)displayLinkCallback:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1 preferredFramesPerSecond:(long long)arg2 callback:(id /* block */)arg3;
- (void)invalidate;
- (long long)preferredFramesPerSecond;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setVsyncOffset:(double)arg1;
- (double)vsyncOffset;

@end
