/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVideoPlaybackProgressObserverFactory : NSObject <SVVideoPlaybackProgressObserverFactory> {
    <SVVideoDurationObserverFactory> * _durationObserverFactory;
    <SVVideoPeriodicTimeObserverFactory> * _periodicTimeObserverFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SVVideoDurationObserverFactory> *durationObserverFactory;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SVVideoPeriodicTimeObserverFactory> *periodicTimeObserverFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createPlaybackProgressObserverForVideo:(id)arg1;
- (id)durationObserverFactory;
- (id)initWithPeriodicTimeObserverFactory:(id)arg1 durationObserverFactory:(id)arg2;
- (id)periodicTimeObserverFactory;

@end
