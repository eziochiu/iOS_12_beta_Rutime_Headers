/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptPopOverNativeObject : SUScriptNativeObject {
    bool  _redisplayAfterRotation;
    UIBarButtonItem * _sourceButtonItem;
    SUDOMElement * _sourceDOMElement;
}

@property (nonatomic, retain) UIBarButtonItem *sourceButtonItem;
@property (nonatomic, retain) SUDOMElement *sourceDOMElement;

- (bool)_isAffectedByWindowNotification:(id)arg1;
- (void)_windowDidRotateNotification:(id)arg1;
- (void)_windowWillRotateNotification:(id)arg1;
- (void)dealloc;
- (void)destroyNativeObject;
- (void)setSourceButtonItem:(id)arg1;
- (void)setSourceDOMElement:(id)arg1;
- (void)setupNativeObject;
- (id)sourceButtonItem;
- (id)sourceDOMElement;

@end
