/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUDialogManager : NSObject <ISSingleton> {
    NSMutableArray * _dialogs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long numberOfPendingDialogs;
@property (readonly) Class superclass;

+ (id)newDialogWithError:(id)arg1;
+ (void)setSharedInstance:(id)arg1;
+ (id)sharedInstance;

- (void)_finishDialog:(id)arg1 withButtonIndex:(long long)arg2;
- (bool)_isDisplayingEquivalentDialog:(id)arg1;
- (void)_performDefaultActionForDialog:(id)arg1 buttonIndex:(long long)arg2;
- (void)dealloc;
- (long long)numberOfPendingDialogs;
- (bool)presentDialog:(id)arg1;
- (bool)presentDialog:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (bool)presentDialogForError:(id)arg1;
- (bool)presentDialogForError:(id)arg1 withCompletionBlock:(id /* block */)arg2;

@end
