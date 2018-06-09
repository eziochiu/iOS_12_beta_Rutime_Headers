/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAtomTextView : UIControl <NSLayoutManagerDelegate, UITextInput, UITextInputPrivate, UITextViewDelegate> {
    NSMutableArray * _atomViews;
    _UITextFieldRoundedRectBackgroundViewNeue * _background;
    NSLayoutConstraint * _baselineLayoutConstraint;
    __UIAtomTextViewBaselineLayoutStrut * _baselineLayoutLabel;
    UIButton * _clearButton;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _clearButtonInsets;
    long long  _clearButtonMode;
    <_UIAtomTextViewDelegateInternal> * _delegate;
    bool  _drawsDebugBaselines;
    struct { 
        unsigned int delegateDidChangeSelection : 1; 
        unsigned int delegateSupportedPasteboardTypes : 1; 
        unsigned int delegateRepresentedObjectsFromPasteboard : 1; 
        unsigned int delegateStoreRepresentedObjectsOnPasteboard : 1; 
        unsigned int delegateShouldReplaceRepresentedObjectReplacementText : 1; 
        unsigned int inLayoutSubviews : 1; 
        unsigned int needsScrollToSelectionAfterLayout : 1; 
    }  _flags;
    UIFont * _font;
    UIView * _leadingView;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _leadingViewInsets;
    long long  _leadingViewMode;
    NSString * _placeholder;
    UIColor * _placeholderColor;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _placeholderInsets;
    UILabel * _placeholderLabel;
    UIScrollView * _scrollView;
    UIColor * _textColor;
    UITextInputTraits * _textInputTraits;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _textInsets;
    __UIAtomFieldEditor * _textView;
    UIView * _trailingView;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _trailingViewInsets;
    long long  _trailingViewMode;
}

@property (nonatomic, copy) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic, readonly) RTIInputSystemSourceSession *_rtiSourceSession;
@property (nonatomic) long long _textInputSource;
@property (nonatomic) bool acceptsDictationSearchResults;
@property (nonatomic) bool acceptsEmoji;
@property (nonatomic) bool acceptsFloatingKeyboard;
@property (nonatomic) bool acceptsPayloads;
@property (nonatomic) bool acceptsSplitKeyboard;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic, copy) NSString *autocorrectionContext;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic, readonly) UITextPosition *beginningOfDocument;
@property (nonatomic, readonly) UIButton *clearButton;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } clearButtonInsets;
@property (nonatomic) long long clearButtonMode;
@property (nonatomic) bool contentsIsSingleValue;
@property (nonatomic, readonly, copy) NSString *currentEditingString;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool deferBecomingResponder;
@property (nonatomic) <_UIAtomTextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDevicePasscodeEntry, nonatomic) bool devicePasscodeEntry;
@property (nonatomic) bool disableInputBars;
@property (nonatomic) bool disablePrediction;
@property (nonatomic) bool displaySecureEditsUsingPlainText;
@property (nonatomic) bool displaySecureTextUsingPlainText;
@property (getter=_drawsDebugBaselines, setter=_setDrawsDebugBaselines:, nonatomic) bool drawsDebugBaselines;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic) bool enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic, readonly) UITextPosition *endOfDocument;
@property (getter=_fieldEditor, nonatomic, readonly) __UIAtomFieldEditor *fieldEditor;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) bool forceDefaultDictationInfo;
@property (nonatomic) long long forceDictationKeyboardType;
@property (nonatomic) bool forceDisableDictation;
@property (nonatomic) bool forceEnableDictation;
@property (nonatomic) bool hasDefaultContents;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidePrediction;
@property (nonatomic, retain) UIInputContextHistory *inputContextHistory;
@property (nonatomic) <UITextInputDelegate> *inputDelegate;
@property (nonatomic, readonly) id insertDictationResultPlaceholder;
@property (nonatomic, retain) UIColor *insertionPointColor;
@property (nonatomic) unsigned long long insertionPointWidth;
@property (nonatomic, readonly) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) bool isCarPlayIdiom;
@property (nonatomic) bool isSingleLineDocument;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, retain) UIView *leadingView;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } leadingViewInsets;
@property (nonatomic) long long leadingViewMode;
@property (nonatomic) bool learnsCorrections;
@property (nonatomic) bool loadKeyboardsForSiriLanguage;
@property (nonatomic, readonly) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, retain) UIColor *placeholderColor;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } placeholderInsets;
@property (nonatomic, readonly) UILabel *placeholderLabel;
@property (nonatomic, copy) NSString *recentInputIdentifier;
@property (nonatomic, copy) NSArray *representedObjects;
@property (nonatomic, copy) NSString *responseContext;
@property (nonatomic) bool returnKeyGoesToNextResponder;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic, readonly, copy) NSArray *selectedRepresentedObjects;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) long long selectionAffinity;
@property (nonatomic, retain) UIColor *selectionBarColor;
@property (nonatomic, retain) UIImage *selectionDragDotImage;
@property (nonatomic) long long selectionGranularity;
@property (nonatomic, retain) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressReturnKeyStyling;
@property (getter=_systemBackgroundView, nonatomic, readonly) UIView *systemBackgroundView;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) <UITextInputSuggestionDelegate> *textInputSuggestionDelegate;
@property (nonatomic, readonly) UIView *textInputView;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } textInsets;
@property (nonatomic) int textLoupeVisibility;
@property (nonatomic) long long textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id textSuggestionDelegate;
@property (nonatomic) struct __CFCharacterSet { }*textTrimmingSet;
@property (nonatomic, readonly) <UITextInputTokenizer> *tokenizer;
@property (nonatomic, retain) UIView *trailingView;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } trailingViewInsets;
@property (nonatomic) long long trailingViewMode;
@property (nonatomic, retain) UIColor *underlineColorForSpelling;
@property (nonatomic, retain) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) bool useInterfaceLanguageForLocalization;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } validTextRange;

