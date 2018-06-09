/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateGridCollectionViewControllerDelegate, UIKeyboardCandidateList, UIKeyboardCandidateListDelegate> {
    <UIKeyboardCandidateListDelegate> * _candidateListDelegate;
    TIKeyboardCandidateResultSet * _candidateSet;
    UIKeyboardCandidateGridCollectionViewController * _collectionViewController;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _inlineRect;
    NSString * _inlineText;
    double  _maxX;
    int  _position;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previousCollapsedFrame;
    bool  _reducedWidth;
    UIKeyboardCandidateSortControl * _sortSelectionBar;
}

@property (nonatomic) <UIKeyboardCandidateListDelegate> *candidateListDelegate;
@property (nonatomic, retain) TIKeyboardCandidateResultSet *candidateSet;
@property (nonatomic, readonly) UIKeyboardCandidateGridCollectionViewController *collectionViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } inlineRect;
@property (nonatomic, copy) NSString *inlineText;
@property (nonatomic) double maxX;
@property (nonatomic) int position;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previousCollapsedFrame;
@property (getter=isReducedWidth, nonatomic, readonly) bool reducedWidth;
@property (nonatomic, readonly) UIKeyboardCandidateSortControl *sortSelectionBar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_inheritedRenderConfig;
- (id)activeCandidateList;
- (void)adjustFrameForInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 maxX:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedFrameFromDesiredFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textHeight:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustedInlineRectFromInlineText:(id)arg1 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (id)candidateListDelegate;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (id)candidateSet;
- (id)candidates;
- (void)candidatesDidChange;
- (id)collectionViewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertFromInputDelegateRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)currentCandidate;
- (unsigned long long)currentIndex;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)expand;
- (unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1;
- (unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1;
- (bool)handleNumberKey:(unsigned long long)arg1;
- (bool)handleTabKeyWithShift:(bool)arg1;
- (bool)hasCandidates;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })inlineRect;
- (id)inlineText;
- (bool)isAcceptableFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 afterScrollBy:(double)arg2;
- (bool)isExtendedList;
- (bool)isFloatingList;
- (bool)isReducedWidth;
- (id)keyboardBehaviors;
- (void)layout;
- (double)maxX;
- (void)padInlineFloatingViewExpand:(id)arg1;
- (bool)padInlineFloatingViewIsExpanded:(id)arg1;
- (int)position;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previousCollapsedFrame;
- (unsigned long long)selectedSortIndex;
- (void)setCandidateListDelegate:(id)arg1;
- (void)setCandidateSet:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 maxX:(double)arg4 layout:(bool)arg5;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 maxX:(double)arg5 layout:(bool)arg6;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInlineRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInlineText:(id)arg1;
- (void)setMaxX:(double)arg1;
- (void)setPosition:(int)arg1;
- (void)setPreviousCollapsedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (bool)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned long long)arg1;
- (void)showCandidateInForwardDirection:(bool)arg1 granularity:(int)arg2;
- (struct CGSize { double x1; double x2; })size;
- (id)sortSelectionBar;
- (void)sortSelectionBarAction;
- (id)statisticsIdentifier;
- (void)updateLayerBorderWidth;

@end
