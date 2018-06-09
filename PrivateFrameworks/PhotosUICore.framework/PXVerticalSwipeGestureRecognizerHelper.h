/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXVerticalSwipeGestureRecognizerHelper : NSObject {
    bool  _allowSwipeDown;
    bool  _allowSwipeUp;
    <PXVerticalSwipeGestureRecognizerHelperDelegate> * _delegate;
    struct { 
        bool shouldRecognizeSwipeDownGestureRecognizer; 
    }  _delegateRespondsTo;
    NSMapTable * _dependentScrollViews;
}

@property (nonatomic) bool allowSwipeDown;
@property (nonatomic) bool allowSwipeUp;
@property (nonatomic) <PXVerticalSwipeGestureRecognizerHelperDelegate> *delegate;
@property (nonatomic, readonly) NSMapTable *dependentScrollViews;

- (void).cxx_destruct;
- (id)_panGestureRecognizerForVerticalSwipeGestureRecognizer:(id)arg1;
- (bool)allowSwipeDown;
- (bool)allowSwipeUp;
- (id)delegate;
- (id)dependentScrollViews;
- (id)init;
- (void)setAllowSwipeDown:(bool)arg1;
- (void)setAllowSwipeUp:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (bool)verticalSwipeGestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)verticalSwipeGestureRecognizerShouldBegin:(id)arg1;

@end
