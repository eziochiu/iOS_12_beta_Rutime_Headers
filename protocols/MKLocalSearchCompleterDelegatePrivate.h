/* made by EzioChiu.
 */

@protocol MKLocalSearchCompleterDelegatePrivate <MKLocalSearchCompleterDelegate>

@optional

- (void)completerDidAccessNetwork:(MKLocalSearchCompleter *)arg1;
- (void)completerDidFail:(MKLocalSearchCompleter *)arg1 error:(NSError *)arg2;
- (void)completerDidUpdateResults:(MKLocalSearchCompleter *)arg1 finished:(bool)arg2;
- (void)completerWillAccessNetwork:(MKLocalSearchCompleter *)arg1;
- (void)completerWillUpdateResults:(MKLocalSearchCompleter *)arg1;
- (<GEOMapServiceCompletionTicket> *)lastTicket;
- (void)setLastTicket:(id <GEOMapServiceCompletionTicket>)arg1;

@end
