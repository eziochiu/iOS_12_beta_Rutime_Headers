/* made by EzioChiu.
 */

@protocol SXQuickLookComponent <SXComponent>

@required

- (SXFormattedText *)caption;
- (NSString *)fileExtension;
- (NSString *)resourceIdentifier;

@end
