/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FULabel : UILabel {
    FULabel * _associatedScalingLabel;
    NSAttributedString * _attributedStringValue;
    id /* block */  _onTap;
    FULabel * _realAssociatedScalingLabel;
    NSString * _stringValue;
    bool  _uppercase;
    bool  _useCurrentLocale;
}

@property (nonatomic) FULabel *associatedScalingLabel;
@property (copy) id /* block */ onTap;
@property (nonatomic, readonly) bool uppercase;
@property (readonly) bool useCurrentLocale;

- (void).cxx_destruct;
- (id)_associatedScalingLabel;
- (id)associatedScalingLabel;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (id /* block */)onTap;
- (void)performTap:(id)arg1;
- (void)setAssociatedLabel:(id)arg1;
- (void)setAssociatedScalingLabel:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setOnTap:(id /* block */)arg1;
- (void)setStyleProvider:(id)arg1 primaryStyle:(bool)arg2;
- (void)setText:(id)arg1;
- (void)setUppercase:(bool)arg1 usingCurrentLocale:(bool)arg2;
- (bool)uppercase;
- (bool)useCurrentLocale;

@end
