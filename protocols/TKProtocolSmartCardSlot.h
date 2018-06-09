/* made by EzioChiu.
 */

@protocol TKProtocolSmartCardSlot <TKProtocolSlot>

@required

- (void)getAttrib:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, long long, void*
- (void)reserveProtocols:(void *)arg1 reservationId:(void *)arg2 exclusive:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 11: NSNumber *, NSNumber *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSNumber *, long long, void*
- (void)runUserInteraction:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: TKSmartCardUserInteraction<NSSecureCoding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)sendControl:(void *)arg1 data:(void *)arg2 expectedLength:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: id, NSData *, unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)sessionWithParameters:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TKProtocolSmartCardSession> *, NSDictionary *, NSError *, void*
- (void)setAttrib:(void *)arg1 data:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned int, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, void*

@end
