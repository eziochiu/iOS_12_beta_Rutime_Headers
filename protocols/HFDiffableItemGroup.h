/* made by EzioChiu.
 */

@protocol HFDiffableItemGroup <NSObject>

@required

- (NSArray *)diffableItems;
- (NSString *)groupIdentifier;

@end
