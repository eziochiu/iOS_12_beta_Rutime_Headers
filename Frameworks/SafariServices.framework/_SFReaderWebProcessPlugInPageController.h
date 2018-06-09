/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFReaderWebProcessPlugInPageController : _SFWebProcessPlugInPageController {
    WKWebProcessPlugInScriptWorld * _isolatedWorldForNextPageDetection;
    _SFWebProcessPlugInReaderEnabledPageController * _originalPageController;
    struct unique_ptr<SafariServices::WebProcessPlugInReaderJSController, std::__1::default_delete<SafariServices::WebProcessPlugInReaderJSController> > { 
        struct __compressed_pair<SafariServices::WebProcessPlugInReaderJSController *, std::__1::default_delete<SafariServices::WebProcessPlugInReaderJSController> > { 
            struct WebProcessPlugInReaderJSController {} *__value_; 
        } __ptr_; 
    }  _readerJSController;
}

@property (nonatomic) _SFWebProcessPlugInReaderEnabledPageController *originalPageController;

+ (id)readerPageControllerForContextHandle:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_initializeReaderJSControllerForFrame:(id)arg1;
- (id)collectReaderContentFromPrintAndMailingFrame;
- (void)decreaseReaderTextSize;
- (void)increaseReaderTextSize;
- (id)initWithPlugIn:(id)arg1 contextController:(id)arg2;
- (id)isolatedWorldForNextPageDetection;
- (void)loadNewArticle;
- (struct OpaqueJSValue { }*)originalArticleFinder;
- (id)originalPageController;
- (id)printingMailingFrame;
- (void)setOriginalPageController:(id)arg1;
- (void)setReaderFont:(id)arg1;
- (void)setReaderTheme:(id)arg1;
- (void)webProcessPlugInBrowserContextController:(id)arg1 globalObjectIsAvailableForFrame:(id)arg2 inScriptWorld:(id)arg3;
- (void)willDestroyBrowserContextController:(id)arg1;

@end
