/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAtomSearchBar : UISearchBar <_UIAtomTextViewDelegateInternal> {
    _UISearchAtomTextView * _atomTextView;
    struct { 
        unsigned int delegateScopeButtonTitlesForRepresentedObject : 1; 
        unsigned int delegateSelectedScopeButtonIndexForRepresentedObject : 1; 
        unsigned int delegateSelectedScopeButtonIndexDidChangeForRepresentedObject : 1; 
        unsigned int delegateSearchButtonTapped : 1; 
        unsigned int delegateSupportedPasteboardTypes : 1; 
        unsigned int delegateRepresentedObjectsFromPasteboard : 1; 
        unsigned int delegateStoreRepresentedObjectsOnPasteboard : 1; 
        unsigned int showsScopeBar : 1; 
        unsigned int autoSelected : 1; 
    }  _flags;
    UIFont * _font;
    NSProgress * _progress;
    bool  _showsProgress;
}

@property (nonatomic, readonly) _UISearchAtomTextView *atomTextView;
@property (nonatomic, readonly, copy) NSString *currentEditingString;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIAtomSearchBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, copy) NSArray *representedObjects;
@property (nonatomic, readonly, copy) NSArray *selectedRepresentedObjects;
@property (nonatomic) bool showsProgress;
@property (readonly) Class superclass;

+ (id)defaultFont;

- (void).cxx_destruct;
- (bool)_atomTextView:(id)arg1 shouldReplaceRepresentedObject:(id)arg2 replacementText:(id)arg3;
- (void)_atomTextViewBeginEditing;
- (void)_atomTextViewEditingChanged;
- (void)_atomTextViewEndEditing;
- (void)_atomTextViewReturnPressed;
- (id)_glyphAndPlaceholderColor:(bool)arg1;
- (id)_searchBarTextField;
- (id)_searchBarTextFieldOrMailReplacementView;
- (void)_setBackdropStyle:(unsigned long long)arg1;
- (void)_setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_setMaskActive:(bool)arg1;
- (void)_setupAtomTextView;
- (void)_setupSearchField;
- (id)_textColor:(bool)arg1;
- (void)_updateMagnifyingGlassView;
- (id)atomTextView;
- (id)atomTextView:(id)arg1 atomViewForRepresentedObject:(id)arg2;
- (id)atomTextView:(id)arg1 representedObjectsFromPasteboard:(id)arg2;
- (bool)atomTextView:(id)arg1 storeRepresentedObjects:(id)arg2 onPasteboard:(id)arg3;
- (void)atomTextViewDidChangeSelection:(id)arg1;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (id)currentEditingString;
- (void)dealloc;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFirstResponder;
- (id)placeholder;
- (id)progress;
- (void)reloadInputViews;
- (void)replaceCurrentEditingStringWithRepresentedObject:(id)arg1;
- (void)replaceCurrentEditingStringWithRepresentedObject:(id)arg1 autoSelect:(bool)arg2;
- (id)representedObjects;
- (bool)resignFirstResponder;
- (id)selectedRepresentedObjects;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setRepresentedObjects:(id)arg1;
- (void)setShowsProgress:(bool)arg1;
- (bool)showsProgress;
- (id)supportedPasteboardTypesForAtomTextView:(id)arg1;

@end
