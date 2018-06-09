/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBBackgroundSubscriptionValidation : PBCodable <NSCopying> {
    NSString * _errorCode;
    NSString * _errorMessage;
    struct { 
        unsigned int resultType : 1; 
    }  _has;
    int  _resultType;
    NSString * _sourceChannelId;
}

@property (nonatomic, retain) NSString *errorCode;
@property (nonatomic, retain) NSString *errorMessage;
@property (nonatomic, readonly) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorMessage;
@property (nonatomic) bool hasResultType;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic) int resultType;
@property (nonatomic, retain) NSString *sourceChannelId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorCode;
- (id)errorMessage;
- (bool)hasErrorCode;
- (bool)hasErrorMessage;
- (bool)hasResultType;
- (bool)hasSourceChannelId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)resultType;
- (void)setErrorCode:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setHasResultType:(bool)arg1;
- (void)setResultType:(int)arg1;
- (void)setSourceChannelId:(id)arg1;
- (id)sourceChannelId;
- (void)writeTo:(id)arg1;

@end
