/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffectComponent : NSObject {
    NSString * _name;
    bool  _visible;
}

@property (retain) NSString *name;
@property bool visible;

- (id)_colorFromShapeEffectValue:(union { double x1; unsigned long long x2; struct _rgbcolor { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; } x3; short x4; unsigned int x5; })arg1;
- (void)dealloc;
- (unsigned int)effectType;
- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (id)name;
- (void)setName:(id)arg1;
- (void)setVisible:(bool)arg1;
- (bool)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;
- (bool)visible;

@end
