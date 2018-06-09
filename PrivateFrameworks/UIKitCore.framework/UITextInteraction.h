/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction> {
    <UITextInteraction_AssistantDelegate> * _assistantDelegate;
    NSMutableArray * _children;
    <UITextInteractionDelegate> * _delegate;
    NSMutableDictionary * _gestureMap;
    NSMutableArray * _gestures;
    bool  _inGesture;
    UITextInteraction * _parent;
    UIResponder<UITextInput> * _textInput;
    long long  _textInteractionSet;
    UIView * _view;
}

@property (nonatomic) <UITextInteraction_AssistantDelegate> *assistantDelegate;
@property (nonatomic, readonly) NSArray *children;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UITextInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *gestureMap;
@property (nonatomic, readonly) NSArray *gestures;
@property (nonatomic, readonly) NSArray *gesturesForFailureRequirements;
@property (readonly) unsigned long long hash;
@property (setter=setInGesture:, nonatomic) bool inGesture;
@property (readonly) UITextInteraction *parent;
@property (readonly) UITextInteraction *root;
@property (readonly) Class superclass;
@property (nonatomic) UIResponder<UITextInput> *textInput;
@property (nonatomic, readonly) long long textInteractionSet;
@property (nonatomic) UIView *view;

+ (id)textInteractionsForSet:(long long)arg1;

- (void).cxx_destruct;
- (void)_performPreemtiveLayoutToEnsureNoMoreLayoutWhileSelecting:(id)arg1;
- (void)_resetForLink;
- (bool)_shouldObscureTextInput;
- (id)_textInput;
- (void)addChild:(id)arg1;
- (void)addGestureRecognizer:(id)arg1 withName:(id)arg2;
- (id)assistantDelegate;
- (void)cancelInteractionWithLink;
- (id)children;
- (bool)containerChangesSelectionOnOneFingerTap;
- (id)defaultDoubleTapRecognizerWithAction:(SEL)arg1;
- (id)defaultTapRecognizerWithAction:(SEL)arg1;
- (id)delegate;
- (void)didMoveToView:(id)arg1;
- (void)disableClearsOnInsertion;
- (double)distanceBetweenPoint:(struct CGPoint { double x1; double x2; })arg1 andRects:(id)arg2;
- (bool)doesControlDelegate;
- (void)finishSetup;
- (id)gestureMap;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestures;
- (id)gesturesForFailureRequirements;
- (bool)inGesture;
- (id)init;
- (id)interactionWithClass:(Class)arg1;
- (id)interactionWithGestureForName:(id)arg1;
- (bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (bool)isInteractingWithLink;
- (id)linkInteractionView;
- (id)parent;
- (id)rangeWithTextAlternatives:(id*)arg1 atPosition:(id)arg2;
- (id)recognizerForName:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)removeGestureRecognizerWithName:(id)arg1;
- (void)resetForLink;
- (id)root;
- (bool)selection:(id)arg1 containsPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setAssistantDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInGesture:(bool)arg1;
- (void)setTextInput:(id)arg1;
- (void)setView:(id)arg1;
- (bool)shouldAllowWithTouchTypes:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 toBegin:(bool)arg3;
- (bool)shouldHandleFormGestureAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldIgnoreLinkGestures;
- (bool)tapOnLinkWithGesture:(id)arg1;
- (id)textInput;
- (long long)textInteractionSet;
- (void)turnOffDrawsAsAtomIfPlainStyleAtom;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
