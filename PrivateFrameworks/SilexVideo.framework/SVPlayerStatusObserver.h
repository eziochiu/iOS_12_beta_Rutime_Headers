/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlayerStatusObserver : NSObject <SVPlayerStatusObserving> {
    NSError * _error;
    SVPlayer * _player;
    long long  _status;
    SVKeyValueObserver * _statusObserver;
    id /* block */  changeBlock;
}

@property (setter=onChange:, nonatomic, copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SVPlayer *player;
@property (nonatomic) long long status;
@property (nonatomic, readonly) SVKeyValueObserver *statusObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)changeBlock;
- (id)error;
- (id)initWithPlayer:(id)arg1;
- (void)onChange:(id /* block */)arg1;
- (id)player;
- (void)setStatus:(long long)arg1;
- (long long)status;
- (id)statusObserver;

@end
