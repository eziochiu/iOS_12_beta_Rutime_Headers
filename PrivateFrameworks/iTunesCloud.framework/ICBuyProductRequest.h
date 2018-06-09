/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICBuyProductRequest : ICRequestOperation {
    NSDictionary * _buyParameters;
    id  _parsedResponse;
    ICStoreRequestContext * _requestContext;
    ICStoreURLRequest * _storeURLRequest;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 buyParameters:(id)arg2;
- (id)initWithRequestContext:(id)arg1 buyParametersString:(id)arg2;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
