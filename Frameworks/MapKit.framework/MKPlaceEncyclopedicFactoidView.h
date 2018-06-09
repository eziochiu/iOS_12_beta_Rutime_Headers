/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceEncyclopedicFactoidView : MKPlaceSectionRowView {
    NSLayoutConstraint * _baselineToBaselineConstraint;
    NSLayoutConstraint * _baselineToBottomConstraint;
    NSLayoutConstraint * _baselineToTopConstraint;
    _MKUILabel * _keyLabel;
    _MKUILabel * _valueLabel;
}

@property (nonatomic, retain) _MKUILabel *keyLabel;
@property (nonatomic, retain) _MKUILabel *valueLabel;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (id)_keyLabelWithString:(id)arg1;
- (id)_valueLabelWithString:(id)arg1;
- (id)initWithTextItem:(id)arg1;
- (id)keyLabel;
- (void)setKeyLabel:(id)arg1;
- (void)setUpConstraints;
- (void)setValueLabel:(id)arg1;
- (id)valueLabel;

@end
