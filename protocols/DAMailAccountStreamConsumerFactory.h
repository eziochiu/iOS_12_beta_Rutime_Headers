/* made by EzioChiu.
 */

@protocol DAMailAccountStreamConsumerFactory <NSObject>

@required

- (<DAMailboxStreamingContentConsumer> *)streamingContentConsumer;

@end
