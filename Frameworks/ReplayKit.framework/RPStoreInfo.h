/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPStoreInfo : NSObject {
    NSString * _appName;
    NSString * _author;
    NSString * _bundleID;
    NSArray * _categories;
    NSString * _itemURL;
}

@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSString *author;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSArray *categories;
@property (nonatomic, retain) NSString *itemURL;

- (void).cxx_destruct;
- (id)appName;
- (id)author;
- (id)bundleID;
- (id)categories;
- (id)dictionary;
- (id)itemURL;
- (void)setAppName:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setItemURL:(id)arg1;

@end
