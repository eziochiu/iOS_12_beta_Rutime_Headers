/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFWebClipMetadataFetcher : NSObject {
    bool  _fetchingCompleted;
    _SFInjectedJavaScriptController * _jsController;
    NSArray * _linkTags;
    NSDictionary * _metaTags;
    NSMutableArray * _metadataConsumers;
}

+ (id)metadataFetcherScriptSource;

- (void).cxx_destruct;
- (void)_startFetchingMetadata;
- (id)_webClipLinkTagWithDictionary:(id)arg1;
- (void)fetchMetadataWithConsumer:(id /* block */)arg1;
- (id)initWithInjectedJavascriptController:(id)arg1;

@end
