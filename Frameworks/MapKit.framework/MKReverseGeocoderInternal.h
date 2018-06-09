/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKReverseGeocoderInternal : NSObject {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  coordinate;
    <MKReverseGeocoderDelegate> * delegate;
    MKMapItem * mapItem;
    bool  querying;
    <MKMapServiceTicket> * ticket;
}

- (void).cxx_destruct;

@end
