/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVContentLink : NSObject {
    NSString * _categoryName;
    long long  _contentKind;
    NSNumber * _itemIdentifier;
    NSString * _itemTitle;
    NSString * _providerName;
    NSString * _searchTerm;
    long long  _targetApplication;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, copy) NSString *categoryName;
@property (nonatomic) long long contentKind;
@property (nonatomic, copy) NSNumber *itemIdentifier;
@property (nonatomic, copy) NSString *itemTitle;
@property (nonatomic, copy) NSString *providerName;
@property (nonatomic, copy) NSString *searchTerm;
@property (nonatomic) long long targetApplication;

- (void).cxx_destruct;
- (id)URL;
- (id)_URLSchemeWithApplication:(long long)arg1;
- (id)_stringForContentKind:(long long)arg1;
- (long long)_targetApplicationWithContentKind:(long long)arg1;
- (id)categoryName;
- (long long)contentKind;
- (id)itemIdentifier;
- (id)itemTitle;
- (id)providerName;
- (id)searchTerm;
- (void)setCategoryName:(id)arg1;
- (void)setContentKind:(long long)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setItemTitle:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setTargetApplication:(long long)arg1;
- (long long)targetApplication;

@end
