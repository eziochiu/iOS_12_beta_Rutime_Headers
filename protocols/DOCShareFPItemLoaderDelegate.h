/* made by EzioChiu.
 */

@protocol DOCShareFPItemLoaderDelegate <NSObject>

@required

- (void)didFailToLoadItems;
- (void)didLoadItems:(NSArray *)arg1;

@end
