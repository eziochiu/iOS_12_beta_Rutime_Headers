/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface FMBorderedView : UIView {
    bool  _hairlineBorder;
}

@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double cornerRadius;
@property (nonatomic) bool hairlineBorder;

- (id)borderColor;
- (double)borderWidth;
- (double)cornerRadius;
- (bool)hairlineBorder;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHairlineBorder:(bool)arg1;

@end
