/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFDefaultFavoritesProvider : NSObject <WFFavoriteLocationProvider> {
    <WFFavoriteLocationProviderDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFFavoriteLocationProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addLocation:(id)arg1;
- (bool)canProvideDefaultFavorites;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1 persistence:(id)arg2;
- (id)locationFromCity:(id)arg1;
- (id)locations;
- (void)removeLocation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocations:(id)arg1;

@end
