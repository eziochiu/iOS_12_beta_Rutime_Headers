/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCProtoItemIdentifierSet : PBCodable <NSCopying> {
    long long  _cloudID;
    NSString * _cloudUniversalLibraryID;
    NSString * _contentItemID;
    long long  _delegateInfoID;
    struct { 
        unsigned int cloudID : 1; 
        unsigned int delegateInfoID : 1; 
        unsigned int purchaseHistoryID : 1; 
        unsigned int storeAdamID : 1; 
        unsigned int storeSubscriptionAdamID : 1; 
    }  _has;
    long long  _purchaseHistoryID;
    long long  _storeAdamID;
    long long  _storeSubscriptionAdamID;
}

@property (nonatomic) long long cloudID;
@property (nonatomic, retain) NSString *cloudUniversalLibraryID;
@property (nonatomic, retain) NSString *contentItemID;
@property (nonatomic) long long delegateInfoID;
@property (nonatomic) bool hasCloudID;
@property (nonatomic, readonly) bool hasCloudUniversalLibraryID;
@property (nonatomic, readonly) bool hasContentItemID;
@property (nonatomic) bool hasDelegateInfoID;
@property (nonatomic) bool hasPurchaseHistoryID;
@property (nonatomic) bool hasStoreAdamID;
@property (nonatomic) bool hasStoreSubscriptionAdamID;
@property (nonatomic) long long purchaseHistoryID;
@property (nonatomic) long long storeAdamID;
@property (nonatomic) long long storeSubscriptionAdamID;

- (void).cxx_destruct;
- (long long)cloudID;
- (id)cloudUniversalLibraryID;
- (id)contentItemID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)delegateInfoID;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCloudID;
- (bool)hasCloudUniversalLibraryID;
- (bool)hasContentItemID;
- (bool)hasDelegateInfoID;
- (bool)hasPurchaseHistoryID;
- (bool)hasStoreAdamID;
- (bool)hasStoreSubscriptionAdamID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)purchaseHistoryID;
- (bool)readFrom:(id)arg1;
- (void)setCloudID:(long long)arg1;
- (void)setCloudUniversalLibraryID:(id)arg1;
- (void)setContentItemID:(id)arg1;
- (void)setDelegateInfoID:(long long)arg1;
- (void)setHasCloudID:(bool)arg1;
- (void)setHasDelegateInfoID:(bool)arg1;
- (void)setHasPurchaseHistoryID:(bool)arg1;
- (void)setHasStoreAdamID:(bool)arg1;
- (void)setHasStoreSubscriptionAdamID:(bool)arg1;
- (void)setPurchaseHistoryID:(long long)arg1;
- (void)setStoreAdamID:(long long)arg1;
- (void)setStoreSubscriptionAdamID:(long long)arg1;
- (long long)storeAdamID;
- (long long)storeSubscriptionAdamID;
- (void)writeTo:(id)arg1;

@end
