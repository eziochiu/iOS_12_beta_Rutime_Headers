/* made by EzioChiu.
 */

@protocol NUDisplay <NSObject>

@required

- (NSString *)name;
- (struct { long long x1; long long x2; })size;

@end