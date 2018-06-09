/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXEmbedService : NSObject <SXEmbedService> {
    <SXEmbedDataProvider> * _embedDataProvider;
    NSURLSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXEmbedDataProvider> *embedDataProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURLSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)addAdditionalQueryParameters:(id)arg1 toURL:(id)arg2;
- (id)additionalQueryParametersForConfiguration:(id)arg1;
- (void)dealloc;
- (id)embedConfigurationForType:(id)arg1;
- (id)embedDataProvider;
- (void)fetchHTMLFromOEmbedURL:(id)arg1 embedType:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)initWithDataProvider:(id)arg1;
- (id)session;

@end
