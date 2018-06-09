/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3AccountCacheDatabase : NSObject {
    ML3MusicLibrary * _library;
    NSOperationQueue * _operationQueue;
    NSMutableDictionary * _propertiesCache;
}

- (void).cxx_destruct;
- (void)_lookupAltDSIDForDSID:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_setAppleID:(id)arg1 altDSID:(id)arg2 forDSID:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (id)appleIDForDSID:(unsigned long long)arg1;
- (void)getPropertiesForDSID:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)setAppleID:(id)arg1 altDSID:(id)arg2 forDSID:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (bool)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2;

@end
