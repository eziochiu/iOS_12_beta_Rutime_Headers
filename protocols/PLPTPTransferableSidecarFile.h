/* made by EzioChiu.
 */

@protocol PLPTPTransferableSidecarFile <NSObject>

@required

- (NSDate *)captureDate;
- (NSNumber *)compressedSize;
- (NSURL *)fileURL;
- (NSString *)filename;
- (NSDate *)modificationDate;
- (NSManagedObjectID *)objectID;
- (long long)ptpTrashedState;

@end
