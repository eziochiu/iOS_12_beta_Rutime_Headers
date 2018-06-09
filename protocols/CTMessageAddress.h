/* made by EzioChiu.
 */

@protocol CTMessageAddress

@required

- (NSString *)canonicalFormat;
- (NSString *)encodedString;

@end
