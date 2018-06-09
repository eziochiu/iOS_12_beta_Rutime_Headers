/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPResponseOperationResult : PBCodable <NSCopying> {
    int  _code;
    CKDPResponseOperationResultError * _error;
    struct { 
        unsigned int code : 1; 
    }  _has;
}

@property (nonatomic) int code;
@property (nonatomic, retain) CKDPResponseOperationResultError *error;
@property (nonatomic) bool hasCode;
@property (nonatomic, readonly) bool hasError;

- (void).cxx_destruct;
- (int)StringAsCode:(id)arg1;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (int)code;
- (id)codeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)error;
- (bool)hasCode;
- (bool)hasError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCode:(int)arg1;
- (void)setError:(id)arg1;
- (void)setHasCode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
