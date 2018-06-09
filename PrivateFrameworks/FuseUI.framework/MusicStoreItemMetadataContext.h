/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreItemMetadataContext : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _JSDictionary;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMapTable * _adjustedOptionsToRepresentativeMediaEntity;
    bool  _hasCompleteStoreItemMetadata;
    bool  _hasOverrideChildrenMetadataContexts;
    NSArray * _overrideChildrenMetadataContexts;
    NSString * _storeID;
    MPStoreItemMetadata * _storeItemMetadata;
    bool  _wantsRepresentativeMediaEntity;
}

@property (nonatomic, readonly, copy) NSDictionary *JSDictionary;
@property (nonatomic, readonly, copy) MPUContentItemIdentifierCollection *MPU_contentItemIdentifierCollection;
@property (nonatomic, readonly, copy) NSArray *childrenStoreItemMetadataContexts;
@property (getter=isCompilation, nonatomic, readonly) bool compilation;
@property (nonatomic, readonly) bool hasCompleteStoreItemMetadata;
@property (nonatomic, readonly, copy) NSString *storeID;
@property (nonatomic, readonly, copy) MPStoreItemMetadata *storeItemMetadata;
@property (getter=isStoreRestricted, nonatomic, readonly) bool storeRestricted;

+ (id)mediaLibrary;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSDictionary;
- (id)MPU_contentItemIdentifierCollection;
- (void)_beginObservingMediaLibraryNotifications;
- (void)_invalidateFromMediaLibraryChange;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (id)childrenStoreItemMetadataContexts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCompleteStoreItemMetadata;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSDictionary:(id)arg1;
- (id)initWithStoreID:(id)arg1;
- (id)initWithStoreItemMetadata:(id)arg1 hasCompleteStoreItemMetadata:(bool)arg2;
- (id)initWithStorePlatformDictionary:(id)arg1 hasCompleteStoreItemMetadata:(bool)arg2;
- (id)initWithStorePlatformDictionary:(id)arg1 storeID:(id)arg2 hasCompleteStoreItemMetadata:(bool)arg3;
- (bool)isCompilation;
- (bool)isPlayable;
- (bool)isStoreRestricted;
- (id)representativeMediaEntityWithOptions:(unsigned long long)arg1;
- (id)storeID;
- (id)storeItemMetadata;
- (id)storeItemMetadataContextWithChildStoreItemMetadataContexts:(id)arg1;
- (id)storeItemMetadataContextWithParentMetadata:(id)arg1;

@end
