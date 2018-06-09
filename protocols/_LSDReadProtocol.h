/* made by EzioChiu.
 */

@protocol _LSDReadProtocol

@required

- (void)bindDocumentProxy:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: LSDocumentProxy *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, LSDocumentProxy *, NSError *, void*
- (void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, NSSet *, NSError *, void*
- (void)getDiskUsage:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: _LSDiskUsage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _LSDiskUsage *, NSError *, void*
- (void)getKernelPackageExtensionsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSNumber *, void*
- (void)getLocalizationDictionaryForTypeWithIdentifier:(void *)arg1 unit:(void *)arg2 preferredLocalizations:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, unsigned int, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)getLocalizedNameWithBundleType:(void *)arg1 bundleIdentifier:(void *)arg2 bundleUUID:(void *)arg3 context:(void *)arg4 shortNameOnly:(void *)arg5 preferredLocalizations:(void *)arg6 validationToken:(void *)arg7 completionHandler:(void *)arg8; // needs 8 arg types, found 14: NSString *, NSString *, NSString *, NSString *, bool, NSArray *, _LSBundleIDValidationToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getResourceValuesForKeys:(void *)arg1 URL:(void *)arg2 preferredLocalizations:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 11: NSSet *, NSURL *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSSet *, NSError *, void*
- (void)getServerStatusWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, void*
- (void)getServerStoreWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)mapBundleIdentifiers:(void *)arg1 orMachOUUIDs:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: NSSet *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSArray *, NSError *, void*
- (void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)resolveQueries:(void *)arg1 legacySPI:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: NSSet *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
