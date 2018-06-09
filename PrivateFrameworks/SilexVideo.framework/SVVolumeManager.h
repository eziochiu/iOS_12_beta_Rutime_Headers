/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

@interface SVVolumeManager : NSObject <SVVideoTransitionObserver> {
    <SVVideoVolumeObserving> * _volumeObserver;
    <SVVideoVolumeObserverFactory> * _volumeObserverFactory;
    <SVVolumeReporting> * _volumeReporter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SVVideoVolumeObserving> *volumeObserver;
@property (nonatomic, readonly) <SVVideoVolumeObserverFactory> *volumeObserverFactory;
@property (nonatomic, readonly) <SVVolumeReporting> *volumeReporter;

- (void).cxx_destruct;
- (id)initWithVolumeReporter:(id)arg1 volumeObserverFactory:(id)arg2;
- (void)setVolumeObserver:(id)arg1;
- (id)volumeObserver;
- (id)volumeObserverFactory;
- (id)volumeReporter;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
