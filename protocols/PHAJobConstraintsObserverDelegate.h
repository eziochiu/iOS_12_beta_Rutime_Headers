/* made by EzioChiu.
 */

@protocol PHAJobConstraintsObserverDelegate <NSObject>

@required

- (void)jobConstraintsObserver:(void *)arg1 constraintsDidChange:(void *)arg2 mask:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: PHAJobConstraintsObserver *, PHAJobConstraints *, PHAJobConstraints *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
