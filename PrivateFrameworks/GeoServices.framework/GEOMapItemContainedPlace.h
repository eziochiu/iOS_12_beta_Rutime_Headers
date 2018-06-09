/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemContainedPlace : NSObject {
    NSArray * _children;
    GEOPDContainedPlace * _containedPlace;
    <GEOMapItem> * _parent;
    NSArray * _siblings;
}

@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) unsigned long long featureId;
@property (nonatomic, readonly) <GEOMapItem> *parent;
@property (nonatomic, readonly) unsigned long long parentFeatureId;
@property (nonatomic, readonly) NSArray *siblings;

- (void).cxx_destruct;
- (id)children;
- (id)description;
- (unsigned long long)featureId;
- (id)init;
- (id)initWithContainedPlace:(id)arg1;
- (id)parent;
- (unsigned long long)parentFeatureId;
- (id)siblings;

@end
