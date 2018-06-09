/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYFileTransferInfo : PBCodable <NSCopying> {
    unsigned long long  _decompressedFileSize;
    NSString * _endAnchor;
    SYMessageHeader * _header;
    NSString * _startAnchor;
}

@property (nonatomic) unsigned long long decompressedFileSize;
@property (nonatomic, retain) NSString *endAnchor;
@property (nonatomic, readonly) bool hasEndAnchor;
@property (nonatomic, readonly) bool hasStartAnchor;
@property (nonatomic, retain) SYMessageHeader *header;
@property (nonatomic, retain) NSString *startAnchor;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)decompressedFileSize;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endAnchor;
- (bool)hasEndAnchor;
- (bool)hasStartAnchor;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDecompressedFileSize:(unsigned long long)arg1;
- (void)setEndAnchor:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setStartAnchor:(id)arg1;
- (id)startAnchor;
- (void)writeTo:(id)arg1;

@end
