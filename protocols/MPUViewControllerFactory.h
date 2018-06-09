/* made by EzioChiu.
 */

@protocol MPUViewControllerFactory <NSObject>

@required

+ (MPUViewControllerConfiguration *)configurationForViewControllerIdentifier:(NSString *)arg1;
+ (MPUDataSource *)dataSourceForViewControllerIdentifier:(NSString *)arg1;
+ (MPUDataSource *)dataSourceForViewControllerIdentifier:(NSString *)arg1 withQuery:(MPMediaQuery *)arg2;
+ (void)registerViewControllerIdentifier:(NSString *)arg1 withConfiguration:(MPUViewControllerConfiguration *)arg2;
+ (void)registerViewControllerIdentifier:(void *)arg1 withConfigurationBlock:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, MPUViewControllerConfiguration *, id /* block */, void*
+ (UIViewController *)viewControllerForIdentifier:(NSString *)arg1;
+ (UIViewController *)viewControllerForIdentifier:(NSString *)arg1 withDataSource:(MPUDataSource *)arg2;
+ (UIViewController *)viewControllerForIdentifier:(NSString *)arg1 withQuery:(MPMediaQuery *)arg2;

@end
