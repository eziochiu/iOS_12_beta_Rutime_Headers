/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDynamicPageSectionIndexMapper : NSObject {
    <SKUIEntityProviding> * _entityProvider;
    struct { 
        unsigned int respondsToNumberOfSections : 1; 
    }  _entityProviderFlags;
    long long  _numberOfSections;
    struct _NSRange { unsigned long long x1; unsigned long long x2; } * _sectionIndexToEntityRange;
}

@property (nonatomic, retain) <SKUIEntityProviding> *entityProvider;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readonly) long long totalNumberOfEntities;

- (void).cxx_destruct;
- (void)_loadDataIfNeeded;
- (void)dealloc;
- (id)entityIndexPathForGlobalIndex:(long long)arg1;
- (id)entityProvider;
- (bool)getItem:(unsigned long long*)arg1 section:(unsigned long long*)arg2 forGlobalIndex:(long long)arg3;
- (long long)globalIndexForEntityIndexPath:(id)arg1;
- (long long)numberOfSections;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForSectionAtIndex:(long long)arg1;
- (void)reloadData;
- (void)setEntityProvider:(id)arg1;
- (long long)totalNumberOfEntities;

@end
