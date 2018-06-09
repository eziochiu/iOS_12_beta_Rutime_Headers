/* made by EzioChiu.
 */

@protocol GSProtocol

@required

- (void)checkItemAtURLValidInsidePermanentStorage:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)createAdditionInStorage:(void *)arg1 stagedFileDescriptor:(void *)arg2 creationInfo:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 12: long long, NSFileHandle *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSData *, NSData *, NSError *, void*
- (void)getAdditionInStorage:(void *)arg1 andNameSpace:(void *)arg2 named:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 12: long long, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSData *, NSData *, NSError *, void*
- (void)getAdditionsInStorage:(void *)arg1 andNameSpace:(void *)arg2 named:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 12: long long, NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSData *, NSData *, NSError *, void*
- (void)getFileIdForDocumentId:(void *)arg1 onDevice:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, int, void*
- (void)hintDocIDCreationForFileHandle:(NSFileHandle *)arg1;
- (void)isPermanentStorageSupportedForHandle:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSFileHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)listAdditionsOfStorage:(void *)arg1 nameSpace:(void *)arg2 withOptions:(void *)arg3 withoutOptions:(void *)arg4 andEnumerationState:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 18: long long, NSString *, unsigned long long, unsigned long long, id, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSData *, NSData *, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)mergeAdditionInfoValueInStorage:(void *)arg1 nameSpace:(void *)arg2 additionName:(void *)arg3 value:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: long long, NSString *, NSString *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)permanentStorageClose:(unsigned long long)arg1;
- (void)permanentStorageIDForHandle:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSFileHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (void)permanentStorageOpenForHandle:(void *)arg1 withRemoteID:(void *)arg2 andDocumentID:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 12: NSFileHandle *, unsigned long long, GSDocumentIdentifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSData *, NSData *, NSError *, void*
- (void)permanentStoragePrefixForHandle:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSFileHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)removeAdditionsInStorage:(void *)arg1 removalSpec:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestFreeSpace:(void *)arg1 forVolume:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setAdditionDisplayNameInStorage:(void *)arg1 nameSpace:(void *)arg2 additionName:(void *)arg3 value:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: long long, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setAdditionNameSpaceInStorage:(void *)arg1 nameSpace:(void *)arg2 additionName:(void *)arg3 value:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: long long, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)setAdditionOptionsInStorage:(void *)arg1 nameSpace:(void *)arg2 additionName:(void *)arg3 value:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: long long, NSString *, NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)stagingPrefixForDevice:(void *)arg1 volumeUUID:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 10: int, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSData *, NSError *, void*
- (oneway void)stagingPrefixRelinquish:(NSString *)arg1;

@end
