/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNumberFilter : PXObservable <PXMutableNumberFilter> {
    double  _input;
    double  _lastTime;
    struct { 
        bool output; 
    }  _needsUpdateFlags;
    double  _output;
    double  _time;
}

@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double input;
@property (nonatomic, readonly) double lastTime;
@property (setter=_setOutput:, nonatomic) double output;
@property (readonly) Class superclass;
@property (nonatomic) double time;

- (void)_invalidateOutput;
- (bool)_needsUpdate;
- (void)_setLastTime:(double)arg1;
- (void)_setNeedsUpdate;
- (void)_setOutput:(double)arg1;
- (void)_updateIfNeeded;
- (void)_updateOutputIfNeeded;
- (double)currentTime;
- (void)didPerformChanges;
- (id)init;
- (id)initWithInput:(double)arg1;
- (double)initialOutputForInput:(double)arg1;
- (double)input;
- (void)invalidateOutput;
- (double)lastTime;
- (id)mutableChangeObject;
- (double)output;
- (void)performChanges:(id /* block */)arg1;
- (void)setInput:(double)arg1;
- (void)setTime:(double)arg1;
- (double)time;
- (double)updatedOutput;

@end
