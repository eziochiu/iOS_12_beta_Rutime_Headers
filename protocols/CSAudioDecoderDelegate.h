/* made by EzioChiu.
 */

@protocol CSAudioDecoderDelegate <NSObject>

@required

- (void)audioDecoderDidDecodePackets:(CSAudioDecoder *)arg1 buffer:(NSData *)arg2 timestamp:(unsigned long long)arg3;

@end
