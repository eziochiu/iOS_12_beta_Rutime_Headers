/* made by EzioChiu.
 */

@protocol MROutputContextDataSourceDelegate <NSObject>

@required

- (void)outputContextDataSource:(MROutputContextDataSource *)arg1 didAddOutputDevice:(MRAVOutputDevice *)arg2;
- (void)outputContextDataSource:(MROutputContextDataSource *)arg1 didRemoveOutputDevice:(MRAVOutputDevice *)arg2;
- (void)outputContextDataSource:(MROutputContextDataSource *)arg1 outputDevice:(MRAVOutputDevice *)arg2 didChangeVolume:(float)arg3;
- (void)outputContextDataSource:(MROutputContextDataSource *)arg1 outputDevice:(MRAVOutputDevice *)arg2 didChangeVolumeControlCapabilities:(unsigned int)arg3;

@end
