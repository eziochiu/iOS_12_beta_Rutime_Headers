/* made by EzioChiu.
 */

@protocol GEOServerFormattedString <NSObject, NSCoding>

@required

- (NSArray *)formatStrings;
- (NSArray *)formatTokens;
- (NSArray *)separators;

@end
