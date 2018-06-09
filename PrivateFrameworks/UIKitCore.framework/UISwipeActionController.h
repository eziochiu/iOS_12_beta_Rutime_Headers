/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISwipeActionController : NSObject <_UIScrollViewScrollObserver> {
    UIScrollView * _containerView;
    UISwipeActionsConfiguration * _incomingSwipeActionsConfiguration;
    unsigned long long  _style;
    <UISwipeActionHost> * _swipeActionHost;
    UISwipeHandler * _swipeHandler;
    NSMutableDictionary * _swipeOccurrences;
    NSIndexPath * _swipedIndexPath;
}

@property (nonatomic) UIScrollView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UISwipeActionsConfiguration *incomingSwipeActionsConfiguration;
@property (nonatomic) unsigned long long style;
@property (readonly) Class superclass;
@property (nonatomic) <UISwipeActionHost> *swipeActionHost;
@property (nonatomic) bool swipeEnabled;
@property (nonatomic, retain) UISwipeHandler *swipeHandler;
@property (nonatomic, retain) NSMutableDictionary *swipeOccurrences;
@property (nonatomic, copy) NSIndexPath *swipedIndexPath;
@property (nonatomic, readonly) UIView *swipedItemView;

- (void).cxx_destruct;
- (id)_currentSwipeOccurrence;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)_resetSwipedItemAnimated:(bool)arg1 swipeInfo:(struct { unsigned long long x1; unsigned long long x2; bool x3; double x4; double x5; double x6; })arg2 completion:(id /* block */)arg3;
- (struct { unsigned long long x1; bool x2; bool x3; double x4; double x5; })configureForSwipeDirection:(unsigned long long)arg1 configuration:(id)arg2 startingAtTouchLocation:(struct CGPoint { double x1; double x2; })arg3;
- (id)containerView;
- (void)dealloc;
- (id)incomingSwipeActionsConfiguration;
- (id)initWithSwipeActionHost:(id)arg1 style:(unsigned long long)arg2;
- (void)resetSwipedItemAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)setContainerView:(id)arg1;
- (void)setIncomingSwipeActionsConfiguration:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setSwipeActionHost:(id)arg1;
- (void)setSwipeEnabled:(bool)arg1;
- (void)setSwipeHandler:(id)arg1;
- (void)setSwipeOccurrences:(id)arg1;
- (void)setSwipedIndexPath:(id)arg1;
- (unsigned long long)style;
- (id)swipeActionHost;
- (bool)swipeEnabled;
- (id)swipeHandler;
- (void)swipeHandler:(id)arg1 didConfirmSwipeWithInfo:(struct { unsigned long long x1; unsigned long long x2; bool x3; double x4; double x5; double x6; })arg2;
- (void)swipeHandler:(id)arg1 didGenerateSwipeWithInfo:(struct { unsigned long long x1; unsigned long long x2; bool x3; double x4; double x5; double x6; })arg2;
- (bool)swipeHandler:(id)arg1 mayBeginSwipeAtLocation:(struct CGPoint { double x1; double x2; })arg2 withDirection:(unsigned long long)arg3;
- (void)swipeHandlerDidBeginSwipe:(id)arg1;
- (void)swipeItemAtIndexPath:(id)arg1 configuration:(id)arg2 direction:(unsigned long long)arg3 animated:(bool)arg4 completion:(id /* block */)arg5;
- (void)swipeOccurrence:(id)arg1 willFinishWithDeletion:(bool)arg2;
- (void)swipeOccurrenceDidFinish:(id)arg1;
- (id)swipeOccurrences;
- (id)swipedIndexPath;
- (id)swipedItemView;
- (bool)touchAtLocationShouldDismissSwipedItem:(struct CGPoint { double x1; double x2; })arg1 isTouchUp:(bool)arg2;
- (void)updateLayout;
- (void)updateSwipedIndexPath:(id)arg1;

@end
