/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISLivePhotoVitalityFilter : NSObject {
    bool  __shouldUpdateOutput;
    bool  _isPerformingInputChanges;
    id /* block */  _outputChangeHandler;
    <ISVitalitySettings> * _settings;
    long long  _state;
}

@property (setter=_setShouldUpdateOutput:, nonatomic) bool _shouldUpdateOutput;
@property (setter=_setPerformingInputChanges:, nonatomic) bool isPerformingInputChanges;
@property (nonatomic, copy) id /* block */ outputChangeHandler;
@property (nonatomic, readonly) <ISVitalitySettings> *settings;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (void)_setPerformingInputChanges:(bool)arg1;
- (void)_setShouldUpdateOutput:(bool)arg1;
- (bool)_shouldUpdateOutput;
- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)invalidateOutput;
- (bool)isPerformingInputChanges;
- (id /* block */)outputChangeHandler;
- (void)performInputChanges:(id /* block */)arg1;
- (void)setOutputChangeHandler:(id /* block */)arg1;
- (void)setState:(long long)arg1;
- (id)settings;
- (long long)state;
- (void)updateOutput;

@end
