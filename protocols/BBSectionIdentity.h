/* made by EzioChiu.
 */

@protocol BBSectionIdentity <NSObject>

@required

- (NSString *)sectionIdentifier;

@optional

- (BBSectionInfo *)defaultSectionInfo;
- (NSString *)parentSectionIdentifier;
- (NSString *)sectionDisplayName;
- (BBSectionIcon *)sectionIcon;
- (NSData *)sectionIconData;
- (NSString *)universalSectionIdentifier;

@end
