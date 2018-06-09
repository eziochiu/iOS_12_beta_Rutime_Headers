/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIVisualEffectViewCapturedState : NSObject {
    NSArray * _backgroundEffects;
    NSArray * _contentEffects;
    UIVisualEffect * _effect;
    bool  _restoreBackgroundEffects;
    bool  _restoreContentEffects;
    bool  _restoreEffect;
}

@property (nonatomic, retain) NSArray *backgroundEffects;
@property (nonatomic, retain) NSArray *contentEffects;
@property (nonatomic, retain) UIVisualEffect *effect;
@property (nonatomic) bool restoreBackgroundEffects;
@property (nonatomic) bool restoreContentEffects;
@property (nonatomic) bool restoreEffect;

- (void).cxx_destruct;
- (id)backgroundEffects;
- (id)contentEffects;
- (id)effect;
- (bool)restoreBackgroundEffects;
- (bool)restoreContentEffects;
- (bool)restoreEffect;
- (void)restoreStateForVisualEffectView:(id)arg1;
- (void)setBackgroundEffects:(id)arg1;
- (void)setContentEffects:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)setRestoreBackgroundEffects:(bool)arg1;
- (void)setRestoreContentEffects:(bool)arg1;
- (void)setRestoreEffect:(bool)arg1;

@end
