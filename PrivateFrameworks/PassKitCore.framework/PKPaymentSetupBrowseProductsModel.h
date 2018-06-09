/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupBrowseProductsModel : NSObject {
    NSString * _filterString;
    unsigned long long  _filterType;
    NSArray * _likelyFilteredProducts;
    NSArray * _likelyProductIdentifiers;
    NSArray * _products;
    NSArray * _unlikelyFilteredProducts;
}

@property (nonatomic, copy) NSString *filterString;
@property (nonatomic) unsigned long long filterType;
@property (nonatomic, copy) NSArray *likelyProductIdentifiers;
@property (nonatomic, readonly, copy) NSArray *likelyProducts;
@property (nonatomic, readonly, copy) NSArray *unifiedProducts;
@property (nonatomic, readonly, copy) NSArray *unlikelyProducts;

- (void).cxx_destruct;
- (void)_updatedFilteredProducts;
- (id)filterString;
- (unsigned long long)filterType;
- (id)initWithProducts:(id)arg1;
- (id)likelyProductAtIndex:(unsigned long long)arg1;
- (id)likelyProductIdentifiers;
- (id)likelyProducts;
- (unsigned long long)numberOfLikelyProducts;
- (unsigned long long)numberOfUnifiedProducts;
- (unsigned long long)numberOfUnlikelyProducts;
- (void)setFilterString:(id)arg1;
- (void)setFilterType:(unsigned long long)arg1;
- (void)setLikelyProductIdentifiers:(id)arg1;
- (unsigned long long)unfilteredCountForType:(unsigned long long)arg1;
- (id)unifiedProductAtIndex:(unsigned long long)arg1;
- (id)unifiedProducts;
- (id)unlikelyProductAtIndex:(unsigned long long)arg1;
- (id)unlikelyProducts;

@end