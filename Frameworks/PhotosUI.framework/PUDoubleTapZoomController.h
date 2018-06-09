/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUDoubleTapZoomController : NSObject <UIGestureRecognizerDelegate> {
    UITapGestureRecognizer * __doubleTapGestureRecognizer;
    bool  __needsUpdateGestureRecognizers;
    <PUDoubleTapZoomControllerDelegate> * _delegate;
    struct { 
        bool respondsToViewHostingGestureRecognizers; 
        bool respondsToTilingView; 
        bool respondsToDelegateForGestureRecognizer; 
        bool respondsToCanDoubleTapBeginAtLocationFromProvider; 
    }  _delegateFlags;
}

@property (setter=_setDoubleTapGestureRecognizer:, nonatomic, retain) UITapGestureRecognizer *_doubleTapGestureRecognizer;
@property (setter=_setNeedsUpdateGestureRecognizers:, nonatomic) bool _needsUpdateGestureRecognizers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUDoubleTapZoomControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_doubleTapGestureRecognizer;
- (void)_handleDoubleTapGestureRecognizer:(id)arg1;
- (void)_invalidateGestureRecognizers;
- (bool)_needsUpdateGestureRecognizers;
- (void)_setDoubleTapGestureRecognizer:(id)arg1;
- (void)_setNeedsUpdateGestureRecognizers:(bool)arg1;
- (void)_updateGestureRecognizersIfNeeded;
- (id)_userTransformViewAtLocationFromProvider:(id)arg1;
- (id)delegate;
- (id)doubleTapGestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)invalidateViewHostingGestureRecognizers;
- (void)setDelegate:(id)arg1;
- (bool)shouldDoubleTapBeginAtLocationFromProvider:(id)arg1;

@end
