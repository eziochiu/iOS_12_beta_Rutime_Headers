/* made by EzioChiu.
 */

@protocol CNRegulatoryLogger <NSObject>

@required

- (void)modifyingContactsData;
- (void)readAndTransmittingContactsData;
- (void)readingContactsData;

@end
