/* made by EzioChiu.
 */

@protocol BRCProcessMonitorDelegate <NSObject>

@required

- (void)process:(int)arg1 didBecomeForeground:(bool)arg2;

@end
