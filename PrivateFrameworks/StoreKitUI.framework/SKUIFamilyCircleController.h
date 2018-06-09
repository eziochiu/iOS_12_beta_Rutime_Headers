/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIFamilyCircleController : NSObject {
    SKUIClientContext * _clientContext;
    bool  _hasLoaded;
    FAFamilyCircle * _iCloudFamily;
    SSFamilyCircle * _iTunesFamily;
    NSCache * _imageCache;
    NSNumber * _lastAccountID;
    long long  _reloadPromptStyle;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, readonly) SSFamilyCircle *familyCircle;
@property (nonatomic, readonly) bool hasLoaded;
@property (nonatomic, readonly) FAFamilyCircle *iCloudFamily;
@property (retain) NSNumber *lastAccountID;
@property long long reloadPromptStyle;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_reloadDataWithPromptStyle:(long long)arg1;
- (void)_setITunesFamily:(id)arg1 error:(id)arg2 iCloudFamily:(id)arg3 error:(id)arg4;
- (void)_setProfilePicture:(id)arg1 forMember:(id)arg2;
- (id)clientContext;
- (void)dealloc;
- (id)familyCircle;
- (bool)hasLoaded;
- (id)iCloudFamily;
- (id)init;
- (id)lastAccountID;
- (id)profilePictureForFamilyMember:(id)arg1;
- (void)reloadData;
- (long long)reloadPromptStyle;
- (void)setClientContext:(id)arg1;
- (void)setLastAccountID:(id)arg1;
- (void)setReloadPromptStyle:(long long)arg1;

@end
