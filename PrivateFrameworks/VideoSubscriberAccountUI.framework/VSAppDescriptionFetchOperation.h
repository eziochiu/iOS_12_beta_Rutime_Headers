/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSAppDescriptionFetchOperation : VSAsyncOperation {
    NSSet * _appAdamIDs;
    VSAuditToken * _auditToken;
    NSOperationQueue * _imageLoadingQueue;
    SSLookupRequest * _lookupRequest;
    bool  _needsProductProfile;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredArtworkSize;
    VSOptional * _result;
    bool  _shouldPersonalizeResponse;
    bool  _shouldPrecomposeIcon;
}

@property (nonatomic, copy) NSSet *appAdamIDs;
@property (nonatomic, retain) VSAuditToken *auditToken;
@property (nonatomic, retain) NSOperationQueue *imageLoadingQueue;
@property (nonatomic, retain) SSLookupRequest *lookupRequest;
@property (nonatomic) bool needsProductProfile;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredArtworkSize;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic) bool shouldPersonalizeResponse;
@property (nonatomic) bool shouldPrecomposeIcon;

- (void).cxx_destruct;
- (id)_appDescriptionFromLookupResponse:(id)arg1 appAdamID:(id)arg2;
- (void)_handleLookupResponse:(id)arg1;
- (id)appAdamIDs;
- (id)auditToken;
- (void)cancel;
- (void)executionDidBegin;
- (id)imageLoadingQueue;
- (id)init;
- (id)initWithAppAdamIDs:(id)arg1;
- (id)initWithAppAdamIDs:(id)arg1 preferredArtworkSize:(struct CGSize { double x1; double x2; })arg2;
- (id)lookupRequest;
- (bool)needsProductProfile;
- (struct CGSize { double x1; double x2; })preferredArtworkSize;
- (id)result;
- (void)setAppAdamIDs:(id)arg1;
- (void)setAuditToken:(id)arg1;
- (void)setImageLoadingQueue:(id)arg1;
- (void)setLookupRequest:(id)arg1;
- (void)setNeedsProductProfile:(bool)arg1;
- (void)setPreferredArtworkSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setResult:(id)arg1;
- (void)setShouldPersonalizeResponse:(bool)arg1;
- (void)setShouldPrecomposeIcon:(bool)arg1;
- (bool)shouldPersonalizeResponse;
- (bool)shouldPrecomposeIcon;

@end
