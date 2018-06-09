/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentInstrumentThumbnailResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    }  _has;
    NSString * _manifestHash;
    int  _status;
    NSData * _thumbnailImage;
}

@property (nonatomic, readonly) bool hasManifestHash;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) bool hasThumbnailImage;
@property (nonatomic, retain) NSString *manifestHash;
@property (nonatomic) int status;
@property (nonatomic, retain) NSData *thumbnailImage;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasManifestHash;
- (bool)hasStatus;
- (bool)hasThumbnailImage;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)manifestHash;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setManifestHash:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setThumbnailImage:(id)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)thumbnailImage;
- (void)writeTo:(id)arg1;

@end
