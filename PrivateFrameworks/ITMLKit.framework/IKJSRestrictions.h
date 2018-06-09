/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSRestrictions : IKJSObject <IKJSRestrictions, NSObject, _IKJSRestrictions, _IKJSRestrictionsProxy>

@property (nonatomic, readonly) bool allowArtistActivity;
@property (nonatomic, readonly) bool allowsErotica;
@property (nonatomic, readonly) bool allowsExplicit;
@property (nonatomic, readonly) bool allowsITunes;
@property (nonatomic, readonly) bool allowsShowingUndownloadedMovies;
@property (nonatomic, readonly) bool allowsShowingUndownloadedTVShows;
@property (nonatomic, readonly) bool appAnalyticsAllowed;
@property (nonatomic, readonly) bool appInstallationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long maxAppRank;
@property (nonatomic, readonly) NSString *maxAppRating;
@property (nonatomic, readonly) long long maxMovieRank;
@property (nonatomic, readonly) long long maxTVShowRank;
@property (readonly) Class superclass;

+ (id)restrictionsDidChangeNotificationName;

- (id)_contentRestrictionsCountryCode;
- (id)_ratingForSetting:(id)arg1 domain:(id)arg2 countryCode:(id)arg3;
- (bool)allowArtistActivity;
- (bool)allowsErotica;
- (bool)allowsExplicit;
- (bool)allowsITunes;
- (bool)allowsShowingUndownloadedMovies;
- (bool)allowsShowingUndownloadedTVShows;
- (bool)appAnalyticsAllowed;
- (bool)appInstallationAllowed;
- (id)asPrivateIKJSRestrictions;
- (long long)maxAppRank;
- (id)maxAppRating;
- (long long)maxMovieRank;
- (id)maxMovieRatingForCountry:(id)arg1;
- (long long)maxTVShowRank;
- (id)maxTVShowRatingForCountry:(id)arg1;

@end
