/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIResponder : NSObject <UIResponderStandardEditActions, UITextInputAdditions, UITextInput_Internal, UIUserActivityRestoring, _UIStateRestorationContinuation, _UITouchable> {
    unsigned int  _hasInputAssistantItem;
    unsigned int  _hasOverrideClient;
    unsigned int  _hasOverrideHost;
}

@property (getter=_proxyTextInput, nonatomic, readonly) UIResponder<UITextInput> *__content;
@property (nonatomic, readonly) UIResponder *_editingDelegate;
@property (nonatomic, readonly) UIResponder *_responderForEditing;
@property (nonatomic, readonly) UIView<UITextInputPrivate> *_textSelectingContainer;
@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic, readonly) bool canResignFirstResponder;
@property (getter=_caretRect, nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } caretRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditable, nonatomic, readonly) bool editable;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool ic_isFirstResponder;
@property (nonatomic, readonly) UIView *inputAccessoryView;
@property (nonatomic, readonly) UIInputViewController *inputAccessoryViewController;
@property (nonatomic, readonly) UITextInputAssistantItem *inputAssistantItem;
@property (nonatomic, readonly) UIView *inputView;
@property (nonatomic, readonly) UIInputViewController *inputViewController;
@property (nonatomic, readonly) bool isFirstResponder;
@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic, readonly) UIResponder *nextResponder;
@property (nonatomic, copy) NSString *restorationIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *textInputContextIdentifier;
@property (nonatomic, readonly) UITextInputMode *textInputMode;
@property (nonatomic, readonly) NSUndoManager *undoManager;
@property (nonatomic, retain) NSUserActivity *userActivity;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (void)_cleanupAllStateRestorationTables;
+ (void)_cleanupStateRestorationObjectIdentifierTrackingTables;
+ (void)_finishStateRestoration;
+ (void)_prepareForSecondPassStateRestoration;
+ (void)_setRestoredIdentifierPathForObject:(id)arg1 identifierPath:(id)arg2;
+ (void)_startDeferredTrackingObjectsWithIdentifiers;
+ (void)_stopDeferredTrackingObjectsWithIdentifiers;
+ (void)_updateStateRestorationIdentifierMap;
+ (void)clearTextInputContextIdentifier:(id)arg1;
+ (id)objectWithRestorationIdentifierPath:(id)arg1;

