/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PURepeater : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _queue;
    double  _timeInterval;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double timeInterval;

- (void).cxx_destruct;
- (void)_fire;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (void)setTimeInterval:(double)arg1;
- (void)start;
- (void)stop;
- (double)timeInterval;

@end
