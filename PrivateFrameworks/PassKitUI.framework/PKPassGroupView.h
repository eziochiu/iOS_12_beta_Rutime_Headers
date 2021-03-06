/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassGroupView : UIView <PKGroupDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, WLCardViewDelegate> {
    unsigned short  _animationCounter;
    bool  _canPan;
    <PKPassGroupViewDelegate> * _delegate;
    UIViewController * _detailsVC;
    double  _dimmerValue;
    unsigned short  _fanningAnimationCounter;
    unsigned short  _frontFaceContentModePinningCounter;
    PKPassView * _frontmostPassView;
    PKGroup * _group;
    bool  _groupWasMarkedDeleted;
    UIScrollView * _horizontalScrollView;
    bool  _isAuthenticating;
    struct { 
        unsigned int showingPageControl : 1; 
        unsigned int indeterminateState : 1; 
        unsigned int fanningEnabled : 1; 
        unsigned int overridePriorContentOffset : 1; 
        unsigned int delegateOverridesFrontmostContentWhileStacked : 1; 
        unsigned int delegateOverridesFrontmostContentWhilePiled : 1; 
        unsigned int delegateOverridesAllowPanning : 1; 
        struct CGPoint { 
            double x; 
            double y; 
        } priorContentOffset; 
        struct CGPoint { 
            double x; 
            double y; 
        } instantaneousContentOffsetDelta; 
        unsigned long long numberOfPasses; 
        unsigned long long selectedIndex; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } bounds; 
    }  _layoutState;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    bool  _modallyPresented;
    UIMotionEffectGroup * _motionEffectGroup;
    UIPageControl * _pageControl;
    unsigned short  _pageControlAnimationCounter;
    bool  _pageControlHidden;
    UIPanGestureRecognizer * _panGestureRecognizer;
    NSString * _passBeingPresented;
    bool  _passBeingPresentedWasDeleted;
    PKReusablePassViewQueue * _passViewQueue;
    NSMutableDictionary * _passViewsByUniqueID;
    long long  _presentationState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long displayIndex;
@property (nonatomic, retain) PKPassView *frontmostPassView;
@property (nonatomic, readonly) PKGroup *group;
@property (readonly) unsigned long long hash;
@property (getter=isModallyPresented, nonatomic) bool modallyPresented;
@property (nonatomic, readonly) struct UIOffset { double x1; double x2; } offsetForFrontmostPassWhileStacked;
@property (nonatomic, readonly) UIPageControl *pageControl;
@property (nonatomic) bool pageControlHidden;
@property (nonatomic) PKReusablePassViewQueue *passViewQueue;
@property (nonatomic) long long presentationState;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPanAndLongPressGestureRecognizers;
- (void)_applyContentMode:(long long)arg1 toPassView:(id)arg2 animated:(bool)arg3;
- (void)_beginTrackingAnimation;
- (struct CGSize { double x1; double x2; })_contentSize;
- (long long)_defaultContentModeForIndex:(unsigned long long)arg1;
- (void)_endTrackingAnimation;
- (void)_enumeratePassIndicesInStackOrderWithBlock:(id /* block */)arg1;
- (void)_enumeratePassViewsInStackOrderWithBlock:(id /* block */)arg1;
- (void)_handleLongPress:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (id)_loadCardViewForIndex:(unsigned long long)arg1 contentMode:(long long)arg2;
- (void)_pageControlChanged:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pagingFrameForCardView:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfPagingIndices;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeOfVisibleIndices;
- (void)_removePanAndLongPressGestureRecognizers;
- (struct CGPoint { double x1; double x2; })_stackingPositionForPassViewLayer:(id)arg1 atStackIndex:(unsigned long long)arg2 withSeparation:(bool)arg3;
- (void)_updateCachedGroupState;
- (void)_updateCachedLayoutState;
- (void)_updateDelegateResponderCache;
- (void)_updateFrontmostPassViewIfNecessary;
- (void)_updateLoadedViews:(bool)arg1;
- (void)_updatePageControlVisibilityWithDelay:(double)arg1;
- (void)_updatePageControlWithDisplayIndex;
- (void)applyContentModesAnimated:(bool)arg1;
- (void)beginPinningFrontFaceContentMode;
- (double)continuousShadowIndex;
- (void)dealloc;
- (void)dismissBackOfPassIfNecessaryForUniqueID:(id)arg1;
- (unsigned long long)displayIndex;
- (void)endPinningFrontFaceContentMode;
- (id)frontmostPassView;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)group;
- (void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithGroup:(id)arg1 delegate:(id)arg2 presentationState:(long long)arg3;
- (bool)isModallyPresented;
- (void)layoutPagesAnimated:(bool)arg1;
- (void)layoutStackAnimated:(bool)arg1;
- (void)layoutSubviews;
- (void)layoutSubviewsAnimated:(bool)arg1;
- (void)markGroupDeleted;
- (struct UIOffset { double x1; double x2; })offsetForFrontmostPassWhileStacked;
- (id)pageControl;
- (bool)pageControlHidden;
- (bool)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2;
- (void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2;
- (void)passView:(id)arg1 didPresentPassDetailsViewController:(id)arg2;
- (void)passView:(id)arg1 resizeButtonPressedForPass:(id)arg2 withBarcode:(bool)arg3;
- (void)passView:(id)arg1 willPresentPassDetailsViewController:(id)arg2;
- (void)passViewDidBeginAuthenticating:(id)arg1;
- (void)passViewDidEndAuthenticating:(id)arg1;
- (void)passViewDidResize:(id)arg1 animated:(bool)arg2;
- (id)passViewForIndex:(unsigned long long)arg1;
- (id)passViewQueue;
- (bool)passViewShouldResize:(id)arg1;
- (void)passViewTapped:(id)arg1;
- (void)presentDiff:(id)arg1 completion:(id /* block */)arg2;
- (void)presentPassWithUniqueID:(id)arg1;
- (long long)presentationState;
- (void)removeFromSuperview;
- (void)resizePassViewForPass:(id)arg1 animated:(bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDimmer:(double)arg1 animated:(bool)arg2;
- (void)setFrontmostPassView:(id)arg1;
- (void)setFrontmostPassViewFromPassIndex:(long long)arg1;
- (void)setModallyPresented:(bool)arg1;
- (void)setPageControlHidden:(bool)arg1;
- (void)setPassViewQueue:(id)arg1;
- (void)setPresentationState:(long long)arg1;
- (void)setPresentationState:(long long)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)sizeToFit;
- (void)updatePageControlFrame;
- (void)updateToStackWithProgress:(double)arg1 originalPosition:(struct CGPoint { double x1; double x2; })arg2 timingFunction:(id /* block */)arg3;

@end
