/* made by EzioChiu.
 */

@protocol VCMediaStreamSyncSource <NSObject>

@required

- (long long)getSyncSourceSampleRate;
- (void)setSyncSourceDelegate:(id <VCMediaStreamSyncSourceDelegate>)arg1;

@end
