/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceEncyclopedicRowView : MKPlaceSectionRowView {
    unsigned long long  _columnCount;
    NSMutableArray * _factoidViews;
    UILayoutGuide * _insetMetricGuide;
    NSArray * _items;
    NSMutableArray * _labelConstraints;
    UILayoutGuide * _leftMetricGuide;
    UILayoutGuide * _rightMetricGuide;
}

@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) NSMutableArray *labelConstraints;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)addWidthAndSideSpacingConstraintsForLabels;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)items;
- (id)labelConstraints;
- (void)layoutSubviews;
- (void)refreshColumnCount;
- (void)refreshContent:(bool)arg1;
- (void)setColumnCount:(unsigned long long)arg1;
- (void)setItems:(id)arg1;
- (void)setLabelConstraints:(id)arg1;

@end
