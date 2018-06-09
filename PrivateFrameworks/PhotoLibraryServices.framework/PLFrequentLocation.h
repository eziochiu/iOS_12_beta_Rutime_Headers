/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFrequentLocation : NSObject <PLFrequentLocationProtocol> {
    <PLMomentProtocol> * _centroid;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    NSDateInterval * _dateInterval;
    NSSet * _items;
}

@property (readonly) <PLMomentProtocol> *centroid;
@property (readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *items;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)centroid;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)dateInterval;
- (id)description;
- (id)initWithDateInterval:(id)arg1 centroid:(id)arg2 items:(id)arg3;
- (id)items;

@end
