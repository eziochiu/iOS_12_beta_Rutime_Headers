/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSSpeakerIdRecognizerFactory : NSObject <CSAssetManagerDelegate> {
    bool  _currentlyRetraining;
    NSObject<OS_dispatch_queue> * _stateSerialQueue;
}

@property (nonatomic) bool currentlyRetraining;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *stateSerialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)CSAssetManagerDidDownloadNewAsset:(id)arg1;
- (bool)currentlyRetraining;
- (id)init;
- (void)setCurrentlyRetraining:(bool)arg1;
- (void)setStateSerialQueue:(id)arg1;
- (id)speakerIdRecognizerWithContext:(id)arg1 delegate:(id)arg2;
- (id)stateSerialQueue;

@end
