/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLEResponse : HMFObject {
    NSMutableData * __internalBody;
    NSData * _body;
    unsigned long long  _bodyLength;
    bool  _headerComplete;
    HAPBTLETransactionIdentifier * _identifier;
    HAPBTLERequest * _request;
    unsigned char  _statusCode;
}

@property (setter=_setInternalBody:, nonatomic, retain) NSMutableData *_internalBody;
@property (nonatomic, copy) NSData *body;
@property (getter=isBodyComplete, nonatomic, readonly) bool bodyComplete;
@property (nonatomic, readonly) unsigned long long bodyLength;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (getter=isHeaderComplete, nonatomic) bool headerComplete;
@property (nonatomic, readonly) HAPBTLETransactionIdentifier *identifier;
@property (nonatomic, readonly) HAPBTLERequest *request;
@property (nonatomic, readonly) unsigned char statusCode;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (unsigned long long)_deserializeHeaderBodyLengthWithData:(id)arg1 error:(id*)arg2;
- (unsigned long long)_deserializeHeaderWithData:(id)arg1 error:(id*)arg2;
- (id)_internalBody;
- (unsigned long long)_remainingBodyLength;
- (void)_setInternalBody:(id)arg1;
- (unsigned long long)appendData:(id)arg1 error:(id*)arg2;
- (id)body;
- (unsigned long long)bodyLength;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (id)identifier;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (bool)isBodyComplete;
- (bool)isComplete;
- (bool)isEncrypted;
- (bool)isHeaderComplete;
- (bool)isValid;
- (id)request;
- (void)setBody:(id)arg1;
- (void)setHeaderComplete:(bool)arg1;
- (id)shortDescription;
- (unsigned char)statusCode;

@end