+ (Class)_backgroundViewClass;
+ (Class)_fieldEditorClass;
+ (id)defaultFont;
+ (id)defaultPlaceholderColor;
+ (id)defaultTextColor;

- (void).cxx_destruct;
- (id)_atomLayoutViewForRepresentedObject:(id)arg1;
- (id)_attachmentAtCharacterIndex:(unsigned long long)arg1;
- (id)_baseAttributedStringWithRepresentedObject:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_characterRangeForAtomView:(id)arg1;
- (id)_clearButtonImageForState:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })_clearButtonSize;
- (void)_clearButtonTapped:(id)arg1;
- (void)_createBaselineLayoutStrutIfNecessary;
- (void)_deleteCharactersInStorage:(id)arg1 ranges:(id)arg2 rangeToAdjust:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (bool)_drawsDebugBaselines;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_edgeInsetsForDirectionalInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)_fieldEditor;
- (struct CGPoint { double x1; double x2; })_firstGlyphBaselineLeftPointWithLayoutManager:(id)arg1;
- (bool)_hasContent;
- (void)_insertRepresentedObjects:(id)arg1 atCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_layoutButtons;
- (void)_layoutPlaceholder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 sizingView:(id)arg2 isLeft:(bool)arg3;
- (void)_removeRepresentedObjectsInCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_representedObjectsFromPasteboard:(id)arg1;
- (id)_representedObjectsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ranges:(id*)arg2;
- (void)_scrollToSelectionIfNeeded;
- (void)_setDrawsDebugBaselines:(bool)arg1;
- (void)_setEnabled:(bool)arg1 animated:(bool)arg2;
- (bool)_showViewWithMode:(long long)arg1 alwaysDefinition:(bool)arg2;
- (bool)_showsClearButton;
- (bool)_showsLeadingView;
- (bool)_showsPlaceholder;
- (bool)_showsTrailingView;
- (void)_storeRepresentedObjects:(id)arg1 onPasteboard:(id)arg2;
- (id)_supportedPasteboardTypes;
- (id)_systemBackgroundView;
- (void)_tapRecognized:(id)arg1;
- (void)_textStorageDidProcessEditing:(id)arg1;
- (void)_updateAtomMasksInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateBaselineConstraintIfNecessaryUsingTextViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_usedRectWithLayoutManager:(id)arg1 textContainer:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleAtomsRect;
- (void)addRepresentedObject:(id)arg1;
- (id)baseAttributes;
- (id)baseAttributesWithRepresentedObject:(id)arg1;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (bool)canResignFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)clearButton;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clearButtonFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })clearButtonInsets;
- (long long)clearButtonMode;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (id)currentEditingString;
- (id)currentEditingString:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteBackward;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (void)escKeyPressed:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)font;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (bool)hasContent;
- (bool)hasSelection;
- (bool)hasText;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertRepresentedObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertText:(id)arg1;
- (bool)isFirstResponder;
- (bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)keyCommands;
- (bool)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(bool)arg3;
- (bool)layoutManager:(id)arg1 shouldSetLineFragmentRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 lineFragmentUsedRect:(inout struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 baselineOffset:(inout double*)arg4 inTextContainer:(id)arg5 forGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg6;
- (void)layoutSubviews;
- (id)leadingView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })leadingViewFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })leadingViewInsets;
- (long long)leadingViewMode;
- (id)methodSignatureForSelector:(SEL)arg1;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)paragraphStyle;
- (id)placeholder;
- (id)placeholderColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })placeholderFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })placeholderInsets;
- (id)placeholderLabel;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)positionWithinRange:(id)arg1 atCharacterOffset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (void)removeRepresentedObject:(id)arg1;
- (void)removeRepresentedObjectAtIndex:(unsigned long long)arg1;
- (void)removeRepresentedObjects:(id)arg1;
- (void)removeRepresentedObjectsAtIndexes:(id)arg1;
- (void)replaceCurrentEditingStringWithRepresentedObject:(id)arg1;
- (void)replaceCurrentEditingStringWithRepresentedObject:(id)arg1 autoSelect:(bool)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)representedObjects;
- (bool)resignFirstResponder;
- (bool)respondsToSelector:(SEL)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selectAll;
- (id)selectedRepresentedObjects;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRange;
- (id)selectionRectsForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setClearButtonInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setClearButtonMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFont:(id)arg1;
- (void)setLeadingView:(id)arg1;
- (void)setLeadingViewInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLeadingViewMode:(long long)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setPlaceholder:(id)arg1;
- (void)setPlaceholderColor:(id)arg1;
- (void)setPlaceholderInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setRepresentedObjects:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTrailingView:(id)arg1;
- (void)setTrailingViewInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTrailingViewMode:(long long)arg1;
- (void)takeTraitsFrom:(id)arg1;
- (id)textColor;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })textInsets;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (id)trailingView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trailingViewFrameForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })trailingViewInsets;
- (long long)trailingViewMode;
- (void)unmarkText;
- (id)viewForLastBaselineLayout;

@end
