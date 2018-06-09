/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPackageManifestItem : PBCodable <NSCopying> {
    struct { 
        unsigned int size : 1; 
        unsigned int lastItem : 1; 
    }  _has;
    bool  _lastItem;
    NSData * _signature;
    long long  _size;
}

@property (nonatomic) bool hasLastItem;
@property (nonatomic, readonly) bool hasSignature;
@property (nonatomic) bool hasSize;
@property (nonatomic) bool lastItem;
@property (nonatomic, retain) NSData *signature;
@property (nonatomic) long long size;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLastItem;
- (bool)hasSignature;
- (bool)hasSize;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)lastItem;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLastItem:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setLastItem:(bool)arg1;
- (void)setSignature:(id)arg1;
- (void)setSize:(long long)arg1;
- (id)signature;
- (long long)size;
- (void)writeTo:(id)arg1;

@end
