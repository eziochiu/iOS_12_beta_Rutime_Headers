/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
 */

@interface CLIndoorLocation : NSObject <NSSecureCoding> {
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
    }  _location;
    NSString * _locationDescription;
    NSString * _locationId;
    struct { 
        double odometer; 
        double deltaDistance; 
        double deltaDistanceAccuracy; 
        double timestampGps; 
        double machtime; 
        float horzUncSemiMaj; 
        float horzUncSemiMin; 
        float horzUncSemiMajAz; 
        bool isFitnessMatch; 
        int matchQuality; 
        struct { 
            double latitude; 
            double longitude; 
        } matchCoordinate; 
        double matchCourse; 
        int matchFormOfWay; 
        int matchRoadClass; 
        bool matchShifted; 
        struct { 
            double rawUnmodifiedCourse; 
            double rawUnmodifiedCourseUnc; 
            bool isStatic; 
            bool isMounted; 
        } mapMatcherData; 
        struct { 
            double value; 
            double std; 
        } pressure; 
        float undulation; 
        struct { 
            double latitude; 
            double longitude; 
        } specialCoordinate; 
        double specialHorizontalAccuracy; 
        double machContinuousTime; 
        int originDevice; 
    }  _locationPrivate;
    bool  _requestsGpsAssistance;
}

@property (nonatomic) struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; } location;
@property (nonatomic, retain) NSString *locationDescription;
@property (nonatomic, retain) NSString *locationId;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; bool x_16_1_3; bool x_16_1_4; } x16; struct { double x_17_1_1; double x_17_1_2; } x17; float x18; struct { double x_19_1_1; double x_19_1_2; } x19; double x20; double x21; int x22; } locationPrivate;
@property (nonatomic) bool requestsGpsAssistance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; })location;
- (id)locationDescription;
- (id)locationId;
- (struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; bool x_16_1_3; bool x_16_1_4; } x16; struct { double x_17_1_1; double x_17_1_2; } x17; float x18; struct { double x_19_1_1; double x_19_1_2; } x19; double x20; double x21; int x22; })locationPrivate;
- (bool)requestsGpsAssistance;
- (void)setLocation:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; double x12; int x13; struct { double x_14_1_1; double x_14_1_2; } x14; double x15; int x16; unsigned int x17; int x18; int x19; })arg1;
- (void)setLocationDescription:(id)arg1;
- (void)setLocationId:(id)arg1;
- (void)setLocationPrivate:(struct { double x1; double x2; double x3; double x4; double x5; float x6; float x7; float x8; bool x9; int x10; struct { double x_11_1_1; double x_11_1_2; } x11; double x12; int x13; int x14; bool x15; struct { double x_16_1_1; double x_16_1_2; bool x_16_1_3; bool x_16_1_4; } x16; struct { double x_17_1_1; double x_17_1_2; } x17; float x18; struct { double x_19_1_1; double x_19_1_2; } x19; double x20; double x21; int x22; })arg1;
- (void)setRequestsGpsAssistance:(bool)arg1;

@end
