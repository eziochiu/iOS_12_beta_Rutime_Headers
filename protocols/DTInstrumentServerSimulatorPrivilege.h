/* made by EzioChiu.
 */

@protocol DTInstrumentServerSimulatorPrivilege <DTXAllowedRPC>

@required

- (NSNumber *)_blessSimulatorHub:(int)arg1;
- (void)_notifyOfTFPCommunicationsPort:(unsigned int)arg1;

@end
