/* made by EzioChiu.
 */

@protocol NUVideoProviderFactory <NSObject>

@required

- (NUVideoProvider *)createVideoProviderWithVideoItem:(id <NUVideoItem>)arg1;

@end
