/* made by EzioChiu.
 */

@protocol NWConcrete_nw_endpoint_mode_handler <NSObject>

@required

- (void)cancelWithHandler:(NWConcrete_nw_endpoint_handler *)arg1 forced:(bool)arg2;
- (void)startWithHandler:(NWConcrete_nw_endpoint_handler *)arg1;
- (void)updatePathWithHandler:(NWConcrete_nw_endpoint_handler *)arg1;

@optional

- (bool)applyWithHandler:(void *)arg1 toChildren:(void *)arg2; // needs 2 arg types, found 7: NWConcrete_nw_endpoint_handler *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NWConcrete_nw_endpoint_handler *, void*

@end
