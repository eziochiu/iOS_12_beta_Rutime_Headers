/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMessageLink : NSObject {
    GEOPDMessageLink * _messageLink;
    NSTimeZone * _timeZone;
}

@property (nonatomic, readonly) bool isVerified;
@property (nonatomic, readonly) NSString *messageID;
@property (nonatomic, readonly) NSString *messageURLString;
@property (nonatomic, readonly) NSString *navBackgroundColorString;
@property (nonatomic, readonly) NSString *navTintColorString;
@property (nonatomic, readonly) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (unsigned long long)currentMessageOpeningHoursOptions;
- (id)initWithMessageLink:(id)arg1;
- (bool)isVerified;
- (id)messageBusinessHours;
- (id)messageID;
- (id)messageOperationBusinessDates;
- (id)messageURLString;
- (id)navBackgroundColorString;
- (id)navTintColorString;
- (int)responseTime;
- (id)timeZone;

@end
