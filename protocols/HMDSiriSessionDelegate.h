/* made by EzioChiu.
 */

@protocol HMDSiriSessionDelegate <NSObject>

@required

- (void)siriSession:(void *)arg1 didStopAudioWithCompletion:(void *)arg2; // needs 2 arg types, found 7: HMDSiriSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)siriSession:(void *)arg1 willStartAudioWithCompletion:(void *)arg2; // needs 2 arg types, found 7: HMDSiriSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
