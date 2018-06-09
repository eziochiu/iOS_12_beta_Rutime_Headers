/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCTodayPrivateData : NSObject <FCTodayPrivateData> {
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly, copy) NSSet *autoFavoriteTagIDs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) <FCDerivedPersonalizationData><NSCoding> *derivedPersonalizationData;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly, copy) NSString *feldsparID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *mutedTagIDs;
@property (nonatomic, readonly, copy) NSNumber *onboardingVersion;
@property (nonatomic, readonly, copy) NSSet *purchasedTagIDs;
@property (nonatomic, readonly, copy) NSArray *rankedPersonalSubscribedTagIDs;
@property (nonatomic, readonly, copy) NSDictionary *recentlyReadHistoryItems;
@property (nonatomic, readonly, copy) NSArray *recentlySeenHistoryItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)autoFavoriteTagIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)derivedPersonalizationData;
- (id)dictionary;
- (id)feldsparID;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)mutedTagIDs;
- (id)onboardingVersion;
- (id)purchasedTagIDs;
- (id)rankedPersonalSubscribedTagIDs;
- (id)recentlyReadHistoryItems;
- (id)recentlySeenHistoryItems;

@end
