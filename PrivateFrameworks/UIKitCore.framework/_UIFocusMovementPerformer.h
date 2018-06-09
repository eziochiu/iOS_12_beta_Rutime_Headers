/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusMovementPerformer : NSObject {
    <_UIFocusMovementPerformerDelegate> * _delegate;
}

@property (nonatomic) <_UIFocusMovementPerformerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_bestCandidateForFocusMovement:(id)arg1;
- (id)_bestCandidateForLinearFocusMovement:(id)arg1;
- (id)_bestCandidateForNonLinearFocusMovement:(id)arg1;
- (id)_findFocusCandidateByExhaustivelySearchingScrollableContainer:(id)arg1 forRequest:(id)arg2;
- (id)_findFocusCandidateBySearchingLinearFocusMovementSequencesForRequest:(id)arg1;
- (id)_findFocusCandidateWithoutLoadingScrollableContent:(id)arg1 forRequest:(id)arg2 minimumSearchArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_loadScrollableContentForFocusMovement:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_minimumSearchAreaForContainer:(id)arg1 inWindow:(id)arg2;
- (bool)_shouldRecordDestinationItemDistanceOffscreenInWindow:(id)arg1;
- (id)delegate;
- (bool)performFocusMovement:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)viewForFocusHeading:(unsigned long long)arg1 fromView:(id)arg2;

@end
