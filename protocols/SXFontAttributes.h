/* made by EzioChiu.
 */

@protocol SXFontAttributes <NSObject, NSCopying>

@required

- (NSString *)familyName;
- (long long)style;
- (long long)weight;
- (long long)width;

@end
