/* made by EzioChiu.
 */

@protocol FLGroupViewModel <NSObject>

@required

- (NSString *)groupTitle;
- (NSString *)identifier;
- (NSArray *)items;
- (bool)restrictionEnabled;
- (NSString *)rowTitle;
- (bool)shouldCoalesceItems;

@end
