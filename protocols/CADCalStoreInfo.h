/* made by EzioChiu.
 */

@protocol CADCalStoreInfo

@required

- (NSString *)accountIdentifier;
- (bool)isEnabled;
- (bool)isLocalStore;
- (int)rowID;
- (NSString *)storeName;

@end
