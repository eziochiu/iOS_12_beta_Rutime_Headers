/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMessagesRootGadgetViewController : PXGadgetViewController {
    PXMessagesGadgetDataSourceManager * _messagesDataSourceManager;
}

@property (nonatomic, readonly) PXMessagesGadgetDataSourceManager *messagesDataSourceManager;
@property (nonatomic) double recentPhotosHeight;

+ (Class)gadgetSpecClass;

- (void).cxx_destruct;
- (id)initWithGadgetDataSourceManager:(id)arg1;
- (id)messagesDataSourceManager;
- (void)prepareForPresentationStyle:(long long)arg1;
- (double)recentPhotosHeight;
- (void)setRecentPhotosHeight:(double)arg1;
- (void)viewDidLoad;

@end
