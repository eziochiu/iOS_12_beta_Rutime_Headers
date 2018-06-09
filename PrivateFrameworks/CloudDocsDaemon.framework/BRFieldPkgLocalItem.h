/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRFieldPkgLocalItem : PBCodable <NSCopying> {
    long long  _fileID;
    unsigned int  _generationID;
    struct { 
        unsigned int size : 1; 
        unsigned int generationID : 1; 
    }  _has;
    BRFieldPkgItem * _item;
    long long  _size;
    NSData * _xattrs;
}

@property (nonatomic) long long fileID;
@property (nonatomic) unsigned int generationID;
@property (nonatomic) bool hasGenerationID;
@property (nonatomic) bool hasSize;
@property (nonatomic, readonly) bool hasXattrs;
@property (nonatomic, retain) BRFieldPkgItem *item;
@property (nonatomic) long long size;
@property (nonatomic, retain) NSData *xattrs;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)fileID;
- (unsigned int)generationID;
- (bool)hasGenerationID;
- (bool)hasSize;
- (bool)hasXattrs;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)item;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFileID:(long long)arg1;
- (void)setGenerationID:(unsigned int)arg1;
- (void)setHasGenerationID:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setXattrs:(id)arg1;
- (long long)size;
- (void)writeTo:(id)arg1;
- (id)xattrs;

@end
