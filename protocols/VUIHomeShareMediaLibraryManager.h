/* made by EzioChiu.
 */

@protocol VUIHomeShareMediaLibraryManager <NSObject>

@required

- (<VUIHomeShareMediaLibraryManagerDelegate> *)delegate;
- (NSArray *)homeShareMediaLibraries;
- (id)initWithManager:(VUIMediaLibraryManager *)arg1;
- (void)setDelegate:(id <VUIHomeShareMediaLibraryManagerDelegate>)arg1;

@end
