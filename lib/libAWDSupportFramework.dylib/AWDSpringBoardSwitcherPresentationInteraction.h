/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSpringBoardSwitcherPresentationInteraction : PBCodable <NSCopying> {
    bool  _didCommit;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int didCommit : 1; 
    }  _has;
    NSString * _source;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool didCommit;
@property (nonatomic) bool hasDidCommit;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *source;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didCommit;
- (bool)hasDidCommit;
- (bool)hasSource;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDidCommit:(bool)arg1;
- (void)setHasDidCommit:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)source;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
