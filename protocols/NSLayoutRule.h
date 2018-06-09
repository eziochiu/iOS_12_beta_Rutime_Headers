/* made by EzioChiu.
 */

@protocol NSLayoutRule <NSObject, NSCopying>

@required

- (NSString *)identifier;
- (NSArray *)makeChildRules;
- (NSString *)ruleDescription;

@end
