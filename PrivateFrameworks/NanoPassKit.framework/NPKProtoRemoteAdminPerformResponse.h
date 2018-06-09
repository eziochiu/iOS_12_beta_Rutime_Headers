/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoRemoteAdminPerformResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int httpStatus : 1; 
    }  _has;
    int  _httpStatus;
    NSData * _responseDictionary;
    unsigned int  _resultCode;
}

@property (nonatomic) bool hasHttpStatus;
@property (nonatomic, readonly) bool hasResponseDictionary;
@property (nonatomic) int httpStatus;
@property (nonatomic, retain) NSData *responseDictionary;
@property (nonatomic) unsigned int resultCode;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHttpStatus;
- (bool)hasResponseDictionary;
- (unsigned long long)hash;
- (int)httpStatus;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseDictionary;
- (unsigned int)resultCode;
- (void)setHasHttpStatus:(bool)arg1;
- (void)setHttpStatus:(int)arg1;
- (void)setResponseDictionary:(id)arg1;
- (void)setResultCode:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
