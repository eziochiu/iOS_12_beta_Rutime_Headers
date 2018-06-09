/* made by EzioChiu.
 */

@protocol PHAGraphManagerClientMessages

@optional

- (void)graphBecameReady:(PGManager *)arg1 forPHAGraphManager:(PHAGraphManager *)arg2;
- (void)photoAnalysisGraphManager:(PHAGraphManager *)arg1 graphIsConsistent:(bool)arg2;
- (void)photoAnalysisGraphManager:(PHAGraphManager *)arg1 graphUpdateMadeProgress:(double)arg2;
- (void)photoAnalysisGraphManager:(PHAGraphManager *)arg1 willShutdownGraph:(PGManager *)arg2;

@end
