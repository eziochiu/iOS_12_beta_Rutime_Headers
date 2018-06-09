/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Categories.framework/Categories
 */

@interface CTCategories : NSObject {
    CKContextClient * _client;
    NSString * _indexVersionId;
}

@property (readonly, copy) NSArray *availableCategoryIDs;
@property (nonatomic, retain) CKContextClient *client;

+ (void)initialize;
+ (id)sharedCategories;

- (void).cxx_destruct;
- (id)availableCategoryIDs;
- (void)categoriesForBundleIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoriesForBundleIDs:(id)arg1 response:(id /* block */)arg2;
- (void)categoriesForBundleIDs:(id)arg1 responseWithError:(id /* block */)arg2;
- (void)categoriesForDomainNames:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoriesForDomainNames:(id)arg1 response:(id /* block */)arg2;
- (void)categoriesForDomainNames:(id)arg1 responseWithError:(id /* block */)arg2;
- (void)categoriesForDomainURLs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoriesForDomainURLs:(id)arg1 response:(id /* block */)arg2;
- (void)categoriesForDomainURLs:(id)arg1 responseWithError:(id /* block */)arg2;
- (void)categoryForBundleID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoryForBundleID:(id)arg1 response:(id /* block */)arg2;
- (void)categoryForBundleID:(id)arg1 responseWithError:(id /* block */)arg2;
- (void)categoryForDomainName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoryForDomainName:(id)arg1 response:(id /* block */)arg2;
- (void)categoryForDomainName:(id)arg1 responseWithError:(id /* block */)arg2;
- (void)categoryForDomainURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)categoryForDomainURL:(id)arg1 response:(id /* block */)arg2;
- (void)categoryForDomainURL:(id)arg1 responseWithError:(id /* block */)arg2;
- (id)client;
- (id)init;
- (void)setClient:(id)arg1;

@end
