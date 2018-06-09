/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKVictoryColorPalette : NSObject {
    UIColor * _analogComplicationsColor;
    UIColor * _analogDotColor;
    UIColor * _digitalComplicationsColor;
    UIColor * _digitalComplicationsPlatterColor;
    UIColor * _handInlayColor;
    UIColor * _handsColor;
    bool  _hasWhiteElements;
    UIColor * _logoColor;
    UIColor * _numbersColor;
    UIColor * _platterColor;
    UIColor * _secondHandColor;
}

@property (nonatomic, readonly) UIColor *analogComplicationsColor;
@property (nonatomic, readonly) UIColor *analogDotColor;
@property (nonatomic, readonly) UIColor *digitalComplicationsColor;
@property (nonatomic, readonly) UIColor *digitalComplicationsPlatterColor;
@property (nonatomic, readonly) UIColor *handInlayColor;
@property (nonatomic, readonly) UIColor *handsColor;
@property (nonatomic, readonly) bool hasWhiteElements;
@property (nonatomic, readonly) UIColor *logoColor;
@property (nonatomic, readonly) UIColor *numbersColor;
@property (nonatomic, readonly) UIColor *platterColor;
@property (nonatomic, readonly) UIColor *secondHandColor;

+ (id)paletteForColor:(unsigned long long)arg1 bleed:(unsigned long long)arg2;
+ (id)paletteForColor:(unsigned long long)arg1 style:(unsigned long long)arg2;
+ (id)voltColor;

- (void).cxx_destruct;
- (id)analogComplicationsColor;
- (id)analogDotColor;
- (id)digitalComplicationsColor;
- (id)digitalComplicationsPlatterColor;
- (id)handInlayColor;
- (id)handsColor;
- (bool)hasWhiteElements;
- (id)initWithColor:(unsigned long long)arg1 bleed:(unsigned long long)arg2;
- (id)logoColor;
- (id)numbersColor;
- (id)platterColor;
- (id)secondHandColor;

@end