/* made by EzioChiu.
 */

@protocol _UIDraggingSessionDelegate <NSObject>

@optional

- (unsigned long long)draggingSession:(_UIDraggingSession *)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)draggingSession:(_UIDraggingSession *)arg1 willAddItems:(NSArray *)arg2;
- (void)draggingSessionDidEnd:(_UIDraggingSession *)arg1 withOperation:(unsigned long long)arg2;
- (void)draggingSessionDidMove:(_UIDraggingSession *)arg1;
- (void)draggingSessionDidTransferItems:(_UIDraggingSession *)arg1;
- (bool)draggingSessionDynamicallyUpdatesPrefersFullSizePreviews:(_UIDraggingSession *)arg1;
- (bool)draggingSessionPrefersFullSizePreviews:(_UIDraggingSession *)arg1;
- (void)draggingSessionWillBegin:(_UIDraggingSession *)arg1;
- (void)draggingSessionWillEnd:(_UIDraggingSession *)arg1 withOperation:(unsigned long long)arg2;

@end
