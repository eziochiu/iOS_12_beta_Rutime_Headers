/* made by EzioChiu.
 */

@protocol TCPDumpProbeDelegate <NSObject>

@optional

- (void)tcpDumpComplete:(TCPDumpProbe *)arg1 outputFiles:(NSArray *)arg2 status:(unsigned int)arg3;

@end
