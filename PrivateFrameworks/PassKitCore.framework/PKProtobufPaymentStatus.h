/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentStatus : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    }  _has;
    NSString * _remotePaymentRequestIdentifier;
    unsigned int  _status;
}

@property (nonatomic, readonly) bool hasRemotePaymentRequestIdentifier;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) NSString *remotePaymentRequestIdentifier;
@property (nonatomic) unsigned int status;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRemotePaymentRequestIdentifier;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)remotePaymentRequestIdentifier;
- (void)setHasStatus:(bool)arg1;
- (void)setRemotePaymentRequestIdentifier:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;
- (void)writeTo:(id)arg1;

@end
