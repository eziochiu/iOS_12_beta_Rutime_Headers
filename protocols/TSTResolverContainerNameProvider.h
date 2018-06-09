/* made by EzioChiu.
 */

@protocol TSTResolverContainerNameProvider <NSObject>

@required

- (NSString *)nameForResolverContainer:(id <TSCEResolverContainer>)arg1;
- (<TSCEResolverContainer> *)resolverContainerForName:(NSString *)arg1 caseSensitive:(bool)arg2;
- (NSString *)resolverContainerNameForResolver:(id <TSCEReferenceResolving>)arg1;
- (NSArray *)resolverContainerNamesMatchingPrefix:(NSString *)arg1;
- (<TSCEReferenceResolving> *)resolverMatchingName:(NSString *)arg1 contextContainerName:(NSString *)arg2;
- (<TSCEReferenceResolving> *)resolverMatchingName:(NSString *)arg1 contextResolver:(id <TSCEReferenceResolving>)arg2;
- (NSArray *)resolversMatchingPrefix:(NSString *)arg1;

@optional

- (bool)isPendingTableNameUniquification;

@end
