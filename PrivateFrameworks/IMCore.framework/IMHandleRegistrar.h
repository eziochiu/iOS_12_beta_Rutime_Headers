/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMHandleRegistrar : NSObject {
    NSHashTable * _allIMHandles;
    IMBusinessNameManager * _businessNameManager;
    NSMutableDictionary * _siblingsMap;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_accountSiblingsForHandle:(id)arg1;
- (void)_addressBookChanged;
- (void)_buildSiblingsForIMHandle:(id)arg1;
- (id)_chatSiblingsForHandle:(id)arg1;
- (void)_clearSiblingsCacheForIMHandle:(id)arg1 rebuildAfter:(bool)arg2;
- (void)_dumpOutAllIMHandles;
- (void)_dumpOutAllIMHandlesForAccount:(id)arg1;
- (void)_emptySiblingCacheForIMHandleGUID:(id)arg1;
- (id)_existingAccountSiblingsForHandle:(id)arg1;
- (id)_existingChatSiblingsForHandle:(id)arg1;
- (id)allIMHandles;
- (id)businessNameForUID:(id)arg1 updateHandler:(id /* block */)arg2;
- (void)clearSiblingCacheForIMHandle:(id)arg1;
- (id)init;
- (void)registerIMHandle:(id)arg1;
- (id)siblingsForIMHandle:(id)arg1;
- (void)unregisterIMHandle:(id)arg1;

@end
