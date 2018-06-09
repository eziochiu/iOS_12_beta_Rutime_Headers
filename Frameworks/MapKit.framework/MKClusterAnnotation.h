/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKClusterAnnotation : NSObject <MKAnnotation> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  __coordinate;
    NSString * __subtitle;
    NSString * __title;
    NSString * _clusteringIdentifier;
    struct { 
        unsigned int hasCoordinate : 1; 
        unsigned int hasMutableCoordinate : 1; 
        unsigned int hasTitle : 1; 
        unsigned int hasSubtitle : 1; 
    }  _flags;
    NSArray * _memberAnnotations;
}

@property (nonatomic, copy) NSString *clusteringIdentifier;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *memberAnnotations;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x1; double x2; })_averageCoordinate;
- (bool)_isMKClusterAnnotation;
- (id)clusteringIdentifier;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithMemberAnnotations:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)memberAnnotations;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setClusteringIdentifier:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
