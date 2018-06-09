/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSDReadClient : _LSDClient <_LSDReadProtocol>

- (void)bindDocumentProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(id /* block */)arg1;
- (void)getDiskUsage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getKernelPackageExtensionsWithCompletionHandler:(id /* block */)arg1;
- (void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(id /* block */)arg1;
- (void)getLocalizationDictionaryForTypeWithIdentifier:(id)arg1 unit:(unsigned int)arg2 preferredLocalizations:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getLocalizedNameWithBundleType:(id)arg1 bundleIdentifier:(id)arg2 bundleUUID:(id)arg3 context:(id)arg4 shortNameOnly:(bool)arg5 preferredLocalizations:(id)arg6 validationToken:(id)arg7 completionHandler:(id /* block */)arg8;
- (void)getResourceValuesForKeys:(id)arg1 URL:(id)arg2 preferredLocalizations:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)getServerStatusWithCompletionHandler:(id /* block */)arg1;
- (void)getServerStoreWithCompletionHandler:(id /* block */)arg1;
- (void)mapBundleIdentifiers:(id)arg1 orMachOUUIDs:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)resolveQueries:(id)arg1 legacySPI:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)willHandleInvocation:(id)arg1 isReply:(bool)arg2;

@end
