/* made by EzioChiu.
 */

@protocol MPSExternalPluginBase <NSObject>

@required

- (<MTLDevice> *)device;
- (id)initWithDevice:(id <MTLDevice>)arg1;

@end
