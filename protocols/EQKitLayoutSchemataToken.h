/* made by EzioChiu.
 */

@protocol EQKitLayoutSchemataToken <NSObject>

@required

- (<EQKitFontStyling> *)schemataFontStyling;
- (NSString *)schemataTokenString;
- (unsigned int)schemataUnicharOrNul;

@end
