/* made by EzioChiu.
 */

@protocol CLNotifierServiceProtocol <CLIntersiloServiceProtocol>

@required

- (void)forget:(void *)arg1; // needs 1 arg types, found 2: /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*, <CLNotifierServiceClientProtocol> *
- (void)register:(void *)arg1 forNotification:(void *)arg2 registrationInfo:(void *)arg3; // needs 3 arg types, found 4: /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*, <CLNotifierServiceClientProtocol> *, int, CLNotifierData *
- (void)unregister:(void *)arg1 forNotification:(void *)arg2; // needs 2 arg types, found 3: /* Warning: Unrecognized filer type: 'R' using 'void*' */ void*, <CLNotifierServiceClientProtocol> *, int

@end
