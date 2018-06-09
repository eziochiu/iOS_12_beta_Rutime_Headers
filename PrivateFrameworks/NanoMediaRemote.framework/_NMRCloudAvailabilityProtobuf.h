/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface _NMRCloudAvailabilityProtobuf : PBCodable <NSCopying> {
    bool  _canShowCloudMusic;
    struct { 
        unsigned int canShowCloudMusic : 1; 
        unsigned int hasProperNetworkConditionsToPlayMedia : 1; 
    }  _has;
    bool  _hasProperNetworkConditionsToPlayMedia;
}

@property (nonatomic) bool canShowCloudMusic;
@property (nonatomic) bool hasCanShowCloudMusic;
@property (nonatomic) bool hasHasProperNetworkConditionsToPlayMedia;
@property (nonatomic) bool hasProperNetworkConditionsToPlayMedia;

- (bool)canShowCloudMusic;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCanShowCloudMusic;
- (bool)hasHasProperNetworkConditionsToPlayMedia;
- (bool)hasProperNetworkConditionsToPlayMedia;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCanShowCloudMusic:(bool)arg1;
- (void)setHasCanShowCloudMusic:(bool)arg1;
- (void)setHasHasProperNetworkConditionsToPlayMedia:(bool)arg1;
- (void)setHasProperNetworkConditionsToPlayMedia:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
