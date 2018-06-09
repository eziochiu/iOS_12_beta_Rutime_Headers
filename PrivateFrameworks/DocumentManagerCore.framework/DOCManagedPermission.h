/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

@interface DOCManagedPermission : NSObject {
    NSCache * _cache;
    bool  _hasOpenInRestrictions;
    NSString * _hostIdentifier;
    bool  _isEphemeralMultiUser;
    bool  _isHostManaged;
    bool  _isManagedAppsCloudSyncDisallowed;
    bool  _mayOpenFromManagedToUnmanaged;
    bool  _mayOpenFromUnmanagedToManaged;
}

@property (nonatomic, retain) NSCache *cache;
@property (nonatomic, readonly) bool hasAnyEffectiveRestrictions;
@property (nonatomic, readonly) bool hasOpenInRestrictions;
@property (nonatomic, retain) NSString *hostIdentifier;
@property (nonatomic, readonly) bool isHostAccountOrAppManaged;
@property (nonatomic) bool isHostManaged;
@property (nonatomic, readonly) bool isInEducationMode;

+ (id)defaultPermission;

- (void).cxx_destruct;
- (void)_loadSharedConnectionValues;
- (id)cache;
- (bool)canCopyItems:(id)arg1;
- (bool)canCopySourceIsManaged:(bool)arg1;
- (bool)canCopyfromContainingBundleIdentifer:(id)arg1;
- (bool)canHostAppPerformAction:(unsigned long long)arg1 targetBundleIdentifier:(id)arg2;
- (bool)canHostAppPerformAction:(unsigned long long)arg1 targetItem:(id)arg2;
- (bool)canTransferSourceIsManaged:(bool)arg1 destinationIsManaged:(bool)arg2;
- (bool)canTransferSourceIsManaged:(bool)arg1 toDestinationItem:(id)arg2;
- (unsigned long long)dataOwnerStateForBundleIdentifier:(id)arg1;
- (unsigned long long)dataOwnerStateForItem:(id)arg1;
- (id)defaultFileProviderForAppBundle:(id)arg1;
- (id)filterBundleIdentifiers:(id)arg1 byCanPerformAction:(unsigned long long)arg2 targetBundleIdentifier:(id)arg3 targetBundleIsManaged:(bool)arg4;
- (id)filterItems:(id)arg1 byCanPerformAction:(unsigned long long)arg2 targetItem:(id)arg3;
- (id)filterProviders:(id)arg1 byCanPerformAction:(unsigned long long)arg2 targetBundleIdentifier:(id)arg3 targetBundleIsManaged:(bool)arg4;
- (bool)hasAnyEffectiveRestrictions;
- (bool)hasOpenInRestrictions;
- (id)hostIdentifier;
- (id)init;
- (bool)isEphemeralMultiUser;
- (bool)isHostAccountOrAppManaged;
- (bool)isHostManaged;
- (bool)isInEducationMode;
- (bool)isManagedAppsCloudSyncAllowed;
- (bool)isManagedAppsCloudSyncDisallowed;
- (bool)mayOpenFromManagedToUnmanaged;
- (bool)mayOpenFromUnmanagedToManaged;
- (id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 forBundleID:(id)arg3 outError:(id*)arg4;
- (void)setCache:(id)arg1;
- (void)setHostIdentifier:(id)arg1;
- (void)setIsHostManaged:(bool)arg1;

@end
