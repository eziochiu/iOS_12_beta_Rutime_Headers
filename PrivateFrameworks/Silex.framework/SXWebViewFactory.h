/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebViewFactory : NSObject <SXWebViewFactory> {
    WKProcessPool * _processPool;
    NSPointerArray * _webViews;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WKProcessPool *processPool;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSPointerArray *webViews;

- (void).cxx_destruct;
- (void)assignRelatedWebViewToConfiguration:(id)arg1;
- (id)createWebViewWithUserContentController:(id)arg1;
- (id)initWithProcessPool:(id)arg1;
- (id)processPool;
- (void)setProcessPool:(id)arg1;
- (void)setWebViews:(id)arg1;
- (id)webViews;

@end
