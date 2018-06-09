/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptStoreBagLoader : NSObject <ISURLBagObserver> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSDictionary * _bagDictionary;
    SUScriptDictionary * _scriptStoreBagDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateWithBagDictionary:(id)arg1 allowsPostingBagDidChangeNotification:(bool)arg2;
- (void)bagDidChange:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)scriptStoreBagDictionary;

@end
