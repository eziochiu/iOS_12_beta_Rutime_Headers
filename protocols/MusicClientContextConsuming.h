/* made by EzioChiu.
 */

@protocol MusicClientContextConsuming <SKUIClientContextConsuming>

@required

- (MusicClientContext *)clientContext;
- (void)setClientContext:(MusicClientContext *)arg1;

@end
