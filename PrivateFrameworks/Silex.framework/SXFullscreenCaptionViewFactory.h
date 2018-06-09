/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXFullscreenCaptionViewFactory : NSObject <SXFullscreenCaptionViewFactory> {
    <SXComponentActionHandler> * _actionHandler;
    <SXActionProvider> * _actionProvider;
}

@property (nonatomic, readonly) <SXComponentActionHandler> *actionHandler;
@property (nonatomic, readonly) <SXActionProvider> *actionProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionHandler;
- (id)actionProvider;
- (id)createCaptionView;
- (id)initWithActionProvider:(id)arg1 actionHandler:(id)arg2;

@end
