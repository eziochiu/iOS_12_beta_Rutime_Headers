/* made by EzioChiu.
 */

@protocol _DKInstantMonitor <_DKMonitor>

@required

- (_DKEvent *)currentEvent;
- (id /* block */)instantHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, _DKEvent *, void*, id, SEL
- (void)setInstantHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _DKEvent *, void*
- (void)start;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;

@end
