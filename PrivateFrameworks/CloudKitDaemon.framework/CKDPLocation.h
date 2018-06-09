/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPLocation : PBCodable <NSCopying> {
    CKDPLocationBound * _bounds;
    CKDPLocationCoordinate * _coordinate;
}

@property (nonatomic, retain) CKDPLocationBound *bounds;
@property (nonatomic, retain) CKDPLocationCoordinate *coordinate;
@property (nonatomic, readonly) bool hasBounds;
@property (nonatomic, readonly) bool hasCoordinate;

- (void).cxx_destruct;
- (id)bounds;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBounds;
- (bool)hasCoordinate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)writeTo:(id)arg1;

@end
