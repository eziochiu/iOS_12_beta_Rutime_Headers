/* made by EzioChiu.
 */

@protocol CXCallDirectoryProviderHostProtocol <NSObject>

@required

- (oneway void)addBlockingEntriesWithData:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: CXCallDirectoryPhoneNumberEntryData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)addIdentificationEntriesWithData:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: CXCallDirectoryLabeledPhoneNumberEntryData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)completeRequestWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)isIncrementalLoadingAllowed:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)removeAllBlockingEntriesWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)removeAllIdentificationEntriesWithReply:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)removeBlockingEntriesWithData:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: CXCallDirectoryPhoneNumberEntryData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)removeIdentificationEntriesWithData:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 6: CXCallDirectoryPhoneNumberEntryData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
