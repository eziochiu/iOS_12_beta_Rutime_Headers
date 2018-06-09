/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSAudioRouteMessage : PBCodable <NSCopying> {
    NSString * _displayName;
    struct { 
        unsigned int macAddress : 1; 
        unsigned int selected : 1; 
        unsigned int supportsVideo : 1; 
    }  _has;
    long long  _macAddress;
    bool  _selected;
    bool  _supportsVideo;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic) bool hasMacAddress;
@property (nonatomic) bool hasSelected;
@property (nonatomic) bool hasSupportsVideo;
@property (nonatomic) long long macAddress;
@property (nonatomic) bool selected;
@property (nonatomic) bool supportsVideo;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (bool)hasDisplayName;
- (bool)hasMacAddress;
- (bool)hasSelected;
- (bool)hasSupportsVideo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)macAddress;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)selected;
- (void)setDisplayName:(id)arg1;
- (void)setHasMacAddress:(bool)arg1;
- (void)setHasSelected:(bool)arg1;
- (void)setHasSupportsVideo:(bool)arg1;
- (void)setMacAddress:(long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSupportsVideo:(bool)arg1;
- (bool)supportsVideo;
- (void)writeTo:(id)arg1;

@end
