/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocationManagerInternal : NSObject {
    struct __CLClient { } * fClient;
    <CLLocationManagerDelegate> * fDelegate;
    int  fHeadingOrientation;
    unsigned long long  fLastRangingRequestMachTime;
    double  fLastRangingRequestTimeout;
    struct { 
        int suitability; 
        struct { 
            double latitude; 
            double longitude; 
        } coordinate; 
        double horizontalAccuracy; 
        double altitude; 
        double verticalAccuracy; 
        double speed; 
        double speedAccuracy; 
        double course; 
        double courseAccuracy; 
        double timestamp; 
        int confidence; 
        double lifespan; 
        int type; 
        struct { 
            double latitude; 
            double longitude; 
        } rawCoordinate; 
        double rawCourse; 
        int floor; 
        unsigned int integrity; 
        int referenceFrame; 
        int rawReferenceFrame; 
    }  fLocation;
    NSString * fLocationEventType;
    double  fLocationRequestTimeout;
    struct __CFRunLoopTimer { } * fLocationRequestTimer;
    NSMutableSet * fRangedRegions;
    struct __CFRunLoopTimer { } * fRangingRequestTimer;
    CLLocationManagerStateTracker * fState;
}

@property (nonatomic) <CLLocationManagerDelegate> *delegate;
@property (nonatomic, readonly) NSMutableSet *rangedRegions;

- (int)PausesLocationUpdatesAutomatically;
- (bool)allowsBackgroundLocationUpdates;
- (void)cancelLingeringRangingRequest;
- (void)cancelLocationRequest;
- (void)cancelRangingRequest;
- (void)dealloc;
- (id)delegate;
- (bool)hasLingeringRangingRequest;
- (id)initWithInfo:(id)arg1 bundleIdentifier:(id)arg2 bundle:(id)arg3;
- (void)performCourtesyPromptIfNeeded;
- (id)rangedRegions;
- (void)setAllowsBackgroundLocationUpdates:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPausesLocationUpdatesAutomatically:(int)arg1;
- (void)setShowsBackgroundLocationIndicator:(bool)arg1;
- (bool)showsBackgroundLocationIndicator;
- (void)stopUpdatingLocationAutoPaused;

@end
