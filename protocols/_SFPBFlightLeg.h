/* made by EzioChiu.
 */

@protocol _SFPBFlightLeg <NSObject>

@required

- (_SFPBDate *)arrivalActualTime;
- (_SFPBAirport *)arrivalAirport;
- (NSString *)arrivalGate;
- (_SFPBDate *)arrivalGateTime;
- (_SFPBDate *)arrivalPublishedTime;
- (_SFPBDate *)arrivalRunwayTime;
- (NSString *)arrivalTerminal;
- (NSString *)baggageClaim;
- (_SFPBDate *)departureActualTime;
- (_SFPBAirport *)departureAirport;
- (NSString *)departureGate;
- (_SFPBDate *)departureGateClosedTime;
- (_SFPBDate *)departurePublishedTime;
- (_SFPBDate *)departureRunwayTime;
- (NSString *)departureTerminal;
- (_SFPBAirport *)divertedAirport;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setArrivalActualTime:(_SFPBDate *)arg1;
- (void)setArrivalAirport:(_SFPBAirport *)arg1;
- (void)setArrivalGate:(NSString *)arg1;
- (void)setArrivalGateTime:(_SFPBDate *)arg1;
- (void)setArrivalPublishedTime:(_SFPBDate *)arg1;
- (void)setArrivalRunwayTime:(_SFPBDate *)arg1;
- (void)setArrivalTerminal:(NSString *)arg1;
- (void)setBaggageClaim:(NSString *)arg1;
- (void)setDepartureActualTime:(_SFPBDate *)arg1;
- (void)setDepartureAirport:(_SFPBAirport *)arg1;
- (void)setDepartureGate:(NSString *)arg1;
- (void)setDepartureGateClosedTime:(_SFPBDate *)arg1;
- (void)setDeparturePublishedTime:(_SFPBDate *)arg1;
- (void)setDepartureRunwayTime:(_SFPBDate *)arg1;
- (void)setDepartureTerminal:(NSString *)arg1;
- (void)setDivertedAirport:(_SFPBAirport *)arg1;
- (void)setStatus:(int)arg1;
- (void)setTitle:(NSString *)arg1;
- (int)status;
- (NSString *)title;

@end
