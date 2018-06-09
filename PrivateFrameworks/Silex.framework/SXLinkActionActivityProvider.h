/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXLinkActionActivityProvider : NSObject <SXActionActivityProvider> {
    <SXURLHandling> * _URLHandler;
    <SXURLPreviewing> * _URLPreviewing;
    <SXLinkActionURLQualifier> * _URLQualifier;
    <SXHost> * _host;
}

@property (nonatomic, readonly) <SXURLHandling> *URLHandler;
@property (nonatomic, readonly) <SXURLPreviewing> *URLPreviewing;
@property (nonatomic, readonly) <SXLinkActionURLQualifier> *URLQualifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXHost> *host;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLHandler;
- (id)URLPreviewing;
- (id)URLQualifier;
- (id)activityGroupForAction:(id)arg1;
- (id)host;
- (id)initWithURLHandler:(id)arg1 URLPreviewing:(id)arg2 host:(id)arg3 URLQualifier:(id)arg4;
- (void)open:(id)arg1;
- (void)openInSafari:(id)arg1;
- (id)previewActivityForAction:(id)arg1;

@end
