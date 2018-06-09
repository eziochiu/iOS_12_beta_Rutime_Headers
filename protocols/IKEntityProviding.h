/* made by EzioChiu.
 */

@protocol IKEntityProviding <NSObject>

@required

- (<IKEntityValueProviding> *)entityValueProviderAtIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;

@optional

- (unsigned long long)numberOfSections;

@end
