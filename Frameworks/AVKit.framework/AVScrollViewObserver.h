/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVScrollViewObserver : NSObject <AVScrollViewObserverDelegate, _UIScrollViewScrollObserver> {
    UIView * _contentView;
    <AVScrollViewObserverDelegate> * _delegate;
    CADisplayLink * _displayLink;
    AVScrollViewObserver * _next;
    UIScrollView * _observedScrollView;
    AVScrollViewObserver * _previous;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) double contentViewFractionVisible;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVScrollViewObserverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isObservedScrollViewAncestorOfContentView;
@property (nonatomic, readonly) bool isScrollViewScrolling;
@property (nonatomic, readonly) AVScrollViewObserver *next;
@property (nonatomic) UIScrollView *observedScrollView;
@property (nonatomic, readonly) AVScrollViewObserver *previous;
@property (readonly) Class superclass;

+ (id)scrollViewObserverForContentView:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (void)_displayLinkFired:(id)arg1;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_startOrPauseDisplayLinkIfNeeded;
- (id)contentView;
- (double)contentViewFractionVisible;
- (void)dealloc;
- (id)delegate;
- (id)displayLink;
- (id)initWithView:(id)arg1 observedScrollView:(id)arg2 delegate:(id)arg3;
- (bool)isObservedScrollViewAncestorOfContentView;
- (bool)isScrollViewScrolling;
- (id)next;
- (id)observedScrollView;
- (id)previous;
- (void)scrollViewObserverValuesDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setObservedScrollView:(id)arg1;
- (void)teardown;
- (void)validateHierarchyAndFindAdditionalScrollViews;

@end
