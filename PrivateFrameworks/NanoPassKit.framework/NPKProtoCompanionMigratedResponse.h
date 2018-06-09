/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoCompanionMigratedResponse : PBCodable <NSCopying> {
    NSData * _errorData;
    struct { 
        unsigned int pending : 1; 
        unsigned int success : 1; 
    }  _has;
    NSData * _paymentWebServiceContextData;
    NSData * _peerPaymentAccountData;
    NSData * _peerPaymentWebServiceContextData;
    bool  _pending;
    bool  _success;
}

@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasPaymentWebServiceContextData;
@property (nonatomic, readonly) bool hasPeerPaymentAccountData;
@property (nonatomic, readonly) bool hasPeerPaymentWebServiceContextData;
@property (nonatomic) bool hasPending;
@property (nonatomic) bool hasSuccess;
@property (nonatomic, retain) NSData *paymentWebServiceContextData;
@property (nonatomic, retain) NSData *peerPaymentAccountData;
@property (nonatomic, retain) NSData *peerPaymentWebServiceContextData;
@property (nonatomic) bool pending;
@property (nonatomic) bool success;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasErrorData;
- (bool)hasPaymentWebServiceContextData;
- (bool)hasPeerPaymentAccountData;
- (bool)hasPeerPaymentWebServiceContextData;
- (bool)hasPending;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentWebServiceContextData;
- (id)peerPaymentAccountData;
- (id)peerPaymentWebServiceContextData;
- (bool)pending;
- (bool)readFrom:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setHasPending:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setPaymentWebServiceContextData:(id)arg1;
- (void)setPeerPaymentAccountData:(id)arg1;
- (void)setPeerPaymentWebServiceContextData:(id)arg1;
- (void)setPending:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
