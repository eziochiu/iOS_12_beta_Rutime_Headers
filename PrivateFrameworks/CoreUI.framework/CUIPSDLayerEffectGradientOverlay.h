/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffectGradientOverlay : CUIPSDLayerEffectComponent {
    CUIPSDGradient * _gradient;
}

@property (retain) CUIPSDGradient *gradient;

- (void)dealloc;
- (unsigned int)effectType;
- (id)gradient;
- (id)init;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setGradient:(id)arg1;
- (bool)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;

@end
