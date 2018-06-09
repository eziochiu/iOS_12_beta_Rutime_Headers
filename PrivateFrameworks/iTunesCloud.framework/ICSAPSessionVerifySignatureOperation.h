/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICSAPSessionVerifySignatureOperation : ICSAPSessionAbstractOperation {
    NSMutableData * _data;
    id /* block */  _responseHandler;
    NSData * _signatureData;
}

@property (nonatomic, retain) NSMutableData *data;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, copy) NSData *signatureData;

- (void).cxx_destruct;
- (id)data;
- (void)executeWithSAPContext:(id)arg1;
- (void)finishWithSAPContextPreparationError:(id)arg1;
- (id /* block */)responseHandler;
- (void)setData:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setSignatureData:(id)arg1;
- (id)signatureData;

@end
