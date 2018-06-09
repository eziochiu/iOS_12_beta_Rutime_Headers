/* made by EzioChiu.
 */

@protocol PLResourceDataStoreKey <NSObject>

@required

- (NSString *)descriptionForAssetID:(id <PLAssetID>)arg1;
- (NSURL *)fileURLForAssetID:(id <PLAssetID>)arg1;
- (<PLResourceDataStoreKey> *)initWithKeyStruct:(const void*)arg1;
- (bool)isValid;
- (NSData *)keyData;

@end
