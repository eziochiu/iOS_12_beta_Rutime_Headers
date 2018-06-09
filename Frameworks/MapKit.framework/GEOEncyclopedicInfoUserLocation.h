/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface GEOEncyclopedicInfoUserLocation : NSObject <GEOEncyclopedicInfo> {
    MKMapItem * _mapItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOMapItemAttribution *encyclopedicAttribution;
@property (nonatomic, readonly) NSArray *factoids;
@property (nonatomic, readonly) bool hasPairOfFactoids;
@property (nonatomic, readonly) bool hasTextBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *textBlockText;
@property (nonatomic, readonly) NSString *textBlockTitle;

- (void).cxx_destruct;
- (id)encyclopedicAttribution;
- (id)factoids;
- (bool)hasPairOfFactoids;
- (bool)hasTextBlock;
- (id)initWithMapItem:(id)arg1;
- (id)mapItem;
- (void)setMapItem:(id)arg1;
- (id)textBlockText;
- (id)textBlockTitle;

@end
