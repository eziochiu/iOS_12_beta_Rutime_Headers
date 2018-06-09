/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFWebProcessPlugInReaderEnabledPageController : _SFWebProcessPlugInAutoFillPageController <RequestDesktopSiteWebProcessPlugInListener, SFReaderWebProcessControllerProtocol> {
    _SFWebProcessPlugInAppleConnectExtensionController * _appleConnectExtensionController;
    _WKRemoteObjectInterface * _availabilityControllerInterface;
    long long  _cachedReaderTopScrollOffset;
    SFWebProcessPlugInCertificateWarningController * _certificateWarningController;
    NSMutableDictionary * _domainToUserAgentPolicyMap;
    SFWebProcessPlugInPageExtensionController * _extensionController;
    NSDictionary * _initalArticleScrollPositionAsDictionary;
    NSDictionary * _initialReaderConfiguration;
    NSDictionary * _initialScrollPositionAsDictionary;
    <SFReaderEventsListener> * _readerActivityListenerProxy;
    struct unique_ptr<SafariServices::ReaderAvailabilityController, std::__1::default_delete<SafariServices::ReaderAvailabilityController> > { 
        struct __compressed_pair<SafariServices::ReaderAvailabilityController *, std::__1::default_delete<SafariServices::ReaderAvailabilityController> > { 
            struct ReaderAvailabilityController {} *__value_; 
        } __ptr_; 
    }  _readerAvailabilityController;
    _SFReaderWebProcessPlugInPageController * _readerPageController;
    <RequestDesktopSiteUIProcessListener> * _requestDesktopSiteUIProcessListener;
    _WKRemoteObjectInterface * _requestDesktopSiteWebProcessPlugInListenerInterface;
    _SFWebProcessPlugInPageSafeBrowsingController * _safeBrowsingController;
    _SFWebProcessSharingLinkExtractor * _sharingLinkExtractor;
    bool  _viewingReadingListArchive;
}

@property (nonatomic) long long cachedReaderTopScrollOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *initalArticleScrollPositionAsDictionary;
@property (nonatomic, readonly) NSDictionary *initialReaderConfiguration;
@property (nonatomic, retain) _SFReaderWebProcessPlugInPageController *readerPageController;
@property (readonly) Class superclass;
@property (getter=isViewingReadingListArchive, nonatomic, readonly) bool viewingReadingListArchive;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_clearReaderControllerInterface;
- (void)_deferPageLoadingUntilSafeBrowsingCheckCompleteForFrame:(id)arg1 isMainFrame:(bool)arg2;
- (void)_detectAvailabilityAfterDelay:(double)arg1 loadEvent:(int)arg2;
- (void)_detectReaderAvailabilityAfterSameDocumentNavigation;
- (void)_removeLoadDeferringReasonsForSafeBrowsingIfNecessary;
- (void)_setUpReaderActivityListenerProxy;
- (void)_setUpReaderControllerInterface;
- (void)_setUpUIProcessListenerIfNeeded;
- (long long)cachedReaderTopScrollOffset;
- (void)collectReaderContentForMail;
- (void)collectReadingListItemInfoWithBookmarkID:(id)arg1;
- (void)decreaseReaderTextSize;
- (void)didCreateReaderPageContextHandle:(id)arg1;
- (void)didDetermineReaderAvailability:(bool)arg1 dueToSameDocumentNavigation:(bool)arg2;
- (void)didSetReaderConfiguration:(id)arg1;
- (void)increaseReaderTextSize;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;
- (id)initalArticleScrollPositionAsDictionary;
- (id)initialReaderConfiguration;
- (bool)isViewingReadingListArchive;
- (void)loadNewReaderArticle;
- (void)markURLAsNeedingDesktopUserAgent:(id)arg1;
- (struct OpaqueJSValue { }*)originalArticleFinder;
- (void)prepareReaderContentForPrinting;
- (void)prepareToTransitionToReader;
- (void)readerContentDidBecomeReadyWithDetectedLanguage:(id)arg1;
- (id)readerPageController;
- (void)readerTextWasExtracted:(id)arg1 withMetadata:(id)arg2 wasDeterminingAvailability:(bool)arg3;
- (void)setCachedReaderTopScrollOffset:(long long)arg1;
- (void)setInitalArticleScrollPositionAsDictionary:(id)arg1;
- (void)setReaderFont:(id)arg1;
- (void)setReaderInitialTopScrollOffset:(long long)arg1 configuration:(id)arg2 isViewingArchive:(bool)arg3;
- (void)setReaderPageController:(id)arg1;
- (void)setReaderTheme:(id)arg1;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didSameDocumentNavigation:(long long)arg2 forFrame:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 userAgentForURL:(id)arg3;
- (id)webProcessPlugInBrowserContextController:(id)arg1 frame:(id)arg2 willSendRequestForResource:(unsigned long long)arg3 request:(id)arg4 redirectResponse:(id)arg5;
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;
- (void)webProcessPlugInBrowserContextController:(id)arg1 renderingProgressDidChange:(unsigned long long)arg2;
- (void)willDestroyBrowserContextController:(id)arg1;

@end
