/* made by EzioChiu.
 */

@protocol TVRTouchProcessorDelegate <NSObject>

@optional

- (void)touchProcessor:(TVRTouchProcessor *)arg1 generatedButtonEvent:(TVRCButtonEvent *)arg2;
- (void)touchProcessor:(TVRTouchProcessor *)arg1 generatedGameControllerEvent:(TVRCGameControllerEvent *)arg2;
- (void)touchProcessor:(TVRTouchProcessor *)arg1 generatedTouchEvent:(TVRCTouchEvent *)arg2;

@end
