/* made by EzioChiu.
 */

@protocol BWSourceNodeErrorDelegate <NSObject>

@required

- (void)sourceNode:(BWSourceNode *)arg1 didEncounterError:(int)arg2;

@end
