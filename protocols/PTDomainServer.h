/* made by EzioChiu.
 */

@protocol PTDomainServer <NSObject>

@required

- (void)registerDomainWithInfo:(PTDomainInfo *)arg1;
- (void)registerTestRecipeWithInfo:(PTTestRecipeInfo *)arg1;

@end
