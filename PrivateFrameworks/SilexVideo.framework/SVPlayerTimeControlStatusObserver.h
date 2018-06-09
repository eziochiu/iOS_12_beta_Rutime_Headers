/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVPlayerTimeControlStatusObserver : NSObject <SVPlayerTimeControlStatusObserving> {
    SVPlayer * _player;
    long long  _timeControlStatus;
    SVKeyValueObserver * _timeControlStatusObserver;
    id /* block */  changeBlock;
}

@property (setter=onChange:, nonatomic, copy) id /* block */ changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SVPlayer *player;
@property (readonly) Class superclass;
@property (nonatomic) long long timeControlStatus;
@property (nonatomic, readonly) SVKeyValueObserver *timeControlStatusObserver;

- (void).cxx_destruct;
- (id /* block */)changeBlock;
- (id)initWithPlayer:(id)arg1;
- (void)onChange:(id /* block */)arg1;
- (id)player;
- (void)setTimeControlStatus:(long long)arg1;
- (long long)timeControlStatus;
- (id)timeControlStatusObserver;

@end
