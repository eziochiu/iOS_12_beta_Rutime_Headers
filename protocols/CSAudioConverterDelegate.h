/* made by EzioChiu.
 */

@protocol CSAudioConverterDelegate <NSObject>

@required

- (void)audioConverterDidConvertPackets:(CSAudioConverter *)arg1 packets:(NSArray *)arg2 timestamp:(unsigned long long)arg3;

@end
