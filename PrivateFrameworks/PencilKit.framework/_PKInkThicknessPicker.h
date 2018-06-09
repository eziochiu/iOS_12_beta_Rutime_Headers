/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface _PKInkThicknessPicker : UIControl {
    NSString * _inkIdentifier;
    NSArray * _inks;
    NSArray * _thicknessButtons;
    double  _weight;
}

@property (nonatomic, retain) NSString *inkIdentifier;
@property (nonatomic, retain) NSArray *inks;
@property (nonatomic, retain) NSArray *thicknessButtons;
@property (nonatomic) double weight;

+ (long long)buttonIndexForIdentifier:(id)arg1 weight:(double)arg2 isRTLLanguage:(bool)arg3;
+ (double)weightForInkIdentifier:(id)arg1 buttonIndex:(long long)arg2 isRTLLanguage:(bool)arg3;

- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (id)initWithInkIdentifier:(id)arg1;
- (id)inkIdentifier;
- (id)inks;
- (bool)isRTLLanguage;
- (void)layoutSubviews;
- (void)setInkIdentifier:(id)arg1;
- (void)setInks:(id)arg1;
- (void)setThicknessButtons:(id)arg1;
- (void)setWeight:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)thicknessButtons;
- (double)weight;

@end
