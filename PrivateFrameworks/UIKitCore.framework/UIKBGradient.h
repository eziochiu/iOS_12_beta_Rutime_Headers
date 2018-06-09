/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBGradient : NSObject <NSCopying> {
    NSArray * _colors;
    bool  _didQueryRGBColors;
    NSString * _endColorName;
    NSString * _flatColorName;
    NSString * _gradientName;
    bool  _horizontal;
    double  _middleLocation;
    double  _opacity;
    NSString * _startColorName;
    bool  _usesRGBColors;
}

@property (nonatomic, readonly) NSString *flatColorName;
@property (nonatomic) bool horizontal;
@property (nonatomic) double opacity;
@property (nonatomic, readonly) bool usesRGBColors;

+ (id)gradientWith3Colors:(id)arg1 middleLocation:(double)arg2;
+ (id)gradientWithFlatColor:(id)arg1;
+ (id)gradientWithName:(id)arg1;
+ (id)gradientWithStartColor:(id)arg1 endColor:(id)arg2;

- (struct CGGradient { }*)CGGradient;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)flatColorName;
- (bool)horizontal;
- (id)initWith3Colors:(id)arg1 middleLocation:(double)arg2;
- (id)initWithFlatColor:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2;
- (bool)isEqual:(id)arg1;
- (double)opacity;
- (void)setHorizontal:(bool)arg1;
- (void)setOpacity:(double)arg1;
- (bool)usesRGBColors;

@end
