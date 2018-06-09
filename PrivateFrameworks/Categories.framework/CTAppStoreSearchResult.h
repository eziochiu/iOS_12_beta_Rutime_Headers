/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Categories.framework/Categories
 */

@interface CTAppStoreSearchResult : NSObject {
    NSString * _bundleID;
    NSArray * _genreIDs;
    NSString * _name;
}

@property (readonly, copy) NSString *bundleID;
@property (readonly, copy) NSArray *genreIDs;
@property (readonly, copy) NSString *name;

+ (id)appStoreSearchResultsWithResultData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)bundleID;
- (id)genreIDs;
- (id)initWithSearchResultRecord:(id)arg1;
- (id)name;

@end
