/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMTransportPayloadRecord : NSManagedObject

@property (nonatomic, copy) NSString *destinationType;
@property (nonatomic, retain) NSSet *metaPayloads;
@property (nonatomic, copy) NSString *organizationIdentifier;
@property (nonatomic, retain) NSData *payloadData;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, copy) NSString *uuid;

+ (id)fetchRequestForDeliveredEnqueuedPayloadRecords;
+ (id)fetchRequestForPayloadWithUUID:(id)arg1;
+ (id)fetchRequestForUndeliveredEnqueuedPayloadRecords;
+ (id)fetchRequestForUndeliveredEnqueuedPayloadRecordsWithDestinationCount:(unsigned long long)arg1;

@end
