/* made by EzioChiu.
 */

@protocol SXParsedDate <NSObject>

@required

- (bool)containedTime;
- (NSDate *)date;
- (NSTimeZone *)timeZone;

@end
