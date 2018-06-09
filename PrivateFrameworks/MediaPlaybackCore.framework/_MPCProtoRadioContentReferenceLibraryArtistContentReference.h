/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCProtoRadioContentReferenceLibraryArtistContentReference : PBCodable <NSCopying> {
    NSString * _artistName;
    struct { 
        unsigned int representativeItemCloudID : 1; 
        unsigned int storeAdamID : 1; 
    }  _has;
    long long  _representativeItemCloudID;
    long long  _storeAdamID;
}

@property (nonatomic, retain) NSString *artistName;
@property (nonatomic, readonly) bool hasArtistName;
@property (nonatomic) bool hasRepresentativeItemCloudID;
@property (nonatomic) bool hasStoreAdamID;
@property (nonatomic) long long representativeItemCloudID;
@property (nonatomic) long long storeAdamID;

- (void).cxx_destruct;
- (id)artistName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArtistName;
- (bool)hasRepresentativeItemCloudID;
- (bool)hasStoreAdamID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (long long)representativeItemCloudID;
- (void)setArtistName:(id)arg1;
- (void)setHasRepresentativeItemCloudID:(bool)arg1;
- (void)setHasStoreAdamID:(bool)arg1;
- (void)setRepresentativeItemCloudID:(long long)arg1;
- (void)setStoreAdamID:(long long)arg1;
- (long long)storeAdamID;
- (void)writeTo:(id)arg1;

@end
