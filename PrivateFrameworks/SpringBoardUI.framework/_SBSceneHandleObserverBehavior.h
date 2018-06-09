/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface _SBSceneHandleObserverBehavior : NSObject {
    bool  _didCreateScene;
    bool  _didDestroyScene;
    bool  _didUpdateClientSettingsWithDiff;
    bool  _didUpdateContentState;
    bool  _didUpdatePairingStatusForExternalSceneIdentifiers;
    bool  _didUpdateSettingsWithDiff;
    <SBSceneHandleObserver> * _observer;
}

@property (nonatomic) bool didCreateScene;
@property (nonatomic) bool didDestroyScene;
@property (nonatomic) bool didUpdateClientSettingsWithDiff;
@property (nonatomic) bool didUpdateContentState;
@property (nonatomic) bool didUpdatePairingStatusForExternalSceneIdentifiers;
@property (nonatomic) bool didUpdateSettingsWithDiff;
@property (nonatomic, readonly) <SBSceneHandleObserver> *observer;

+ (id)behaviorFromObserver:(id)arg1;

- (void).cxx_destruct;
- (bool)didCreateScene;
- (bool)didDestroyScene;
- (bool)didUpdateClientSettingsWithDiff;
- (bool)didUpdateContentState;
- (bool)didUpdatePairingStatusForExternalSceneIdentifiers;
- (bool)didUpdateSettingsWithDiff;
- (id)initWithObserver:(id)arg1;
- (id)observer;
- (void)setDidCreateScene:(bool)arg1;
- (void)setDidDestroyScene:(bool)arg1;
- (void)setDidUpdateClientSettingsWithDiff:(bool)arg1;
- (void)setDidUpdateContentState:(bool)arg1;
- (void)setDidUpdatePairingStatusForExternalSceneIdentifiers:(bool)arg1;
- (void)setDidUpdateSettingsWithDiff:(bool)arg1;

@end
