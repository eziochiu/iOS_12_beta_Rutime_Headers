/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISearchAtomFieldEditor : __UIAtomFieldEditor {
    <_UISearchAtomViewTappedStateProtocol> * _searchAtomViewTapStateDelegate;
}

@property (getter=_hostView, nonatomic, readonly) _UISearchAtomTextView *hostView;
@property (nonatomic) <_UISearchAtomViewTappedStateProtocol> *searchAtomViewTapStateDelegate;
@property (getter=_searchBar, nonatomic, readonly) _UIAtomSearchBar *searchBar;

- (void).cxx_destruct;
- (double)_baselineOffsetFromBottom;
- (double)_firstBaselineOffsetFromTop;
- (id)_hostView;
- (id)_searchBar;
- (bool)canBecomeFirstResponder;
- (id)searchAtomViewTapStateDelegate;
- (void)setSearchAtomViewTapStateDelegate:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
