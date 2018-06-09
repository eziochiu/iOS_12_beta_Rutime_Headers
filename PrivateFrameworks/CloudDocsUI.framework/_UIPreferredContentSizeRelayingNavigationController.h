/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIPreferredContentSizeRelayingNavigationController : UINavigationController <_UIPreferredContentSizeRelayingContainer> {
    id /* block */  _preferredContentSizeDidChange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic, copy) id /* block */ preferredContentSizeDidChange;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)preferredContentSizeDidChange;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredContentSizeDidChange:(id /* block */)arg1;

@end
