/* made by EzioChiu.
 */

@protocol NFNdefTagSessionCallbacks <NSObject, NFSessionCallbackInterface>

@required

- (void)didTagStateChange:(unsigned int)arg1;

@end