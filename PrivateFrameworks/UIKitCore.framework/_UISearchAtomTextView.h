/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISearchAtomTextView : _UIAtomTextView <_UISearchAtomViewTappedStateProtocol, _UISearchBarTextFieldOrMailReplacement> {
    __UIAtomSearchBarFieldEditorBackgroundView * _effectBackgroundBottom;
    __UIAtomSearchBarFieldEditorBackgroundView * _effectBackgroundTop;
    bool  _tapped;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_fieldEditor, nonatomic, readonly) _UISearchAtomFieldEditor *fieldEditor;
@property (readonly) unsigned long long hash;
@property (getter=_searchBar, nonatomic, readonly) _UIAtomSearchBar *searchBar;
@property (readonly) Class superclass;
@property (getter=isTapped, nonatomic) bool tapped;

+ (Class)_backgroundViewClass;
+ (Class)_fieldEditorClass;

- (void).cxx_destruct;
- (id)_createEffectsBackgroundViewWithStyle:(unsigned long long)arg1 applyFilter:(id)arg2;
- (id)_fieldEditor;
- (id)_searchBar;
- (void)_setAnimatesBackgroundCornerRadius:(bool)arg1;
- (void)_setBackgroundViewsAlpha:(double)arg1;
- (void)_setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)_setForegroundViewsAlpha:(double)arg1;
- (void)_updateBackgroundView:(id)arg1 withStyle:(unsigned long long)arg2 filter:(id)arg3;
- (bool)isTapped;
- (id)searchText;
- (void)setTapped:(bool)arg1;
- (void)setText:(id)arg1;
- (id)textInputTraits;
- (void)updateForBackdropStyle:(unsigned long long)arg1;

@end
