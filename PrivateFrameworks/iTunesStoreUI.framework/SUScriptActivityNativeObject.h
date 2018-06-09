/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptActivityNativeObject : SUScriptNativeObject <SUActivityDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)activity:(id)arg1 canPerformWithActivityItems:(id)arg2;
- (void)activity:(id)arg1 prepareWithActivityItems:(id)arg2;
- (void)destroyNativeObject;
- (void)performActionForActivity:(id)arg1;
- (void)setupNativeObject;

@end
