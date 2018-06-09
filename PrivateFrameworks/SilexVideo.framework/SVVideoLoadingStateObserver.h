/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoLoadingStateObserver : NSObject <SVVideoLoadingStateObserving> {
    NSError * _error;
    id /* block */  _failedBlock;
    id /* block */  _finishedBlock;
    <SVPlayerItemLoading> * _playerItemLoader;
    SVKeyValueObserver * _playerItemStatusObserver;
    id /* block */  _startBlock;
    unsigned long long  _state;
    NFStateMachine * _stateMachine;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSError *error;
@property (setter=onFailed:, nonatomic, copy) id /* block */ failedBlock;
@property (setter=onFinished:, nonatomic, copy) id /* block */ finishedBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVPlayerItemLoading> *playerItemLoader;
@property (nonatomic, retain) SVKeyValueObserver *playerItemStatusObserver;
@property (setter=onStart:, nonatomic, copy) id /* block */ startBlock;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) NFStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureStateWithPlayerItem:(id)arg1;
- (id)error;
- (id /* block */)failedBlock;
- (id /* block */)finishedBlock;
- (id)initWithPlayerItemLoader:(id)arg1;
- (void)onFailed:(id /* block */)arg1;
- (void)onFinished:(id /* block */)arg1;
- (void)onStart:(id /* block */)arg1;
- (id)playerItemLoader;
- (id)playerItemStatusObserver;
- (void)setError:(id)arg1;
- (void)setPlayerItemStatusObserver:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (id /* block */)startBlock;
- (unsigned long long)state;
- (id)stateMachine;

@end
