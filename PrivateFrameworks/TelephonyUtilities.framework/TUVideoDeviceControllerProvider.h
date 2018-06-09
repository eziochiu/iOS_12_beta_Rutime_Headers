/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUVideoDeviceControllerProvider : NSObject <AVConferencePreviewClientDelegate, TUVideoDeviceControllerProvider, TUVideoEffectsProvider> {
    TUVideoEffect * _currentVideoEffect;
    <TUVideoDeviceControllerProviderDelegate> * _delegate;
    AVConferencePreview * _preview;
}

@property (nonatomic, readonly) NSArray *availableVideoEffects;
@property (nonatomic, retain) TUVideoEffect *currentVideoEffect;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUVideoDeviceControllerProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *inputDevices;
@property (nonatomic, readonly, copy) NSString *localCameraUID;
@property (nonatomic, copy) VideoAttributes *localVideoAttributes;
@property (nonatomic, readonly) AVConferencePreview *preview;
@property (getter=isPreviewRunning, nonatomic, readonly) bool previewRunning;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)availableVideoEffects;
- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)cameraDidBecomeAvailableForUniqueID:(id)arg1;
- (void)captureDevicesChanged:(id)arg1;
- (id)currentVideoEffect;
- (id)delegate;
- (void)didChangeLocalVideoAttributes:(id)arg1;
- (void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2;
- (void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1;
- (void)didStartPreview;
- (void)didStopPreview;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (id)init;
- (id)inputDevices;
- (bool)isPreviewRunning;
- (id)localCameraUID;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (id)localVideoAttributes;
- (id)localVideoLayer:(bool)arg1;
- (void)pausePreview;
- (id)preview;
- (void)setCurrentVideoEffect:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocalCameraWithUID:(id)arg1;
- (void)setLocalScreenAttributes:(id)arg1;
- (void)setLocalVideoAttributes:(id)arg1;
- (void)setLocalVideoLayer:(id)arg1 front:(bool)arg2;
- (void)startPreview;
- (void)stopPreview;
- (id)thumbnailImageForVideoEffectName:(id)arg1;

@end
