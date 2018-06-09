/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFDeviceBlockTimer : NSObject {
    <SBFBlockStatusProvider> * _blockStatusProvider;
    bool  _enabled;
    id /* block */  _handler;
    NSString * _subtitleText;
    NSTimer * _timer;
    NSString * _titleText;
}

@property (setter=_setBlockStatusProvider:, nonatomic, retain) <SBFBlockStatusProvider> *blockStatusProvider;
@property (getter=_isEnabled, setter=_setEnabled:, nonatomic) bool enabled;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, copy) NSString *subtitleText;
@property (setter=_setTimer:, nonatomic, retain) NSTimer *timer;
@property (nonatomic, copy) NSString *titleText;

- (void).cxx_destruct;
- (void)_clearTimer;
- (bool)_isEnabled;
- (void)_scheduleTimerIfNecessaryAndUpdateState;
- (void)_setBlockStatusProvider:(id)arg1;
- (void)_setEnabled:(bool)arg1;
- (void)_setTimer:(id)arg1;
- (id)blockStatusProvider;
- (void)dealloc;
- (id /* block */)handler;
- (id)initWithDeviceBlockStatusProvider:(id)arg1;
- (void)invalidate;
- (void)setHandler:(id /* block */)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)start;
- (id)subtitleText;
- (id)timer;
- (id)titleText;

@end
