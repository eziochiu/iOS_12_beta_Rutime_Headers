/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STRegionRatings : NSObject {
    NSDictionary * _ratingsPlist;
}

@property (readonly, copy) NSDictionary *localizedRegionsByCode;
@property (readonly, copy) NSString *preferredRegion;
@property (readonly) NSDictionary *ratingsPlist;

+ (id)sharedRatings;

- (void).cxx_destruct;
- (id)_localizedRatingsForRegion:(id)arg1 type:(id)arg2 allContentKey:(id)arg3 noContentKey:(id)arg4;
- (id)_overrideValueForString:(id)arg1;
- (id)init;
- (id)localizedAppRatingsForRegion:(id)arg1;
- (id)localizedMovieRatingsForRegion:(id)arg1;
- (id)localizedRegionsByCode;
- (id)localizedTVRatingsForRegion:(id)arg1;
- (id)preferredRegion;
- (id)ratingsPlist;

@end
