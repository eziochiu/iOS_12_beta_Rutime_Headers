/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPMutableFavoriteRegion : MSPMutableFavorite <MSPFavoriteRegion>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GEOMapRegion *geoMapRegion;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *storageIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;

- (id)geoMapRegion;
- (id)initWithBookmarkStorage:(id)arg1;
- (void)setGeoMapRegion:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)transferToImmutableIfValidWithError:(out id*)arg1;

@end
