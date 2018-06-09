/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUITimeLabelStyle : NSObject <NSCopying> {
    CLKFont * _designatorFont;
    CLKFont * _fourDigitFont;
    CLKFont * _threeDigitFont;
}

@property (nonatomic, retain) CLKFont *designatorFont;
@property (nonatomic, retain) CLKFont *fourDigitFont;
@property (nonatomic, retain) CLKFont *threeDigitFont;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)designatorFont;
- (id)fourDigitFont;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setDesignatorFont:(id)arg1;
- (void)setFourDigitFont:(id)arg1;
- (void)setThreeDigitFont:(id)arg1;
- (id)threeDigitFont;

@end
