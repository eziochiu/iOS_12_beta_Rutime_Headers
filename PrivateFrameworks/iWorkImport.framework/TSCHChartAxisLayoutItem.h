/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisLayoutItem : TSCHChartLayoutItem {
    TSCHChartAxisID * mAxisID;
    TSCHChartAxisLineLayoutItem * mAxisLine;
    TSCHChartAxisPaddingLayoutItem * mAxisPadding;
    int  mAxisPosition;
    TSCHChartAxisTitleLayoutItem * mAxisTitle;
    struct CGSize { 
        double width; 
        double height; 
    }  mChartBodySize;
    TSCHChartReferenceLineLabelPaddingLayoutItem * mRefLineLabelPadding;
    TSCHChartReferenceLineLabelsLayoutItem * mRefLineLabels;
    TSCHChartAxisID * mReferenceLineLabelAxisID;
    TSCHChartAxisTickMarksLayoutItem * mTickMarks;
}

@property (nonatomic, retain) TSCHChartAxisID *axisID;
@property (nonatomic, readonly) TSCHChartAxisLineLayoutItem *axisLineLayoutItem;
@property (nonatomic, readonly) TSCHChartAxisPaddingLayoutItem *axisPaddingLayoutItem;
@property (nonatomic, readonly) int axisPosition;
@property (nonatomic, readonly) TSCHChartAxisTickMarksLayoutItem *axisTickMarksLayoutItem;
@property (nonatomic, readonly) TSCHChartAxisTitleLayoutItem *axisTitleLayoutItem;
@property (nonatomic) struct CGSize { double x1; double x2; } chartBodySize;
@property (nonatomic, readonly) TSCHChartReferenceLineLabelPaddingLayoutItem *refLineLabelPadding;
@property (nonatomic, readonly) TSCHChartReferenceLineLabelsLayoutItem *refLineLabels;
@property (nonatomic, retain) TSCHChartAxisID *referenceLineLabelAxisID;

- (id)axisID;
- (id)axisLineLayoutItem;
- (id)axisPaddingLayoutItem;
- (int)axisPosition;
- (id)axisTickMarksLayoutItem;
- (id)axisTitleLayoutItem;
- (struct CGSize { double x1; double x2; })calcMinSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcOverhangRect;
- (struct CGSize { double x1; double x2; })chartBodySize;
- (void)dealloc;
- (id)initWithParent:(id)arg1 axisPosition:(int)arg2;
- (id)p_description;
- (void)p_layoutInward;
- (void)p_layoutLabelsNow;
- (void)p_layoutOutward;
- (id)p_subselectionHaloPositionsForLabelsSelections:(id)arg1;
- (id)p_subselectionKnobPositionsForLabelsSelection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })protected_layoutSpaceRectForAllLabels;
- (id)refLineLabelPadding;
- (id)refLineLabels;
- (id)referenceLineLabelAxisID;
- (id)renderersWithRep:(id)arg1;
- (void)setAxisID:(id)arg1;
- (void)setChartBodySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setReferenceLineLabelAxisID:(id)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;

@end