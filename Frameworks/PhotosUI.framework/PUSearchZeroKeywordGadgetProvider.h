/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchZeroKeywordGadgetProvider : PXGadgetProvider <PUSearchZeroKeywordChangeDelegate> {
    PUSearchZeroKeywordDataSource * _zeroKeywordDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PUSearchZeroKeywordDataSource *zeroKeywordDataSource;

- (void).cxx_destruct;
- (void)didRemoveSections:(id)arg1;
- (void)didUpdateSections:(id)arg1;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)init;
- (void)loadDataForGadgets;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)arg1;
- (void)refreshData;
- (id)zeroKeywordDataSource;

@end
