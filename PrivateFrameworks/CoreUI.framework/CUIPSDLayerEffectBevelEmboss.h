/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffectBevelEmboss : CUIPSDLayerEffectComponent {
    unsigned long long  _altitude;
    short  _angle;
    unsigned long long  _blurSize;
    unsigned int  _direction;
    int  _highlightBlendMode;
    CUIColor * _highlightColor;
    double  _highlightOpacity;
    int  _shadowBlendMode;
    CUIColor * _shadowColor;
    double  _shadowOpacity;
    unsigned long long  _softenSize;
}

@property unsigned long long altitude;
@property short angle;
@property unsigned long long blurSize;
@property unsigned int direction;
@property int highlightBlendMode;
@property (retain) CUIColor *highlightColor;
@property double highlightOpacity;
@property int shadowBlendMode;
@property (retain) CUIColor *shadowColor;
@property double shadowOpacity;
@property unsigned long long softenSize;

- (unsigned long long)altitude;
- (short)angle;
- (unsigned long long)blurSize;
- (void)dealloc;
- (id)description;
- (unsigned int)direction;
- (unsigned int)effectType;
- (int)highlightBlendMode;
- (id)highlightColor;
- (double)highlightOpacity;
- (id)init;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)setAltitude:(unsigned long long)arg1;
- (void)setAngle:(short)arg1;
- (void)setBlurSize:(unsigned long long)arg1;
- (void)setDirection:(unsigned int)arg1;
- (void)setHighlightBlendMode:(int)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlightOpacity:(double)arg1;
- (void)setShadowBlendMode:(int)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setSoftenSize:(unsigned long long)arg1;
- (int)shadowBlendMode;
- (id)shadowColor;
- (double)shadowOpacity;
- (unsigned long long)softenSize;
- (bool)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;

@end
