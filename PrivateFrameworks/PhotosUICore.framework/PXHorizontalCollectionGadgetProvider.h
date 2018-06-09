/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXHorizontalCollectionGadgetProvider : PXGadgetProvider <PXGadgetProviderDelegate, PXHorizontalCollectionGadgetDelegate> {
    NSDictionary * _columnSpanForTraitCollection;
    NSArray * _contentGadgetProviders;
    long long  _defaultColumnSpan;
    unsigned long long  _gadgetType;
    bool  _hasLoaded;
    Class  _horizontalCollectionGadgetClass;
    PXHorizontalCollectionGadget * _horizontalGadget;
    NSString * _title;
}

@property (nonatomic, copy) NSDictionary *columnSpanForTraitCollection;
@property (nonatomic, readonly) NSArray *contentGadgetProviders;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long defaultColumnSpan;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long gadgetType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (void)_updateHorizontalGadget;
- (id)columnSpanForTraitCollection;
- (id)contentGadgetProviders;
- (long long)defaultColumnSpan;
- (unsigned long long)estimatedNumberOfGadgets;
- (unsigned long long)gadgetType;
- (void)generateGadgets;
- (void)horizontalCollectionGadgetDatasourceDidUpdate:(id)arg1;
- (id)init;
- (id)initWithContentGadgetProviders:(id)arg1 title:(id)arg2;
- (id)initWithContentGadgetProviders:(id)arg1 title:(id)arg2 horizontalCollectionGadgetClass:(Class)arg3;
- (void)invalidateGadgets;
- (void)loadDataForGadgets;
- (void)setColumnSpanForTraitCollection:(id)arg1;
- (void)setDefaultColumnSpan:(long long)arg1;
- (void)setGadgetType:(unsigned long long)arg1;
- (id)title;

@end
