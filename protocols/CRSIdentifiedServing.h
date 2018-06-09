/* made by EzioChiu.
 */

@protocol CRSIdentifiedServing <CRSServing, NSSecureCoding>

@required

- (NSString *)serviceIdentifier;

@end
