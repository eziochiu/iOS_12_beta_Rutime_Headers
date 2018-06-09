/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYRejectedVersion : PBCodable <NSCopying> {
    SYMessageHeader * _header;
    NSString * _inReplyTo;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _supportedVersions;
}

@property (nonatomic, retain) SYMessageHeader *header;
@property (nonatomic, retain) NSString *inReplyTo;
@property (nonatomic, readonly) unsigned int*supportedVersions;
@property (nonatomic, readonly) unsigned long long supportedVersionsCount;

- (void).cxx_destruct;
- (void)addSupportedVersions:(unsigned int)arg1;
- (void)clearSupportedVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)header;
- (id)inReplyTo;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setInReplyTo:(id)arg1;
- (void)setSupportedVersions:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)supportedVersions;
- (unsigned int)supportedVersionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedVersionsCount;
- (void)writeTo:(id)arg1;

@end
