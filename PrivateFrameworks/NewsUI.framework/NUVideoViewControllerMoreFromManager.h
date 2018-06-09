/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUVideoViewControllerMoreFromManager : NSObject <SVMoreFromPublisherActionTitleProviding, SVMoreFromPublisherLogoProviding> {
    <NUVideoCallToActionURLProviding> * _callToActionURLProvider;
}

@property (nonatomic, readonly) <NUVideoCallToActionURLProviding> *callToActionURLProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_callToActionTitleForVideoItem:(id)arg1;
- (id)actionTitleForVideo:(id)arg1;
- (id)callToActionURLProvider;
- (id)init;
- (id)initWithCallToActionURLProvider:(id)arg1;
- (id /* block */)moreFromLogoForVideo:(id)arg1 withCompletionBlock:(id /* block */)arg2;

@end
