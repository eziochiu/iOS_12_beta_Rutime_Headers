/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPOperation : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
        unsigned int last : 1; 
        unsigned int synchronousMode : 1; 
    }  _has;
    bool  _last;
    NSString * _operationUUID;
    bool  _synchronousMode;
    int  _type;
}

@property (nonatomic) bool hasLast;
@property (nonatomic, readonly) bool hasOperationUUID;
@property (nonatomic) bool hasSynchronousMode;
@property (nonatomic) bool hasType;
@property (nonatomic) bool last;
@property (nonatomic, retain) NSString *operationUUID;
@property (nonatomic) bool synchronousMode;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLast;
- (bool)hasOperationUUID;
- (bool)hasSynchronousMode;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)last;
- (void)mergeFrom:(id)arg1;
- (id)operationUUID;
- (bool)readFrom:(id)arg1;
- (void)setHasLast:(bool)arg1;
- (void)setHasSynchronousMode:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setLast:(bool)arg1;
- (void)setOperationUUID:(id)arg1;
- (void)setSynchronousMode:(bool)arg1;
- (void)setType:(int)arg1;
- (bool)synchronousMode;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
