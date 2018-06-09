/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKGridRowView : TLKView {
    NSMutableArray * _currentListOfViews;
    NSMutableArray * _imageViews;
    unsigned long long  _indexOfFirstCenteredColumnForForcedCentering;
    unsigned long long  _indexOfFirstTrailingColumn;
    NSMutableArray * _labels;
    TLKGridLayoutManager * _manager;
    TLKTableRow * _tableRow;
}

@property (retain) NSMutableArray *currentListOfViews;
@property (retain) NSMutableArray *imageViews;
@property unsigned long long indexOfFirstCenteredColumnForForcedCentering;
@property unsigned long long indexOfFirstTrailingColumn;
@property (retain) NSMutableArray *labels;
@property (nonatomic, retain) TLKGridLayoutManager *manager;
@property (nonatomic, retain) TLKTableRow *tableRow;

+ (void)updateLabel:(id)arg1 withFormattedText:(id)arg2 alignment:(long long)arg3;

- (void).cxx_destruct;
- (id)currentListOfViews;
- (id)description;
- (void)generateLabelsAndImagesIfNecessary;
- (id)imageViews;
- (unsigned long long)indexOfFirstCenteredColumnForForcedCentering;
- (unsigned long long)indexOfFirstTrailingColumn;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;
- (id)labels;
- (void)layoutSubviews;
- (id)manager;
- (void)observedPropertiesChanged;
- (void)resetStateOfAllViews;
- (void)setCurrentListOfViews:(id)arg1;
- (void)setImageViews:(id)arg1;
- (void)setIndexOfFirstCenteredColumnForForcedCentering:(unsigned long long)arg1;
- (void)setIndexOfFirstTrailingColumn:(unsigned long long)arg1;
- (void)setLabels:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setStylesForEverything;
- (void)setTableRow:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)styleDidChange:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)tableRow;

@end
