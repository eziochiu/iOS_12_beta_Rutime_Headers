/* made by EzioChiu.
 */

@protocol CADClientInterface

@required

- (void)CADClientReceiveOccurrenceCacheSearchResults:(NSArray *)arg1 forSearchToken:(unsigned int)arg2 finished:(bool)arg3;

@end
