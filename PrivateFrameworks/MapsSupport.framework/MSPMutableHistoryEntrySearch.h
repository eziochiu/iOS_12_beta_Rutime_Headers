/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPMutableHistoryEntrySearch : MSPMutableHistoryEntry <MSPHistoryEntrySearch>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic, copy) NSString *locationDisplayString;
@property (nonatomic, copy) GEOMapRegion *mapRegion;
@property (nonatomic, copy) NSString *query;
@property (readonly) Class superclass;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;

- (bool)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (id)languageCode;
- (id)locationDisplayString;
- (id)mapRegion;
- (id)query;
- (void)setLanguageCode:(id)arg1;
- (void)setLocationDisplayString:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setQuery:(id)arg1;
- (id)transferToImmutableIfValidWithError:(out id*)arg1;

@end
