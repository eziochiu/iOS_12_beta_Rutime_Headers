/* made by EzioChiu.
 */

@protocol NTKZeusComplicationDisplay <NSObject>

@required

- (void)applyPalette:(NTKZeusColorPalette *)arg1;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(NTKZeusColorPalette *)arg2 toPalette:(NTKZeusColorPalette *)arg3;
- (NTKZeusColorPalette *)palette;
- (void)setStyle:(unsigned long long)arg1;
- (unsigned long long)style;

@end
