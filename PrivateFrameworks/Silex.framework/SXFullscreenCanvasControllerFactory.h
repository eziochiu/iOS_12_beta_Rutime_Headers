/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXFullscreenCanvasControllerFactory : NSObject <SXFullscreenCanvasControllerFactory> {
    <SXFullscreenCaptionViewFactory> * _captionViewFactory;
    <SXPresentationAttributesProvider> * _presentationAttributesProvider;
}

@property (nonatomic, readonly) <SXFullscreenCaptionViewFactory> *captionViewFactory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXPresentationAttributesProvider> *presentationAttributesProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)captionViewFactory;
- (id)fullscreenCanvasControllerForShowable:(id)arg1;
- (id)initWithCaptionViewFactory:(id)arg1 presentationAttributesProvider:(id)arg2;
- (id)presentationAttributesProvider;

@end
