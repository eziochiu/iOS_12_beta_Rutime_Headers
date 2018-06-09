/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXURLPreviewActivity : NSObject <SXActionPreviewActivity> {
    NSURL * _URL;
    <SXURLPreviewing> * _URLPreviewing;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) <SXURLPreviewing> *URLPreviewing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (id)URLPreviewing;
- (void)commitViewController:(id)arg1 action:(id)arg2;
- (id)initWithURLPreviewing:(id)arg1 URL:(id)arg2;
- (id)previewViewControllerForAction:(id)arg1;

@end
