/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadManifestRequest : SSRequest <SSXPCCoding> {
    long long  _manifestFormat;
    bool  _shouldHideUserPrompts;
    NSURLRequest * _urlRequest;
}

@property (readonly) NSURLRequest *URLRequest;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SSDownloadManifestRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property long long manifestFormat;
@property bool shouldHideUserPrompts;
@property (readonly) Class superclass;

- (id)URLRequest;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (long long)manifestFormat;
- (void)setManifestFormat:(long long)arg1;
- (void)setShouldHideUserPrompts:(bool)arg1;
- (bool)shouldHideUserPrompts;
- (bool)start;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithManifestResponseBlock:(id /* block */)arg1;

@end
