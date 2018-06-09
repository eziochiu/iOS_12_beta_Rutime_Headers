/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMutableMediaContentTasteItem : SSVMediaContentTasteItem

@property (nonatomic) unsigned long long contentType;
@property (nonatomic, copy) NSString *playlistGlobalID;
@property (nonatomic) long long storeAdamID;
@property (nonatomic) unsigned long long tasteType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setPlaylistGlobalID:(id)arg1;
- (void)setStoreAdamID:(long long)arg1;
- (void)setTasteType:(unsigned long long)arg1;

@end
