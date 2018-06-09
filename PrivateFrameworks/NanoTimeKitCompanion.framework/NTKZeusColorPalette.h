/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKZeusColorPalette : NSObject {
    UIColor * _backgroundColor;
    unsigned long long  _bleed;
    UIColor * _complicationColor;
    UIColor * _dialColor;
    unsigned long long  _faceColor;
    UIColor * _handInlayColor;
    UIColor * _hourHandColor;
    UIColor * _minuteHandColor;
    double  _secondHandAlpha;
    UIColor * _secondHandColor;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) unsigned long long bleed;
@property (nonatomic, readonly) UIColor *complicationColor;
@property (nonatomic, readonly) UIColor *dialColor;
@property (nonatomic, readonly) UIColor *handInlayColor;
@property (nonatomic, readonly) UIColor *hourHandColor;
@property (nonatomic, readonly) UIColor *minuteHandColor;
@property (nonatomic, readonly) double secondHandAlpha;
@property (nonatomic, readonly) UIColor *secondHandColor;

+ (id)orangeColor;
+ (id)paletteForFaceColor:(unsigned long long)arg1;
+ (id)silverColor;

- (void).cxx_destruct;
- (id)backgroundColor;
- (unsigned long long)bleed;
- (id)complicationColor;
- (id)dialColor;
- (id)handInlayColor;
- (id)hourHandColor;
- (id)initWithFaceColor:(unsigned long long)arg1;
- (id)minuteHandColor;
- (double)secondHandAlpha;
- (id)secondHandColor;

@end
