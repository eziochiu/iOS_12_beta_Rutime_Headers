/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAssociatedMessageTranscriptCell : CKTranscriptMessageContentCell {
    UIView * _associatedItemView;
    double  _cumulativeAssociatedOffset;
    <CKAssociatedMessageTranscriptCellDelegate> * _delegate;
    struct IMAssociatedMessageGeometryDescriptor { 
        unsigned long long layoutIntent; 
        unsigned long long associatedLayoutIntent; 
        float parentPreviewWidth; 
        float xScalar; 
        float yScalar; 
        float scale; 
        float rotation; 
    }  _geometryDescriptor;
    struct CGSize { 
        double width; 
        double height; 
    }  _parentSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, retain) UIView *associatedItemView;
@property (nonatomic) double cumulativeAssociatedOffset;
@property (nonatomic) <CKAssociatedMessageTranscriptCellDelegate> *delegate;
@property (nonatomic) struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; float x3; float x4; float x5; float x6; float x7; } geometryDescriptor;
@property (nonatomic) struct CGSize { double x1; double x2; } parentSize;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (void)applyLayoutAttributes:(id)arg1;
- (id)associatedItemView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })associatedViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1;
- (double)cumulativeAssociatedOffset;
- (id)delegate;
- (bool)failureButtonAdjustsContentAlignmentRect;
- (struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; float x3; float x4; float x5; float x6; float x7; })geometryDescriptor;
- (bool)hidesCheckmark;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviewsForAlignmentContents;
- (struct CGSize { double x1; double x2; })parentSize;
- (void)performReload:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)prepareForReuse;
- (void)setAssociatedItemView:(id)arg1;
- (void)setCumulativeAssociatedOffset:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x1; unsigned long long x2; float x3; float x4; float x5; float x6; float x7; })arg1;
- (void)setParentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
