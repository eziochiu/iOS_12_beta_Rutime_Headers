/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMPhotoKitPersonSuggestion : NSObject <PXCMMPersonSuggestion> {
    PXRecipientTransport * _bestTransport;
    NSString * _displayName;
    CNContact * _fetchQueue_linkedContact;
    PHFetchResult * _keyAssetFetchResult;
    PHFetchResult * _keyFaceFetchResult;
    PHPerson * _person;
}

@property (nonatomic, retain) PXRecipientTransport *bestTransport;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHFetchResult *keyAssetFetchResult;
@property (nonatomic, readonly) PHFetchResult *keyFaceFetchResult;
@property (nonatomic, readonly) CNContact *linkedContact;
@property (nonatomic, readonly) PHPerson *person;
@property (readonly) Class superclass;

+ (id)_contactFetchQueue;
+ (id)personSuggestionWithPerson:(id)arg1;
+ (id)personSuggestionWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2;
+ (id)personSuggestionWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2 keyAssetFetchResult:(id)arg3;

- (void).cxx_destruct;
- (id)_fetchQueue_bestTransportForContact:(id)arg1;
- (id)_linkedContactForPerson:(id)arg1;
- (void)_prefetchLinkedContactInBackgroundForPerson:(id)arg1;
- (id)bestTransport;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPerson:(id)arg1 keyFaceFetchResult:(id)arg2 keyAssetFetchResult:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)keyAssetFetchResult;
- (id)keyFaceFetchResult;
- (id)linkedContact;
- (bool)matchesRecipientInRecipients:(id)arg1;
- (id)person;
- (id)personSuggestionUpdatedKeyAssetFetchResult:(id)arg1;
- (id)personSuggestionUpdatedKeyFaceFetchResult:(id)arg1;
- (id)personSuggestionUpdatedPerson:(id)arg1;
- (void)setBestTransport:(id)arg1;

@end
