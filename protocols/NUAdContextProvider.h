/* made by EzioChiu.
 */

@protocol NUAdContextProvider <NSObject>

@optional

- (id)adContextValueForKeyPath:(NSString *)arg1;
- (NSArray *)contextProvidersForKeyPath:(NSString *)arg1;

@end
