/* made by EzioChiu.
 */

@protocol AMSBagDataSourceProtocol <NSObject>

@required

- (AMSBagKeyInfo *)bagKeyInfoForKey:(NSString *)arg1;
- (NSDate *)expirationDate;
- (bool)isLoaded;
- (void)loadWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (NSString *)logKey;
- (NSString *)profile;
- (NSString *)profileVersion;
- (NSString *)valueForURLVariable:(NSString *)arg1;

@optional

- (id /* block */)dataSourceChangedHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, NSString *, NSString *, NSDictionary *, NSDictionary *, void*, id, SEL
- (void)setDataSourceChangedHandler:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSDictionary *, NSDictionary *, void*

@end
