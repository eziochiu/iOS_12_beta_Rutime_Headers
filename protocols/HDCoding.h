/* made by EzioChiu.
 */

@protocol HDCoding <NSObject>

@required

+ (id)createWithCodable:(PBCodable *)arg1;

- (PBCodable *)codableRepresentationForSync;

@end
