/* made by EzioChiu.
 */

@protocol GEORequestCounterTicket <NSObject>

@required

- (void)requestCompletedWithResult:(unsigned char)arg1 mode:(unsigned char)arg2 xmitBytes:(long long)arg3 recvBytes:(long long)arg4;

@end
