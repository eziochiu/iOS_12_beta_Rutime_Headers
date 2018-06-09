/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXInboxGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver> {
    PXInboxAggregateDataSourceManager * _dataSourceManager;
}

@property (nonatomic, readonly) PXInboxAggregateDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateGadgets;
- (id)dataSourceManager;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)initWithDataSourceManager:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;

@end
