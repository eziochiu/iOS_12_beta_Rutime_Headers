/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXForYouSuggestionOneupGestureProvider : PXGestureProvider <UIGestureRecognizerDelegate> {
    PXForYouSuggestionAssetsDataSourceManager * _dataSourceManager;
    NSArray * _gestureRecognizers;
    UILongPressGestureRecognizer * _longPressRecognizer;
}

@property (nonatomic, readonly) PXForYouSuggestionAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createGestureRecognizersIfNeeded;
- (void)_handleLongPress:(id)arg1;
- (void)_startShowingOriginal;
- (void)_stopShowingOriginal;
- (id)dataSourceManager;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)gestureRecognizers;
- (void)hostingViewDidChange;
- (id)initWithDataSourceManager:(id)arg1;

@end
