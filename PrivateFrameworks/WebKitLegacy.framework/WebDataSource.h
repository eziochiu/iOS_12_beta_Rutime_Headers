/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDataSource : NSObject {
    void * _private;
}

@property (setter=_setQuickLookContent:, nonatomic, copy) NSDictionary *_quickLookContent;
@property (nonatomic, readonly) NSDictionary *_quickLookContent;
@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly) NSURLRequest *initialRequest;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic, readonly) WebResource *mainResource;
@property (nonatomic, readonly, copy) NSString *pageTitle;
@property (nonatomic, readonly) <WebDocumentRepresentation> *representation;
@property (nonatomic, readonly) NSMutableURLRequest *request;
@property (nonatomic, readonly) NSURLResponse *response;
@property (nonatomic, readonly, copy) NSArray *subresources;
@property (nonatomic, readonly, copy) NSString *textEncodingName;
@property (nonatomic, readonly) NSURL *unreachableURL;
@property (nonatomic, readonly) WebArchive *webArchive;
@property (nonatomic, readonly) WebFrame *webFrame;

+ (id)_repTypesAllowImageTypeOmission:(bool)arg1;
+ (Class)_representationClassForMIMEType:(id)arg1 allowingPlugins:(bool)arg2;
+ (void)initialize;

- (id)_URL;
- (void)_addSubframeArchives:(id)arg1;
- (id)_documentFragmentWithArchive:(id)arg1;
- (id)_documentFragmentWithImageResource:(id)arg1;
- (struct DocumentLoader { int (**x1)(); struct Frame {} *x2; unsigned int x3; int (**x4)(); int (**x5)(); bool x6; struct Ref<WebCore::CachedResourceLoader, WTF::DumbPtrTraits<WebCore::CachedResourceLoader> > { struct CachedResourceLoader {} *x_7_1_1; } x7; struct CachedResourceHandle<WebCore::CachedRawResource> { struct CachedResource {} *x_8_1_1; } x8; struct HashMap<unsigned long, WTF::RefPtr<WebCore::ResourceLoader, WTF::DumbPtrTraits<WebCore::ResourceLoader> >, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader, WTF::DumbPtrTraits<WebCore::ResourceLoader> > > > { struct HashTable<unsigned long, WTF::KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader, WTF::DumbPtrTraits<WebCore::ResourceLoader> > >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader, WTF::DumbPtrTraits<WebCore::ResourceLoader> > > >, WTF::IntHash<unsigned long>, WTF::HashMap<unsigned long, WTF::RefPtr<WebCore::ResourceLoader, WTF::DumbPtrTraits<WebCore::ResourceLoader> >, WTF::IntHash<unsigned long>, WTF::HashTraits<unsigned long>, WTF::HashTraits<WTF::RefPtr<WebCore::ResourceLoader, WTF::DumbPtrTraits<WebCore::ResourceLoader> > > >::KeyValuePairTraits, WTF::HashTraits<unsigned long> > { struct KeyValuePair<unsigned long, WTF::RefPtr<WebCore::ResourceLoader, WTF::DumbPtrTraits<WebCore::ResourceLoader> > > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_9_1_1; } x9; }*)_documentLoader;
- (void)_finishedLoading;
- (id)_imageElementWithImageResource:(id)arg1;
- (id)_initWithDocumentLoader:(struct Ref<WebDocumentLoaderMac, WTF::DumbPtrTraits<WebDocumentLoaderMac> > { struct WebDocumentLoaderMac {} *x1; }*)arg1;
- (bool)_isDocumentHTML;
- (id)_mainDocumentError;
- (void)_makeRepresentation;
- (id)_quickLookContent;
- (void)_receivedData:(id)arg1;
- (void)_replaceSelectionWithArchive:(id)arg1 selectReplacement:(bool)arg2;
- (id)_responseMIMEType;
- (void)_revertToProvisionalState;
- (void)_setAllowToBeMemoryMapped;
- (void)_setDeferMainResourceDataLoad:(bool)arg1;
- (void)_setMainDocumentError:(id)arg1;
- (void)_setOverrideTextEncodingName:(id)arg1;
- (void)_setQuickLookContent:(id)arg1;
- (void)_setRepresentation:(id)arg1;
- (id)_webView;
- (void)addSubresource:(id)arg1;
- (id)data;
- (id)dataSourceDelegate;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;
- (id)initialRequest;
- (bool)isLoading;
- (id)mainResource;
- (id)pageTitle;
- (id)representation;
- (id)request;
- (id)response;
- (void)setDataSourceDelegate:(id)arg1;
- (id)subresourceForURL:(id)arg1;
- (id)subresources;
- (id)textEncodingName;
- (id)unreachableURL;
- (id)webArchive;
- (id)webFrame;

@end
