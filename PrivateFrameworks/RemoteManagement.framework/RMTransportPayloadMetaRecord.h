/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMTransportPayloadMetaRecord : NSManagedObject

@property (nonatomic, copy) NSString *destination;
@property (nonatomic, retain) RMTransportPayloadRecord *payload;
@property (nonatomic) unsigned short retryCount;
@property (nonatomic, retain) NSString *state;
@property (nonatomic, copy) NSString *uuid;

+ (id)fetchRequestForDeliveredMetaPayloadRecords;
+ (id)fetchRequestForMetaRecordsWithUUID:(id)arg1 uuidIsLocal:(bool)arg2;

@end
