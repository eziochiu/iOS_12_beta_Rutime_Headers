/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYLogEngineState : PBCodable <NSCopying> {
    bool  _buffersSessions;
    struct { 
        unsigned int buffersSessions : 1; 
        unsigned int inSession : 1; 
        unsigned int suspended : 1; 
    }  _has;
    bool  _inSession;
    bool  _suspended;
    int  _type;
}

@property (nonatomic) bool buffersSessions;
@property (nonatomic) bool hasBuffersSessions;
@property (nonatomic) bool hasInSession;
@property (nonatomic) bool hasSuspended;
@property (nonatomic) bool inSession;
@property (nonatomic) bool suspended;
@property (nonatomic) int type;

- (int)StringAsType:(id)arg1;
- (bool)buffersSessions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBuffersSessions;
- (bool)hasInSession;
- (bool)hasSuspended;
- (unsigned long long)hash;
- (bool)inSession;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBuffersSessions:(bool)arg1;
- (void)setHasBuffersSessions:(bool)arg1;
- (void)setHasInSession:(bool)arg1;
- (void)setHasSuspended:(bool)arg1;
- (void)setInSession:(bool)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setType:(int)arg1;
- (bool)suspended;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
