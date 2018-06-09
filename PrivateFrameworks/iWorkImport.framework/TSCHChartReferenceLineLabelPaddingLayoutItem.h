/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartReferenceLineLabelPaddingLayoutItem : TSCHChartLayoutItem {
    TSCHChartAxisID * mAxisID;
}

@property (nonatomic, retain) TSCHChartAxisID *axisID;

- (void).cxx_destruct;
- (id)axisID;
- (struct CGSize { double x1; double x2; })calcMinSize;
- (id)initWithParent:(id)arg1 axisID:(id)arg2;
- (struct CGSize { double x1; double x2; })p_calcMinSizeForModel:(id)arg1;
- (bool)p_hasReferenceLineLabelsWithModel:(id)arg1;
- (void)setAxisID:(id)arg1;

@end
