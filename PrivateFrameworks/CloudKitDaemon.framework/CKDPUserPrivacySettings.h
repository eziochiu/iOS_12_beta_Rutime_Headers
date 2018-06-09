/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserPrivacySettings : PBCodable <NSCopying> {
    bool  _discoverable;
    struct { 
        unsigned int discoverable : 1; 
    }  _has;
}

@property (nonatomic) bool discoverable;
@property (nonatomic) bool hasDiscoverable;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)discoverable;
- (bool)hasDiscoverable;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDiscoverable:(bool)arg1;
- (void)setHasDiscoverable:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
