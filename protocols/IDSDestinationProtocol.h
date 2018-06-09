/* made by EzioChiu.
 */

@protocol IDSDestinationProtocol <NSSecureCoding, NSCopying, NSObject>

@required

- (NSSet *)destinationURIs;
- (NSData *)groupID;

@end
