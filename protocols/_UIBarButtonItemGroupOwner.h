/* made by EzioChiu.
 */

@protocol _UIBarButtonItemGroupOwner <NSObject>

@required

- (void)_groupDidChangeGeometry:(UIBarButtonItemGroup *)arg1;
- (void)_groupDidChangePriority:(UIBarButtonItemGroup *)arg1;
- (void)_groupDidUpdateItems:(UIBarButtonItemGroup *)arg1 removedItems:(NSArray *)arg2;
- (void)_groupDidUpdateRepresentative:(UIBarButtonItemGroup *)arg1 fromRepresentative:(UIBarButtonItem *)arg2;
- (void)_groupDidUpdateVisibility:(UIBarButtonItemGroup *)arg1;

@end
