/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentInteractionManager : NSObject <SXComponentInteractionManager, UIGestureRecognizerDelegate> {
    SXComponentView * _currentComponentView;
    SXComponentInteractionPreview * _currentPreview;
    <SXComponentInteractionHandlerManager> * _interactionHandlerManager;
    SXDelayed * _longPressDelay;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    struct CGPoint { 
        double x; 
        double y; 
    }  _longPressStartLocation;
    UITapGestureRecognizer * _tapGestureRecognizer;
    SXViewport * _viewport;
}

@property (nonatomic, retain) SXComponentView *currentComponentView;
@property (nonatomic, retain) SXComponentInteractionPreview *currentPreview;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXComponentInteractionHandlerManager> *interactionHandlerManager;
@property (nonatomic, retain) SXDelayed *longPressDelay;
@property (nonatomic, readonly) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic) struct CGPoint { double x1; double x2; } longPressStartLocation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, readonly) SXViewport *viewport;

- (void).cxx_destruct;
- (void)animateHighlight:(bool)arg1 forComponentView:(id)arg2;
- (void)cancelInteractionForComponentView:(id)arg1;
- (void)commitViewController:(id)arg1;
- (id)currentComponentView;
- (id)currentPreview;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleInteraction:(id)arg1 withType:(unsigned long long)arg2;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (id)initWithInteractionHandlerManager:(id)arg1 viewport:(id)arg2;
- (id)interactionHandlerManager;
- (id)longPressDelay;
- (id)longPressGestureRecognizer;
- (struct CGPoint { double x1; double x2; })longPressStartLocation;
- (id)previewViewControllerForLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCurrentComponentView:(id)arg1;
- (void)setCurrentPreview:(id)arg1;
- (void)setLongPressDelay:(id)arg1;
- (void)setLongPressStartLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)tapGestureRecognizer;
- (void)toggleHighlightForComponentView:(id)arg1;
- (void)updateHighlight:(bool)arg1 forComponentView:(id)arg2;
- (id)viewport;

@end
