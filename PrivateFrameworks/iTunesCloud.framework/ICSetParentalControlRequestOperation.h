/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICSetParentalControlRequestOperation : ICRequestOperation {
    bool  _allowsExplicitContent;
    bool  _automatic;
    ICStoreRequestContext * _requestContext;
    ICStoreURLRequest * _storeURLRequest;
}

@property (nonatomic) bool allowsExplicitContent;
@property (getter=isAutomatic, nonatomic) bool automatic;
@property (nonatomic, retain) ICStoreRequestContext *requestContext;
@property (nonatomic, retain) ICStoreURLRequest *storeURLRequest;

- (void).cxx_destruct;
- (void)_buildAndSendRequestForURL:(id)arg1;
- (void)_getURLFromBagAndSendRequest;
- (bool)allowsExplicitContent;
- (void)cancel;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 allowsExplicitContent:(bool)arg2 isAutomatic:(bool)arg3;
- (bool)isAutomatic;
- (id)requestContext;
- (void)setAllowsExplicitContent:(bool)arg1;
- (void)setAutomatic:(bool)arg1;
- (void)setRequestContext:(id)arg1;
- (void)setStoreURLRequest:(id)arg1;
- (id)storeURLRequest;

@end
