/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHSuggestion : PHAssetCollection <PGSuggestion, PXDisplaySuggestion> {
    NSData * _actionData;
    NSDictionary * _actionProperties;
    NSDate * _activationDate;
    unsigned long long  _approximateCount;
    NSDate * _creationDate;
    NSDate * _expungeDate;
    NSData * _featuresData;
    NSDictionary * _featuresProperties;
    unsigned short  _notificationState;
    NSDate * _relevantUntilDate;
    unsigned short  _state;
    NSString * _subtitle;
    unsigned short  _subtype;
    unsigned short  _type;
    long long  _version;
}

@property (nonatomic, readonly) NSDictionary *actionProperties;
@property (nonatomic, readonly) NSDate *activationDate;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *expungeDate;
@property (nonatomic, readonly) NSSet *features;
@property (nonatomic, readonly) NSDictionary *featuresProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *keyAssets;
@property (nonatomic, readonly, copy) NSString *localIdentifier;
@property (nonatomic, readonly) unsigned char notificationQuality;
@property (nonatomic, readonly) unsigned short notificationState;
@property (nonatomic, readonly) id recipe;
@property (nonatomic, readonly) unsigned long long relevanceDurationInDays;
@property (nonatomic, readonly) NSDate *relevantUntilDate;
@property (nonatomic, readonly) NSArray *representativeAssets;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) unsigned short state;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) unsigned short subtype;
@property (nonatomic, readonly, copy) NSArray *suggestedPersonLocalIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSDate *universalStartDate;
@property (nonatomic, readonly) long long version;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)entityKeyMap;
+ (id)fetchSuggestionsWithOptions:(id)arg1;
+ (id)fetchSuggestionsWithState:(unsigned short)arg1 ofType:(unsigned short)arg2 withOptions:(id)arg3;
+ (id)fetchSuggestionsWithState:(unsigned short)arg1 withOptions:(id)arg2;
+ (id)fetchType;
+ (id)identifierCode;
+ (double)lifetimeAfterBecomingActive;
+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsPendingState;
+ (bool)managedObjectSupportsRejectedState;
+ (bool)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (id)actionProperties;
- (id)activationDate;
- (id)creationDate;
- (id)description;
- (unsigned long long)estimatedAssetCount;
- (id)expungeDate;
- (id)featuresProperties;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)localizedSubtitle;
- (unsigned short)notificationState;
- (id)predicateForAllAssets;
- (id)relevantUntilDate;
- (unsigned short)state;
- (id)subtitle;
- (unsigned short)subtype;
- (unsigned short)type;
- (long long)version;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

- (id)features;
- (id)keyAssets;
- (unsigned char)notificationQuality;
- (id)recipe;
- (unsigned long long)relevanceDurationInDays;
- (id)representativeAssets;
- (id)subtitle;
- (id)suggestedPersonLocalIdentifiers;
- (id)universalEndDate;
- (id)universalStartDate;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (id)fetchKeyAssets;

@end
