/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider {
    CXCallDirectoryManager * _callDirectoryManager;
    id /* block */  _countryDialingCode;
    id /* block */  _firstIdentificationEntriesForEnabledExtensions;
    int  _identificationEntriesChangedNotifyToken;
}

@property (nonatomic, readonly) CXCallDirectoryManager *callDirectoryManager;
@property (nonatomic, copy) id /* block */ countryDialingCode;
@property (nonatomic, copy) id /* block */ firstIdentificationEntriesForEnabledExtensions;
@property (nonatomic, readonly) int identificationEntriesChangedNotifyToken;

- (void).cxx_destruct;
- (id)callDirectoryManager;
- (id /* block */)countryDialingCode;
- (void)dealloc;
- (id /* block */)firstIdentificationEntriesForEnabledExtensions;
- (int)identificationEntriesChangedNotifyToken;
- (id)init;
- (void)setCountryDialingCode:(id /* block */)arg1;
- (void)setFirstIdentificationEntriesForEnabledExtensions:(id /* block */)arg1;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;

@end
