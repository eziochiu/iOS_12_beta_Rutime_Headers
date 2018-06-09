/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUFlightFactory : NSObject <FUFlightFactoryInternalProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)flightFactoryClassWithProvider:(id)arg1;
+ (void)loadFlightDataWithFlightNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(id /* block */)arg5;
+ (void)loadFlightWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 completionHandler:(id /* block */)arg5;

- (id)parseFlightData:(id)arg1 withError:(id*)arg2;

@end