- (void)__createInteractionAssistantIfNecessaryWithSet:(long long)arg1;
- (void)__tearDownInteractionAssistantIfNecessary;
- (id)__textInteractionFromAssistant;
- (void)_addShortcut:(id)arg1;
- (id)_asTextSelection;
- (void)_becomeFirstResponder;
- (void)_becomeFirstResponderAndMakeVisible;
- (bool)_becomeFirstResponderWhenPossible;
- (void)_beginPinningInputViews;
- (bool)_canBecomeFirstResponder;
- (bool)_canBecomeFirstResponderWhenPossible;
- (bool)_canChangeFirstResponder:(id)arg1 toResponder:(id)arg2;
- (bool)_canResignIfContainsFirstResponder;
- (bool)_canShowTextServices;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_caretRect;
- (unsigned int)_characterAfterCaretSelection;
- (unsigned int)_characterBeforeCaretSelection;
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned int)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (void)_clearBecomeFirstResponderWhenCapable;
- (void)_clearOverrideHost;
- (void)_clearOverrideNextResponder;
- (void)_clearRestorableResponderStatus;
- (void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3;
- (void)_completeForwardingTouches:(id)arg1 phase:(long long)arg2 event:(id)arg3 index:(unsigned long long)arg4;
- (bool)_containedInAbsoluteResponderChain;
- (bool)_containsResponder:(id)arg1;
- (void)_controlTouchBegan:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchEnded:(id)arg1 withEvent:(id)arg2;
- (void)_controlTouchMoved:(id)arg1 withEvent:(id)arg2;
- (id)_currentOverrideClient;
- (id)_currentOverrideHost;
- (id)_deepestUnambiguousResponder;
- (void)_define:(id)arg1;
- (void)_deleteBackwardAndNotify:(bool)arg1;
- (void)_deleteByWord;
- (void)_deleteForwardAndNotify:(bool)arg1;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_didChangeDeepestUnambiguousResponder;
- (void)_didChangeToFirstResponder:(id)arg1;
- (bool)_disableAutomaticKeyboardBehavior;
- (bool)_disableAutomaticKeyboardUI;
- (long long)_dragDataOwner;
- (long long)_dropDataOwner;
- (id)_editingDelegate;
- (id)_effectivePasteConfiguration;
- (bool)_enableAutomaticKeyboardPressDone;
- (void)_endPinningInputViews;
- (void)_expandSelectionToBackwardDeletionCluster;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;
- (void)_extendCurrentSelection:(int)arg1;
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;
- (bool)_finishResignFirstResponder;
- (id)_firstResponder;
- (id)_fontForCaretSelection;
- (id)_fullRange;
- (id)_fullText;
- (void)_gatherKeyResponders:(id)arg1 indexOfSelf:(unsigned long long*)arg2 visibilityTest:(id /* block */)arg3 passingTest:(id /* block */)arg4 subviewsTest:(id /* block */)arg5;
- (void)_handleGameControllerEvent:(id)arg1;
- (void)_handleKeyEvent:(struct __GSEvent { }*)arg1;
- (void)_handleKeyUIEvent:(id)arg1;
- (bool)_hasMarkedText;
- (bool)_hasMarkedTextOrRangedSelection;
- (int)_indexForTextPosition:(id)arg1;
- (id)_intersectionOfRange:(id)arg1 andRange:(id)arg2;
- (bool)_isEmptySelection;
- (bool)_isPinningInputViews;
- (bool)_isRootForKeyResponderCycle;
- (bool)_isTransitioningFromView:(id)arg1;
- (bool)_isViewController;
- (id)_keyCommandForEvent:(id)arg1;
- (id)_keyCommandForEvent:(id)arg1 target:(id*)arg2;
- (id)_keyCommands;
- (id)_keyCommandsInChainPassingTest:(id /* block */)arg1;
- (id)_keyInput;
- (id)_keyboardResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_lastRectForRange:(id)arg1;
- (void)_lookup:(id)arg1;
- (void)_moveCurrentSelection:(int)arg1;
- (id)_moveDown:(bool)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(bool)arg1 withHistory:(id)arg2;
- (id)_moveRight:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(bool)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(bool)arg1 withHistory:(id)arg2;
- (id)_moveUp:(bool)arg1 withHistory:(id)arg2;
- (void)_moveWithEvent:(id)arg1;
- (id)_newPhraseBoundaryGestureRecognizer;
- (id)_nextKeyResponder;
- (id)_nextResponderOverride;
- (void)_nonDestructivelyResignFirstResponder;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_nsrangeForTextRange:(id)arg1;
- (long long)_opposingDirectionFromDirection:(long long)arg1;
- (id)_overrideHost;
- (void)_overrideInputAccessoryViewNextResponderWithResponder:(id)arg1;
- (void)_overrideInputViewNextResponderWithResponder:(id)arg1;
- (bool)_ownsInputAccessoryView;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(bool)arg4;
- (id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)_preserveResponderOverridesWhilePerforming:(id /* block */)arg1;
- (id)_previousKeyResponder;
- (id)_primaryContentResponder;
- (id)_proxyTextInput;
- (bool)_range:(id)arg1 containsRange:(id)arg2;
- (bool)_range:(id)arg1 intersectsRange:(id)arg2;
- (id)_rangeFromCurrentRangeWithDelta:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (id)_rangeOfLineEnclosingPosition:(id)arg1;
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;
- (id)_rangeOfSentenceEnclosingPosition:(id)arg1;
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;
- (id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;
- (id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;
- (void)_rebuildStateRestorationIdentifierPath;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (void)_replaceDocumentWithText:(id)arg1;
- (bool)_requiresKeyboardResetOnReload;
- (bool)_requiresKeyboardWhenFirstResponder;
- (bool)_requiresKeyboardWindowWhenFirstResponder;
- (void)_resignFirstResponder;
- (bool)_resignIfContainsFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderExternalTouchRectForWindow:(id)arg1;
- (id)_responderForBecomeFirstResponder;
- (id)_responderForEditing;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (id)_responderSelectionImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_responderSelectionRectForWindow:(id)arg1;
- (id)_responderWindow;
- (id)_restorationIdentifierPath;
- (bool)_restoreFirstResponder;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)_selectAll;
- (id)_selectableText;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedNSRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedRangeWithinMarkedText;
- (long long)_selectionAffinity;
- (bool)_selectionAtDocumentEnd;
- (bool)_selectionAtDocumentStart;
- (bool)_selectionAtWordStart;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (void)_setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setCaretSelectionAtEndOfSelection;
- (void)_setDragDataOwner:(long long)arg1;
- (void)_setDropDataOwner:(long long)arg1;
- (void)_setFirstResponder:(id)arg1;
- (void)_setGestureRecognizers;
- (id)_setHistory:(id)arg1 withExtending:(bool)arg2 withAnchor:(int)arg3 withAffinityDownstream:(bool)arg4;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(bool)arg2;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (void)_share:(id)arg1;
- (bool)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(bool)arg3;
- (bool)_shouldRestorationInputViewsOnlyWhenKeepingFirstResponder;
- (id)_showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 type:(long long)arg3 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 inView:(id)arg5;
- (id)_showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (id)_showServiceForType:(long long)arg1 withContext:(id)arg2;
- (bool)_supportsBecomeFirstResponderWhenPossible;
- (void)_tagAsRestorableResponder;
- (id)_targetCanPerformBlock:(id /* block */)arg1;
- (id)_textColorForCaretSelection;
- (id)_textRangeFromNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_textSelectingContainer;
- (id)_textServicesResponderProxy;
- (void)_unmarkText;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(bool)arg2;
- (id)_userActivity;
- (bool)_usesAsynchronousProtocol;
- (bool)_usesDeemphasizedTextAppearance;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)_willChangeToFirstResponder:(id)arg1;
- (id)_window;
- (void)_windowBecameKey;
- (void)_windowResignedKey;
- (id)_wordContainingCaretSelection;
- (bool)becomeFirstResponder;
- (void)beginSelectionChange;
- (bool)canBecomeFirstResponder;
- (bool)canPasteItemProviders:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canResignFirstResponder;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)endSelectionChange;
- (id)firstResponder;
- (void)gestureChanged:(struct __GSEvent { }*)arg1;
- (void)gestureEnded:(struct __GSEvent { }*)arg1;
- (void)gestureStarted:(struct __GSEvent { }*)arg1;
- (id)inputAccessoryView;
- (id)inputAccessoryViewController;
- (id)inputAssistantItem;
- (id)inputView;
- (id)inputViewController;
- (id)interactionAssistant;
- (bool)isEditable;
- (bool)isEditing;
- (bool)isFirstResponder;
- (id)keyCommands;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (id)nextFirstResponder;
- (id)nextResponder;
- (id)pasteConfiguration;
- (void)pasteItemProviders:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (id)recentsAccessoryView;
- (void)reloadInputViews;
- (void)reloadInputViewsWithoutReset;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (bool)resignFirstResponder;
- (id)restorationIdentifier;
- (void)restoreUserActivityState:(id)arg1;
- (void)scrollWheel:(struct __GSEvent { }*)arg1;
- (long long)selectionAffinity;
- (void)setPasteConfiguration:(id)arg1;
- (void)setRestorationIdentifier:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (bool)shouldReloadInputViews;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)textInputContextIdentifier;
- (id)textInputMode;
- (id)textInputSuggestionDelegate;
- (id)textInputView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)undoManager;
- (void)updateUserActivityState:(id)arg1;
- (id)userActivity;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

+ (id)currentFirstResponder;

- (void)findFirstResponder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

- (bool)_ntk_becomeFirstResponder;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (bool)ic_becomeFirstResponder;
- (bool)ic_inhbitsGlobalKeyCommands;
- (bool)ic_isFirstResponder;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

- (id)_SKUIView;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (id)tswp_currentFirstResponder;

- (void)tswp_findFirstResponder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (void)tvmlkit_handleEvent:(id)arg1 forElement:(id)arg2 andSourceView:(id)arg3;

// Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit

- (id)tk_firstViewControllerInResponderChain;

@end
