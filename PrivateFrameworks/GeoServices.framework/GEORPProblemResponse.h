/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
        unsigned int isNotificationSupported : 1; 
    }  _has;
    bool  _isNotificationSupported;
    NSString * _problemId;
    int  _statusCode;
}

@property (nonatomic) bool hasIsNotificationSupported;
@property (nonatomic, readonly) bool hasProblemId;
@property (nonatomic) bool hasStatusCode;
@property (nonatomic) bool isNotificationSupported;
@property (nonatomic, retain) NSString *problemId;
@property (nonatomic) int statusCode;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsNotificationSupported;
- (bool)hasProblemId;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isNotificationSupported;
- (void)mergeFrom:(id)arg1;
- (id)problemId;
- (bool)readFrom:(id)arg1;
- (void)setHasIsNotificationSupported:(bool)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setIsNotificationSupported:(bool)arg1;
- (void)setProblemId:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
