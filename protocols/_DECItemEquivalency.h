/* made by EzioChiu.
 */

@protocol _DECItemEquivalency <NSObject>

@required

- (bool)isEqualToItem:(_DECItem *)arg1;
- (bool)isEquivalent:(_DECItem *)arg1;

@end
