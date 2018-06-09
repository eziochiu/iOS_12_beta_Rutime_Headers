/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchaseResponse : NSObject <NSSecureCoding, SSXPCCoding> {
    bool  _cancelsPurchaseBatch;
    NSArray * _downloadIdentifiers;
    NSError * _error;
    SSPurchase * _purchase;
    double  _requestStartTime;
    SSURLConnectionResponse * _response;
    double  _responseEndTime;
    double  _responseStartTime;
    NSMutableDictionary * _transactionIdentifiers;
}

@property (nonatomic, retain) SSURLConnectionResponse *URLResponse;
@property (nonatomic) bool cancelsPurchaseBatch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *downloadIdentifiers;
@property (nonatomic, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) SSPurchase *purchase;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URLResponse;
- (bool)cancelsPurchaseBatch;
- (id)copyXPCEncoding;
- (id)downloadIdentifiers;
- (id)downloadMetadataForItemIdentifier:(long long)arg1;
- (id)downloadsMetadata;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)purchase;
- (double)requestStartTime;
- (double)responseEndTime;
- (id)responseMetrics;
- (double)responseStartTime;
- (void)setCancelsPurchaseBatch:(bool)arg1;
- (void)setDownloadIdentifiers:(id)arg1;
- (void)setError:(id)arg1;
- (void)setPurchase:(id)arg1;
- (void)setRequestStartTime:(double)arg1;
- (void)setResponseEndTime:(double)arg1;
- (void)setResponseStartTime:(double)arg1;
- (void)setURLResponse:(id)arg1;
- (id)transactionIdentifierForItemIdentifier:(long long)arg1;

@end
