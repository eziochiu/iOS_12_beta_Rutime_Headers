/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RUIBarButtonItem : RUIElement {
    id /* block */  _action;
    UIBarButtonItem * _barButtonItem;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, readonly) UIBarButtonItem *barButtonItem;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (id /* block */)action;
- (id)barButtonItem;
- (void)setAction:(id /* block */)arg1;
- (void)setEnabled:(bool)arg1;

@end
