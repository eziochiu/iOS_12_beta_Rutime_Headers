/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoLoadingProgressObserverFactory : NSObject <SVVideoLoadingProgressObserverFactory> {
    <SVVideoDurationObserverFactory> * _durationObserverFactory;
    <SVPlayerItemObserverFactory> * _playerItemObserverFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SVVideoDurationObserverFactory> *durationObserverFactory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVPlayerItemObserverFactory> *playerItemObserverFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createLoadingProgressObserverForVideo:(id)arg1;
- (id)durationObserverFactory;
- (id)initWithPlayerItemObserverFactory:(id)arg1 durationObserverFactory:(id)arg2;
- (id)playerItemObserverFactory;

@end
