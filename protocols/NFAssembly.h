/* made by EzioChiu.
 */

@protocol NFAssembly <NSObject>

@required

- (void)loadInRegistry:(id <NFContainerRegistry>)arg1;

@optional

- (void)loadedContainer:(id <NFResolver>)arg1;

@end
