/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapURLParser : NSObject {
    NSString * _abAddressID;
    NSString * _abRecordID;
    NSString * _addressString;
    double  _altitude;
    struct { 
        double latitude; 
        double longitude; 
    }  _centerCoordinate;
    NSString * _cnAddressIdentifier;
    NSString * _cnContactIdentifier;
    NSString * _contentProvider;
    NSString * _contentProviderID;
    NSString * _directionsDestinationAddressString;
    NSString * _directionsSourceAddressString;
    bool  _exactPositionSpecified;
    GEOURLExtraStorage * _extraStorage;
    long long  _favoritesType;
    unsigned long long  _lineMUID;
    NSString * _lineName;
    int  _mapType;
    double  _roll;
    double  _rotation;
    struct { 
        double latitude; 
        double longitude; 
    }  _searchCoordinate;
    int  _searchProviderID;
    NSString * _searchQuery;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _searchRegion;
    unsigned long long  _searchUID;
    struct { 
        double latitudeDelta; 
        double longitudeDelta; 
    }  _span;
    bool  _tester;
    double  _tilt;
    int  _trackingMode;
    bool  _trackingModeSpecified;
    int  _transportType;
    NSURL * _url;
    GEOUserSessionEntity * _userSessionEntity;
    float  _zoomLevel;
}

@property (readonly) NSString *abAddressID;
@property (readonly) NSString *abRecordID;
@property (readonly) NSString *addressString;
@property (readonly) double altitude;
@property (readonly) struct { double x1; double x2; } centerCoordinate;
@property (readonly) NSString *cnAddressIdentifier;
@property (readonly) NSString *cnContactIdentifier;
@property (readonly) NSString *contentProvider;
@property (readonly) NSString *contentProviderID;
@property (readonly) NSString *directionsDestinationAddressString;
@property (readonly) NSString *directionsSourceAddressString;
@property (readonly) bool exactPositionSpecified;
@property (readonly) GEOURLExtraStorage *extraStorage;
@property (readonly) long long favoritesType;
@property (readonly) unsigned long long lineMUID;
@property (readonly, copy) NSString *lineName;
@property (readonly) int mapType;
@property (readonly) double roll;
@property (readonly) double rotation;
@property (readonly) struct { double x1; double x2; } searchCoordinate;
@property (readonly) int searchProviderID;
@property (readonly) NSString *searchQuery;
@property (readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } searchRegion;
@property (readonly) unsigned long long searchUID;
@property (readonly) struct { double x1; double x2; } span;
@property (readonly) bool tester;
@property (readonly) double tilt;
@property (readonly) int trackingMode;
@property (readonly) bool trackingModeSpecified;
@property (readonly) int transportType;
@property (readonly) GEOUserSessionEntity *userSessionEntity;
@property (readonly) float zoomLevel;

+ (bool)isValidMapURL:(id)arg1;
+ (bool)isValidMapsCategoryURL:(id)arg1;
+ (bool)isValidMapsURLForAppendingSharedSessionID:(id)arg1;

- (void).cxx_destruct;
- (id)abAddressID;
- (id)abRecordID;
- (id)addressString;
- (double)altitude;
- (struct { double x1; double x2; })centerCoordinate;
- (id)cnAddressIdentifier;
- (id)cnContactIdentifier;
- (id)contentProvider;
- (id)contentProviderID;
- (id)directionsDestinationAddressString;
- (id)directionsSourceAddressString;
- (bool)exactPositionSpecified;
- (id)extraStorage;
- (long long)favoritesType;
- (id)initWithURL:(id)arg1;
- (unsigned long long)lineMUID;
- (id)lineName;
- (int)mapType;
- (bool)parseIncludingCustomParameters:(bool)arg1;
- (double)roll;
- (double)rotation;
- (struct { double x1; double x2; })searchCoordinate;
- (int)searchProviderID;
- (id)searchQuery;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })searchRegion;
- (unsigned long long)searchUID;
- (struct { double x1; double x2; })span;
- (bool)tester;
- (double)tilt;
- (int)trackingMode;
- (bool)trackingModeSpecified;
- (int)transportType;
- (id)userSessionEntity;
- (float)zoomLevel;

@end
