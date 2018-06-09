/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMediaApplicationBannerSyncRequest : ICRequestOperation {
    unsigned long long  _fromRevision;
    ICMediaApplicationBannerSyncResponse * _response;
    ICStoreRequestContext * _storeRequestContext;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithStoreRequestContext:(id)arg1 fromRevision:(unsigned long long)arg2;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
