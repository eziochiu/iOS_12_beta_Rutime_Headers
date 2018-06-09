/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentDocumentSubmissionRequest : PKPeerPaymentWebServiceRequest {
    NSData * _backImageData;
    NSArray * _certificates;
    bool  _devSigned;
    NSString * _documentCountryCode;
    unsigned long long  _documentType;
    NSData * _frontImageData;
}

@property (nonatomic, copy) NSData *backImageData;
@property (nonatomic, copy) NSArray *certificates;
@property (nonatomic) bool devSigned;
@property (nonatomic, copy) NSString *documentCountryCode;
@property (nonatomic) unsigned long long documentType;
@property (nonatomic, copy) NSData *frontImageData;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2;
- (id)backImageData;
- (id)certificates;
- (bool)devSigned;
- (id)documentCountryCode;
- (unsigned long long)documentType;
- (id)frontImageData;
- (void)setBackImageData:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setDevSigned:(bool)arg1;
- (void)setDocumentCountryCode:(id)arg1;
- (void)setDocumentType:(unsigned long long)arg1;
- (void)setFrontImageData:(id)arg1;

@end
