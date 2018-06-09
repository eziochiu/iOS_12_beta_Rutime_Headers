/* made by EzioChiu.
 */

@protocol HFColorPrimitive <NSObject>

@required

- (HFRGBColor *)hf_RGBColorRepresentation;

@optional

- (HFTemperatureColor *)hf_temperatureColorRepresentation;

@end
