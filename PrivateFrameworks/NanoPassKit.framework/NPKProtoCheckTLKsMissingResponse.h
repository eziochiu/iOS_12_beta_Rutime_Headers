/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoCheckTLKsMissingResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    struct { 
        unsigned int missing : 1; 
        unsigned int pending : 1; 
    }  _has;
    bool  _missing;
    bool  _pending;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic) bool hasMissing;
@property (nonatomic) bool hasPending;
@property (nonatomic) bool missing;
@property (nonatomic) bool pending;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasMissing;
- (bool)hasPending;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)missing;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setHasMissing:(bool)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setMissing:(bool)arg1;
- (void)setPending:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
