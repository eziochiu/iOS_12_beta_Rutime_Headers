/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlayer : AVPlayer {
    int  _audioMode;
    SVKeyValueObserver * _currentItemObserver;
    SVKeyValueObserver * _timeControlStatusObserver;
}

@property (nonatomic, readonly) int audioMode;
@property (nonatomic, retain) SVKeyValueObserver *currentItemObserver;
@property (nonatomic, retain) SVKeyValueObserver *timeControlStatusObserver;

- (void).cxx_destruct;
- (int)audioMode;
- (id)currentItemObserver;
- (void)dealloc;
- (id)initWithAudioMode:(int)arg1;
- (void)setCurrentItemObserver:(id)arg1;
- (void)setTimeControlStatusObserver:(id)arg1;
- (void)timeControlStatusChanged;
- (id)timeControlStatusObserver;

@end
