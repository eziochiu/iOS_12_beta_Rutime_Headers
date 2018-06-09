/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKGradient : NSObject <NSCopying> {
    NSArray * _colors;
    NSArray * _locations;
}

@property (nonatomic, readonly) UIColor *bottomColor;
@property (nonatomic, retain) NSArray *colors;
@property (nonatomic, retain) NSArray *locations;
@property (nonatomic, readonly) UIColor *topColor;

+ (id)defaultGradient;

- (void).cxx_destruct;
- (id)bottomColor;
- (id)colors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithColors:(id)arg1 locations:(id)arg2;
- (id)initWithTopColor:(id)arg1 bottomColor:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHKGradient:(id)arg1;
- (id)locations;
- (void)setColors:(id)arg1;
- (void)setLocations:(id)arg1;
- (id)topColor;

@end
