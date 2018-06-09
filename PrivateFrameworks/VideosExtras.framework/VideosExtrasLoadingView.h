/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosExtrasLoadingView : UIView <IKAppDocumentDelegate> {
    VideosExtrasActivityIndicator * _activityIndicator;
    <VideosExtrasLoadingViewDelegate> * _delegate;
    IKAppDocument * _document;
    NSDictionary * _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_show;
- (void)cancelCountdownToVisibility;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (id)initWithDocument:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (void)startCountdownToVisibilityWithInterval:(double)arg1;

@end
