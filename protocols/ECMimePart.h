/* made by EzioChiu.
 */

@protocol ECMimePart <NSObject>

@required

- (NSString *)mimeSubtype;
- (NSString *)mimeType;
- (unsigned long long)totalTextSize;

@end
